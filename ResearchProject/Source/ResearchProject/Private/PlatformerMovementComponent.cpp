// Fill out your copyright notice in the Description page of Project Settings.

#include "DrawDebugHelpers.h"
#include "Curves/CurveFloat.h"
#include "Components/CapsuleComponent.h"
#include "GameFrameWork/Character.h"
#include "Animation/AnimSequenceBase.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Animation/MantleAnimNofity.h"
#include "TimerManager.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "Components/TimelineComponent.h"
#include "TimerManager.h"
#include "GameFramework/Character.h"

// Player Character include 
#include "ResearchProjectCharacter.h"


DEFINE_LOG_CATEGORY(LogCharacterMovement);

UPlatformerMovementComponent::UPlatformerMovementComponent() {

	// Configure character movement
	bOrientRotationToMovement = true;
	RotationRate = FRotator(0.0f, 3072.0f, 0.0f);
	AirControl = NewAirControl;
	AirControlBoostMultiplier = NewAirControlBoost;
	Mass = 500.0f;
	JumpZVelocity = 1450.f;
	MaxWalkSpeed = 700.f;
	GravityScale = 3.f;
	MaxAcceleration = 4096.f;
	bConstrainToPlane = true;
	UMovementComponent::SetPlaneConstraintNormal(FVector::UnitY());
	bOrientRotationToMovement = false;
	GravityScale = GravityAmount;
	DashTimelineComponent = CreateDefaultSubobject<UTimelineComponent>(TEXT("DashTimelineComponent"));
	JumpsLeft = NumberOfJumps;

	
	PrimaryComponentTick.bCanEverTick = true;
}

void UPlatformerMovementComponent::InitializeComponent() 
{
	Super::InitializeComponent();

	PlayerCharacter = Cast<ACharacter>(GetOwner());
	if (!PlayerCharacter) 
	{
		
	}

	StartHalfHeight = PlayerCharacter->GetCapsuleComponent()->GetScaledCapsuleHalfHeight();

	InitAnimations();

	if (DashCurve)
	{
		FOnTimelineFloat TimelineUpdateDelegate;
		TimelineUpdateDelegate.BindUFunction(this, FName("DashTimelineUpdate"));
		DashTimelineComponent->AddInterpFloat(DashCurve, TimelineUpdateDelegate);

		FOnTimelineEvent TimelineFinishedDelegate;
		TimelineFinishedDelegate.BindUFunction(this, FName("DashTimelineFinished"));
		DashTimelineComponent->SetTimelineFinishedFunc(TimelineFinishedDelegate);
	}
}

void UPlatformerMovementComponent::UpdateCharacterStateBeforeMovement(float DeltaSeconds)
{
	//Wall Slide
	TryWallSlide();

	//Mantle
	TryMantle();

	//Slide
	FFindFloorResult FloorHit;
	if (IsMovingOnGround() && bWantsToSlide && CanSlide(FloorHit))
	{
		EnterSlide();
	}

	if (IsSliding() && !bWantsToSlide)
	{
		ExitSlide();
	}

	if (IsFalling() && JustTouchedGround)
	{
		JustTouchedGround = false;
		GetWorld()->GetTimerManager().ClearTimer(CayotoeTimer);
		GetWorld()->GetTimerManager().SetTimer(CayotoeTimer, this, &UPlatformerMovementComponent::FinishedCoyoteTimer, CayotoeTime, false);
	}

	if (IsMovingOnGround())
	{
		JustTouchedGround = true;
		InCoyoteTime = true;
	}


	if (IsMovingOnGround() || InCoyoteTime)
	{
		JumpsLeft = NumberOfJumps;
		InCoyoteTime = false;
	}
	else if (IsTouchingWall())
	{
		JumpsLeft = NumberOfJumps - 1;
	}


	//GEngine->AddOnScreenDebugMessage(
	//	-1, // Key (-1 means add a new message)
	//	5.0f, // Duration in seconds
	//	FColor::Green, // Text color
	//	FString::Printf(TEXT("WallJump: %s"), IsInWallSlide ? TEXT("True") : TEXT("False")));
	//GEngine->AddOnScreenDebugMessage(
	//-1, // Key (-1 means add a new message)
	//5.0f, // Duration in seconds
	//FColor::Green, // Text color
	//FString::Printf(TEXT("Player Velocity: %d"), JumpsLeft));


	Super::UpdateCharacterStateBeforeMovement(DeltaSeconds);
}

void UPlatformerMovementComponent::UpdateCharacterStateAfterMovement(float DeltaSeconds)
{
	Super::UpdateCharacterStateAfterMovement(DeltaSeconds);

	const TSharedPtr<FRootMotionSource> RootMotion = GetRootMotionSourceByID(RootMotionSourceID);
	if (RootMotion && RootMotion->Status.HasFlag(ERootMotionSourceStatusFlags::Finished))
	{
		RemoveRootMotionSourceByID(RootMotionSourceID);
	}
}

float UPlatformerMovementComponent::GetSpeed() const
{
	return Velocity.Length();
}

bool UPlatformerMovementComponent::IsWalk() const
{
	if (!IsWalking() || FMath::IsNearlyZero(GetSpeed())) 
	{
		return false;
	}

	if (IsSliding())
	{
		return false;
	}

	return true;
}

void UPlatformerMovementComponent::PhysCustom(float deltaTime, int32 Iterations)
{
	Super::PhysCustom(deltaTime, Iterations);

	switch (CustomMovementMode)
	{
	case CMOVE_WallSlide:
		PhysWallSlide(deltaTime, Iterations);
		break;
	case CMOVE_Slide:
		PhysSlide(deltaTime, Iterations);
		break;
	case CMOVE_AirDash:

		break;
	default:
		UE_LOG(LogCharacterMovement, Error, TEXT("Invalide Movement Mode"));
		break;
	}
	
}

#pragma region "Jump"

void UPlatformerMovementComponent::StartJump()
{
	HoldTimeForJump = JumpHoldTime;
	if (IsInSlide)
	{
		if (CanSlideJump)
		{
			if (!RestoreDefaultCollisionDimension())
			{
				return;
			}

			ExitSlide();
			SlideJump();
			CanSlideJump = false;
			IsInSlide = false;
			GetWorld()->GetTimerManager().ClearTimer(SlideJumpTimer);
			CanEnterSlide = false;
			GetWorld()->GetTimerManager().SetTimer(SlideCoolDownTimer, this, &UPlatformerMovementComponent::SlideCooldownFinished, SlideCooldown, false);
			return;
		}

		CanSlideJump = false;
		GetWorld()->GetTimerManager().ClearTimer(SlideJumpTimer);
		return;
	}

	if (IsMovingOnGround())
	{
		IsJumping = true;
		SetMovementMode(MOVE_Falling);
		Velocity = FVector(Velocity.X, Velocity.Y, JumpImpulseForce);

		StartJumpTimers();
		return;
	}

	if (IsWallSliding())
	{
		IsJumping = true;
		SetMovementMode(MOVE_Falling);
		IsInWallSlide = true;
		IsWallJumping = true;
		Velocity += FVector((PlayerCharacter->GetActorForwardVector().X * -1 * WallJumpHorizontalBoost), 0.f, WallJumpVerticalBoost);
		HoldTimeForJump = WallJumpHoldTime;
		ACharacter* PlayerOwner = Cast<ACharacter>(GetOwner());
		AResearchProjectCharacter* ResearchCharacter = Cast<AResearchProjectCharacter>(PlayerOwner);
		ResearchCharacter->SetCanMove(false);
		StartJumpTimers();
		return;
	}
	else if (JumpsLeft > 0)
	{
		IsJumping = true;
		SetMovementMode(MOVE_Falling);
		Velocity = FVector(Velocity.X, Velocity.Y, JumpImpulseForce);

		StartJumpTimers();
		return;
	}


}

void UPlatformerMovementComponent::StartJumpTimers()
{
	JumpsLeft--;
	GetWorld()->GetTimerManager().ClearTimer(JumpTimer);
	GetWorld()->GetTimerManager().SetTimer(JumpTimer, this, &UPlatformerMovementComponent::StopJump, HoldTimeForJump, false);
	GetWorld()->GetTimerManager().SetTimer(JumpLoopTimer, this, &UPlatformerMovementComponent::Jump, .05, true);
}

void UPlatformerMovementComponent::SlideJump()
{
	SetMovementMode(MOVE_Falling);
	Velocity += FVector(PlayerCharacter->GetActorForwardVector().X * SlideHorizontalJumpForce, 0.f, SlideVerticalJumpForce);
}

void UPlatformerMovementComponent::Jump()
{
	const bool bIsWallSliding = IsInWallSlide;

	if (IsJumping)
	{
		SetMovementMode(MOVE_Falling);
		Velocity = FVector(Velocity.X, Velocity.Y, JumpForce);

		if (bIsWallSliding || IsWallJumping)
		{
			FHitResult HitResult;
			FCollisionQueryParams QueryParams = GetPlayerQueryParams();
			const FVector Start = UpdatedComponent->GetComponentLocation();

			SetMovementMode(MOVE_Falling);
			//Velocity += HitResult.Normal * FVector(WallJumpOffHorizontalForce, 0.f, WallJumpOffVerticalForce);
			Velocity += FVector((PlayerCharacter->GetActorForwardVector().X * -1 * WallJumpOffHorizontalForce), 0.f, WallJumpOffVerticalForce);
			JustJumped = true;
			IsInWallSlide = false;
			GetWorld()->GetTimerManager().ClearTimer(WallJumpTimer);
			GetWorld()->GetTimerManager().SetTimer(WallJumpTimer, this, &UPlatformerMovementComponent::WallJumpTimerFinished, WallJumpCoolDown, false);

		}
	}
}

void UPlatformerMovementComponent::StopJump()
{
	IsJumping = false;
	IsWallJumping = false;
	GetWorld()->GetTimerManager().ClearTimer(JumpTimer);
	APlayerController* PlayerController = Cast<APlayerController>(CharacterOwner->GetController());
	PlayerCharacter->EnableInput(PlayerController);
	ACharacter* PlayerOwner = Cast<ACharacter>(GetOwner());
	AResearchProjectCharacter* ResearchCharacter = Cast<AResearchProjectCharacter>(PlayerOwner);
	ResearchCharacter->SetCanMove(true);
}

bool UPlatformerMovementComponent::CanAttemptJump() const
{
	return Super::CanAttemptJump() || IsWallSliding();
} 

void UPlatformerMovementComponent::FinishedCoyoteTimer()
{
	InCoyoteTime = false;
}

bool UPlatformerMovementComponent::DoJump(bool bReplayMoves)
{
	const bool bIsWallSliding = IsWallSliding();
	const bool bTouchingWall = IsTouchingWall();

	if (Super::DoJump(bReplayMoves))
	{

		if (bIsWallSliding || bTouchingWall)
		{
			FHitResult HitResult;
			FCollisionQueryParams QueryParams = GetPlayerQueryParams();
			const FVector Start = UpdatedComponent->GetComponentLocation();
			GetWorld()->LineTraceSingleByProfile(HitResult, Start, EndForwardVector(Start), "BlockAll", QueryParams);

			if (HitResult.IsValidBlockingHit())
			{
				SetMovementMode(MOVE_Falling);
				Velocity += (HitResult.Normal * 0);
				JustJumped = true;
				GetWorld()->GetTimerManager().ClearTimer(WallJumpTimer);
				GetWorld()->GetTimerManager().SetTimer(WallJumpTimer, this, &UPlatformerMovementComponent::WallJumpTimerFinished, WallJumpCoolDown, false);
			}

		}
		return true;
	}

	return false;
}

void UPlatformerMovementComponent::WallJumpTimerFinished()
{
	JustJumped = false;
	//APlayerController* PlayerController = Cast<APlayerController>(CharacterOwner->GetController());

	//PlayerCharacter->DisableInput(PlayerController);
}
#pragma endregion

#pragma region "AirDash"

void UPlatformerMovementComponent::DashStart()
{
	if (IsMovingOnGround())
	{
		return;
	}

	if (!CanAirDash)
	{
		return;
	}

	StopJump();
	Velocity = FVector::ZeroVector;
	Acceleration = FVector::ZeroVector;
	PlayerCharacter->DisableInput(PlayerCharacter->GetLocalViewingPlayerController());
	CanAirDash = false;
	GetWorld()->GetTimerManager().ClearTimer(AirDashTimer);
	GetWorld()->GetTimerManager().SetTimer(AirDashTimer, this, &UPlatformerMovementComponent::AirDashTimerFinished, AirDashCoolDown, false);
	SetMovementMode(MOVE_Custom, CMOVE_AirDash);
	GravityAmount = 0.f;
	DashTimelineComponent->SetPlayRate(AirDashLength);
	DashTimelineComponent->PlayFromStart();
}

void UPlatformerMovementComponent::DashTimelineUpdate(float Value)
{
	FVector Forward = PlayerCharacter->GetActorForwardVector();
	FVector MoveVector = (AirDashDistance * Value) * Forward;
	FVector NewLocation = PlayerCharacter->GetActorLocation() + (Forward * AirDashDistance * Value);
	PlayerCharacter->SetActorLocation(NewLocation, true);
	UpdatedComponent->ComponentVelocity = FVector(MoveVector.X, MoveVector.Y, 0.f);
}

void UPlatformerMovementComponent::DashTimelineFinished()
{
	SetMovementMode(MOVE_Falling);
	FVector Forward = PlayerCharacter->GetActorForwardVector();
	Velocity = Forward * AirDashExitBoost;
	Acceleration = FVector::ZeroVector;
	PlayerCharacter->EnableInput(PlayerCharacter->GetLocalViewingPlayerController());
}

void UPlatformerMovementComponent::AirDashTimerFinished()
{
	CanAirDash = true;
}

#pragma endregion

#pragma region "Slide"

bool UPlatformerMovementComponent::CanSlide(FFindFloorResult& FloorHit) const
{
	if (Velocity.SizeSquared() <= pow(MinSlideSpeed, 2))
	{
		return false;
	}

	FindFloor(UpdatedComponent->GetComponentLocation(), FloorHit, false);
	return FloorHit.bWalkableFloor;
}

void UPlatformerMovementComponent::EnterSlide()
{
	if (!CanEnterSlide)
	{
		return;
	}

	SlidingTime = 0.f;
	Velocity += Velocity.GetSafeNormal2D() * EnterSlideImpulse;
	IsInSlide = true;

	SetCollisionSizeToSlidingDimension();
	SetMovementMode(MOVE_Custom, CMOVE_Slide);
	GetWorld()->GetTimerManager().SetTimer(SlideJumpTimer, this, &UPlatformerMovementComponent::SlideJumpTimerFinished, SlideJumpTime, false);
}

void UPlatformerMovementComponent::SlideJumpTimerFinished()
{
	CanSlideJump = true;
}

void UPlatformerMovementComponent::SlideCooldownFinished()
{
	CanEnterSlide = true;
}

void UPlatformerMovementComponent::ExitSlide()
{
	if (!RestoreDefaultCollisionDimension())
	{
		return;
	}

	CanSlideJump = false;
	IsInSlide = false;
	GetWorld()->GetTimerManager().ClearTimer(SlideJumpTimer);
	// restore character rotation
	const FQuat NewRotation = FRotationMatrix::MakeFromXZ(
		UpdatedComponent->GetForwardVector().GetSafeNormal2D(),
		FVector::UpVector
		).ToQuat();
	MoveUpdatedComponent(FVector::ZeroVector, NewRotation, true);

	bWantsToSlide = false;
	SetMovementMode(MOVE_Walking);
}

void UPlatformerMovementComponent::PhysSlide(float DeltaTime, int32 Iterations) 
{
	if (DeltaTime < MIN_TICK_TIME)
	{
		return;
	}


	RestorePreAdditiveRootMotionVelocity();
	FFindFloorResult FloorHit;
	if (!CanSlide(FloorHit))
	{
		ExitSlide();
		StartNewPhysics(DeltaTime, Iterations);
	}


	// strafe
	if (FMath::Abs(FVector::DotProduct(Acceleration.GetSafeNormal(), UpdatedComponent->GetRightVector())) > 0.5f)
	{
		Acceleration = Acceleration.ProjectOnTo(UpdatedComponent->GetRightVector());
	}
	else
	{
		Acceleration = FVector::ZeroVector;
	}
	

		

	// calc velocity
	if (!HasAnimRootMotion() && CurrentRootMotion.HasOverrideVelocity())
	{
		CalcVelocity(DeltaTime, SlideFriction, true, GetMaxBrakingDeceleration());
	}

	ApplyRootMotionToVelocity(DeltaTime);


	Iterations++;
	bJustTeleported = false;
	FVector OldLocation = UpdatedComponent->GetComponentLocation();
	FHitResult HitResult(1.f);
	FVector Adjusted = Velocity * DeltaTime;
	FVector VelPlaneDir = FVector::VectorPlaneProject(Velocity, FloorHit.HitResult.Normal).GetSafeNormal();
	FQuat NewRotation = FRotationMatrix::MakeFromXZ(VelPlaneDir, FloorHit.HitResult.Normal).ToQuat();

	// preform move
	MoveUpdatedComponent(Adjusted, NewRotation, true, &HitResult);
	if (HitResult.Time < 1.f)
	{
		HandleImpact(HitResult, DeltaTime, Adjusted);
		SlideAlongSurface(Adjusted, 1.f - HitResult.Time, HitResult.Normal, HitResult, true);
	}

	// check if slide conditions are met
	if (FFindFloorResult NewFloorHit; !CanSlide(NewFloorHit))
	{
		ExitSlide();
	}

	// exit slide if maximum slide time is reached
	if (MasSlidingSeconds > 0.f)
	{
		SlidingTime += DeltaTime;
		if (SlidingTime >= MasSlidingSeconds)
		{
			ExitSlide();
		}
	}

	// update outgoing velocity and acceleration
	if (!bJustTeleported && !HasAnimRootMotion() && !CurrentRootMotion.HasOverrideVelocity())
	{
		Velocity = (UpdatedComponent->GetComponentLocation() - OldLocation) / DeltaTime;
	}

}

#pragma endregion

#pragma region "On Tick"
void UPlatformerMovementComponent::TickComponent(float deltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(deltaTime, TickType, ThisTickFunction);

	//GEngine->AddOnScreenDebugMessage(
	//-1, // Key (-1 means add a new message)
	//5.0f, // Duration in seconds
	//FColor::Green, // Text color
	//FString::Printf(TEXT("Player Velocity: X=%.2f Y=%.2f Z=%.2f"), Velocity.X, Velocity.Y, Velocity.Z));
}
#pragma endregion

#pragma region "WallSlide"

bool UPlatformerMovementComponent::IsTouchingWall() const
{
	FHitResult WallHitResult;
	FVector Start = UpdatedComponent->GetComponentLocation();

	FCollisionQueryParams QueryParams = GetPlayerQueryParams();

	GetWorld()->LineTraceSingleByProfile(WallHitResult, Start, EndForwardVector(Start), "BlockAll", QueryParams);

	return WallHitResult.IsValidBlockingHit() || WallHitResult.bStartPenetrating;
}

void UPlatformerMovementComponent::TryWallSlide() 
{
	if (!IsFalling()) 
	{
		return;
	}

	if (IsJumping)
	{
		return;
	}

	FHitResult FloorHitResult, WallHitResult;
	FCollisionQueryParams QueryParams = GetPlayerQueryParams();
	const FVector Start = UpdatedComponent->GetComponentLocation();

	UWorld* World = GetWorld();
	check(World);

	//exit is the height to the floor is smaller than the MinHeightToSlide
	//DrawDebugLine(World, Start, EndDownVector(Start), FColor::Red, false, .5f, 1.f);
	if (World->LineTraceSingleByProfile(FloorHitResult, Start, EndDownVector(Start), "BlockAll", QueryParams))
	{
		return;
	}

	//exit if the character us not close to the wall
	const bool bIsTouchingWall = IsTouchingWall();
	if (!bIsTouchingWall)
	{
		return;
	}

	//DrawDebugLine(World, Start, EndForwardVector(Start), FColor::Green, false, .5f, 1.f);
	World->LineTraceSingleByProfile(WallHitResult, Start, EndForwardVector(Start), "BlockAll", QueryParams);
	FVector InputVector = PlayerCharacter->GetCharacterMovement()->GetCurrentAcceleration().GetSafeNormal();

	if ((InputVector | WallHitResult.Normal) >= 0 || JustJumped)
	{
		return;

	}

	//All is good, go to wall slide
	Velocity = FVector::VectorPlaneProject(Velocity, WallHitResult.Normal);
	Velocity.Z = FMath::Clamp(Velocity.Z, 0, MaxVerticalWallSlideSpeed);
	SetMovementMode(MOVE_Custom, CMOVE_WallSlide);
}

void UPlatformerMovementComponent::PhysWallSlide(float DeltaTime, int32 Iterations)
{
	if (DeltaTime < MIN_TICK_TIME)
	{
		return;
	}

	if (CannotPerformPhysMovement())
	{
		Acceleration = FVector::ZeroVector;
		Velocity = FVector::ZeroVector;
		return;
	}

	bJustTeleported = false;
	float RemainingTime = DeltaTime;
	UWorld* World = GetWorld();
	check(World);

	while (CanPerformFrameTickMovement(RemainingTime, Iterations))
	{
		Iterations++;
		bJustTeleported = false;
		const float TimeTick = GetSimulationTimeStep(RemainingTime, Iterations);
		RemainingTime -= TimeTick;

		//exit if the character is grounded
		FHitResult WallHitResult;
		const FVector OldLoctation = UpdatedComponent->GetComponentLocation();
		FVector Start = UpdatedComponent->GetComponentLocation();
		FCollisionQueryParams QueryParams = GetPlayerQueryParams();
		World->LineTraceSingleByProfile(WallHitResult, Start, EndForwardVector(Start), "BlockAll", QueryParams);
		const bool bIsTouchingWall = IsTouchingWall();
		if (!bIsTouchingWall)
		{
			SetMovementMode(MOVE_Falling);
			MovementModeString = "Falling";
			StartNewPhysics(RemainingTime, Iterations);
			return;
		}

		//clamp acceleration
		Acceleration = FVector::VectorPlaneProject(Acceleration, WallHitResult.Normal);

		//apply acceleration
		CalcVelocity(TimeTick, 0.f, false, GetMaxBrakingDeceleration());
		Velocity = FVector::VectorPlaneProject(Velocity, WallHitResult.Normal);
		const bool bVelocityUp = Velocity.Z > 0.f;
		const float TangentAccel = Acceleration.GetSafeNormal2D() | Velocity.GetSafeNormal2D();
		Velocity.Z += GetGravityZ() * WallSlideGravityCurve->GetFloatValue(bVelocityUp ? 0.f : TangentAccel) * TimeTick;

		//compute move parameters
		FHitResult HitResult;
		MoveUpdatedComponent(TimeTick * Velocity, UpdatedComponent->GetComponentQuat(), true, &HitResult);
		if (UpdatedComponent->GetComponentLocation() == OldLoctation)
		{
			RemainingTime = 0.f;
			break;
		}

		Velocity = (UpdatedComponent->GetComponentLocation() - OldLoctation) / TimeTick;
	}

	//check again if the slide conditions are met
	FHitResult FloorHitResult, WallHitResult;
	FVector Start = UpdatedComponent->GetComponentLocation();
	FCollisionQueryParams QueryParams = GetPlayerQueryParams();
	const bool bIsTouchingWall = IsTouchingWall();
	World->LineTraceSingleByProfile(FloorHitResult, Start, EndDownVector(Start), "BlockAll", QueryParams);
	if (FloorHitResult.IsValidBlockingHit() || !bIsTouchingWall)
	{
		SetMovementMode(MOVE_Falling);
		MovementModeString = "Falling";
	}

}

FVector UPlatformerMovementComponent::EndDownVector(const FVector& Start) const
{
	return Start + FVector::DownVector * (PlayerCharacter->GetCapsuleComponent()->GetScaledCapsuleRadius() + MinHeightToSlide);
}

FVector UPlatformerMovementComponent::EndForwardVector(const FVector& Start) const
{
	return Start + UpdatedComponent->GetForwardVector() * PlayerCharacter->GetCapsuleComponent()->GetScaledCapsuleRadius() * 2.2f;
}

#pragma endregion

#pragma region "Mantle"

void UPlatformerMovementComponent::TryMantle()
{
	if (!IsFalling() && IsWallSliding())
	{
		return;
	}

	//helper variables
	float MinWallSteepnessAngleCos = FMath::Cos(FMath::DegreesToRadians(MantleMinWallSteepnessAngle));
	float MaxSurfaceAngleCos = FMath::Cos(FMath::DegreesToRadians(MantleMaxSurfaceAngle));
	float MaxAlignmentAngleCos = FMath::Cos(FMath::DegreesToRadians(MantleMaxAlignmentAngle));
	FVector ComponentLocation = UpdatedComponent->GetComponentLocation();
	FCollisionQueryParams QueryParams = GetPlayerQueryParams();

	//check from face
	FHitResult FrontResult;
	FVector FrontStart = ComponentLocation + FVector::UpVector * MantleUpOffsetDistance;
	FVector ForwardVector = UpdatedComponent->GetForwardVector().GetSafeNormal2D();
	float CheckDistance = FMath::Clamp(Velocity | ForwardVector, GetCapsuleRadius() + 30.f, MaxFrontCheckDistance);
	FVector FrontEnd = FrontStart + ForwardVector * CheckDistance;

	//debug front red line
	//DrawDebugLine(GetWorld(), FrontStart, FrontEnd, FColor::Red);
	if (!GetWorld()->LineTraceSingleByProfile(FrontResult, FrontStart, FrontEnd, "BlockAll", QueryParams))
	{
		return;
	}

	if (!FrontResult.IsValidBlockingHit())
	{
		return;
	}

	float CosWallSteepnessAngle = FrontResult.Normal | FVector::UpVector;
	if (FMath::Abs(CosWallSteepnessAngle) > MinWallSteepnessAngleCos || (ForwardVector | -FrontResult.Normal) < MaxAlignmentAngleCos)
	{
		return;
	}


	//DrawDebugPoint(GetWorld(), FrontResult.Location, 30, FColor::Emerald, false, 2.f);

	// check heights
	TArray<FHitResult> HeightHits;
	FHitResult SurfaceHit;
	FVector WallUp = FVector::VectorPlaneProject(FVector::UpVector, FrontResult.Normal).GetSafeNormal();
	float WallCos = FVector::UpVector | FrontResult.Normal;
	float WallSin = FMath::Sqrt(1 - WallCos * WallCos);

	FVector TraceStart = FrontResult.Location + ForwardVector + WallUp * MantleReachHeight / WallSin;
	//DrawDebugLine(GetWorld(), TraceStart, FrontResult.Location * ForwardVector, FColor::Black);
	if (!GetWorld()->LineTraceMultiByProfile(HeightHits, TraceStart, FrontResult.Location * ForwardVector, "BlockAll", QueryParams))
	{
		return;
	}

	for (const FHitResult& Hit : HeightHits)
	{
		if (Hit.IsValidBlockingHit())
		{
			SurfaceHit = Hit; 
			break;
		}
	}

	if (!SurfaceHit.IsValidBlockingHit() || (SurfaceHit.Normal | FVector::UpVector) < MaxSurfaceAngleCos)
	{
		return;
	}
	float Height = SurfaceHit.Location - FrontStart | FVector::UpVector;
	//DrawDebugPoint(GetWorld(), SurfaceHit.Location, 20, FColor::Blue, false, 2.f);
	if (Height > MantleReachHeight)
	{
		return;
	}

	// check clearance
	float SurfaceCos = FVector::UpVector | SurfaceHit.Normal;
	float SurfaceSin = FMath::Sqrt(1 - SurfaceCos * SurfaceCos);
	FVector TransitionTarget = SurfaceHit.Location + ForwardVector * GetCapsuleRadius() + FVector::UpVector * (GetCapsuleHalfHeight() + 1 + GetCapsuleRadius() * 2 * SurfaceSin);
	FCollisionShape CapShape = FCollisionShape::MakeCapsule(GetCapsuleRadius(), GetCapsuleHalfHeight());
	if (GetWorld()->OverlapAnyTestByProfile(TransitionTarget, FQuat::Identity, "BlockAll", CapShape, QueryParams))
	{
		return;
	}
	// debug capsule where we are now
	//DrawDebugCapsule(GetWorld(), ComponentLocation, GetCapsuleHalfHeight(), GetCapsuleRadius(), FQuat::Identity, FColor::Red, false, 2.f);

	// debug capsule where we want to be
	//DrawDebugCapsule(GetWorld(), TransitionTarget, GetCapsuleHalfHeight(), GetCapsuleRadius(), FQuat::Identity, FColor::Green, false, 2.f);


	// perform transition to mantle
	APlayerController* PlayerController = Cast<APlayerController>(CharacterOwner->GetController());

	PlayerCharacter->DisableInput(PlayerController);
	RootMotionSource.Reset();
	RootMotionSource = MakeShared<FRootMotionSource_MoveToForce>();
	RootMotionSource->AccumulateMode = ERootMotionAccumulateMode::Override;
	RootMotionSource->Duration = MantleAnim->GetPlayLength() / 2.f;
	RootMotionSource->StartLocation = ComponentLocation;
	RootMotionSource->TargetLocation = TransitionTarget;

	// apply transition to root motion
	Acceleration = FVector::ZeroVector;
	Velocity = FVector::ZeroVector;

	SetMovementMode(MOVE_Flying);
	RootMotionSourceID = ApplyRootMotionSource(RootMotionSource);

	// animation
	PlayerCharacter->PlayAnimMontage(MantleAnim);
}

void UPlatformerMovementComponent::OnMantleAnimFinished()
{
	SetMovementMode(DefaultLandMovementMode);
	APlayerController* PlayerController = Cast<APlayerController>(PlayerCharacter->GetController());
	Acceleration = FVector::ZeroVector;
	Velocity = FVector::ZeroVector;
	PlayerCharacter->EnableInput(PlayerController);
}

#pragma endregion

#pragma region "Helpers"

void UPlatformerMovementComponent::IsLookingRight(bool lookingRight) 
{
	if (lookingRight) 
	{
		FRotator NewRotation = FRotator(0.f, 0.f, 0.f);
		PlayerCharacter->SetActorRotation(NewRotation);
		LookingRight = true;
	}
	else 
	{
		FRotator NewRotation = FRotator(0.f, 180.f, 0.f);
		PlayerCharacter->SetActorRotation(NewRotation);
		LookingRight = false;
	}
}

bool UPlatformerMovementComponent::IsCustomMovementMode(const ECustomMovementMode InCustomMovementMode) const
{
	return MovementMode == MOVE_Custom && CustomMovementMode == InCustomMovementMode;
}

bool UPlatformerMovementComponent::CannotPerformPhysMovement() const
{
	return !CharacterOwner || (!CharacterOwner->GetController() && !bRunPhysicsWithNoController && !HasAnimRootMotion() && !CurrentRootMotion.HasOverrideVelocity() && (CharacterOwner->GetLocalRole() != ROLE_SimulatedProxy));
}

bool UPlatformerMovementComponent::CanPerformFrameTickMovement(const float RemainingTime, const int32 Iterations) const
{
	return  (RemainingTime >= MIN_TICK_TIME) && (Iterations < MaxSimulationIterations) && CharacterOwner && (CharacterOwner->GetController() || bRunPhysicsWithNoController || HasAnimRootMotion() || CurrentRootMotion.HasOverrideVelocity() || (CharacterOwner->GetLocalRole() == ROLE_SimulatedProxy));
}

float UPlatformerMovementComponent::GetCapsuleHalfHeight() const
{
	return CharacterOwner->GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
}

float UPlatformerMovementComponent::GetCapsuleRadius() const
{
	return CharacterOwner->GetCapsuleComponent()->GetScaledCapsuleRadius();
}

void UPlatformerMovementComponent::InitAnimations()
{
	if (const auto MantleNotify = FindNotifyByClass<UMantleAnimNofity>(MantleAnim))
	{
		MantleNotify->OnNotified.AddUObject(this, &UPlatformerMovementComponent::OnMantleAnimFinished);
	}
}

void UPlatformerMovementComponent::SetCollisionSizeToSlidingDimension() 
{


	//Change collision size to the sliding dimension
	const float ComponentScale = CharacterOwner->GetCapsuleComponent()->GetShapeScale();
	const float OldUnscaledHalfHeight = CharacterOwner->GetCapsuleComponent()->GetUnscaledCapsuleHalfHeight();
	const float OldUnscaledRadius = CharacterOwner->GetCapsuleComponent()->GetUnscaledCapsuleRadius();

	// height is not allowed to be smaller than radius
	const float ClampedCrouchedHalfHeight = FMath::Max3(0.f, OldUnscaledRadius, SlideHalfHeight);
	float HalfHeightAdjust = (OldUnscaledHalfHeight - ClampedCrouchedHalfHeight);
	CharacterOwner->GetCapsuleComponent()->SetCapsuleSize(OldUnscaledRadius, ClampedCrouchedHalfHeight);

	if (bCrouchMaintainsBaseLocation)
	{
		// Intentionally not using MoveUpdatedComponent, where a horizontal plane constraint would prevent the base of the capsule from staying at the same spot.
		UpdatedComponent->MoveComponent(
			FVector(0.f, 0.f, -(HalfHeightAdjust * ComponentScale)), 
			UpdatedComponent->GetComponentQuat(), 
			true, 
			nullptr, 
			EMoveComponentFlags::MOVECOMP_NoFlags, 
			ETeleportType::TeleportPhysics
			);
	}

	bForceNextFloorCheck = true;

	// OnStartCrouch takes the change from the Default size, not the current one (though they are usually the same).
	const ACharacter* DefaultCharacter = CharacterOwner->GetClass()->GetDefaultObject<ACharacter>();
	HalfHeightAdjust = DefaultCharacter->GetCapsuleComponent()->GetUnscaledCapsuleHalfHeight() - ClampedCrouchedHalfHeight;

	AdjustProxyCapsuleSize();
	CharacterOwner->OnStartCrouch(HalfHeightAdjust, HalfHeightAdjust * ComponentScale);
}

bool UPlatformerMovementComponent::RestoreDefaultCollisionDimension()
{
	if (!CanReturnFromSlide)
	{
		return false;
	}
	GetWorld()->GetTimerManager().SetTimer(SlideTimer, this, &UPlatformerMovementComponent::SlideTimerFinished, .05, false);
	CanReturnFromSlide = false;

	ACharacter* DefaultCharacter = CharacterOwner->GetClass()->GetDefaultObject<ACharacter>();
	const float ComponentScale = CharacterOwner->GetCapsuleComponent()->GetShapeScale();
	const float OldUnscaledHalfHeight = CharacterOwner->GetCapsuleComponent()->GetUnscaledCapsuleHalfHeight();
	const float HalfHeightAdjust = DefaultCharacter->GetCapsuleComponent()->GetUnscaledCapsuleHalfHeight() - OldUnscaledHalfHeight;
	const float ScaledHalfHeightAdjust = HalfHeightAdjust * ComponentScale;
	const FVector PawnLocation = UpdatedComponent->GetComponentLocation();

	// Try to stay in place and see if the larger capsule fits. We use a slightly taller capsule to avoid penetration.
	const UWorld* MyWorld = GetWorld();
	constexpr float SweepInflation = UE_KINDA_SMALL_NUMBER * 10.f;
	FCollisionQueryParams CapsuleParams(SCENE_QUERY_STAT(CrouchTrace), false, CharacterOwner);
	FCollisionResponseParams ResponseParam;
	InitCollisionParams(CapsuleParams, ResponseParam);

	// Compensate for the difference between current capsule size and standing size
	const FCollisionShape StandingCapsuleShape = GetPawnCapsuleCollisionShape(
		SHRINK_HeightCustom, 
		-SweepInflation - ScaledHalfHeightAdjust
		); // Shrink by negative amount, so actually grow it.
	const ECollisionChannel CollisionChannel = UpdatedComponent->GetCollisionObjectType();
	bool bEncroached = true;

	UCapsuleComponent* Capsule = PlayerCharacter->GetCapsuleComponent();

	FVector Location = PlayerCharacter->GetActorLocation() + FVector(0.f, 0.f, StartHalfHeight / 2);
	float HalfHeight = DefaultCharacter->GetCapsuleComponent()->GetUnscaledCapsuleHalfHeight();
	float Radius = Capsule->GetScaledCapsuleRadius();
	FQuat Rotation = Capsule->GetComponentQuat();

	FCollisionShape CapShape = FCollisionShape::MakeCapsule(Radius, HalfHeight);
	FCollisionQueryParams QueryParams = GetPlayerQueryParams();

	FVector Front = PlayerCharacter->GetActorForwardVector();
	FVector Back = Front * -1.f;

	/*DrawDebugLine(GetWorld(), Location + (Front * Radius), Location + (Front * Radius) + FVector(0.f, 0.f, HalfHeight), FColor::Green, false, 2.f);
	DrawDebugLine(GetWorld(), Location + (Back * Radius), Location + (Back * Radius) + FVector(0.f, 0.f, HalfHeight), FColor::Green, false, 2.f);*/

	FHitResult HitResultFront;
	GetWorld()->LineTraceSingleByChannel(
		HitResultFront,
		Location + (Front * Radius),
		Location + (Front * Radius) + FVector(0.f, 0.f, HalfHeight),
		ECC_Visibility, // Or your custom trace channel
		QueryParams
	);
	FHitResult HitResultBack;
	GetWorld()->LineTraceSingleByChannel(
		HitResultBack,
		Location + (Back * Radius),
		Location + (Back * Radius) + FVector(0.f, 0.f, HalfHeight),
		ECC_Visibility, // Or your custom trace channel
		QueryParams
	);
	FHitResult HitResultMid;
	GetWorld()->LineTraceSingleByChannel(
		HitResultMid,
		Location,
		Location + FVector(0.f, 0.f, HalfHeight),
		ECC_Visibility, // Or your custom trace channel
		QueryParams
	);

	FVector ForwardVector = PlayerCharacter->GetActorForwardVector();

	// Calculate the backward vector
	FVector BackwardVector = -ForwardVector * 25;

	// Calculate the new location
	FVector NewLocation = PlayerCharacter->GetActorLocation() + BackwardVector;

	if ((HitResultFront.IsValidBlockingHit() && !HitResultBack.IsValidBlockingHit() && !HitResultMid.IsValidBlockingHit()))
	{
		//MoveUpdatedComponent(NewLocation, UpdatedComponent->GetComponentRotation(), true);
		PlayerCharacter->SetActorLocation(NewLocation);
		GEngine->AddOnScreenDebugMessage(
			-1, // Key (-1 means add a new message)
			5.0f, // Duration in seconds
			FColor::Green, // Text color
			FString::Printf(TEXT("Not Falling")));
	}
	else if (HitResultFront.IsValidBlockingHit() || HitResultBack.IsValidBlockingHit() || HitResultMid.IsValidBlockingHit())
	{

		return false;
	}
	


	CharacterOwner->GetCapsuleComponent()->SetCapsuleSize(DefaultCharacter->GetCapsuleComponent()->GetUnscaledCapsuleRadius(), DefaultCharacter->GetCapsuleComponent()->GetUnscaledCapsuleHalfHeight(), true);
	AdjustProxyCapsuleSize();
	CharacterOwner->OnEndCrouch(HalfHeightAdjust, ScaledHalfHeightAdjust);

	return true;
}

void UPlatformerMovementComponent::SlideTimerFinished()
{
	CanReturnFromSlide = true;

}

FCollisionQueryParams UPlatformerMovementComponent::GetPlayerQueryParams() const
{
	TArray<AActor*> CharacterChildren;
	PlayerCharacter->GetAllChildActors(CharacterChildren);

	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActors(CharacterChildren);
	QueryParams.AddIgnoredActor(PlayerCharacter);

	return QueryParams;

}

#pragma endregion