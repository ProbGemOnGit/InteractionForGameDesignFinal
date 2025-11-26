// Fill out your copyright notice in the Description page of Project Settings.


#include "CPPSaveGame.h"
#include "HAL/PlatformFileManager.h"
#include "Misc/FileHelper.h"

FString UCPPSaveGame::ReadFromFile(FString FileDirectory, FString FileName, bool& bOutSuccess, FString& bOutMessage)
{
	//Full path
	FileDirectory += "\\";
	FileDirectory += FileName;

	//Check if file exists
	if (!FPlatformFileManager::Get().GetPlatformFile().FileExists(*FileDirectory))
	{
		bOutSuccess = false;
		bOutMessage = "File does not exist";
		return "";
	}

	FString readString = "";

	// Trys to read the file
	if (!FFileHelper::LoadFileToString(readString, *FileDirectory))
	{
		bOutSuccess = false;
		bOutMessage = "Failed to load string from file";
		return "";
	}

	bOutSuccess = true;
	bOutMessage = "File read successfuly";
	return readString;

}

void UCPPSaveGame::WriteToFile(FString FileDirectory, FString FileName, FString String, bool& bOutSuccess, FString& bOutMessage)
{
	//Full path
	FileDirectory += "\\";
	FileDirectory += FileName;

	//Trys to save to file
	if (!FFileHelper::SaveStringToFile(String, *FileDirectory))
	{
		bOutSuccess = false;
		bOutMessage = "Failed o save to file";
		return;
	}

	bOutSuccess = true;
	bOutMessage = "File read successfuly";
}