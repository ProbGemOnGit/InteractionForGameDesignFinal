// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CPPArraySaveGame.generated.h"

/**
 * 
 */
UCLASS()
class RESEARCHPROJECT_API UCPPArraySaveGame : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "SaveGame")
	static void SaveArrayToFile(FString FileDirectory, FString FileName, TArray<FString> SaveText, bool& bOutSuccess);
	
};
