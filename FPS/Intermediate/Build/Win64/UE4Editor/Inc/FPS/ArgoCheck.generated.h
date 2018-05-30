// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_ArgoCheck_generated_h
#error "ArgoCheck.generated.h already included, missing '#pragma once' in ArgoCheck.h"
#endif
#define FPS_ArgoCheck_generated_h

#define FPS_Source_FPS_ArgoCheck_h_15_RPC_WRAPPERS
#define FPS_Source_FPS_ArgoCheck_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FPS_Source_FPS_ArgoCheck_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArgoCheck(); \
	friend FPS_API class UClass* Z_Construct_UClass_UArgoCheck(); \
public: \
	DECLARE_CLASS(UArgoCheck, UBTService, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UArgoCheck) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FPS_Source_FPS_ArgoCheck_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUArgoCheck(); \
	friend FPS_API class UClass* Z_Construct_UClass_UArgoCheck(); \
public: \
	DECLARE_CLASS(UArgoCheck, UBTService, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UArgoCheck) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FPS_Source_FPS_ArgoCheck_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArgoCheck(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArgoCheck) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArgoCheck); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArgoCheck); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UArgoCheck(UArgoCheck&&); \
	NO_API UArgoCheck(const UArgoCheck&); \
public:


#define FPS_Source_FPS_ArgoCheck_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UArgoCheck(UArgoCheck&&); \
	NO_API UArgoCheck(const UArgoCheck&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArgoCheck); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArgoCheck); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UArgoCheck)


#define FPS_Source_FPS_ArgoCheck_h_15_PRIVATE_PROPERTY_OFFSET
#define FPS_Source_FPS_ArgoCheck_h_12_PROLOG
#define FPS_Source_FPS_ArgoCheck_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_ArgoCheck_h_15_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_ArgoCheck_h_15_RPC_WRAPPERS \
	FPS_Source_FPS_ArgoCheck_h_15_INCLASS \
	FPS_Source_FPS_ArgoCheck_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_ArgoCheck_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_ArgoCheck_h_15_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_ArgoCheck_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Source_FPS_ArgoCheck_h_15_INCLASS_NO_PURE_DECLS \
	FPS_Source_FPS_ArgoCheck_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Source_FPS_ArgoCheck_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS