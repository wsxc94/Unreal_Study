// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SERVERTEST_serverTestCharacter_generated_h
#error "serverTestCharacter.generated.h already included, missing '#pragma once' in serverTestCharacter.h"
#endif
#define SERVERTEST_serverTestCharacter_generated_h

#define serverTest_Source_serverTest_serverTestCharacter_h_12_SPARSE_DATA
#define serverTest_Source_serverTest_serverTestCharacter_h_12_RPC_WRAPPERS
#define serverTest_Source_serverTest_serverTestCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define serverTest_Source_serverTest_serverTestCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAserverTestCharacter(); \
	friend struct Z_Construct_UClass_AserverTestCharacter_Statics; \
public: \
	DECLARE_CLASS(AserverTestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/serverTest"), NO_API) \
	DECLARE_SERIALIZER(AserverTestCharacter)


#define serverTest_Source_serverTest_serverTestCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAserverTestCharacter(); \
	friend struct Z_Construct_UClass_AserverTestCharacter_Statics; \
public: \
	DECLARE_CLASS(AserverTestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/serverTest"), NO_API) \
	DECLARE_SERIALIZER(AserverTestCharacter)


#define serverTest_Source_serverTest_serverTestCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AserverTestCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AserverTestCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AserverTestCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AserverTestCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AserverTestCharacter(AserverTestCharacter&&); \
	NO_API AserverTestCharacter(const AserverTestCharacter&); \
public:


#define serverTest_Source_serverTest_serverTestCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AserverTestCharacter(AserverTestCharacter&&); \
	NO_API AserverTestCharacter(const AserverTestCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AserverTestCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AserverTestCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AserverTestCharacter)


#define serverTest_Source_serverTest_serverTestCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AserverTestCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AserverTestCharacter, FollowCamera); }


#define serverTest_Source_serverTest_serverTestCharacter_h_9_PROLOG
#define serverTest_Source_serverTest_serverTestCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	serverTest_Source_serverTest_serverTestCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	serverTest_Source_serverTest_serverTestCharacter_h_12_SPARSE_DATA \
	serverTest_Source_serverTest_serverTestCharacter_h_12_RPC_WRAPPERS \
	serverTest_Source_serverTest_serverTestCharacter_h_12_INCLASS \
	serverTest_Source_serverTest_serverTestCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define serverTest_Source_serverTest_serverTestCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	serverTest_Source_serverTest_serverTestCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	serverTest_Source_serverTest_serverTestCharacter_h_12_SPARSE_DATA \
	serverTest_Source_serverTest_serverTestCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	serverTest_Source_serverTest_serverTestCharacter_h_12_INCLASS_NO_PURE_DECLS \
	serverTest_Source_serverTest_serverTestCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SERVERTEST_API UClass* StaticClass<class AserverTestCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID serverTest_Source_serverTest_serverTestCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
