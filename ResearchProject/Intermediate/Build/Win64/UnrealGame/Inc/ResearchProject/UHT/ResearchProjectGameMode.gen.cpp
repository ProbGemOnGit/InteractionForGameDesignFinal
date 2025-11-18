// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResearchProjectGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeResearchProjectGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
RESEARCHPROJECT_API UClass* Z_Construct_UClass_AResearchProjectGameMode();
RESEARCHPROJECT_API UClass* Z_Construct_UClass_AResearchProjectGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ResearchProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AResearchProjectGameMode *************************************************
void AResearchProjectGameMode::StaticRegisterNativesAResearchProjectGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AResearchProjectGameMode;
UClass* AResearchProjectGameMode::GetPrivateStaticClass()
{
	using TClass = AResearchProjectGameMode;
	if (!Z_Registration_Info_UClass_AResearchProjectGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ResearchProjectGameMode"),
			Z_Registration_Info_UClass_AResearchProjectGameMode.InnerSingleton,
			StaticRegisterNativesAResearchProjectGameMode,
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
	return Z_Registration_Info_UClass_AResearchProjectGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AResearchProjectGameMode_NoRegister()
{
	return AResearchProjectGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AResearchProjectGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ResearchProjectGameMode.h" },
		{ "ModuleRelativePath", "ResearchProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AResearchProjectGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AResearchProjectGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ResearchProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AResearchProjectGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AResearchProjectGameMode_Statics::ClassParams = {
	&AResearchProjectGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AResearchProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AResearchProjectGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AResearchProjectGameMode()
{
	if (!Z_Registration_Info_UClass_AResearchProjectGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AResearchProjectGameMode.OuterSingleton, Z_Construct_UClass_AResearchProjectGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AResearchProjectGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AResearchProjectGameMode);
AResearchProjectGameMode::~AResearchProjectGameMode() {}
// ********** End Class AResearchProjectGameMode ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_moehnj_Downloads_InteractionForGameDesignFinal_ResearchProject_Source_ResearchProject_ResearchProjectGameMode_h__Script_ResearchProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AResearchProjectGameMode, AResearchProjectGameMode::StaticClass, TEXT("AResearchProjectGameMode"), &Z_Registration_Info_UClass_AResearchProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AResearchProjectGameMode), 1565696110U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_moehnj_Downloads_InteractionForGameDesignFinal_ResearchProject_Source_ResearchProject_ResearchProjectGameMode_h__Script_ResearchProject_3390672283(TEXT("/Script/ResearchProject"),
	Z_CompiledInDeferFile_FID_Users_moehnj_Downloads_InteractionForGameDesignFinal_ResearchProject_Source_ResearchProject_ResearchProjectGameMode_h__Script_ResearchProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_moehnj_Downloads_InteractionForGameDesignFinal_ResearchProject_Source_ResearchProject_ResearchProjectGameMode_h__Script_ResearchProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
