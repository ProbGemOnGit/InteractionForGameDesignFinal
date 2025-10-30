// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ResearchProjectCharacter.h"

#ifdef RESEARCHPROJECT_ResearchProjectCharacter_generated_h
#error "ResearchProjectCharacter.generated.h already included, missing '#pragma once' in ResearchProjectCharacter.h"
#endif
#define RESEARCHPROJECT_ResearchProjectCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AResearchProjectCharacter ************************************************
#define FID_Users_moehnj_Downloads_InteractionForGameDesignFinal_ResearchProject_Source_ResearchProject_ResearchProjectCharacter_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoMove);


RESEARCHPROJECT_API UClass* Z_Construct_UClass_AResearchProjectCharacter_NoRegister();

#define FID_Users_moehnj_Downloads_InteractionForGameDesignFinal_ResearchProject_Source_ResearchProject_ResearchProjectCharacter_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAResearchProjectCharacter(); \
	friend struct Z_Construct_UClass_AResearchProjectCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RESEARCHPROJECT_API UClass* Z_Construct_UClass_AResearchProjectCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AResearchProjectCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ResearchProject"), Z_Construct_UClass_AResearchProjectCharacter_NoRegister) \
	DECLARE_SERIALIZER(AResearchProjectCharacter)


#define FID_Users_moehnj_Downloads_InteractionForGameDesignFinal_ResearchProject_Source_ResearchProject_ResearchProjectCharacter_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AResearchProjectCharacter(AResearchProjectCharacter&&) = delete; \
	AResearchProjectCharacter(const AResearchProjectCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AResearchProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AResearchProjectCharacter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AResearchProjectCharacter) \
	NO_API virtual ~AResearchProjectCharacter();


#define FID_Users_moehnj_Downloads_InteractionForGameDesignFinal_ResearchProject_Source_ResearchProject_ResearchProjectCharacter_h_25_PROLOG
#define FID_Users_moehnj_Downloads_InteractionForGameDesignFinal_ResearchProject_Source_ResearchProject_ResearchProjectCharacter_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_moehnj_Downloads_InteractionForGameDesignFinal_ResearchProject_Source_ResearchProject_ResearchProjectCharacter_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_moehnj_Downloads_InteractionForGameDesignFinal_ResearchProject_Source_ResearchProject_ResearchProjectCharacter_h_28_INCLASS_NO_PURE_DECLS \
	FID_Users_moehnj_Downloads_InteractionForGameDesignFinal_ResearchProject_Source_ResearchProject_ResearchProjectCharacter_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AResearchProjectCharacter;

// ********** End Class AResearchProjectCharacter **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_moehnj_Downloads_InteractionForGameDesignFinal_ResearchProject_Source_ResearchProject_ResearchProjectCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
