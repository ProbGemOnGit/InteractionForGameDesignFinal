// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPPSaveGame.h"

#ifdef RESEARCHPROJECT_CPPSaveGame_generated_h
#error "CPPSaveGame.generated.h already included, missing '#pragma once' in CPPSaveGame.h"
#endif
#define RESEARCHPROJECT_CPPSaveGame_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCPPSaveGame *************************************************************
#define FID_ResearchProject_Source_ResearchProject_Public_CPPSaveGame_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWriteToFile); \
	DECLARE_FUNCTION(execReadFromFile);


RESEARCHPROJECT_API UClass* Z_Construct_UClass_UCPPSaveGame_NoRegister();

#define FID_ResearchProject_Source_ResearchProject_Public_CPPSaveGame_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCPPSaveGame(); \
	friend struct Z_Construct_UClass_UCPPSaveGame_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RESEARCHPROJECT_API UClass* Z_Construct_UClass_UCPPSaveGame_NoRegister(); \
public: \
	DECLARE_CLASS2(UCPPSaveGame, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ResearchProject"), Z_Construct_UClass_UCPPSaveGame_NoRegister) \
	DECLARE_SERIALIZER(UCPPSaveGame)


#define FID_ResearchProject_Source_ResearchProject_Public_CPPSaveGame_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCPPSaveGame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCPPSaveGame(UCPPSaveGame&&) = delete; \
	UCPPSaveGame(const UCPPSaveGame&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCPPSaveGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCPPSaveGame); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCPPSaveGame) \
	NO_API virtual ~UCPPSaveGame();


#define FID_ResearchProject_Source_ResearchProject_Public_CPPSaveGame_h_12_PROLOG
#define FID_ResearchProject_Source_ResearchProject_Public_CPPSaveGame_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ResearchProject_Source_ResearchProject_Public_CPPSaveGame_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ResearchProject_Source_ResearchProject_Public_CPPSaveGame_h_15_INCLASS_NO_PURE_DECLS \
	FID_ResearchProject_Source_ResearchProject_Public_CPPSaveGame_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCPPSaveGame;

// ********** End Class UCPPSaveGame ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ResearchProject_Source_ResearchProject_Public_CPPSaveGame_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
