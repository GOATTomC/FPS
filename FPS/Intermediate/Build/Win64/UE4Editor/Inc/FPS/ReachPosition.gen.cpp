// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Tasks/ReachPosition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReachPosition() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_AReachPosition_NoRegister();
	FPS_API UClass* Z_Construct_UClass_AReachPosition();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPS();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UTask_NoRegister();
// End Cross Module References
	void AReachPosition::StaticRegisterNativesAReachPosition()
	{
	}
	UClass* Z_Construct_UClass_AReachPosition_NoRegister()
	{
		return AReachPosition::StaticClass();
	}
	UClass* Z_Construct_UClass_AReachPosition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_FPS,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Tasks/ReachPosition.h" },
				{ "ModuleRelativePath", "Tasks/ReachPosition.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AcceptanceDistance_MetaData[] = {
				{ "Category", "ReachPosition" },
				{ "ModuleRelativePath", "Tasks/ReachPosition.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_AcceptanceDistance = { UE4CodeGen_Private::EPropertyClass::Float, "m_AcceptanceDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AReachPosition, m_AcceptanceDistance), METADATA_PARAMS(NewProp_m_AcceptanceDistance_MetaData, ARRAY_COUNT(NewProp_m_AcceptanceDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_p_Destination_MetaData[] = {
				{ "Category", "ReachPosition" },
				{ "ModuleRelativePath", "Tasks/ReachPosition.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_p_Destination = { UE4CodeGen_Private::EPropertyClass::Object, "p_Destination", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AReachPosition, p_Destination), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_p_Destination_MetaData, ARRAY_COUNT(NewProp_p_Destination_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_TaskText_MetaData[] = {
				{ "Category", "ReachPosition" },
				{ "ModuleRelativePath", "Tasks/ReachPosition.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_TaskText = { UE4CodeGen_Private::EPropertyClass::Str, "m_TaskText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AReachPosition, m_TaskText), METADATA_PARAMS(NewProp_m_TaskText_MetaData, ARRAY_COUNT(NewProp_m_TaskText_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_p_EndBehaviour_MetaData[] = {
				{ "Category", "ReachPosition" },
				{ "ModuleRelativePath", "Tasks/ReachPosition.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_p_EndBehaviour = { UE4CodeGen_Private::EPropertyClass::Object, "p_EndBehaviour", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AReachPosition, p_EndBehaviour), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_p_EndBehaviour_MetaData, ARRAY_COUNT(NewProp_p_EndBehaviour_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_p_BeginBehaviour_MetaData[] = {
				{ "Category", "ReachPosition" },
				{ "ModuleRelativePath", "Tasks/ReachPosition.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_p_BeginBehaviour = { UE4CodeGen_Private::EPropertyClass::Object, "p_BeginBehaviour", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AReachPosition, p_BeginBehaviour), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_p_BeginBehaviour_MetaData, ARRAY_COUNT(NewProp_p_BeginBehaviour_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_AcceptanceDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_p_Destination,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_TaskText,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_p_EndBehaviour,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_p_BeginBehaviour,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UTask_NoRegister, (int32)VTABLE_OFFSET(AReachPosition, ITask), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AReachPosition>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AReachPosition::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				InterfaceParams, ARRAY_COUNT(InterfaceParams),
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AReachPosition, 4259433478);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AReachPosition(Z_Construct_UClass_AReachPosition, &AReachPosition::StaticClass, TEXT("/Script/FPS"), TEXT("AReachPosition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AReachPosition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif