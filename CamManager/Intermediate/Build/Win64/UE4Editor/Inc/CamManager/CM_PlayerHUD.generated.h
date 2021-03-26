// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CAMMANAGER_CM_PlayerHUD_generated_h
#error "CM_PlayerHUD.generated.h already included, missing '#pragma once' in CM_PlayerHUD.h"
#endif
#define CAMMANAGER_CM_PlayerHUD_generated_h

#define CamManager_Source_CamManager_CM_PlayerHUD_h_14_SPARSE_DATA
#define CamManager_Source_CamManager_CM_PlayerHUD_h_14_RPC_WRAPPERS
#define CamManager_Source_CamManager_CM_PlayerHUD_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define CamManager_Source_CamManager_CM_PlayerHUD_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACM_PlayerHUD(); \
	friend struct Z_Construct_UClass_ACM_PlayerHUD_Statics; \
public: \
	DECLARE_CLASS(ACM_PlayerHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CamManager"), NO_API) \
	DECLARE_SERIALIZER(ACM_PlayerHUD)


#define CamManager_Source_CamManager_CM_PlayerHUD_h_14_INCLASS \
private: \
	static void StaticRegisterNativesACM_PlayerHUD(); \
	friend struct Z_Construct_UClass_ACM_PlayerHUD_Statics; \
public: \
	DECLARE_CLASS(ACM_PlayerHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CamManager"), NO_API) \
	DECLARE_SERIALIZER(ACM_PlayerHUD)


#define CamManager_Source_CamManager_CM_PlayerHUD_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACM_PlayerHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACM_PlayerHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACM_PlayerHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACM_PlayerHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACM_PlayerHUD(ACM_PlayerHUD&&); \
	NO_API ACM_PlayerHUD(const ACM_PlayerHUD&); \
public:


#define CamManager_Source_CamManager_CM_PlayerHUD_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACM_PlayerHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACM_PlayerHUD(ACM_PlayerHUD&&); \
	NO_API ACM_PlayerHUD(const ACM_PlayerHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACM_PlayerHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACM_PlayerHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACM_PlayerHUD)


#define CamManager_Source_CamManager_CM_PlayerHUD_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__userWidgetClass() { return STRUCT_OFFSET(ACM_PlayerHUD, userWidgetClass); } \
	FORCEINLINE static uint32 __PPO__userWidget() { return STRUCT_OFFSET(ACM_PlayerHUD, userWidget); }


#define CamManager_Source_CamManager_CM_PlayerHUD_h_11_PROLOG
#define CamManager_Source_CamManager_CM_PlayerHUD_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CamManager_Source_CamManager_CM_PlayerHUD_h_14_PRIVATE_PROPERTY_OFFSET \
	CamManager_Source_CamManager_CM_PlayerHUD_h_14_SPARSE_DATA \
	CamManager_Source_CamManager_CM_PlayerHUD_h_14_RPC_WRAPPERS \
	CamManager_Source_CamManager_CM_PlayerHUD_h_14_INCLASS \
	CamManager_Source_CamManager_CM_PlayerHUD_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CamManager_Source_CamManager_CM_PlayerHUD_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CamManager_Source_CamManager_CM_PlayerHUD_h_14_PRIVATE_PROPERTY_OFFSET \
	CamManager_Source_CamManager_CM_PlayerHUD_h_14_SPARSE_DATA \
	CamManager_Source_CamManager_CM_PlayerHUD_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	CamManager_Source_CamManager_CM_PlayerHUD_h_14_INCLASS_NO_PURE_DECLS \
	CamManager_Source_CamManager_CM_PlayerHUD_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAMMANAGER_API UClass* StaticClass<class ACM_PlayerHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CamManager_Source_CamManager_CM_PlayerHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
