// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCM_TargetStatsComponent;
#ifdef CAMMANAGER_ITarget_generated_h
#error "ITarget.generated.h already included, missing '#pragma once' in ITarget.h"
#endif
#define CAMMANAGER_ITarget_generated_h

#define CamManager_Source_CamManager_ITarget_h_12_SPARSE_DATA
#define CamManager_Source_CamManager_ITarget_h_12_RPC_WRAPPERS \
	virtual UCM_TargetStatsComponent* GetTargetStats_Implementation() { return NULL; }; \
	virtual void InitTargetStatsComponent_Implementation() {}; \
 \
	DECLARE_FUNCTION(execGetTargetStats); \
	DECLARE_FUNCTION(execInitTargetStatsComponent);


#define CamManager_Source_CamManager_ITarget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UCM_TargetStatsComponent* GetTargetStats_Implementation() { return NULL; }; \
	virtual void InitTargetStatsComponent_Implementation() {}; \
 \
	DECLARE_FUNCTION(execGetTargetStats); \
	DECLARE_FUNCTION(execInitTargetStatsComponent);


#define CamManager_Source_CamManager_ITarget_h_12_EVENT_PARMS \
	struct ITarget_eventGetTargetStats_Parms \
	{ \
		UCM_TargetStatsComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ITarget_eventGetTargetStats_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define CamManager_Source_CamManager_ITarget_h_12_CALLBACK_WRAPPERS
#define CamManager_Source_CamManager_ITarget_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CAMMANAGER_API UITarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UITarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CAMMANAGER_API, UITarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UITarget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CAMMANAGER_API UITarget(UITarget&&); \
	CAMMANAGER_API UITarget(const UITarget&); \
public:


#define CamManager_Source_CamManager_ITarget_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CAMMANAGER_API UITarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CAMMANAGER_API UITarget(UITarget&&); \
	CAMMANAGER_API UITarget(const UITarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CAMMANAGER_API, UITarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UITarget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UITarget)


#define CamManager_Source_CamManager_ITarget_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUITarget(); \
	friend struct Z_Construct_UClass_UITarget_Statics; \
public: \
	DECLARE_CLASS(UITarget, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CamManager"), CAMMANAGER_API) \
	DECLARE_SERIALIZER(UITarget)


#define CamManager_Source_CamManager_ITarget_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	CamManager_Source_CamManager_ITarget_h_12_GENERATED_UINTERFACE_BODY() \
	CamManager_Source_CamManager_ITarget_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CamManager_Source_CamManager_ITarget_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	CamManager_Source_CamManager_ITarget_h_12_GENERATED_UINTERFACE_BODY() \
	CamManager_Source_CamManager_ITarget_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CamManager_Source_CamManager_ITarget_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IITarget() {} \
public: \
	typedef UITarget UClassType; \
	typedef IITarget ThisClass; \
	static UCM_TargetStatsComponent* Execute_GetTargetStats(UObject* O); \
	static void Execute_InitTargetStatsComponent(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define CamManager_Source_CamManager_ITarget_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IITarget() {} \
public: \
	typedef UITarget UClassType; \
	typedef IITarget ThisClass; \
	static UCM_TargetStatsComponent* Execute_GetTargetStats(UObject* O); \
	static void Execute_InitTargetStatsComponent(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define CamManager_Source_CamManager_ITarget_h_9_PROLOG \
	CamManager_Source_CamManager_ITarget_h_12_EVENT_PARMS


#define CamManager_Source_CamManager_ITarget_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CamManager_Source_CamManager_ITarget_h_12_SPARSE_DATA \
	CamManager_Source_CamManager_ITarget_h_12_RPC_WRAPPERS \
	CamManager_Source_CamManager_ITarget_h_12_CALLBACK_WRAPPERS \
	CamManager_Source_CamManager_ITarget_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CamManager_Source_CamManager_ITarget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CamManager_Source_CamManager_ITarget_h_12_SPARSE_DATA \
	CamManager_Source_CamManager_ITarget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CamManager_Source_CamManager_ITarget_h_12_CALLBACK_WRAPPERS \
	CamManager_Source_CamManager_ITarget_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAMMANAGER_API UClass* StaticClass<class UITarget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CamManager_Source_CamManager_ITarget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
