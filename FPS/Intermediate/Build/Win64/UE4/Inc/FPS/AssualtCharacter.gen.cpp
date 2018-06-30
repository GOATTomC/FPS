// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AssualtCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssualtCharacter() {}
// Cross Module References
	FPS_API UFunction* Z_Construct_UDelegateFunction_AAssualtCharacter_FireDelegate__DelegateSignature();
	FPS_API UClass* Z_Construct_UClass_AAssualtCharacter();
	FPS_API UClass* Z_Construct_UClass_AAssualtCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_FPS();
	FPS_API UFunction* Z_Construct_UFunction_AAssualtCharacter_GetIsAiming();
	FPS_API UFunction* Z_Construct_UFunction_AAssualtCharacter_OnHearNoise();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	FPS_API UFunction* Z_Construct_UFunction_AAssualtCharacter_OnSeePlayer();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UIDamageAble_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_AAssualtCharacter_FireDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "AssualtCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAssualtCharacter, "FireDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void AAssualtCharacter::StaticRegisterNativesAAssualtCharacter()
	{
		UClass* Class = AAssualtCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIsAiming", &AAssualtCharacter::execGetIsAiming },
			{ "OnHearNoise", &AAssualtCharacter::execOnHearNoise },
			{ "OnSeePlayer", &AAssualtCharacter::execOnSeePlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AAssualtCharacter_GetIsAiming()
	{
		struct AssualtCharacter_eventGetIsAiming_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AssualtCharacter_eventGetIsAiming_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AssualtCharacter_eventGetIsAiming_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "AssualtCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAssualtCharacter, "GetIsAiming", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AssualtCharacter_eventGetIsAiming_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAssualtCharacter_OnHearNoise()
	{
		struct AssualtCharacter_eventOnHearNoise_Parms
		{
			APawn* Pawn;
			FVector Location;
			float Volume;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume = { UE4CodeGen_Private::EPropertyClass::Float, "Volume", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AssualtCharacter_eventOnHearNoise_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AssualtCharacter_eventOnHearNoise_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Location_MetaData, ARRAY_COUNT(NewProp_Location_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn = { UE4CodeGen_Private::EPropertyClass::Object, "Pawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AssualtCharacter_eventOnHearNoise_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Volume,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Pawn,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "AssualtCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAssualtCharacter, "OnHearNoise", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00C20401, sizeof(AssualtCharacter_eventOnHearNoise_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAssualtCharacter_OnSeePlayer()
	{
		struct AssualtCharacter_eventOnSeePlayer_Parms
		{
			APawn* Pawn;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn = { UE4CodeGen_Private::EPropertyClass::Object, "Pawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AssualtCharacter_eventOnSeePlayer_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Pawn,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "AssualtCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAssualtCharacter, "OnSeePlayer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(AssualtCharacter_eventOnSeePlayer_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAssualtCharacter_NoRegister()
	{
		return AAssualtCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AAssualtCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_FPS,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UDelegateFunction_AAssualtCharacter_FireDelegate__DelegateSignature, "FireDelegate__DelegateSignature" }, // 910191884
				{ &Z_Construct_UFunction_AAssualtCharacter_GetIsAiming, "GetIsAiming" }, // 1527717276
				{ &Z_Construct_UFunction_AAssualtCharacter_OnHearNoise, "OnHearNoise" }, // 1541885905
				{ &Z_Construct_UFunction_AAssualtCharacter_OnSeePlayer, "OnSeePlayer" }, // 2473920101
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "AssualtCharacter.h" },
				{ "ModuleRelativePath", "AssualtCharacter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_p_AudioComponent_MetaData[] = {
				{ "Category", "AssualtCharacter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "AssualtCharacter.h" },
				{ "ToolTip", "Weapon Audio" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_p_AudioComponent = { UE4CodeGen_Private::EPropertyClass::Object, "p_AudioComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000090009, 1, nullptr, STRUCT_OFFSET(AAssualtCharacter, p_AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(NewProp_p_AudioComponent_MetaData, ARRAY_COUNT(NewProp_p_AudioComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_FireRate_MetaData[] = {
				{ "Category", "Shooting" },
				{ "ModuleRelativePath", "AssualtCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_FireRate = { UE4CodeGen_Private::EPropertyClass::Float, "m_FireRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AAssualtCharacter, m_FireRate), METADATA_PARAMS(NewProp_m_FireRate_MetaData, ARRAY_COUNT(NewProp_m_FireRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_FollowPath_MetaData[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "AssualtCharacter.h" },
			};
#endif
			auto NewProp_m_FollowPath_SetBit = [](void* Obj){ ((AAssualtCharacter*)Obj)->m_FollowPath = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_FollowPath = { UE4CodeGen_Private::EPropertyClass::Bool, "m_FollowPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AAssualtCharacter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_m_FollowPath_SetBit)>::SetBit, METADATA_PARAMS(NewProp_m_FollowPath_MetaData, ARRAY_COUNT(NewProp_m_FollowPath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnSensingComponent_MetaData[] = {
				{ "Category", "AssualtCharacter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "AssualtCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnSensingComponent = { UE4CodeGen_Private::EPropertyClass::Object, "PawnSensingComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000090009, 1, nullptr, STRUCT_OFFSET(AAssualtCharacter, PawnSensingComponent), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(NewProp_PawnSensingComponent_MetaData, ARRAY_COUNT(NewProp_PawnSensingComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFire_MetaData[] = {
				{ "Category", "Shooting" },
				{ "ModuleRelativePath", "AssualtCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFire = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnFire", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AAssualtCharacter, OnFire), Z_Construct_UDelegateFunction_AAssualtCharacter_FireDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnFire_MetaData, ARRAY_COUNT(NewProp_OnFire_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Waypoints_MetaData[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "AssualtCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Waypoints = { UE4CodeGen_Private::EPropertyClass::Array, "Waypoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AAssualtCharacter, Waypoints), METADATA_PARAMS(NewProp_Waypoints_MetaData, ARRAY_COUNT(NewProp_Waypoints_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Waypoints_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Waypoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blackboard_MetaData[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "AssualtCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blackboard = { UE4CodeGen_Private::EPropertyClass::Object, "Blackboard", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(AAssualtCharacter, Blackboard), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(NewProp_Blackboard_MetaData, ARRAY_COUNT(NewProp_Blackboard_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviourTree_MetaData[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "AssualtCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviourTree = { UE4CodeGen_Private::EPropertyClass::Object, "BehaviourTree", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(AAssualtCharacter, BehaviourTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(NewProp_BehaviourTree_MetaData, ARRAY_COUNT(NewProp_BehaviourTree_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_p_AudioComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_FireRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_FollowPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PawnSensingComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnFire,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Waypoints,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Waypoints_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Blackboard,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BehaviourTree,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UIDamageAble_NoRegister, (int32)VTABLE_OFFSET(AAssualtCharacter, IIDamageAble), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAssualtCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAssualtCharacter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AAssualtCharacter, 124064854);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAssualtCharacter(Z_Construct_UClass_AAssualtCharacter, &AAssualtCharacter::StaticClass, TEXT("/Script/FPS"), TEXT("AAssualtCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAssualtCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif