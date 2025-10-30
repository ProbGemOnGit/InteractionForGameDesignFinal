// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlatformerMovementComponent.h"

#ifdef RESEARCHPROJECT_PlatformerMovementComponent_generated_h
#error "PlatformerMovementComponent.generated.h already included, missing '#pragma once' in PlatformerMovementComponent.h"
#endif
#define RESEARCHPROJECT_PlatformerMovementComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPlatformerMovementComponent *********************************************
#define FID_Users_moehnj_Downloads_InteractionForGameDesignFinal_ResearchProject_Source_ResearchProject_Public_PlatformerMovementComponent_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDashStart); \
	DECLARE_FUNCTION(execDashTimelineFinished); \
	DECLARE_FUNCTION(execDashTimelineUpdate); \
	DECLARE_FUNCTION(execIsDashing); \
	DECLARE_FUNCTION(execIsSliding); \
	DECLARE_FUNCTION(execIsWallSliding); \
	DECLARE_FUNCTION(execIsWalk); \
	DECLARE_FUNCTION(execGetSpeed);


RESEARCHPROJECT_API UClass* Z_Construct_UClass_UPlatformerMovementComponent_NoRegister();

#define FID_Users_moehnj_Downloads_InteractionForGameDesignFinal_ResearchProject_Source_ResearchProject_Public_PlatformerMovementComponent_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlatformerMovementComponent(); \
	friend struct Z_Construct_UClass_UPlatformerMovementComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RESEARCHPROJECT_API UClass* Z_Construct_UClass_UPlatformerMovementComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPlatformerMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ResearchProject"), Z_Construct_UClass_UPlatformerMovementComponent_NoRegister) \
	DECLARE_SERIALIZER(UPlatformerMovementComponent)


#define FID_Users_moehnj_Downloads_InteractionForGameDesignFinal_ResearchProject_Source_ResearchProject_Public_PlatformerMovementComponent_h_41_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPlatformerMovementComponent(UPlatformerMovementComponent&&) = delete; \
	UPlatformerMovementComponent(const UPlatformerMovementComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlatformerMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlatformerMovementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlatformerMovementComponent) \
	NO_API virtual ~UPlatformerMovementComponent();


#define FID_Users_moehnj_Downloads_InteractionForGameDesignFinal_ResearchProject_Source_ResearchProject_Public_PlatformerMovementComponent_h_38_PROLOG
#define FID_Users_moehnj_Downloads_InteractionForGameDesignFinal_ResearchProject_Source_ResearchProject_Public_PlatformerMovementComponent_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_moehnj_Downloads_InteractionForGameDesignFinal_ResearchProject_Source_ResearchProject_Public_PlatformerMovementComponent_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_moehnj_Downloads_InteractionForGameDesignFinal_ResearchProject_Source_ResearchProject_Public_PlatformerMovementComponent_h_41_INCLASS_NO_PURE_DECLS \
	FID_Users_moehnj_Downloads_InteractionForGameDesignFinal_ResearchProject_Source_ResearchProject_Public_PlatformerMovementComponent_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPlatformerMovementComponent;

// ********** End Class UPlatformerMovementComponent ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_moehnj_Downloads_InteractionForGameDesignFinal_ResearchProject_Source_ResearchProject_Public_PlatformerMovementComponent_h

// ********** Begin Enum ECustomMovementMode *******************************************************
#define FOREACH_ENUM_ECUSTOMMOVEMENTMODE(op) \
	op(CMOVE_None) \
	op(CMOVE_WallSlide) \
	op(CMOVE_Slide) \
	op(CMOVE_Jumping) \
	op(CMOVE_AirDash) 
// ********** End Enum ECustomMovementMode *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
