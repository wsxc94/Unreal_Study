// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "serverTest/serverTestGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeserverTestGameMode() {}
// Cross Module References
	SERVERTEST_API UClass* Z_Construct_UClass_AserverTestGameMode_NoRegister();
	SERVERTEST_API UClass* Z_Construct_UClass_AserverTestGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_serverTest();
// End Cross Module References
	void AserverTestGameMode::StaticRegisterNativesAserverTestGameMode()
	{
	}
	UClass* Z_Construct_UClass_AserverTestGameMode_NoRegister()
	{
		return AserverTestGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AserverTestGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AserverTestGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_serverTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AserverTestGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "serverTestGameMode.h" },
		{ "ModuleRelativePath", "serverTestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AserverTestGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AserverTestGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AserverTestGameMode_Statics::ClassParams = {
		&AserverTestGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AserverTestGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AserverTestGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AserverTestGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AserverTestGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AserverTestGameMode, 3059625328);
	template<> SERVERTEST_API UClass* StaticClass<AserverTestGameMode>()
	{
		return AserverTestGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AserverTestGameMode(Z_Construct_UClass_AserverTestGameMode, &AserverTestGameMode::StaticClass, TEXT("/Script/serverTest"), TEXT("AserverTestGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AserverTestGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
