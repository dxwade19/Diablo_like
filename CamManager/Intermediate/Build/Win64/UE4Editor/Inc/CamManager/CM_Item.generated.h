// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef CAMMANAGER_CM_Item_generated_h
#error "CM_Item.generated.h already included, missing '#pragma once' in CM_Item.h"
#endif
#define CAMMANAGER_CM_Item_generated_h

#define CamManager_Source_CamManager_CM_Item_h_12_SPARSE_DATA
#define CamManager_Source_CamManager_CM_Item_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBoxBeginOverlap);


#define CamManager_Source_CamManager_CM_Item_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBoxBeginOverlap);


#define CamManager_Source_CamManager_CM_Item_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACM_Item(); \
	friend struct Z_Construct_UClass_ACM_Item_Statics; \
public: \
	DECLARE_CLASS(ACM_Item, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CamManager"), NO_API) \
	DECLARE_SERIALIZER(ACM_Item)


#define CamManager_Source_CamManager_CM_Item_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACM_Item(); \
	friend struct Z_Construct_UClass_ACM_Item_Statics; \
public: \
	DECLARE_CLASS(ACM_Item, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CamManager"), NO_API) \
	DECLARE_SERIALIZER(ACM_Item)


#define CamManager_Source_CamManager_CM_Item_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACM_Item(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACM_Item) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACM_Item); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACM_Item); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACM_Item(ACM_Item&&); \
	NO_API ACM_Item(const ACM_Item&); \
public:


#define CamManager_Source_CamManager_CM_Item_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACM_Item(ACM_Item&&); \
	NO_API ACM_Item(const ACM_Item&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACM_Item); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACM_Item); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACM_Item)


#define CamManager_Source_CamManager_CM_Item_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__itemID() { return STRUCT_OFFSET(ACM_Item, itemID); } \
	FORCEINLINE static uint32 __PPO__isInInventory() { return STRUCT_OFFSET(ACM_Item, isInInventory); } \
	FORCEINLINE static uint32 __PPO__box() { return STRUCT_OFFSET(ACM_Item, box); }


#define CamManager_Source_CamManager_CM_Item_h_9_PROLOG
#define CamManager_Source_CamManager_CM_Item_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CamManager_Source_CamManager_CM_Item_h_12_PRIVATE_PROPERTY_OFFSET \
	CamManager_Source_CamManager_CM_Item_h_12_SPARSE_DATA \
	CamManager_Source_CamManager_CM_Item_h_12_RPC_WRAPPERS \
	CamManager_Source_CamManager_CM_Item_h_12_INCLASS \
	CamManager_Source_CamManager_CM_Item_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CamManager_Source_CamManager_CM_Item_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CamManager_Source_CamManager_CM_Item_h_12_PRIVATE_PROPERTY_OFFSET \
	CamManager_Source_CamManager_CM_Item_h_12_SPARSE_DATA \
	CamManager_Source_CamManager_CM_Item_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CamManager_Source_CamManager_CM_Item_h_12_INCLASS_NO_PURE_DECLS \
	CamManager_Source_CamManager_CM_Item_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAMMANAGER_API UClass* StaticClass<class ACM_Item>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CamManager_Source_CamManager_CM_Item_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
