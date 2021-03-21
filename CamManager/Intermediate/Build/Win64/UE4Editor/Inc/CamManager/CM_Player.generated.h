// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCM_TargetStatsComponent;
#ifdef CAMMANAGER_CM_Player_generated_h
#error "CM_Player.generated.h already included, missing '#pragma once' in CM_Player.h"
#endif
#define CAMMANAGER_CM_Player_generated_h

#define CamManager_Source_CamManager_CM_Player_h_15_SPARSE_DATA
#define CamManager_Source_CamManager_CM_Player_h_15_RPC_WRAPPERS \
	virtual UCM_TargetStatsComponent* GetTargetStats_Implementation(); \
	virtual void InitTargetStatsComponent_Implementation(); \
 \
	DECLARE_FUNCTION(execGetTargetStats); \
	DECLARE_FUNCTION(execInitTargetStatsComponent);


#define CamManager_Source_CamManager_CM_Player_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTargetStats); \
	DECLARE_FUNCTION(execInitTargetStatsComponent);


#define CamManager_Source_CamManager_CM_Player_h_15_EVENT_PARMS \
	struct CM_Player_eventGetTargetStats_Parms \
	{ \
		UCM_TargetStatsComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		CM_Player_eventGetTargetStats_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define CamManager_Source_CamManager_CM_Player_h_15_CALLBACK_WRAPPERS
#define CamManager_Source_CamManager_CM_Player_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACM_Player(); \
	friend struct Z_Construct_UClass_ACM_Player_Statics; \
public: \
	DECLARE_CLASS(ACM_Player, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CamManager"), NO_API) \
	DECLARE_SERIALIZER(ACM_Player) \
	virtual UObject* _getUObject() const override { return const_cast<ACM_Player*>(this); }


#define CamManager_Source_CamManager_CM_Player_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACM_Player(); \
	friend struct Z_Construct_UClass_ACM_Player_Statics; \
public: \
	DECLARE_CLASS(ACM_Player, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CamManager"), NO_API) \
	DECLARE_SERIALIZER(ACM_Player) \
	virtual UObject* _getUObject() const override { return const_cast<ACM_Player*>(this); }


#define CamManager_Source_CamManager_CM_Player_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACM_Player(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACM_Player) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACM_Player); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACM_Player); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACM_Player(ACM_Player&&); \
	NO_API ACM_Player(const ACM_Player&); \
public:


#define CamManager_Source_CamManager_CM_Player_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACM_Player(ACM_Player&&); \
	NO_API ACM_Player(const ACM_Player&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACM_Player); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACM_Player); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACM_Player)


#define CamManager_Source_CamManager_CM_Player_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__playerMouvement() { return STRUCT_OFFSET(ACM_Player, playerMouvement); } \
	FORCEINLINE static uint32 __PPO__playerMouvementClass() { return STRUCT_OFFSET(ACM_Player, playerMouvementClass); } \
	FORCEINLINE static uint32 __PPO__playerStats() { return STRUCT_OFFSET(ACM_Player, playerStats); } \
	FORCEINLINE static uint32 __PPO__playerTargetStatsClass() { return STRUCT_OFFSET(ACM_Player, playerTargetStatsClass); } \
	FORCEINLINE static uint32 __PPO__playerInventory() { return STRUCT_OFFSET(ACM_Player, playerInventory); } \
	FORCEINLINE static uint32 __PPO__playerInventoryClass() { return STRUCT_OFFSET(ACM_Player, playerInventoryClass); } \
	FORCEINLINE static uint32 __PPO__playerCamera() { return STRUCT_OFFSET(ACM_Player, playerCamera); } \
	FORCEINLINE static uint32 __PPO__cameraType() { return STRUCT_OFFSET(ACM_Player, cameraType); } \
	FORCEINLINE static uint32 __PPO__isUseCustomSettings() { return STRUCT_OFFSET(ACM_Player, isUseCustomSettings); } \
	FORCEINLINE static uint32 __PPO__settings() { return STRUCT_OFFSET(ACM_Player, settings); }


#define CamManager_Source_CamManager_CM_Player_h_12_PROLOG \
	CamManager_Source_CamManager_CM_Player_h_15_EVENT_PARMS


#define CamManager_Source_CamManager_CM_Player_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CamManager_Source_CamManager_CM_Player_h_15_PRIVATE_PROPERTY_OFFSET \
	CamManager_Source_CamManager_CM_Player_h_15_SPARSE_DATA \
	CamManager_Source_CamManager_CM_Player_h_15_RPC_WRAPPERS \
	CamManager_Source_CamManager_CM_Player_h_15_CALLBACK_WRAPPERS \
	CamManager_Source_CamManager_CM_Player_h_15_INCLASS \
	CamManager_Source_CamManager_CM_Player_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CamManager_Source_CamManager_CM_Player_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CamManager_Source_CamManager_CM_Player_h_15_PRIVATE_PROPERTY_OFFSET \
	CamManager_Source_CamManager_CM_Player_h_15_SPARSE_DATA \
	CamManager_Source_CamManager_CM_Player_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CamManager_Source_CamManager_CM_Player_h_15_CALLBACK_WRAPPERS \
	CamManager_Source_CamManager_CM_Player_h_15_INCLASS_NO_PURE_DECLS \
	CamManager_Source_CamManager_CM_Player_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAMMANAGER_API UClass* StaticClass<class ACM_Player>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CamManager_Source_CamManager_CM_Player_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
