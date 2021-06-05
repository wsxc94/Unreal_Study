// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST_testCharacter_generated_h
#error "testCharacter.generated.h already included, missing '#pragma once' in testCharacter.h"
#endif
#define TEST_testCharacter_generated_h

#define test_Source_test_testCharacter_h_12_SPARSE_DATA
#define test_Source_test_testCharacter_h_12_RPC_WRAPPERS
#define test_Source_test_testCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define test_Source_test_testCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAtestCharacter(); \
	friend struct Z_Construct_UClass_AtestCharacter_Statics; \
public: \
	DECLARE_CLASS(AtestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/test"), NO_API) \
	DECLARE_SERIALIZER(AtestCharacter)


#define test_Source_test_testCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAtestCharacter(); \
	friend struct Z_Construct_UClass_AtestCharacter_Statics; \
public: \
	DECLARE_CLASS(AtestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/test"), NO_API) \
	DECLARE_SERIALIZER(AtestCharacter)


#define test_Source_test_testCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AtestCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AtestCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AtestCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AtestCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AtestCharacter(AtestCharacter&&); \
	NO_API AtestCharacter(const AtestCharacter&); \
public:


#define test_Source_test_testCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AtestCharacter(AtestCharacter&&); \
	NO_API AtestCharacter(const AtestCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AtestCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AtestCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AtestCharacter)


#define test_Source_test_testCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AtestCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AtestCharacter, FollowCamera); }


#define test_Source_test_testCharacter_h_9_PROLOG
#define test_Source_test_testCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	test_Source_test_testCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	test_Source_test_testCharacter_h_12_SPARSE_DATA \
	test_Source_test_testCharacter_h_12_RPC_WRAPPERS \
	test_Source_test_testCharacter_h_12_INCLASS \
	test_Source_test_testCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define test_Source_test_testCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	test_Source_test_testCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	test_Source_test_testCharacter_h_12_SPARSE_DATA \
	test_Source_test_testCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	test_Source_test_testCharacter_h_12_INCLASS_NO_PURE_DECLS \
	test_Source_test_testCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST_API UClass* StaticClass<class AtestCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID test_Source_test_testCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
