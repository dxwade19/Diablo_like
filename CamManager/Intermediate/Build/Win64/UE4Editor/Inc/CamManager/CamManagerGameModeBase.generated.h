// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CAMMANAGER_CamManagerGameModeBase_generated_h
#error "CamManagerGameModeBase.generated.h already included, missing '#pragma once' in CamManagerGameModeBase.h"
#endif
#define CAMMANAGER_CamManagerGameModeBase_generated_h

#define CamManager_Source_CamManager_CamManagerGameModeBase_h_12_SPARSE_DATA
#define CamManager_Source_CamManager_CamManagerGameModeBase_h_12_RPC_WRAPPERS
#define CamManager_Source_CamManager_CamManagerGameModeBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define CamManager_Source_CamManager_CamManagerGameModeBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACamManagerGameModeBase(); \
	friend struct Z_Construct_UClass_ACamManagerGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ACamManagerGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CamManager"), NO_API) \
	DECLARE_SERIALIZER(ACamManagerGameModeBase)


#define CamManager_Source_CamManager_CamManagerGameModeBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACamManagerGameModeBase(); \
	friend struct Z_Construct_UClass_ACamManagerGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ACamManagerGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CamManager"), NO_API) \
	DECLARE_SERIALIZER(ACamManagerGameModeBase)


#define CamManager_Source_CamManager_CamManagerGameModeBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACamManagerGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACamManagerGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACamManagerGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACamManagerGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACamManagerGameModeBase(ACamManagerGameModeBase&&); \
	NO_API ACamManagerGameModeBase(const ACamManagerGameModeBase&); \
public:


#define CamManager_Source_CamManager_CamManagerGameModeBase_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACamManagerGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACamManagerGameModeBase(ACamManagerGameModeBase&&); \
	NO_API ACamManagerGameModeBase(const ACamManagerGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACamManagerGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACamManagerGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACamManagerGameModeBase)


#define CamManager_Source_CamManager_CamManagerGameModeBase_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__cameraManager() { return STRUCT_OFFSET(ACamManagerGameModeBase, cameraManager); }


#define CamManager_Source_CamManager_CamManagerGameModeBase_h_9_PROLOG
#define CamManager_Source_CamManager_CamManagerGameModeBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CamManager_Source_CamManager_CamManagerGameModeBase_h_12_PRIVATE_PROPERTY_OFFSET \
	CamManager_Source_CamManager_CamManagerGameModeBase_h_12_SPARSE_DATA \
	CamManager_Source_CamManager_CamManagerGameModeBase_h_12_RPC_WRAPPERS \
	CamManager_Source_CamManager_CamManagerGameModeBase_h_12_INCLASS \
	CamManager_Source_CamManager_CamManagerGameModeBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CamManager_Source_CamManager_CamManagerGameModeBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CamManager_Source_CamManager_CamManagerGameModeBase_h_12_PRIVATE_PROPERTY_OFFSET \
	CamManager_Source_CamManager_CamManagerGameModeBase_h_12_SPARSE_DATA \
	CamManager_Source_CamManager_CamManagerGameModeBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CamManager_Source_CamManager_CamManagerGameModeBase_h_12_INCLASS_NO_PURE_DECLS \
	CamManager_Source_CamManager_CamManagerGameModeBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAMMANAGER_API UClass* StaticClass<class ACamManagerGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CamManager_Source_CamManager_CamManagerGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
