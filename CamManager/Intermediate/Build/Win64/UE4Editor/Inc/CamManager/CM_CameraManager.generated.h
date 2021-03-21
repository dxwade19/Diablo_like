// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CAMMANAGER_CM_CameraManager_generated_h
#error "CM_CameraManager.generated.h already included, missing '#pragma once' in CM_CameraManager.h"
#endif
#define CAMMANAGER_CM_CameraManager_generated_h

#define CamManager_Source_CamManager_CM_CameraManager_h_11_SPARSE_DATA
#define CamManager_Source_CamManager_CM_CameraManager_h_11_RPC_WRAPPERS
#define CamManager_Source_CamManager_CM_CameraManager_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define CamManager_Source_CamManager_CM_CameraManager_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACM_CameraManager(); \
	friend struct Z_Construct_UClass_ACM_CameraManager_Statics; \
public: \
	DECLARE_CLASS(ACM_CameraManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CamManager"), NO_API) \
	DECLARE_SERIALIZER(ACM_CameraManager)


#define CamManager_Source_CamManager_CM_CameraManager_h_11_INCLASS \
private: \
	static void StaticRegisterNativesACM_CameraManager(); \
	friend struct Z_Construct_UClass_ACM_CameraManager_Statics; \
public: \
	DECLARE_CLASS(ACM_CameraManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CamManager"), NO_API) \
	DECLARE_SERIALIZER(ACM_CameraManager)


#define CamManager_Source_CamManager_CM_CameraManager_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACM_CameraManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACM_CameraManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACM_CameraManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACM_CameraManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACM_CameraManager(ACM_CameraManager&&); \
	NO_API ACM_CameraManager(const ACM_CameraManager&); \
public:


#define CamManager_Source_CamManager_CM_CameraManager_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACM_CameraManager(ACM_CameraManager&&); \
	NO_API ACM_CameraManager(const ACM_CameraManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACM_CameraManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACM_CameraManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACM_CameraManager)


#define CamManager_Source_CamManager_CM_CameraManager_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__handler() { return STRUCT_OFFSET(ACM_CameraManager, handler); }


#define CamManager_Source_CamManager_CM_CameraManager_h_8_PROLOG
#define CamManager_Source_CamManager_CM_CameraManager_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CamManager_Source_CamManager_CM_CameraManager_h_11_PRIVATE_PROPERTY_OFFSET \
	CamManager_Source_CamManager_CM_CameraManager_h_11_SPARSE_DATA \
	CamManager_Source_CamManager_CM_CameraManager_h_11_RPC_WRAPPERS \
	CamManager_Source_CamManager_CM_CameraManager_h_11_INCLASS \
	CamManager_Source_CamManager_CM_CameraManager_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CamManager_Source_CamManager_CM_CameraManager_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CamManager_Source_CamManager_CM_CameraManager_h_11_PRIVATE_PROPERTY_OFFSET \
	CamManager_Source_CamManager_CM_CameraManager_h_11_SPARSE_DATA \
	CamManager_Source_CamManager_CM_CameraManager_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	CamManager_Source_CamManager_CM_CameraManager_h_11_INCLASS_NO_PURE_DECLS \
	CamManager_Source_CamManager_CM_CameraManager_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAMMANAGER_API UClass* StaticClass<class ACM_CameraManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CamManager_Source_CamManager_CM_CameraManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
