// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CAMMANAGER_CM_Potion_generated_h
#error "CM_Potion.generated.h already included, missing '#pragma once' in CM_Potion.h"
#endif
#define CAMMANAGER_CM_Potion_generated_h

#define CamManager_Source_CamManager_CM_Potion_h_12_SPARSE_DATA
#define CamManager_Source_CamManager_CM_Potion_h_12_RPC_WRAPPERS
#define CamManager_Source_CamManager_CM_Potion_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define CamManager_Source_CamManager_CM_Potion_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACM_Potion(); \
	friend struct Z_Construct_UClass_ACM_Potion_Statics; \
public: \
	DECLARE_CLASS(ACM_Potion, ACM_Item, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CamManager"), NO_API) \
	DECLARE_SERIALIZER(ACM_Potion)


#define CamManager_Source_CamManager_CM_Potion_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACM_Potion(); \
	friend struct Z_Construct_UClass_ACM_Potion_Statics; \
public: \
	DECLARE_CLASS(ACM_Potion, ACM_Item, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CamManager"), NO_API) \
	DECLARE_SERIALIZER(ACM_Potion)


#define CamManager_Source_CamManager_CM_Potion_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACM_Potion(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACM_Potion) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACM_Potion); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACM_Potion); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACM_Potion(ACM_Potion&&); \
	NO_API ACM_Potion(const ACM_Potion&); \
public:


#define CamManager_Source_CamManager_CM_Potion_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACM_Potion() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACM_Potion(ACM_Potion&&); \
	NO_API ACM_Potion(const ACM_Potion&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACM_Potion); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACM_Potion); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACM_Potion)


#define CamManager_Source_CamManager_CM_Potion_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__consomableInfo() { return STRUCT_OFFSET(ACM_Potion, consomableInfo); }


#define CamManager_Source_CamManager_CM_Potion_h_9_PROLOG
#define CamManager_Source_CamManager_CM_Potion_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CamManager_Source_CamManager_CM_Potion_h_12_PRIVATE_PROPERTY_OFFSET \
	CamManager_Source_CamManager_CM_Potion_h_12_SPARSE_DATA \
	CamManager_Source_CamManager_CM_Potion_h_12_RPC_WRAPPERS \
	CamManager_Source_CamManager_CM_Potion_h_12_INCLASS \
	CamManager_Source_CamManager_CM_Potion_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CamManager_Source_CamManager_CM_Potion_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CamManager_Source_CamManager_CM_Potion_h_12_PRIVATE_PROPERTY_OFFSET \
	CamManager_Source_CamManager_CM_Potion_h_12_SPARSE_DATA \
	CamManager_Source_CamManager_CM_Potion_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CamManager_Source_CamManager_CM_Potion_h_12_INCLASS_NO_PURE_DECLS \
	CamManager_Source_CamManager_CM_Potion_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAMMANAGER_API UClass* StaticClass<class ACM_Potion>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CamManager_Source_CamManager_CM_Potion_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
