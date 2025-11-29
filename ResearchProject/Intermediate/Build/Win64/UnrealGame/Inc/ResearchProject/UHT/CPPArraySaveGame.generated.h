// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPPArraySaveGame.h"

#ifdef RESEARCHPROJECT_CPPArraySaveGame_generated_h
#error "CPPArraySaveGame.generated.h already included, missing '#pragma once' in CPPArraySaveGame.h"
#endif
#define RESEARCHPROJECT_CPPArraySaveGame_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCPPArraySaveGame ********************************************************
#define FID_Users_moehnj_Downloads_GameDeisgn_ResearchProject_Source_ResearchProject_Public_CPPArraySaveGame_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSaveArrayToFile);


RESEARCHPROJECT_API UClass* Z_Construct_UClass_UCPPArraySaveGame_NoRegister();

#define FID_Users_moehnj_Downloads_GameDeisgn_ResearchProject_Source_ResearchProject_Public_CPPArraySaveGame_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCPPArraySaveGame(); \
	friend struct Z_Construct_UClass_UCPPArraySaveGame_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RESEARCHPROJECT_API UClass* Z_Construct_UClass_UCPPArraySaveGame_NoRegister(); \
public: \
	DECLARE_CLASS2(UCPPArraySaveGame, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ResearchProject"), Z_Construct_UClass_UCPPArraySaveGame_NoRegister) \
	DECLARE_SERIALIZER(UCPPArraySaveGame)


#define FID_Users_moehnj_Downloads_GameDeisgn_ResearchProject_Source_ResearchProject_Public_CPPArraySaveGame_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCPPArraySaveGame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCPPArraySaveGame(UCPPArraySaveGame&&) = delete; \
	UCPPArraySaveGame(const UCPPArraySaveGame&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCPPArraySaveGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCPPArraySaveGame); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCPPArraySaveGame) \
	NO_API virtual ~UCPPArraySaveGame();


#define FID_Users_moehnj_Downloads_GameDeisgn_ResearchProject_Source_ResearchProject_Public_CPPArraySaveGame_h_12_PROLOG
#define FID_Users_moehnj_Downloads_GameDeisgn_ResearchProject_Source_ResearchProject_Public_CPPArraySaveGame_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_moehnj_Downloads_GameDeisgn_ResearchProject_Source_ResearchProject_Public_CPPArraySaveGame_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_moehnj_Downloads_GameDeisgn_ResearchProject_Source_ResearchProject_Public_CPPArraySaveGame_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_moehnj_Downloads_GameDeisgn_ResearchProject_Source_ResearchProject_Public_CPPArraySaveGame_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCPPArraySaveGame;

// ********** End Class UCPPArraySaveGame **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_moehnj_Downloads_GameDeisgn_ResearchProject_Source_ResearchProject_Public_CPPArraySaveGame_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
