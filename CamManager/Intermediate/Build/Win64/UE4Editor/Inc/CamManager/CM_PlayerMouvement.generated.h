// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CAMMANAGER_CM_PlayerMouvement_generated_h
#error "CM_PlayerMouvement.generated.h already included, missing '#pragma once' in CM_PlayerMouvement.h"
#endif
#define CAMMANAGER_CM_PlayerMouvement_generated_h

#define CamManager_Source_CamManager_CM_PlayerMouvement_h_10_SPARSE_DATA
#define CamManager_Source_CamManager_CM_PlayerMouvement_h_10_RPC_WRAPPERS
#define CamManager_Source_CamManager_CM_PlayerMouvement_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define CamManager_Source_CamManager_CM_PlayerMouvement_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCM_PlayerMouvement(); \
	friend struct Z_Construct_UClass_UCM_PlayerMouvement_Statics; \
public: \
	DECLARE_CLASS(UCM_PlayerMouvement, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CamManager"), NO_API) \
	DECLARE_SERIALIZER(UCM_PlayerMouvement)


#define CamManager_Source_CamManager_CM_PlayerMouvement_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUCM_PlayerMouvement(); \
	friend struct Z_Construct_UClass_UCM_PlayerMouvement_Statics; \
public: \
	DECLARE_CLASS(UCM_PlayerMouvement, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CamManager"), NO_API) \
	DECLARE_SERIALIZER(UCM_PlayerMouvement)


#define CamManager_Source_CamManager_CM_PlayerMouvement_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCM_PlayerMouvement(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCM_PlayerMouvement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCM_PlayerMouvement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCM_PlayerMouvement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCM_PlayerMouvement(UCM_PlayerMouvement&&); \
	NO_API UCM_PlayerMouvement(const UCM_PlayerMouvement&); \
public:


#define CamManager_Source_CamManager_CM_PlayerMouvement_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCM_PlayerMouvement(UCM_PlayerMouvement&&); \
	NO_API UCM_PlayerMouvement(const UCM_PlayerMouvement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCM_PlayerMouvement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCM_PlayerMouvement); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCM_PlayerMouvement)


#define CamManager_Source_CamManager_CM_PlayerMouvement_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__targetPos() { return STRUCT_OFFSET(UCM_PlayerMouvement, targetPos); } \
	FORCEINLINE static uint32 __PPO__minDistanceWithTarget() { return STRUCT_OFFSET(UCM_PlayerMouvement, minDistanceWithTarget); } \
	FORCEINLINE static uint32 __PPO__rotateSpeed() { return STRUCT_OFFSET(UCM_PlayerMouvement, rotateSpeed); } \
	FORCEINLINE static uint32 __PPO__useRotateClampX() { return STRUCT_OFFSET(UCM_PlayerMouvement, useRotateClampX); } \
	FORCEINLINE static uint32 __PPO__minClampXRotation() { return STRUCT_OFFSET(UCM_PlayerMouvement, minClampXRotation); } \
	FORCEINLINE static uint32 __PPO__maxClampXRotation() { return STRUCT_OFFSET(UCM_PlayerMouvement, maxClampXRotation); } \
	FORCEINLINE static uint32 __PPO__isUseGizmos() { return STRUCT_OFFSET(UCM_PlayerMouvement, isUseGizmos); } \
	FORCEINLINE static uint32 __PPO__debugTargetPosColor() { return STRUCT_OFFSET(UCM_PlayerMouvement, debugTargetPosColor); } \
	FORCEINLINE static uint32 __PPO__debugLineColor() { return STRUCT_OFFSET(UCM_PlayerMouvement, debugLineColor); }


#define CamManager_Source_CamManager_CM_PlayerMouvement_h_7_PROLOG
#define CamManager_Source_CamManager_CM_PlayerMouvement_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CamManager_Source_CamManager_CM_PlayerMouvement_h_10_PRIVATE_PROPERTY_OFFSET \
	CamManager_Source_CamManager_CM_PlayerMouvement_h_10_SPARSE_DATA \
	CamManager_Source_CamManager_CM_PlayerMouvement_h_10_RPC_WRAPPERS \
	CamManager_Source_CamManager_CM_PlayerMouvement_h_10_INCLASS \
	CamManager_Source_CamManager_CM_PlayerMouvement_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CamManager_Source_CamManager_CM_PlayerMouvement_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CamManager_Source_CamManager_CM_PlayerMouvement_h_10_PRIVATE_PROPERTY_OFFSET \
	CamManager_Source_CamManager_CM_PlayerMouvement_h_10_SPARSE_DATA \
	CamManager_Source_CamManager_CM_PlayerMouvement_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	CamManager_Source_CamManager_CM_PlayerMouvement_h_10_INCLASS_NO_PURE_DECLS \
	CamManager_Source_CamManager_CM_PlayerMouvement_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAMMANAGER_API UClass* StaticClass<class UCM_PlayerMouvement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CamManager_Source_CamManager_CM_PlayerMouvement_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
