// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPPArraySaveGame.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPPArraySaveGame() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
RESEARCHPROJECT_API UClass* Z_Construct_UClass_UCPPArraySaveGame();
RESEARCHPROJECT_API UClass* Z_Construct_UClass_UCPPArraySaveGame_NoRegister();
UPackage* Z_Construct_UPackage__Script_ResearchProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCPPArraySaveGame Function SaveArrayToFile *******************************
struct Z_Construct_UFunction_UCPPArraySaveGame_SaveArrayToFile_Statics
{
	struct CPPArraySaveGame_eventSaveArrayToFile_Parms
	{
		FString FileDirectory;
		FString FileName;
		TArray<FString> SaveText;
		bool bOutSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveGame" },
		{ "ModuleRelativePath", "Public/CPPArraySaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileDirectory;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveText_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SaveText;
	static void NewProp_bOutSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCPPArraySaveGame_SaveArrayToFile_Statics::NewProp_FileDirectory = { "FileDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPPArraySaveGame_eventSaveArrayToFile_Parms, FileDirectory), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCPPArraySaveGame_SaveArrayToFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPPArraySaveGame_eventSaveArrayToFile_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCPPArraySaveGame_SaveArrayToFile_Statics::NewProp_SaveText_Inner = { "SaveText", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCPPArraySaveGame_SaveArrayToFile_Statics::NewProp_SaveText = { "SaveText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPPArraySaveGame_eventSaveArrayToFile_Parms, SaveText), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCPPArraySaveGame_SaveArrayToFile_Statics::NewProp_bOutSuccess_SetBit(void* Obj)
{
	((CPPArraySaveGame_eventSaveArrayToFile_Parms*)Obj)->bOutSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCPPArraySaveGame_SaveArrayToFile_Statics::NewProp_bOutSuccess = { "bOutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CPPArraySaveGame_eventSaveArrayToFile_Parms), &Z_Construct_UFunction_UCPPArraySaveGame_SaveArrayToFile_Statics::NewProp_bOutSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPPArraySaveGame_SaveArrayToFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPPArraySaveGame_SaveArrayToFile_Statics::NewProp_FileDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPPArraySaveGame_SaveArrayToFile_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPPArraySaveGame_SaveArrayToFile_Statics::NewProp_SaveText_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPPArraySaveGame_SaveArrayToFile_Statics::NewProp_SaveText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPPArraySaveGame_SaveArrayToFile_Statics::NewProp_bOutSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPPArraySaveGame_SaveArrayToFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPPArraySaveGame_SaveArrayToFile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCPPArraySaveGame, nullptr, "SaveArrayToFile", Z_Construct_UFunction_UCPPArraySaveGame_SaveArrayToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPPArraySaveGame_SaveArrayToFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCPPArraySaveGame_SaveArrayToFile_Statics::CPPArraySaveGame_eventSaveArrayToFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPPArraySaveGame_SaveArrayToFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPPArraySaveGame_SaveArrayToFile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCPPArraySaveGame_SaveArrayToFile_Statics::CPPArraySaveGame_eventSaveArrayToFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCPPArraySaveGame_SaveArrayToFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPPArraySaveGame_SaveArrayToFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPPArraySaveGame::execSaveArrayToFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileDirectory);
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_GET_TARRAY(FString,Z_Param_SaveText);
	P_GET_UBOOL_REF(Z_Param_Out_bOutSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCPPArraySaveGame::SaveArrayToFile(Z_Param_FileDirectory,Z_Param_FileName,Z_Param_SaveText,Z_Param_Out_bOutSuccess);
	P_NATIVE_END;
}
// ********** End Class UCPPArraySaveGame Function SaveArrayToFile *********************************

// ********** Begin Class UCPPArraySaveGame ********************************************************
void UCPPArraySaveGame::StaticRegisterNativesUCPPArraySaveGame()
{
	UClass* Class = UCPPArraySaveGame::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SaveArrayToFile", &UCPPArraySaveGame::execSaveArrayToFile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCPPArraySaveGame;
UClass* UCPPArraySaveGame::GetPrivateStaticClass()
{
	using TClass = UCPPArraySaveGame;
	if (!Z_Registration_Info_UClass_UCPPArraySaveGame.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPPArraySaveGame"),
			Z_Registration_Info_UClass_UCPPArraySaveGame.InnerSingleton,
			StaticRegisterNativesUCPPArraySaveGame,
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
	return Z_Registration_Info_UClass_UCPPArraySaveGame.InnerSingleton;
}
UClass* Z_Construct_UClass_UCPPArraySaveGame_NoRegister()
{
	return UCPPArraySaveGame::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCPPArraySaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CPPArraySaveGame.h" },
		{ "ModuleRelativePath", "Public/CPPArraySaveGame.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCPPArraySaveGame_SaveArrayToFile, "SaveArrayToFile" }, // 2445994660
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPPArraySaveGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCPPArraySaveGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ResearchProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPPArraySaveGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPPArraySaveGame_Statics::ClassParams = {
	&UCPPArraySaveGame::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCPPArraySaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UCPPArraySaveGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCPPArraySaveGame()
{
	if (!Z_Registration_Info_UClass_UCPPArraySaveGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPPArraySaveGame.OuterSingleton, Z_Construct_UClass_UCPPArraySaveGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCPPArraySaveGame.OuterSingleton;
}
UCPPArraySaveGame::UCPPArraySaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCPPArraySaveGame);
UCPPArraySaveGame::~UCPPArraySaveGame() {}
// ********** End Class UCPPArraySaveGame **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_isaia_Downloads_InteractionForGameDesignFinal_ResearchProject_Source_ResearchProject_Public_CPPArraySaveGame_h__Script_ResearchProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCPPArraySaveGame, UCPPArraySaveGame::StaticClass, TEXT("UCPPArraySaveGame"), &Z_Registration_Info_UClass_UCPPArraySaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPPArraySaveGame), 4170411315U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_isaia_Downloads_InteractionForGameDesignFinal_ResearchProject_Source_ResearchProject_Public_CPPArraySaveGame_h__Script_ResearchProject_894170874(TEXT("/Script/ResearchProject"),
	Z_CompiledInDeferFile_FID_Users_isaia_Downloads_InteractionForGameDesignFinal_ResearchProject_Source_ResearchProject_Public_CPPArraySaveGame_h__Script_ResearchProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_isaia_Downloads_InteractionForGameDesignFinal_ResearchProject_Source_ResearchProject_Public_CPPArraySaveGame_h__Script_ResearchProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
