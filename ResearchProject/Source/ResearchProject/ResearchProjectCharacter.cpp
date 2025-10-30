// Copyright Epic Games, Inc. All Rights Reserved.

#include "ResearchProjectCharacter.h"
#include "Engine/LocalPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "PlatformerMovementComponent.h"
#include "ResearchProject.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

AResearchProjectCharacter::AResearchProjectCharacter(const FObjectInitializer& ObjectInitializer) : Super(
	ObjectInitializer.SetDefaultSubobjectClass<UPlatformerMovementComponent>(CharacterMovementComponentName))
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(25.f, 95.0f);
		
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Create a camera boom (pulls in towards the player if there is a collision)
	constexpr float TargetArmLength = 1000.f;
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true);
	CameraBoom->SetWorldRotation(FRotator(0.f, 270.f, 0.f));
	CameraBoom->TargetArmLength = TargetArmLength;
	CameraBoom->bDoCollisionTest = false;
	CameraBoom->bUsePawnControlRotation = false;

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	PostProcessComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("PostProcessComponent"));
	PostProcessComponent->SetupAttachment(RootComponent);
	FPostProcessSettings PostProcessSettings;
	PostProcessSettings.bOverride_DepthOfFieldFstop = true;
	PostProcessSettings.DepthOfFieldFstop = .2f;
	PostProcessSettings.bOverride_DepthOfFieldSensorWidth = true;
	PostProcessSettings.DepthOfFieldSensorWidth = 100.f;
	PostProcessSettings.bOverride_DepthOfFieldFocalDistance = true;
	PostProcessSettings.DepthOfFieldFocalDistance = TargetArmLength;
	PostProcessComponent->bEnabled = true;
	PostProcessComponent->Settings = PostProcessSettings;

}

void AResearchProjectCharacter::BeginPlay()
{
	Super::BeginPlay();

	PlatformerMovement = Cast<UPlatformerMovementComponent>(GetCharacterMovement());
	check(PlatformerMovement);

	if (const auto* PlayerController = Cast<APlayerController>(Controller))
	{
		if (auto* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}

void AResearchProjectCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {
		
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &AResearchProjectCharacter::DoJumpStart);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &AResearchProjectCharacter::DoJumpEnd);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AResearchProjectCharacter::Move);
		EnhancedInputComponent->BindAction(MouseLookAction, ETriggerEvent::Triggered, this, &AResearchProjectCharacter::Look);

		//Sliding
		EnhancedInputComponent->BindAction(SlideAction, ETriggerEvent::Started, this, &AResearchProjectCharacter::StartSliding);
		EnhancedInputComponent->BindAction(SlideAction, ETriggerEvent::Completed, this, &AResearchProjectCharacter::StopSliding);

		//Air Dash
		EnhancedInputComponent->BindAction(AirDashAction, ETriggerEvent::Started, this, &AResearchProjectCharacter::AirDash);
	}
	else
	{
		UE_LOG(LogResearchProject, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

void AResearchProjectCharacter::AirDash()
{
	PlatformerMovement->DashStart();
}

void AResearchProjectCharacter::Move(const FInputActionValue& Value)
{
	if (!CanMove) {
		return;
	}

	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (MovementVector.X > 0 && !PlatformerMovement->LookingRight)
	{
		//player turned right
	}
	else if (MovementVector.X < 0 && PlatformerMovement->LookingRight)
	{
		//player turned left
	}

	// route the input
	DoMove(MovementVector);
}

void AResearchProjectCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

}

void AResearchProjectCharacter::SetCanMove(bool canMove)
{
	CanMove = canMove;
}

void AResearchProjectCharacter::DoMove(FVector2D movementVector)
{

	if (Controller == nullptr || !CanMove) {
		return;
	}

	const FVector2D MovementVector = movementVector;
	const FRotator Rotation = Controller->GetControlRotation();
	const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);
	const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	//GEngine->AddOnScreenDebugMessage(
	//	-1, // Key (-1 means add a new message)
	//	5.0f, // Duration in seconds
	//	FColor::Green, // Text color
	//	FString::Printf(TEXT("Player Velocity: X=%.2f"), MovementVector.X));
	AddMovementInput(RightDirection, MovementVector.X);
	if (MovementVector.X > 0) 
	{
		PlatformerMovement->IsLookingRight(true);
	}
	else if (MovementVector.X < 0)
	{
		PlatformerMovement->IsLookingRight(false);
	}
}


void AResearchProjectCharacter::DoJumpStart()
{
	// signal the character to jump
	PlatformerMovement->StartJump();
}

void AResearchProjectCharacter::DoJumpEnd()
{
	// signal the character to stop jumping
	PlatformerMovement->StopJump();
}



void AResearchProjectCharacter::StartSliding() 
{
	PlatformerMovement->bWantsToSlide = true;
}

void AResearchProjectCharacter::StopSliding()
{
	PlatformerMovement->bWantsToSlide = false;
}

FCollisionQueryParams AResearchProjectCharacter::GetQueryParams() const
{
	TArray<AActor*> CharacterChildren;
	GetAllChildActors(CharacterChildren);

	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActors(CharacterChildren);
	QueryParams.AddIgnoredActor(this);

	return QueryParams;

}

