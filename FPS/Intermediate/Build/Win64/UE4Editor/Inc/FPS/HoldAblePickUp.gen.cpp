// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Level/HoldAblePickUp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoldAblePickUp() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_AHoldAblePickUp_NoRegister();
	FPS_API UClass* Z_Construct_UClass_AHoldAblePickUp();
	FPS_API UClass* Z_Construct_UClass_ABasicPickup();
	UPackage* Z_Construct_UPackage__Script_FPS();
// End Cross Module References
	void AHoldAblePickUp::StaticRegisterNativesAHoldAblePickUp()
	{
	}
	UClass* Z_Construct_UClass_AHoldAblePickUp_NoRegister()
	{
		return AHoldAblePickUp::StaticClass();
	}
	UClass* Z_Construct_UClass_AHoldAblePickUp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ABasicPickup,
				(UObject* (*)())Z_Construct_UPackage__Script_FPS,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Level/HoldAblePickUp.h" },
				{ "ModuleRelativePath", "Level/HoldAblePickUp.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AHoldAblePickUp>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AHoldAblePickUp::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHoldAblePickUp, 1000631613);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHoldAblePickUp(Z_Construct_UClass_AHoldAblePickUp, &AHoldAblePickUp::StaticClass, TEXT("/Script/FPS"), TEXT("AHoldAblePickUp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHoldAblePickUp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif