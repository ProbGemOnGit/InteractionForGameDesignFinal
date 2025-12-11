// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Animation/MantleAnimNofity.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMantleAnimNofity() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
RESEARCHPROJECT_API UClass* Z_Construct_UClass_UMantleAnimNofity();
RESEARCHPROJECT_API UClass* Z_Construct_UClass_UMantleAnimNofity_NoRegister();
UPackage* Z_Construct_UPackage__Script_ResearchProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMantleAnimNofity ********************************************************
void UMantleAnimNofity::StaticRegisterNativesUMantleAnimNofity()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMantleAnimNofity;
UClass* UMantleAnimNofity::GetPrivateStaticClass()
{
	using TClass = UMantleAnimNofity;
	if (!Z_Registration_Info_UClass_UMantleAnimNofity.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MantleAnimNofity"),
			Z_Registration_Info_UClass_UMantleAnimNofity.InnerSingleton,
			StaticRegisterNativesUMantleAnimNofity,
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
	return Z_Registration_Info_UClass_UMantleAnimNofity.InnerSingleton;
}
UClass* Z_Construct_UClass_UMantleAnimNofity_NoRegister()
{
	return UMantleAnimNofity::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMantleAnimNofity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/MantleAnimNofity.h" },
		{ "ModuleRelativePath", "Animation/MantleAnimNofity.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMantleAnimNofity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMantleAnimNofity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_ResearchProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMantleAnimNofity_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMantleAnimNofity_Statics::ClassParams = {
	&UMantleAnimNofity::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMantleAnimNofity_Statics::Class_MetaDataParams), Z_Construct_UClass_UMantleAnimNofity_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMantleAnimNofity()
{
	if (!Z_Registration_Info_UClass_UMantleAnimNofity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMantleAnimNofity.OuterSingleton, Z_Construct_UClass_UMantleAnimNofity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMantleAnimNofity.OuterSingleton;
}
UMantleAnimNofity::UMantleAnimNofity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMantleAnimNofity);
UMantleAnimNofity::~UMantleAnimNofity() {}
// ********** End Class UMantleAnimNofity **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_moehnj_Downloads_InteractionForGameDesignFinal_ResearchProject_Source_ResearchProject_Animation_MantleAnimNofity_h__Script_ResearchProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMantleAnimNofity, UMantleAnimNofity::StaticClass, TEXT("UMantleAnimNofity"), &Z_Registration_Info_UClass_UMantleAnimNofity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMantleAnimNofity), 297941122U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_moehnj_Downloads_InteractionForGameDesignFinal_ResearchProject_Source_ResearchProject_Animation_MantleAnimNofity_h__Script_ResearchProject_2499186002(TEXT("/Script/ResearchProject"),
	Z_CompiledInDeferFile_FID_Users_moehnj_Downloads_InteractionForGameDesignFinal_ResearchProject_Source_ResearchProject_Animation_MantleAnimNofity_h__Script_ResearchProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_moehnj_Downloads_InteractionForGameDesignFinal_ResearchProject_Source_ResearchProject_Animation_MantleAnimNofity_h__Script_ResearchProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
