// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextBlock;
class UProgressBar;
#ifdef CAMMANAGER_CM_UserWidget_generated_h
#error "CM_UserWidget.generated.h already included, missing '#pragma once' in CM_UserWidget.h"
#endif
#define CAMMANAGER_CM_UserWidget_generated_h

#define CamManager_Source_CamManager_CM_UserWidget_h_14_SPARSE_DATA
#define CamManager_Source_CamManager_CM_UserWidget_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdatePotionValue); \
	DECLARE_FUNCTION(execUpdateManaBarValue); \
	DECLARE_FUNCTION(execUpdateHealBarValue); \
	DECLARE_FUNCTION(execSetManaPotionText); \
	DECLARE_FUNCTION(execSetHealPotionText); \
	DECLARE_FUNCTION(execSetManaProgressBar); \
	DECLARE_FUNCTION(execSetHealProgressBar); \
	DECLARE_FUNCTION(execInitStatsBar);


#define CamManager_Source_CamManager_CM_UserWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdatePotionValue); \
	DECLARE_FUNCTION(execUpdateManaBarValue); \
	DECLARE_FUNCTION(execUpdateHealBarValue); \
	DECLARE_FUNCTION(execSetManaPotionText); \
	DECLARE_FUNCTION(execSetHealPotionText); \
	DECLARE_FUNCTION(execSetManaProgressBar); \
	DECLARE_FUNCTION(execSetHealProgressBar); \
	DECLARE_FUNCTION(execInitStatsBar);


#define CamManager_Source_CamManager_CM_UserWidget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCM_UserWidget(); \
	friend struct Z_Construct_UClass_UCM_UserWidget_Statics; \
public: \
	DECLARE_CLASS(UCM_UserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CamManager"), NO_API) \
	DECLARE_SERIALIZER(UCM_UserWidget)


#define CamManager_Source_CamManager_CM_UserWidget_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUCM_UserWidget(); \
	friend struct Z_Construct_UClass_UCM_UserWidget_Statics; \
public: \
	DECLARE_CLASS(UCM_UserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CamManager"), NO_API) \
	DECLARE_SERIALIZER(UCM_UserWidget)


#define CamManager_Source_CamManager_CM_UserWidget_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCM_UserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCM_UserWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCM_UserWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCM_UserWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCM_UserWidget(UCM_UserWidget&&); \
	NO_API UCM_UserWidget(const UCM_UserWidget&); \
public:


#define CamManager_Source_CamManager_CM_UserWidget_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCM_UserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCM_UserWidget(UCM_UserWidget&&); \
	NO_API UCM_UserWidget(const UCM_UserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCM_UserWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCM_UserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCM_UserWidget)


#define CamManager_Source_CamManager_CM_UserWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__player() { return STRUCT_OFFSET(UCM_UserWidget, player); } \
	FORCEINLINE static uint32 __PPO__healProgressBar() { return STRUCT_OFFSET(UCM_UserWidget, healProgressBar); } \
	FORCEINLINE static uint32 __PPO__manaProgressBar() { return STRUCT_OFFSET(UCM_UserWidget, manaProgressBar); } \
	FORCEINLINE static uint32 __PPO__healPotionTextBlock() { return STRUCT_OFFSET(UCM_UserWidget, healPotionTextBlock); } \
	FORCEINLINE static uint32 __PPO__manaPotionTextBlock() { return STRUCT_OFFSET(UCM_UserWidget, manaPotionTextBlock); }


#define CamManager_Source_CamManager_CM_UserWidget_h_11_PROLOG
#define CamManager_Source_CamManager_CM_UserWidget_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CamManager_Source_CamManager_CM_UserWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	CamManager_Source_CamManager_CM_UserWidget_h_14_SPARSE_DATA \
	CamManager_Source_CamManager_CM_UserWidget_h_14_RPC_WRAPPERS \
	CamManager_Source_CamManager_CM_UserWidget_h_14_INCLASS \
	CamManager_Source_CamManager_CM_UserWidget_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CamManager_Source_CamManager_CM_UserWidget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CamManager_Source_CamManager_CM_UserWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	CamManager_Source_CamManager_CM_UserWidget_h_14_SPARSE_DATA \
	CamManager_Source_CamManager_CM_UserWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	CamManager_Source_CamManager_CM_UserWidget_h_14_INCLASS_NO_PURE_DECLS \
	CamManager_Source_CamManager_CM_UserWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAMMANAGER_API UClass* StaticClass<class UCM_UserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CamManager_Source_CamManager_CM_UserWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
