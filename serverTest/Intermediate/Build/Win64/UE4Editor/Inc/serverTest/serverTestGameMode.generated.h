// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SERVERTEST_serverTestGameMode_generated_h
#error "serverTestGameMode.generated.h already included, missing '#pragma once' in serverTestGameMode.h"
#endif
#define SERVERTEST_serverTestGameMode_generated_h

#define serverTest_Source_serverTest_serverTestGameMode_h_12_SPARSE_DATA
#define serverTest_Source_serverTest_serverTestGameMode_h_12_RPC_WRAPPERS
#define serverTest_Source_serverTest_serverTestGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define serverTest_Source_serverTest_serverTestGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAserverTestGameMode(); \
	friend struct Z_Construct_UClass_AserverTestGameMode_Statics; \
public: \
	DECLARE_CLASS(AserverTestGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/serverTest"), SERVERTEST_API) \
	DECLARE_SERIALIZER(AserverTestGameMode)


#define serverTest_Source_serverTest_serverTestGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAserverTestGameMode(); \
	friend struct Z_Construct_UClass_AserverTestGameMode_Statics; \
public: \
	DECLARE_CLASS(AserverTestGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/serverTest"), SERVERTEST_API) \
	DECLARE_SERIALIZER(AserverTestGameMode)


#define serverTest_Source_serverTest_serverTestGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SERVERTEST_API AserverTestGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AserverTestGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SERVERTEST_API, AserverTestGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AserverTestGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SERVERTEST_API AserverTestGameMode(AserverTestGameMode&&); \
	SERVERTEST_API AserverTestGameMode(const AserverTestGameMode&); \
public:


#define serverTest_Source_serverTest_serverTestGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SERVERTEST_API AserverTestGameMode(AserverTestGameMode&&); \
	SERVERTEST_API AserverTestGameMode(const AserverTestGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SERVERTEST_API, AserverTestGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AserverTestGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AserverTestGameMode)


#define serverTest_Source_serverTest_serverTestGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define serverTest_Source_serverTest_serverTestGameMode_h_9_PROLOG
#define serverTest_Source_serverTest_serverTestGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	serverTest_Source_serverTest_serverTestGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	serverTest_Source_serverTest_serverTestGameMode_h_12_SPARSE_DATA \
	serverTest_Source_serverTest_serverTestGameMode_h_12_RPC_WRAPPERS \
	serverTest_Source_serverTest_serverTestGameMode_h_12_INCLASS \
	serverTest_Source_serverTest_serverTestGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define serverTest_Source_serverTest_serverTestGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	serverTest_Source_serverTest_serverTestGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	serverTest_Source_serverTest_serverTestGameMode_h_12_SPARSE_DATA \
	serverTest_Source_serverTest_serverTestGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	serverTest_Source_serverTest_serverTestGameMode_h_12_INCLASS_NO_PURE_DECLS \
	serverTest_Source_serverTest_serverTestGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SERVERTEST_API UClass* StaticClass<class AserverTestGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID serverTest_Source_serverTest_serverTestGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
