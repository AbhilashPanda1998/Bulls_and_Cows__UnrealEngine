// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BULLCOWGAME_Terminal_generated_h
#error "Terminal.generated.h already included, missing '#pragma once' in Terminal.h"
#endif
#define BULLCOWGAME_Terminal_generated_h

#define BullsAndCows_Source_BullCowGame_Console_Terminal_h_10_DELEGATE \
struct _Script_BullCowGame_eventTextUpdateSignature_Parms \
{ \
	FString Text; \
}; \
static inline void FTextUpdateSignature_DelegateWrapper(const FMulticastScriptDelegate& TextUpdateSignature, const FString& Text) \
{ \
	_Script_BullCowGame_eventTextUpdateSignature_Parms Parms; \
	Parms.Text=Text; \
	TextUpdateSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define BullsAndCows_Source_BullCowGame_Console_Terminal_h_17_SPARSE_DATA
#define BullsAndCows_Source_BullCowGame_Console_Terminal_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeactivateTerminal); \
	DECLARE_FUNCTION(execActivateTerminal); \
	DECLARE_FUNCTION(execGetScreenText);


#define BullsAndCows_Source_BullCowGame_Console_Terminal_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeactivateTerminal); \
	DECLARE_FUNCTION(execActivateTerminal); \
	DECLARE_FUNCTION(execGetScreenText);


#define BullsAndCows_Source_BullCowGame_Console_Terminal_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTerminal(); \
	friend struct Z_Construct_UClass_UTerminal_Statics; \
public: \
	DECLARE_CLASS(UTerminal, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BullCowGame"), NO_API) \
	DECLARE_SERIALIZER(UTerminal)


#define BullsAndCows_Source_BullCowGame_Console_Terminal_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUTerminal(); \
	friend struct Z_Construct_UClass_UTerminal_Statics; \
public: \
	DECLARE_CLASS(UTerminal, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BullCowGame"), NO_API) \
	DECLARE_SERIALIZER(UTerminal)


#define BullsAndCows_Source_BullCowGame_Console_Terminal_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTerminal(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTerminal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTerminal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTerminal); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTerminal(UTerminal&&); \
	NO_API UTerminal(const UTerminal&); \
public:


#define BullsAndCows_Source_BullCowGame_Console_Terminal_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTerminal(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTerminal(UTerminal&&); \
	NO_API UTerminal(const UTerminal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTerminal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTerminal); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTerminal)


#define BullsAndCows_Source_BullCowGame_Console_Terminal_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxLines() { return STRUCT_OFFSET(UTerminal, MaxLines); } \
	FORCEINLINE static uint32 __PPO__MaxColumns() { return STRUCT_OFFSET(UTerminal, MaxColumns); }


#define BullsAndCows_Source_BullCowGame_Console_Terminal_h_14_PROLOG
#define BullsAndCows_Source_BullCowGame_Console_Terminal_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BullsAndCows_Source_BullCowGame_Console_Terminal_h_17_PRIVATE_PROPERTY_OFFSET \
	BullsAndCows_Source_BullCowGame_Console_Terminal_h_17_SPARSE_DATA \
	BullsAndCows_Source_BullCowGame_Console_Terminal_h_17_RPC_WRAPPERS \
	BullsAndCows_Source_BullCowGame_Console_Terminal_h_17_INCLASS \
	BullsAndCows_Source_BullCowGame_Console_Terminal_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BullsAndCows_Source_BullCowGame_Console_Terminal_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BullsAndCows_Source_BullCowGame_Console_Terminal_h_17_PRIVATE_PROPERTY_OFFSET \
	BullsAndCows_Source_BullCowGame_Console_Terminal_h_17_SPARSE_DATA \
	BullsAndCows_Source_BullCowGame_Console_Terminal_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	BullsAndCows_Source_BullCowGame_Console_Terminal_h_17_INCLASS_NO_PURE_DECLS \
	BullsAndCows_Source_BullCowGame_Console_Terminal_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BULLCOWGAME_API UClass* StaticClass<class UTerminal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BullsAndCows_Source_BullCowGame_Console_Terminal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
