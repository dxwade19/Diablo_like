// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CAMMANAGER_CM_Camera_generated_h
#error "CM_Camera.generated.h already included, missing '#pragma once' in CM_Camera.h"
#endif
#define CAMMANAGER_CM_Camera_generated_h

#define CamManager_Source_CamManager_CM_Camera_h_14_SPARSE_DATA
#define CamManager_Source_CamManager_CM_Camera_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDrawDebug); \
	DECLARE_FUNCTION(execLookAt); \
	DECLARE_FUNCTION(execMove);


#define CamManager_Source_CamManager_CM_Camera_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDrawDebug); \
	DECLARE_FUNCTION(execLookAt); \
	DECLARE_FUNCTION(execMove);


#define CamManager_Source_CamManager_CM_Camera_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACM_Camera(); \
	friend struct Z_Construct_UClass_ACM_Camera_Statics; \
public: \
	DECLARE_CLASS(ACM_Camera, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CamManager"), NO_API) \
	DECLARE_SERIALIZER(ACM_Camera)


#define CamManager_Source_CamManager_CM_Camera_h_14_INCLASS \
private: \
	static void StaticRegisterNativesACM_Camera(); \
	friend struct Z_Construct_UClass_ACM_Camera_Statics; \
public: \
	DECLARE_CLASS(ACM_Camera, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CamManager"), NO_API) \
	DECLARE_SERIALIZER(ACM_Camera)


#define CamManager_Source_CamManager_CM_Camera_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACM_Camera(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACM_Camera) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACM_Camera); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACM_Camera); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACM_Camera(ACM_Camera&&); \
	NO_API ACM_Camera(const ACM_Camera&); \
public:


#define CamManager_Source_CamManager_CM_Camera_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACM_Camera(ACM_Camera&&); \
	NO_API ACM_Camera(const ACM_Camera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACM_Camera); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACM_Camera); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACM_Camera)


#define CamManager_Source_CamManager_CM_Camera_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__id() { return STRUCT_OFFSET(ACM_Camera, id); } \
	FORCEINLINE static uint32 __PPO__settings() { return STRUCT_OFFSET(ACM_Camera, settings); } \
	FORCEINLINE static uint32 __PPO__cameraComponent() { return STRUCT_OFFSET(ACM_Camera, cameraComponent); } \
	FORCEINLINE static uint32 __PPO__actorComponent() { return STRUCT_OFFSET(ACM_Camera, actorComponent); } \
	FORCEINLINE static uint32 __PPO__useDebug() { return STRUCT_OFFSET(ACM_Camera, useDebug); } \
	FORCEINLINE static uint32 __PPO__lineToTargetColor() { return STRUCT_OFFSET(ACM_Camera, lineToTargetColor); }


#define CamManager_Source_CamManager_CM_Camera_h_11_PROLOG
#define CamManager_Source_CamManager_CM_Camera_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CamManager_Source_CamManager_CM_Camera_h_14_PRIVATE_PROPERTY_OFFSET \
	CamManager_Source_CamManager_CM_Camera_h_14_SPARSE_DATA \
	CamManager_Source_CamManager_CM_Camera_h_14_RPC_WRAPPERS \
	CamManager_Source_CamManager_CM_Camera_h_14_INCLASS \
	CamManager_Source_CamManager_CM_Camera_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CamManager_Source_CamManager_CM_Camera_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CamManager_Source_CamManager_CM_Camera_h_14_PRIVATE_PROPERTY_OFFSET \
	CamManager_Source_CamManager_CM_Camera_h_14_SPARSE_DATA \
	CamManager_Source_CamManager_CM_Camera_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	CamManager_Source_CamManager_CM_Camera_h_14_INCLASS_NO_PURE_DECLS \
	CamManager_Source_CamManager_CM_Camera_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAMMANAGER_API UClass* StaticClass<class ACM_Camera>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CamManager_Source_CamManager_CM_Camera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
