// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "Components/PostProcessComponent.h"
#include "PlatformerMovementComponent.h"
#include "InputMappingContext.h"
#include "EnhancedInputSubsystems.h" 
#include "ResearchProjectCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UInputAction;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

/**
 *  A simple player-controllable third person character
 *  Implements a controllable orbiting camera
 */
UCLASS(abstract)
class AResearchProjectCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, Category="Components")
	USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, Category="Components")
	UCameraComponent* FollowCamera;
	
	/** Post Process Component */
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UPostProcessComponent* PostProcessComponent;

	UPROPERTY(EditAnywhere, Category = Input)
	UInputMappingContext* DefaultMappingContext;
	


protected:

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* LookAction;

	/** Mouse Look Input Action */
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* MouseLookAction;

	//Slide
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* SlideAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* AirDashAction;

public:

	/** Constructor */
	explicit AResearchProjectCharacter(const FObjectInitializer& ObjectInitializer);	

	FCollisionQueryParams GetQueryParams() const;

	bool CanMove = true;

protected:

	/** Initialize input action bindings */
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

protected:

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);

	// Slide
	void StartSliding();
	void StopSliding();

	//AirDash
	void AirDash();

	virtual void BeginPlay() override;

public:

	/** Handles move inputs from either controls or UI interfaces */
	UFUNCTION(BlueprintCallable, Category="Input")
	virtual void DoMove(FVector2D movementVector);

	/** Handles jump pressed inputs from either controls or UI interfaces */
	UFUNCTION(BlueprintCallable, Category="Input")
	virtual void DoJumpStart();

	/** Handles jump pressed inputs from either controls or UI interfaces */ 
	UFUNCTION(BlueprintCallable, Category="Input")
	virtual void DoJumpEnd();

private:
	UPROPERTY(Transient) TObjectPtr<UPlatformerMovementComponent> PlatformerMovement;

};

