// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPPSaveGame.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPPSaveGame() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
RESEARCHPROJECT_API UClass* Z_Construct_UClass_UCPPSaveGame();
RESEARCHPROJECT_API UClass* Z_Construct_UClass_UCPPSaveGame_NoRegister();
UPackage* Z_Construct_UPackage__Script_ResearchProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCPPSaveGame Function ReadFromFile ***************************************
struct Z_Construct_UFunction_UCPPSaveGame_ReadFromFile_Statics
{
	struct CPPSaveGame_eventReadFromFile_Parms
	{
		FString FileDirectory;
		FString FilePath;
		bool bOutSuccess;
		FString bOutMessage;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Read from file\n" },
#endif
		{ "ModuleRelativePath", "Public/CPPSaveGame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Read from file" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileDirectory;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static void NewProp_bOutSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_bOutMessage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCPPSaveGame_ReadFromFile_Statics::NewProp_FileDirectory = { "FileDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPPSaveGame_eventReadFromFile_Parms, FileDirectory), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCPPSaveGame_ReadFromFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPPSaveGame_eventReadFromFile_Parms, FilePath), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCPPSaveGame_ReadFromFile_Statics::NewProp_bOutSuccess_SetBit(void* Obj)
{
	((CPPSaveGame_eventReadFromFile_Parms*)Obj)->bOutSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCPPSaveGame_ReadFromFile_Statics::NewProp_bOutSuccess = { "bOutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CPPSaveGame_eventReadFromFile_Parms), &Z_Construct_UFunction_UCPPSaveGame_ReadFromFile_Statics::NewProp_bOutSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCPPSaveGame_ReadFromFile_Statics::NewProp_bOutMessage = { "bOutMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPPSaveGame_eventReadFromFile_Parms, bOutMessage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCPPSaveGame_ReadFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPPSaveGame_eventReadFromFile_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPPSaveGame_ReadFromFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPPSaveGame_ReadFromFile_Statics::NewProp_FileDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPPSaveGame_ReadFromFile_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPPSaveGame_ReadFromFile_Statics::NewProp_bOutSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPPSaveGame_ReadFromFile_Statics::NewProp_bOutMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPPSaveGame_ReadFromFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPPSaveGame_ReadFromFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPPSaveGame_ReadFromFile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCPPSaveGame, nullptr, "ReadFromFile", Z_Construct_UFunction_UCPPSaveGame_ReadFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPPSaveGame_ReadFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCPPSaveGame_ReadFromFile_Statics::CPPSaveGame_eventReadFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPPSaveGame_ReadFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPPSaveGame_ReadFromFile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCPPSaveGame_ReadFromFile_Statics::CPPSaveGame_eventReadFromFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCPPSaveGame_ReadFromFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPPSaveGame_ReadFromFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPPSaveGame::execReadFromFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileDirectory);
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_GET_UBOOL_REF(Z_Param_Out_bOutSuccess);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_bOutMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UCPPSaveGame::ReadFromFile(Z_Param_FileDirectory,Z_Param_FilePath,Z_Param_Out_bOutSuccess,Z_Param_Out_bOutMessage);
	P_NATIVE_END;
}
// ********** End Class UCPPSaveGame Function ReadFromFile *****************************************

// ********** Begin Class UCPPSaveGame Function WriteToFile ****************************************
struct Z_Construct_UFunction_UCPPSaveGame_WriteToFile_Statics
{
	struct CPPSaveGame_eventWriteToFile_Parms
	{
		FString FileDirectory;
		FString FilePath;
		FString String;
		bool bOutSuccess;
		FString bOutMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Write to file\n" },
#endif
		{ "ModuleRelativePath", "Public/CPPSaveGame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Write to file" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileDirectory;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static void NewProp_bOutSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_bOutMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCPPSaveGame_WriteToFile_Statics::NewProp_FileDirectory = { "FileDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPPSaveGame_eventWriteToFile_Parms, FileDirectory), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCPPSaveGame_WriteToFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPPSaveGame_eventWriteToFile_Parms, FilePath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCPPSaveGame_WriteToFile_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPPSaveGame_eventWriteToFile_Parms, String), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCPPSaveGame_WriteToFile_Statics::NewProp_bOutSuccess_SetBit(void* Obj)
{
	((CPPSaveGame_eventWriteToFile_Parms*)Obj)->bOutSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCPPSaveGame_WriteToFile_Statics::NewProp_bOutSuccess = { "bOutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CPPSaveGame_eventWriteToFile_Parms), &Z_Construct_UFunction_UCPPSaveGame_WriteToFile_Statics::NewProp_bOutSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCPPSaveGame_WriteToFile_Statics::NewProp_bOutMessage = { "bOutMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPPSaveGame_eventWriteToFile_Parms, bOutMessage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPPSaveGame_WriteToFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPPSaveGame_WriteToFile_Statics::NewProp_FileDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPPSaveGame_WriteToFile_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPPSaveGame_WriteToFile_Statics::NewProp_String,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPPSaveGame_WriteToFile_Statics::NewProp_bOutSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPPSaveGame_WriteToFile_Statics::NewProp_bOutMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPPSaveGame_WriteToFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPPSaveGame_WriteToFile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCPPSaveGame, nullptr, "WriteToFile", Z_Construct_UFunction_UCPPSaveGame_WriteToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPPSaveGame_WriteToFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCPPSaveGame_WriteToFile_Statics::CPPSaveGame_eventWriteToFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPPSaveGame_WriteToFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPPSaveGame_WriteToFile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCPPSaveGame_WriteToFile_Statics::CPPSaveGame_eventWriteToFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCPPSaveGame_WriteToFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPPSaveGame_WriteToFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPPSaveGame::execWriteToFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileDirectory);
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_GET_PROPERTY(FStrProperty,Z_Param_String);
	P_GET_UBOOL_REF(Z_Param_Out_bOutSuccess);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_bOutMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCPPSaveGame::WriteToFile(Z_Param_FileDirectory,Z_Param_FilePath,Z_Param_String,Z_Param_Out_bOutSuccess,Z_Param_Out_bOutMessage);
	P_NATIVE_END;
}
// ********** End Class UCPPSaveGame Function WriteToFile ******************************************

// ********** Begin Class UCPPSaveGame *************************************************************
void UCPPSaveGame::StaticRegisterNativesUCPPSaveGame()
{
	UClass* Class = UCPPSaveGame::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ReadFromFile", &UCPPSaveGame::execReadFromFile },
		{ "WriteToFile", &UCPPSaveGame::execWriteToFile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCPPSaveGame;
UClass* UCPPSaveGame::GetPrivateStaticClass()
{
	using TClass = UCPPSaveGame;
	if (!Z_Registration_Info_UClass_UCPPSaveGame.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPPSaveGame"),
			Z_Registration_Info_UClass_UCPPSaveGame.InnerSingleton,
			StaticRegisterNativesUCPPSaveGame,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UCPPSaveGame.InnerSingleton;
}
UClass* Z_Construct_UClass_UCPPSaveGame_NoRegister()
{
	return UCPPSaveGame::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCPPSaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CPPSaveGame.h" },
		{ "ModuleRelativePath", "Public/CPPSaveGame.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCPPSaveGame_ReadFromFile, "ReadFromFile" }, // 3294747917
		{ &Z_Construct_UFunction_UCPPSaveGame_WriteToFile, "WriteToFile" }, // 796269440
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPPSaveGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCPPSaveGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ResearchProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPPSaveGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPPSaveGame_Statics::ClassParams = {
	&UCPPSaveGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCPPSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UCPPSaveGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCPPSaveGame()
{
	if (!Z_Registration_Info_UClass_UCPPSaveGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPPSaveGame.OuterSingleton, Z_Construct_UClass_UCPPSaveGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCPPSaveGame.OuterSingleton;
}
UCPPSaveGame::UCPPSaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCPPSaveGame);
UCPPSaveGame::~UCPPSaveGame() {}
// ********** End Class UCPPSaveGame ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_moehnj_Downloads_InteractionForGameDesignFinal_ResearchProject_Source_ResearchProject_Public_CPPSaveGame_h__Script_ResearchProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCPPSaveGame, UCPPSaveGame::StaticClass, TEXT("UCPPSaveGame"), &Z_Registration_Info_UClass_UCPPSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPPSaveGame), 2787304549U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_moehnj_Downloads_InteractionForGameDesignFinal_ResearchProject_Source_ResearchProject_Public_CPPSaveGame_h__Script_ResearchProject_3904510356(TEXT("/Script/ResearchProject"),
	Z_CompiledInDeferFile_FID_Users_moehnj_Downloads_InteractionForGameDesignFinal_ResearchProject_Source_ResearchProject_Public_CPPSaveGame_h__Script_ResearchProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_moehnj_Downloads_InteractionForGameDesignFinal_ResearchProject_Source_ResearchProject_Public_CPPSaveGame_h__Script_ResearchProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
