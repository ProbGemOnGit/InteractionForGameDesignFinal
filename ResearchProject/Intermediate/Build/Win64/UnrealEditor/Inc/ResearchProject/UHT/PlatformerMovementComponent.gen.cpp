// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformerMovementComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlatformerMovementComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
RESEARCHPROJECT_API UClass* Z_Construct_UClass_UPlatformerMovementComponent();
RESEARCHPROJECT_API UClass* Z_Construct_UClass_UPlatformerMovementComponent_NoRegister();
RESEARCHPROJECT_API UEnum* Z_Construct_UEnum_ResearchProject_ECustomMovementMode();
UPackage* Z_Construct_UPackage__Script_ResearchProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ECustomMovementMode *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECustomMovementMode;
static UEnum* ECustomMovementMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECustomMovementMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECustomMovementMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ResearchProject_ECustomMovementMode, (UObject*)Z_Construct_UPackage__Script_ResearchProject(), TEXT("ECustomMovementMode"));
	}
	return Z_Registration_Info_UEnum_ECustomMovementMode.OuterSingleton;
}
template<> RESEARCHPROJECT_API UEnum* StaticEnum<ECustomMovementMode>()
{
	return ECustomMovementMode_StaticEnum();
}
struct Z_Construct_UEnum_ResearchProject_ECustomMovementMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CMOVE_AirDash.DsiplayName", "AirDash" },
		{ "CMOVE_AirDash.Name", "CMOVE_AirDash" },
		{ "CMOVE_Jumping.DisplayName", "Jumping" },
		{ "CMOVE_Jumping.Name", "CMOVE_Jumping" },
		{ "CMOVE_MAX.Hidden", "" },
		{ "CMOVE_MAX.Name", "CMOVE_MAX" },
		{ "CMOVE_None.DisplayName", "None" },
		{ "CMOVE_None.Name", "CMOVE_None" },
		{ "CMOVE_Slide.DisplayName", "Slide" },
		{ "CMOVE_Slide.Name", "CMOVE_Slide" },
		{ "CMOVE_WallSlide.DisplayName", "WallSlide" },
		{ "CMOVE_WallSlide.Name", "CMOVE_WallSlide" },
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "CMOVE_None", (int64)CMOVE_None },
		{ "CMOVE_WallSlide", (int64)CMOVE_WallSlide },
		{ "CMOVE_Slide", (int64)CMOVE_Slide },
		{ "CMOVE_Jumping", (int64)CMOVE_Jumping },
		{ "CMOVE_AirDash", (int64)CMOVE_AirDash },
		{ "CMOVE_MAX", (int64)CMOVE_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ResearchProject_ECustomMovementMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ResearchProject,
	nullptr,
	"ECustomMovementMode",
	"ECustomMovementMode",
	Z_Construct_UEnum_ResearchProject_ECustomMovementMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ResearchProject_ECustomMovementMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ResearchProject_ECustomMovementMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ResearchProject_ECustomMovementMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ResearchProject_ECustomMovementMode()
{
	if (!Z_Registration_Info_UEnum_ECustomMovementMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECustomMovementMode.InnerSingleton, Z_Construct_UEnum_ResearchProject_ECustomMovementMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECustomMovementMode.InnerSingleton;
}
// ********** End Enum ECustomMovementMode *********************************************************

// ********** Begin Class UPlatformerMovementComponent Function DashStart **************************
struct Z_Construct_UFunction_UPlatformerMovementComponent_DashStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformerMovementComponent_DashStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlatformerMovementComponent, nullptr, "DashStart", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformerMovementComponent_DashStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlatformerMovementComponent_DashStart_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPlatformerMovementComponent_DashStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformerMovementComponent_DashStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlatformerMovementComponent::execDashStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DashStart();
	P_NATIVE_END;
}
// ********** End Class UPlatformerMovementComponent Function DashStart ****************************

// ********** Begin Class UPlatformerMovementComponent Function DashTimelineFinished ***************
struct Z_Construct_UFunction_UPlatformerMovementComponent_DashTimelineFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformerMovementComponent_DashTimelineFinished_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlatformerMovementComponent, nullptr, "DashTimelineFinished", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformerMovementComponent_DashTimelineFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlatformerMovementComponent_DashTimelineFinished_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPlatformerMovementComponent_DashTimelineFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformerMovementComponent_DashTimelineFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlatformerMovementComponent::execDashTimelineFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DashTimelineFinished();
	P_NATIVE_END;
}
// ********** End Class UPlatformerMovementComponent Function DashTimelineFinished *****************

// ********** Begin Class UPlatformerMovementComponent Function DashTimelineUpdate *****************
struct Z_Construct_UFunction_UPlatformerMovementComponent_DashTimelineUpdate_Statics
{
	struct PlatformerMovementComponent_eventDashTimelineUpdate_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlatformerMovementComponent_DashTimelineUpdate_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlatformerMovementComponent_eventDashTimelineUpdate_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformerMovementComponent_DashTimelineUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformerMovementComponent_DashTimelineUpdate_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformerMovementComponent_DashTimelineUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformerMovementComponent_DashTimelineUpdate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlatformerMovementComponent, nullptr, "DashTimelineUpdate", Z_Construct_UFunction_UPlatformerMovementComponent_DashTimelineUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformerMovementComponent_DashTimelineUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlatformerMovementComponent_DashTimelineUpdate_Statics::PlatformerMovementComponent_eventDashTimelineUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformerMovementComponent_DashTimelineUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlatformerMovementComponent_DashTimelineUpdate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlatformerMovementComponent_DashTimelineUpdate_Statics::PlatformerMovementComponent_eventDashTimelineUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlatformerMovementComponent_DashTimelineUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformerMovementComponent_DashTimelineUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlatformerMovementComponent::execDashTimelineUpdate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DashTimelineUpdate(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UPlatformerMovementComponent Function DashTimelineUpdate *******************

// ********** Begin Class UPlatformerMovementComponent Function GetSpeed ***************************
struct Z_Construct_UFunction_UPlatformerMovementComponent_GetSpeed_Statics
{
	struct PlatformerMovementComponent_eventGetSpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlatformerMovementComponent_GetSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlatformerMovementComponent_eventGetSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformerMovementComponent_GetSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformerMovementComponent_GetSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformerMovementComponent_GetSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformerMovementComponent_GetSpeed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlatformerMovementComponent, nullptr, "GetSpeed", Z_Construct_UFunction_UPlatformerMovementComponent_GetSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformerMovementComponent_GetSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlatformerMovementComponent_GetSpeed_Statics::PlatformerMovementComponent_eventGetSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformerMovementComponent_GetSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlatformerMovementComponent_GetSpeed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlatformerMovementComponent_GetSpeed_Statics::PlatformerMovementComponent_eventGetSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlatformerMovementComponent_GetSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformerMovementComponent_GetSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlatformerMovementComponent::execGetSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSpeed();
	P_NATIVE_END;
}
// ********** End Class UPlatformerMovementComponent Function GetSpeed *****************************

// ********** Begin Class UPlatformerMovementComponent Function IsDashing **************************
struct Z_Construct_UFunction_UPlatformerMovementComponent_IsDashing_Statics
{
	struct PlatformerMovementComponent_eventIsDashing_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPlatformerMovementComponent_IsDashing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlatformerMovementComponent_eventIsDashing_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlatformerMovementComponent_IsDashing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlatformerMovementComponent_eventIsDashing_Parms), &Z_Construct_UFunction_UPlatformerMovementComponent_IsDashing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformerMovementComponent_IsDashing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformerMovementComponent_IsDashing_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformerMovementComponent_IsDashing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformerMovementComponent_IsDashing_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlatformerMovementComponent, nullptr, "IsDashing", Z_Construct_UFunction_UPlatformerMovementComponent_IsDashing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformerMovementComponent_IsDashing_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlatformerMovementComponent_IsDashing_Statics::PlatformerMovementComponent_eventIsDashing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformerMovementComponent_IsDashing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlatformerMovementComponent_IsDashing_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlatformerMovementComponent_IsDashing_Statics::PlatformerMovementComponent_eventIsDashing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlatformerMovementComponent_IsDashing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformerMovementComponent_IsDashing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlatformerMovementComponent::execIsDashing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDashing();
	P_NATIVE_END;
}
// ********** End Class UPlatformerMovementComponent Function IsDashing ****************************

// ********** Begin Class UPlatformerMovementComponent Function IsSliding **************************
struct Z_Construct_UFunction_UPlatformerMovementComponent_IsSliding_Statics
{
	struct PlatformerMovementComponent_eventIsSliding_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPlatformerMovementComponent_IsSliding_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlatformerMovementComponent_eventIsSliding_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlatformerMovementComponent_IsSliding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlatformerMovementComponent_eventIsSliding_Parms), &Z_Construct_UFunction_UPlatformerMovementComponent_IsSliding_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformerMovementComponent_IsSliding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformerMovementComponent_IsSliding_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformerMovementComponent_IsSliding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformerMovementComponent_IsSliding_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlatformerMovementComponent, nullptr, "IsSliding", Z_Construct_UFunction_UPlatformerMovementComponent_IsSliding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformerMovementComponent_IsSliding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlatformerMovementComponent_IsSliding_Statics::PlatformerMovementComponent_eventIsSliding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformerMovementComponent_IsSliding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlatformerMovementComponent_IsSliding_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlatformerMovementComponent_IsSliding_Statics::PlatformerMovementComponent_eventIsSliding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlatformerMovementComponent_IsSliding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformerMovementComponent_IsSliding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlatformerMovementComponent::execIsSliding)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSliding();
	P_NATIVE_END;
}
// ********** End Class UPlatformerMovementComponent Function IsSliding ****************************

// ********** Begin Class UPlatformerMovementComponent Function IsWalk *****************************
struct Z_Construct_UFunction_UPlatformerMovementComponent_IsWalk_Statics
{
	struct PlatformerMovementComponent_eventIsWalk_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPlatformerMovementComponent_IsWalk_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlatformerMovementComponent_eventIsWalk_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlatformerMovementComponent_IsWalk_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlatformerMovementComponent_eventIsWalk_Parms), &Z_Construct_UFunction_UPlatformerMovementComponent_IsWalk_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformerMovementComponent_IsWalk_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformerMovementComponent_IsWalk_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformerMovementComponent_IsWalk_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformerMovementComponent_IsWalk_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlatformerMovementComponent, nullptr, "IsWalk", Z_Construct_UFunction_UPlatformerMovementComponent_IsWalk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformerMovementComponent_IsWalk_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlatformerMovementComponent_IsWalk_Statics::PlatformerMovementComponent_eventIsWalk_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformerMovementComponent_IsWalk_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlatformerMovementComponent_IsWalk_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlatformerMovementComponent_IsWalk_Statics::PlatformerMovementComponent_eventIsWalk_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlatformerMovementComponent_IsWalk()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformerMovementComponent_IsWalk_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlatformerMovementComponent::execIsWalk)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsWalk();
	P_NATIVE_END;
}
// ********** End Class UPlatformerMovementComponent Function IsWalk *******************************

// ********** Begin Class UPlatformerMovementComponent Function IsWallSliding **********************
struct Z_Construct_UFunction_UPlatformerMovementComponent_IsWallSliding_Statics
{
	struct PlatformerMovementComponent_eventIsWallSliding_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPlatformerMovementComponent_IsWallSliding_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlatformerMovementComponent_eventIsWallSliding_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlatformerMovementComponent_IsWallSliding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlatformerMovementComponent_eventIsWallSliding_Parms), &Z_Construct_UFunction_UPlatformerMovementComponent_IsWallSliding_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformerMovementComponent_IsWallSliding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformerMovementComponent_IsWallSliding_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformerMovementComponent_IsWallSliding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformerMovementComponent_IsWallSliding_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlatformerMovementComponent, nullptr, "IsWallSliding", Z_Construct_UFunction_UPlatformerMovementComponent_IsWallSliding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformerMovementComponent_IsWallSliding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlatformerMovementComponent_IsWallSliding_Statics::PlatformerMovementComponent_eventIsWallSliding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformerMovementComponent_IsWallSliding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlatformerMovementComponent_IsWallSliding_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlatformerMovementComponent_IsWallSliding_Statics::PlatformerMovementComponent_eventIsWallSliding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlatformerMovementComponent_IsWallSliding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformerMovementComponent_IsWallSliding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlatformerMovementComponent::execIsWallSliding)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsWallSliding();
	P_NATIVE_END;
}
// ********** End Class UPlatformerMovementComponent Function IsWallSliding ************************

// ********** Begin Class UPlatformerMovementComponent *********************************************
void UPlatformerMovementComponent::StaticRegisterNativesUPlatformerMovementComponent()
{
	UClass* Class = UPlatformerMovementComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DashStart", &UPlatformerMovementComponent::execDashStart },
		{ "DashTimelineFinished", &UPlatformerMovementComponent::execDashTimelineFinished },
		{ "DashTimelineUpdate", &UPlatformerMovementComponent::execDashTimelineUpdate },
		{ "GetSpeed", &UPlatformerMovementComponent::execGetSpeed },
		{ "IsDashing", &UPlatformerMovementComponent::execIsDashing },
		{ "IsSliding", &UPlatformerMovementComponent::execIsSliding },
		{ "IsWalk", &UPlatformerMovementComponent::execIsWalk },
		{ "IsWallSliding", &UPlatformerMovementComponent::execIsWallSliding },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPlatformerMovementComponent;
UClass* UPlatformerMovementComponent::GetPrivateStaticClass()
{
	using TClass = UPlatformerMovementComponent;
	if (!Z_Registration_Info_UClass_UPlatformerMovementComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlatformerMovementComponent"),
			Z_Registration_Info_UClass_UPlatformerMovementComponent.InnerSingleton,
			StaticRegisterNativesUPlatformerMovementComponent,
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
	return Z_Registration_Info_UClass_UPlatformerMovementComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UPlatformerMovementComponent_NoRegister()
{
	return UPlatformerMovementComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPlatformerMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PlatformerMovementComponent.h" },
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasSlide_MetaData[] = {
		{ "Category", "Ability Bool" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Ability Bools\n" },
#endif
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ability Bools" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasWallJump_MetaData[] = {
		{ "Category", "Ability Bool" },
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasSlideJump_MetaData[] = {
		{ "Category", "Ability Bool" },
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasAirDash_MetaData[] = {
		{ "Category", "Ability Bool" },
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxJumpHoldTime_MetaData[] = {
		{ "Category", "Jumping" },
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewAirControl_MetaData[] = {
		{ "Category", "Jumping" },
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewAirControlBoost_MetaData[] = {
		{ "Category", "Jumping" },
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfJumps_MetaData[] = {
		{ "Category", "Jumping" },
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinHeightToSlide_MetaData[] = {
		{ "Category", "Wall Slide" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Wall Slide\n" },
#endif
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wall Slide" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallJumpOffHorizontalForce_MetaData[] = {
		{ "Category", "Wall Slide" },
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallJumpOffVerticalForce_MetaData[] = {
		{ "Category", "Wall Slide" },
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxVerticalWallSlideSpeed_MetaData[] = {
		{ "Category", "Wall Slide" },
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallSlideGravityCurve_MetaData[] = {
		{ "Category", "Wall Slide" },
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementModeString_MetaData[] = {
		{ "Category", "MovementMode" },
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallJumpCoolDown_MetaData[] = {
		{ "Category", "Wall Jump" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Wall Jump\n" },
#endif
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wall Jump" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallJumpVerticalBoost_MetaData[] = {
		{ "Category", "Wall Jump" },
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallJumpHorizontalBoost_MetaData[] = {
		{ "Category", "Wall Jump" },
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpForce_MetaData[] = {
		{ "Category", "Jumping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Jump\n" },
#endif
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpImpulseForce_MetaData[] = {
		{ "Category", "Jumping" },
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpHoldTime_MetaData[] = {
		{ "Category", "Jumping" },
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallJumpHoldTime_MetaData[] = {
		{ "Category", "Jumping" },
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GravityAmount_MetaData[] = {
		{ "Category", "Jumping" },
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CayotoeTime_MetaData[] = {
		{ "Category", "Jumping" },
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DashTimelineComponent_MetaData[] = {
		{ "Category", "AirDash" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Air Dash\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Air Dash" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DashCurve_MetaData[] = {
		{ "Category", "AirDash" },
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AirDashDistance_MetaData[] = {
		{ "Category", "AirDash" },
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AirDashLength_MetaData[] = {
		{ "Category", "AirDash" },
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AirDashCoolDown_MetaData[] = {
		{ "Category", "AirDash" },
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AirDashExitBoost_MetaData[] = {
		{ "Category", "AirDash" },
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxFrontCheckDistance_MetaData[] = {
		{ "Category", "Mantle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Mantle\n" },
#endif
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mantle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MantleUpOffsetDistance_MetaData[] = {
		{ "Category", "Mantle" },
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MantleReachHeight_MetaData[] = {
		{ "Category", "Mantle" },
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MantleMinWallSteepnessAngle_MetaData[] = {
		{ "Category", "Mantle" },
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MantleMaxSurfaceAngle_MetaData[] = {
		{ "Category", "Mantle" },
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MantleMaxAlignmentAngle_MetaData[] = {
		{ "Category", "Mantle" },
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MantleAnim_MetaData[] = {
		{ "Category", "Mantle" },
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSlideSpeed_MetaData[] = {
		{ "Category", "Slide" },
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnterSlideImpulse_MetaData[] = {
		{ "Category", "Slide" },
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlideFriction_MetaData[] = {
		{ "Category", "Slide" },
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasSlidingSeconds_MetaData[] = {
		{ "Category", "Slide" },
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlideHalfHeight_MetaData[] = {
		{ "Category", "Slide" },
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlideJumpTime_MetaData[] = {
		{ "Category", "Slide" },
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlideHorizontalJumpForce_MetaData[] = {
		{ "Category", "Slide" },
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlideVerticalJumpForce_MetaData[] = {
		{ "Category", "Slide" },
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlideCooldown_MetaData[] = {
		{ "Category", "Slide" },
		{ "ModuleRelativePath", "Public/PlatformerMovementComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_HasSlide_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasSlide;
	static void NewProp_HasWallJump_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasWallJump;
	static void NewProp_HasSlideJump_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasSlideJump;
	static void NewProp_HasAirDash_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasAirDash;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_maxJumpHoldTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewAirControl;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewAirControlBoost;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfJumps;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinHeightToSlide;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WallJumpOffHorizontalForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WallJumpOffVerticalForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxVerticalWallSlideSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WallSlideGravityCurve;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MovementModeString;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WallJumpCoolDown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WallJumpVerticalBoost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WallJumpHorizontalBoost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpImpulseForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpHoldTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WallJumpHoldTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CayotoeTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DashTimelineComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DashCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AirDashDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AirDashLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AirDashCoolDown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AirDashExitBoost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxFrontCheckDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MantleUpOffsetDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MantleReachHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MantleMinWallSteepnessAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MantleMaxSurfaceAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MantleMaxAlignmentAngle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MantleAnim;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSlideSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EnterSlideImpulse;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SlideFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MasSlidingSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SlideHalfHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SlideJumpTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SlideHorizontalJumpForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SlideVerticalJumpForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SlideCooldown;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlatformerMovementComponent_DashStart, "DashStart" }, // 867655491
		{ &Z_Construct_UFunction_UPlatformerMovementComponent_DashTimelineFinished, "DashTimelineFinished" }, // 3549025573
		{ &Z_Construct_UFunction_UPlatformerMovementComponent_DashTimelineUpdate, "DashTimelineUpdate" }, // 602726014
		{ &Z_Construct_UFunction_UPlatformerMovementComponent_GetSpeed, "GetSpeed" }, // 946669167
		{ &Z_Construct_UFunction_UPlatformerMovementComponent_IsDashing, "IsDashing" }, // 505392285
		{ &Z_Construct_UFunction_UPlatformerMovementComponent_IsSliding, "IsSliding" }, // 1702036047
		{ &Z_Construct_UFunction_UPlatformerMovementComponent_IsWalk, "IsWalk" }, // 3936015435
		{ &Z_Construct_UFunction_UPlatformerMovementComponent_IsWallSliding, "IsWallSliding" }, // 3927812656
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlatformerMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_HasSlide_SetBit(void* Obj)
{
	((UPlatformerMovementComponent*)Obj)->HasSlide = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_HasSlide = { "HasSlide", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPlatformerMovementComponent), &Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_HasSlide_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasSlide_MetaData), NewProp_HasSlide_MetaData) };
void Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_HasWallJump_SetBit(void* Obj)
{
	((UPlatformerMovementComponent*)Obj)->HasWallJump = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_HasWallJump = { "HasWallJump", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPlatformerMovementComponent), &Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_HasWallJump_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasWallJump_MetaData), NewProp_HasWallJump_MetaData) };
void Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_HasSlideJump_SetBit(void* Obj)
{
	((UPlatformerMovementComponent*)Obj)->HasSlideJump = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_HasSlideJump = { "HasSlideJump", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPlatformerMovementComponent), &Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_HasSlideJump_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasSlideJump_MetaData), NewProp_HasSlideJump_MetaData) };
void Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_HasAirDash_SetBit(void* Obj)
{
	((UPlatformerMovementComponent*)Obj)->HasAirDash = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_HasAirDash = { "HasAirDash", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPlatformerMovementComponent), &Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_HasAirDash_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasAirDash_MetaData), NewProp_HasAirDash_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_maxJumpHoldTime = { "maxJumpHoldTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformerMovementComponent, maxJumpHoldTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxJumpHoldTime_MetaData), NewProp_maxJumpHoldTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_NewAirControl = { "NewAirControl", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformerMovementComponent, NewAirControl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewAirControl_MetaData), NewProp_NewAirControl_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_NewAirControlBoost = { "NewAirControlBoost", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformerMovementComponent, NewAirControlBoost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewAirControlBoost_MetaData), NewProp_NewAirControlBoost_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_NumberOfJumps = { "NumberOfJumps", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformerMovementComponent, NumberOfJumps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfJumps_MetaData), NewProp_NumberOfJumps_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_MinHeightToSlide = { "MinHeightToSlide", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformerMovementComponent, MinHeightToSlide), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinHeightToSlide_MetaData), NewProp_MinHeightToSlide_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_WallJumpOffHorizontalForce = { "WallJumpOffHorizontalForce", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformerMovementComponent, WallJumpOffHorizontalForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallJumpOffHorizontalForce_MetaData), NewProp_WallJumpOffHorizontalForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_WallJumpOffVerticalForce = { "WallJumpOffVerticalForce", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformerMovementComponent, WallJumpOffVerticalForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallJumpOffVerticalForce_MetaData), NewProp_WallJumpOffVerticalForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_MaxVerticalWallSlideSpeed = { "MaxVerticalWallSlideSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformerMovementComponent, MaxVerticalWallSlideSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxVerticalWallSlideSpeed_MetaData), NewProp_MaxVerticalWallSlideSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_WallSlideGravityCurve = { "WallSlideGravityCurve", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformerMovementComponent, WallSlideGravityCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallSlideGravityCurve_MetaData), NewProp_WallSlideGravityCurve_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_MovementModeString = { "MovementModeString", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformerMovementComponent, MovementModeString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementModeString_MetaData), NewProp_MovementModeString_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_WallJumpCoolDown = { "WallJumpCoolDown", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformerMovementComponent, WallJumpCoolDown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallJumpCoolDown_MetaData), NewProp_WallJumpCoolDown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_WallJumpVerticalBoost = { "WallJumpVerticalBoost", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformerMovementComponent, WallJumpVerticalBoost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallJumpVerticalBoost_MetaData), NewProp_WallJumpVerticalBoost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_WallJumpHorizontalBoost = { "WallJumpHorizontalBoost", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformerMovementComponent, WallJumpHorizontalBoost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallJumpHorizontalBoost_MetaData), NewProp_WallJumpHorizontalBoost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_JumpForce = { "JumpForce", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformerMovementComponent, JumpForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpForce_MetaData), NewProp_JumpForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_JumpImpulseForce = { "JumpImpulseForce", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformerMovementComponent, JumpImpulseForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpImpulseForce_MetaData), NewProp_JumpImpulseForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_JumpHoldTime = { "JumpHoldTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformerMovementComponent, JumpHoldTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpHoldTime_MetaData), NewProp_JumpHoldTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_WallJumpHoldTime = { "WallJumpHoldTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformerMovementComponent, WallJumpHoldTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallJumpHoldTime_MetaData), NewProp_WallJumpHoldTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_GravityAmount = { "GravityAmount", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformerMovementComponent, GravityAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GravityAmount_MetaData), NewProp_GravityAmount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_CayotoeTime = { "CayotoeTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformerMovementComponent, CayotoeTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CayotoeTime_MetaData), NewProp_CayotoeTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_DashTimelineComponent = { "DashTimelineComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformerMovementComponent, DashTimelineComponent), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DashTimelineComponent_MetaData), NewProp_DashTimelineComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_DashCurve = { "DashCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformerMovementComponent, DashCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DashCurve_MetaData), NewProp_DashCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_AirDashDistance = { "AirDashDistance", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformerMovementComponent, AirDashDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AirDashDistance_MetaData), NewProp_AirDashDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_AirDashLength = { "AirDashLength", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformerMovementComponent, AirDashLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AirDashLength_MetaData), NewProp_AirDashLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_AirDashCoolDown = { "AirDashCoolDown", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformerMovementComponent, AirDashCoolDown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AirDashCoolDown_MetaData), NewProp_AirDashCoolDown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_AirDashExitBoost = { "AirDashExitBoost", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformerMovementComponent, AirDashExitBoost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AirDashExitBoost_MetaData), NewProp_AirDashExitBoost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_MaxFrontCheckDistance = { "MaxFrontCheckDistance", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformerMovementComponent, MaxFrontCheckDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxFrontCheckDistance_MetaData), NewProp_MaxFrontCheckDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_MantleUpOffsetDistance = { "MantleUpOffsetDistance", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformerMovementComponent, MantleUpOffsetDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MantleUpOffsetDistance_MetaData), NewProp_MantleUpOffsetDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_MantleReachHeight = { "MantleReachHeight", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformerMovementComponent, MantleReachHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MantleReachHeight_MetaData), NewProp_MantleReachHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_MantleMinWallSteepnessAngle = { "MantleMinWallSteepnessAngle", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformerMovementComponent, MantleMinWallSteepnessAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MantleMinWallSteepnessAngle_MetaData), NewProp_MantleMinWallSteepnessAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_MantleMaxSurfaceAngle = { "MantleMaxSurfaceAngle", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformerMovementComponent, MantleMaxSurfaceAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MantleMaxSurfaceAngle_MetaData), NewProp_MantleMaxSurfaceAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_MantleMaxAlignmentAngle = { "MantleMaxAlignmentAngle", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformerMovementComponent, MantleMaxAlignmentAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MantleMaxAlignmentAngle_MetaData), NewProp_MantleMaxAlignmentAngle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_MantleAnim = { "MantleAnim", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformerMovementComponent, MantleAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MantleAnim_MetaData), NewProp_MantleAnim_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_MinSlideSpeed = { "MinSlideSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformerMovementComponent, MinSlideSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSlideSpeed_MetaData), NewProp_MinSlideSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_EnterSlideImpulse = { "EnterSlideImpulse", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformerMovementComponent, EnterSlideImpulse), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnterSlideImpulse_MetaData), NewProp_EnterSlideImpulse_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_SlideFriction = { "SlideFriction", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformerMovementComponent, SlideFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlideFriction_MetaData), NewProp_SlideFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_MasSlidingSeconds = { "MasSlidingSeconds", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformerMovementComponent, MasSlidingSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasSlidingSeconds_MetaData), NewProp_MasSlidingSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_SlideHalfHeight = { "SlideHalfHeight", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformerMovementComponent, SlideHalfHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlideHalfHeight_MetaData), NewProp_SlideHalfHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_SlideJumpTime = { "SlideJumpTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformerMovementComponent, SlideJumpTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlideJumpTime_MetaData), NewProp_SlideJumpTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_SlideHorizontalJumpForce = { "SlideHorizontalJumpForce", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformerMovementComponent, SlideHorizontalJumpForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlideHorizontalJumpForce_MetaData), NewProp_SlideHorizontalJumpForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_SlideVerticalJumpForce = { "SlideVerticalJumpForce", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformerMovementComponent, SlideVerticalJumpForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlideVerticalJumpForce_MetaData), NewProp_SlideVerticalJumpForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_SlideCooldown = { "SlideCooldown", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformerMovementComponent, SlideCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlideCooldown_MetaData), NewProp_SlideCooldown_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlatformerMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_HasSlide,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_HasWallJump,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_HasSlideJump,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_HasAirDash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_maxJumpHoldTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_NewAirControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_NewAirControlBoost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_NumberOfJumps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_MinHeightToSlide,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_WallJumpOffHorizontalForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_WallJumpOffVerticalForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_MaxVerticalWallSlideSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_WallSlideGravityCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_MovementModeString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_WallJumpCoolDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_WallJumpVerticalBoost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_WallJumpHorizontalBoost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_JumpForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_JumpImpulseForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_JumpHoldTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_WallJumpHoldTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_GravityAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_CayotoeTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_DashTimelineComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_DashCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_AirDashDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_AirDashLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_AirDashCoolDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_AirDashExitBoost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_MaxFrontCheckDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_MantleUpOffsetDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_MantleReachHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_MantleMinWallSteepnessAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_MantleMaxSurfaceAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_MantleMaxAlignmentAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_MantleAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_MinSlideSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_EnterSlideImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_SlideFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_MasSlidingSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_SlideHalfHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_SlideJumpTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_SlideHorizontalJumpForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_SlideVerticalJumpForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformerMovementComponent_Statics::NewProp_SlideCooldown,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformerMovementComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlatformerMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ResearchProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformerMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlatformerMovementComponent_Statics::ClassParams = {
	&UPlatformerMovementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlatformerMovementComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformerMovementComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformerMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlatformerMovementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlatformerMovementComponent()
{
	if (!Z_Registration_Info_UClass_UPlatformerMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlatformerMovementComponent.OuterSingleton, Z_Construct_UClass_UPlatformerMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlatformerMovementComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlatformerMovementComponent);
UPlatformerMovementComponent::~UPlatformerMovementComponent() {}
// ********** End Class UPlatformerMovementComponent ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_moehnj_Downloads_InteractionForGameDesignFinal_ResearchProject_Source_ResearchProject_Public_PlatformerMovementComponent_h__Script_ResearchProject_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECustomMovementMode_StaticEnum, TEXT("ECustomMovementMode"), &Z_Registration_Info_UEnum_ECustomMovementMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 660532628U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlatformerMovementComponent, UPlatformerMovementComponent::StaticClass, TEXT("UPlatformerMovementComponent"), &Z_Registration_Info_UClass_UPlatformerMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlatformerMovementComponent), 927847009U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_moehnj_Downloads_InteractionForGameDesignFinal_ResearchProject_Source_ResearchProject_Public_PlatformerMovementComponent_h__Script_ResearchProject_1963605261(TEXT("/Script/ResearchProject"),
	Z_CompiledInDeferFile_FID_Users_moehnj_Downloads_InteractionForGameDesignFinal_ResearchProject_Source_ResearchProject_Public_PlatformerMovementComponent_h__Script_ResearchProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_moehnj_Downloads_InteractionForGameDesignFinal_ResearchProject_Source_ResearchProject_Public_PlatformerMovementComponent_h__Script_ResearchProject_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_moehnj_Downloads_InteractionForGameDesignFinal_ResearchProject_Source_ResearchProject_Public_PlatformerMovementComponent_h__Script_ResearchProject_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_moehnj_Downloads_InteractionForGameDesignFinal_ResearchProject_Source_ResearchProject_Public_PlatformerMovementComponent_h__Script_ResearchProject_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
