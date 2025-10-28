// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFrameWork/Character.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "Engine/World.h"
#include "Animation/AnimSequenceBase.h"    
#include "Animation/AnimNotifies/AnimNotify.h" 
#include "UObject/ObjectMacros.h"           
#include "UObject/UObjectGlobals.h" 
#include "Components/TimelineComponent.h"
#include "PlatformerMovementComponent.generated.h"

/**
 * 
 */

DECLARE_LOG_CATEGORY_EXTERN(LogCharacterMovement, Log, All);


UENUM(BlueprintType)
enum ECustomMovementMode
{
	CMOVE_None UMETA(DisplayName = "None"),
	CMOVE_WallSlide UMETA(DisplayName = "WallSlide"),
	CMOVE_Slide UMETA(DisplayName = "Slide"),
	CMOVE_Jumping UMETA(DisplayName = "Jumping"),
	CMOVE_AirDash UMETA(DsiplayName = "AirDash"),
	CMOVE_MAX UMETA(Hidden)
};

UCLASS()
class RESEARCHPROJECT_API UPlatformerMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()

public:
	// Default constructor
	UPlatformerMovementComponent();

	UFUNCTION(BlueprintPure) float GetSpeed() const;
	UFUNCTION(BlueprintPure) bool IsWalk() const;
	UFUNCTION(BlueprintPure) bool IsWallSliding() const { return IsCustomMovementMode(CMOVE_WallSlide); }
	UFUNCTION(BlueprintPure) bool IsSliding() const { return IsCustomMovementMode(CMOVE_Slide); }
	UFUNCTION(BlueprintPure) bool IsDashing() const { return IsCustomMovementMode(CMOVE_AirDash); }
	

	//Jump
	void StartJump();
	void StopJump();
	UPROPERTY(EditDefaultsOnly, Category = "Jump") float maxJumpHoldTime = .03f;
	UPROPERTY(EditDefaultsOnly, Category = "Jump") int NumberOfJumps = 1;
	bool IsJumping = false;

	//Wall Slide
	UPROPERTY(EditDefaultsOnly, Category = "Wall Slide") float MinHeightToSlide = 200.f;
	UPROPERTY(EditDefaultsOnly, Category = "Wall Slide") float WallJumpOffForce = 1200.f;
	UPROPERTY(EditDefaultsOnly, Category = "Wall Slide") float MaxVerticalWallSlideSpeed = 0.f;
	UPROPERTY(EditDefaultsOnly, Category = "Wall Slide") UCurveFloat* WallSlideGravityCurve;
	UPROPERTY(EditDefaultsOnly, Category = "MovementMode") FString MovementModeString = "Start";

	//Wall Jump
	UPROPERTY(EditDefaultsOnly, Category = "Wall Jump") float WallJumpCoolDown = .03f;
	UPROPERTY(EditDefaultsOnly, Category = "Wall Jump") float WallJumpVerticalBoost = 500.f;
	UPROPERTY(EditDefaultsOnly, Category = "Wall Jump") float WallJumpHorizontalBoost = 500.f;

	//Jump
	UPROPERTY(EditDefaultsOnly, Category = "Jumping") float JumpForce = 50.f;
	UPROPERTY(EditDefaultsOnly, Category = "Jumping") float JumpImpulseForce = 50.f;
	UPROPERTY(EditDefaultsOnly, Category = "Jumping") float JumpHoldTime = .6f;
	UPROPERTY(EditDefaultsOnly, Category = "Jumping") float WallJumpHoldTime = .6f;
	UPROPERTY(EditDefaultsOnly, Category = "Jumping") float GravityAmount = 1.f;
	UPROPERTY(EditDefaultsOnly, Category = "Jumping") float CayotoeTime = .1f;

	//Air Dash
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AirDash")
	UTimelineComponent* DashTimelineComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AirDash")
	UCurveFloat* DashCurve;
	UPROPERTY(EditDefaultsOnly, Category = "AirDash") float AirDashDistance = 25.f;
	UPROPERTY(EditDefaultsOnly, Category = "AirDash") float AirDashLength = 1.f;
	UPROPERTY(EditDefaultsOnly, Category = "AirDash") float AirDashCoolDown = 3.f;
	UPROPERTY(EditDefaultsOnly, Category = "AirDash") float AirDashExitBoost = 25.f;
	UFUNCTION()
	void DashTimelineUpdate(float Value);
	UFUNCTION()
	void DashTimelineFinished();
	UFUNCTION()
	void DashStart();
	
	//Mantle
	UPROPERTY(EditDefaultsOnly, Category = "Mantle") float MaxFrontCheckDistance = 50.f;
	UPROPERTY(EditDefaultsOnly, Category = "Mantle") float MantleUpOffsetDistance = 20;
	UPROPERTY(EditDefaultsOnly, Category = "Mantle") float MantleReachHeight = 50.f;
	UPROPERTY(EditDefaultsOnly, Category = "Mantle") float MantleMinWallSteepnessAngle = 75;
	UPROPERTY(EditDefaultsOnly, Category = "Mantle") float MantleMaxSurfaceAngle = 40.f;
	UPROPERTY(EditDefaultsOnly, Category = "Mantle") float MantleMaxAlignmentAngle = 55.f;
	UPROPERTY(EditDefaultsOnly, Category = "Mantle") UAnimMontage* MantleAnim;
	
	//Slide
	bool bWantsToSlide;
	UPROPERTY(EditDefaultsOnly, Category = "Slide") float MinSlideSpeed = 350.f; 
	UPROPERTY(EditDefaultsOnly, Category = "Slide") float EnterSlideImpulse = 500.f;
	UPROPERTY(EditDefaultsOnly, Category = "Slide") float SlideFriction = 1.3f;
	UPROPERTY(EditDefaultsOnly, Category = "Slide") float MasSlidingSeconds = 1.f;
	UPROPERTY(EditDefaultsOnly, Category = "Slide") float SlideHalfHeight = 50.f;
	UPROPERTY(EditDefaultsOnly, Category = "Slide") float SlideJumpTime = .7f;
	UPROPERTY(EditDefaultsOnly, Category = "Slide") float SlideHorizontalJumpForce = 100.f;
	UPROPERTY(EditDefaultsOnly, Category = "Slide") float SlideVerticalJumpForce = 100.f;
	UPROPERTY(EditDefaultsOnly, Category = "Slide") float SlideCooldown = 2.f;


	bool CanReturnFromSlide = true;

	virtual void UpdateCharacterStateBeforeMovement(float deltaSeconds) override;
	virtual void UpdateCharacterStateAfterMovement(float deltaSeconds) override;
	virtual bool DoJump(bool bReplayingMoves) override;
	virtual bool CanAttemptJump() const override;

	void IsLookingRight(bool lookingRight) const;

protected:
	virtual void InitializeComponent() override;
	virtual void PhysCustom(float deltaTime, int32 Iterations) override;
	virtual void TickComponent(float deltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:

	//Wall Slide
	void TryWallSlide();
	void PhysWallSlide(float DeltaTime, int32 Iterations);
	FVector EndDownVector(const FVector& Start) const;
	FVector EndForwardVector(const FVector& Start) const;

	bool IsCustomMovementMode(const ECustomMovementMode InCustomMovementMode) const;
	bool CannotPerformPhysMovement() const;
	bool CanPerformFrameTickMovement(const float RemainingTime, const int32 Iterations) const;
	bool IsTouchingWall() const;
	bool IsInWallSlide = false;

	//Mantle
	int RootMotionSourceID;
	TSharedPtr<FRootMotionSource_MoveToForce> RootMotionSource;
	void TryMantle();
	void OnMantleAnimFinished();
	
	//Jump
	void Jump();
	void FinishedCoyoteTimer();
	bool InCoyoteTime = false;
	int JumpsLeft;
	bool JustTouchedGround = true;
	void SlideJump();
	float HoldTimeForJump = 0;
	void StartJumpTimers();

	//Slide
	void EnterSlide();
	void ExitSlide();
	void PhysSlide(float deltaTime, int32 Iterations);
	bool CanSlide(FFindFloorResult& FloorHit) const;
	float SlidingTime = 0.f;
	void SetCollisionSizeToSlidingDimension();
	bool RestoreDefaultCollisionDimension();
	bool JustJumped;
	FTimerHandle SlideTimer;
	void SlideTimerFinished();
	float SlideDeltaTime;
	int32 SlideIterations;
	bool CanSlideJump = false;
	FTimerHandle SlideJumpTimer;
	void SlideJumpTimerFinished();
	bool IsInSlide = false;
	FTimerHandle SlideCoolDownTimer;
	void SlideCooldownFinished();
	bool CanEnterSlide = true;

	//AriDash
	FTimerHandle AirDashTimer;
	void AirDashTimerFinished();
	bool CanAirDash = true;

	//Helpers
	float GetCapsuleHalfHeight() const;
	void InitAnimations();
	float GetCapsuleRadius() const;
	FCollisionQueryParams GetPlayerQueryParams() const;

	ACharacter* PlayerCharacter;
	float StartHalfHeight;
	FTimerHandle WallJumpTimer;
	void WallJumpTimerFinished();

	FTimerHandle JumpTimer;
	FTimerHandle JumpLoopTimer;
	FTimerHandle CayotoeTimer;


	template<typename AnimNotify>
	AnimNotify* FindNotifyByClass(const TObjectPtr<UAnimSequenceBase> Animation)
	{
		if (!Animation)
		{
			GEngine->AddOnScreenDebugMessage(
			-1, // Key (-1 means add a new message)
			5.0f, // Duration in seconds
			FColor::Green, // Text color
			FString::Printf(TEXT("!Animation")));
			return nullptr;
		}

		for (FAnimNotifyEvent NotifyEvent : Animation->Notifies)
		{
			if (const auto AnimationNotify = Cast<AnimNotify>(NotifyEvent.Notify))
			{
				GEngine->AddOnScreenDebugMessage(
					-1, // Key (-1 means add a new message)
					5.0f, // Duration in seconds
					FColor::Green, // Text color
					FString::Printf(TEXT("Return notify")));
				return AnimationNotify;
			}
			else {
				GEngine->AddOnScreenDebugMessage(
					-1, // Key (-1 means add a new message)
					5.0f, // Duration in seconds
					FColor::Green, // Text color
					FString::Printf(TEXT("else")));
			}
		}

		return nullptr;
	}
	
};
