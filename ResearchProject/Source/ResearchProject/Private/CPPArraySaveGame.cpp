// Fill out your copyright notice in the Description page of Project Settings.


#include "CPPArraySaveGame.h"
#include "HAL/PlatformFileManager.h"
#include "Misc/FileHelper.h"


void UCPPArraySaveGame::SaveArrayToFile(FString FileDirectory, FString FileName, TArray<FString> SaveText, bool& bOutSuccess)
{
	//not fulling implented
	FileDirectory += "\\";
	FileDirectory += FileName;
	
	FString TotalString = "";

	for (FString& Each : SaveText) 
	{
		TotalString += Each;
		TotalString += LINE_TERMINATOR;
	}

	return;
}
