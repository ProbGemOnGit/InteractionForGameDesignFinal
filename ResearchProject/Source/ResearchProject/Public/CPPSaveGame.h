// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CPPSaveGame.generated.h"

/**
 * 
 */
UCLASS()
class RESEARCHPROJECT_API UCPPSaveGame : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	//Read from file
	UFUNCTION(BlueprintCallable)
		static FString ReadFromFile(FString FileDirectory, FString FilePath, bool& bOutSuccess, FString& bOutMessage);

	//Write to file
	UFUNCTION(BlueprintCallable)
		static void WriteToFile(FString FileDirectory, FString FilePath, FString String, bool& bOutSuccess, FString& bOutMessage);
	
};
