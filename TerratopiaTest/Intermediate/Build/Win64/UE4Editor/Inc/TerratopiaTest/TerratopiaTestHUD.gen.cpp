// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TerratopiaTest/TerratopiaTestHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTerratopiaTestHUD() {}
// Cross Module References
	TERRATOPIATEST_API UClass* Z_Construct_UClass_ATerratopiaTestHUD_NoRegister();
	TERRATOPIATEST_API UClass* Z_Construct_UClass_ATerratopiaTestHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_TerratopiaTest();
// End Cross Module References
	void ATerratopiaTestHUD::StaticRegisterNativesATerratopiaTestHUD()
	{
	}
	UClass* Z_Construct_UClass_ATerratopiaTestHUD_NoRegister()
	{
		return ATerratopiaTestHUD::StaticClass();
	}
	struct Z_Construct_UClass_ATerratopiaTestHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATerratopiaTestHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_TerratopiaTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerratopiaTestHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "TerratopiaTestHUD.h" },
		{ "ModuleRelativePath", "TerratopiaTestHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATerratopiaTestHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATerratopiaTestHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATerratopiaTestHUD_Statics::ClassParams = {
		&ATerratopiaTestHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATerratopiaTestHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATerratopiaTestHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATerratopiaTestHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATerratopiaTestHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATerratopiaTestHUD, 714782602);
	template<> TERRATOPIATEST_API UClass* StaticClass<ATerratopiaTestHUD>()
	{
		return ATerratopiaTestHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATerratopiaTestHUD(Z_Construct_UClass_ATerratopiaTestHUD, &ATerratopiaTestHUD::StaticClass, TEXT("/Script/TerratopiaTest"), TEXT("ATerratopiaTestHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATerratopiaTestHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
