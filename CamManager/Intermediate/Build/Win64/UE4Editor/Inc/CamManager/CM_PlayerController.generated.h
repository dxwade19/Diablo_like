// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CAMMANAGER_CM_PlayerController_generated_h
#error "CM_PlayerController.generated.h already included, missing '#pragma once' in CM_PlayerController.h"
#endif
#define CAMMANAGER_CM_PlayerController_generated_h

#define CamManager_Source_CamManager_CM_PlayerController_h_11_SPARSE_DATA
#define CamManager_Source_CamManager_CM_PlayerController_h_11_RPC_WRAPPERS
#define CamManager_Source_CamManager_CM_PlayerController_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define CamManager_Source_CamManager_CM_PlayerController_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACM_PlayerController(); \
	friend struct Z_Construct_UClass_ACM_PlayerController_Statics; \
public: \
	DECLARE_CLASS(ACM_PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CamManager"), NO_API) \
	DECLARE_SERIALIZER(ACM_PlayerController)


#define CamManager_Source_CamManager_CM_PlayerController_h_11_INCLASS \
private: \
	static void StaticRegisterNativesACM_PlayerController(); \
	friend struct Z_Construct_UClass_ACM_PlayerController_Statics; \
public: \
	DECLARE_CLASS(ACM_PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CamManager"), NO_API) \
	DECLARE_SERIALIZER(ACM_PlayerController)


#define CamManager_Source_CamManager_CM_PlayerController_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACM_PlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACM_PlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACM_PlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACM_PlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACM_PlayerController(ACM_PlayerController&&); \
	NO_API ACM_PlayerController(const ACM_PlayerController&); \
public:


#define CamManager_Source_CamManager_CM_PlayerController_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACM_PlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACM_PlayerController(ACM_PlayerController&&); \
	NO_API ACM_PlayerController(const ACM_PlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACM_PlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACM_PlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACM_PlayerController)


#define CamManager_Source_CamManager_CM_PlayerController_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__targetPos() { return STRUCT_OFFSET(ACM_PlayerController, targetPos); }


#define CamManager_Source_CamManager_CM_PlayerController_h_8_PROLOG
#define CamManager_Source_CamManager_CM_PlayerController_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CamManager_Source_CamManager_CM_PlayerController_h_11_PRIVATE_PROPERTY_OFFSET \
	CamManager_Source_CamManager_CM_PlayerController_h_11_SPARSE_DATA \
	CamManager_Source_CamManager_CM_PlayerController_h_11_RPC_WRAPPERS \
	CamManager_Source_CamManager_CM_PlayerController_h_11_INCLASS \
	CamManager_Source_CamManager_CM_PlayerController_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CamManager_Source_CamManager_CM_PlayerController_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CamManager_Source_CamManager_CM_PlayerController_h_11_PRIVATE_PROPERTY_OFFSET \
	CamManager_Source_CamManager_CM_PlayerController_h_11_SPARSE_DATA \
	CamManager_Source_CamManager_CM_PlayerController_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	CamManager_Source_CamManager_CM_PlayerController_h_11_INCLASS_NO_PURE_DECLS \
	CamManager_Source_CamManager_CM_PlayerController_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAMMANAGER_API UClass* StaticClass<class ACM_PlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CamManager_Source_CamManager_CM_PlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
