// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CamManager/CM_Player.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCM_Player() {}
// Cross Module References
	CAMMANAGER_API UClass* Z_Construct_UClass_ACM_Player_NoRegister();
	CAMMANAGER_API UClass* Z_Construct_UClass_ACM_Player();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_CamManager();
	CAMMANAGER_API UClass* Z_Construct_UClass_UCM_TargetStatsComponent_NoRegister();
	CAMMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FCamSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CAMMANAGER_API UClass* Z_Construct_UClass_ACM_CameraTPS_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	CAMMANAGER_API UClass* Z_Construct_UClass_UCM_InventoryComponent_NoRegister();
	CAMMANAGER_API UClass* Z_Construct_UClass_UCM_PlayerMouvement_NoRegister();
	CAMMANAGER_API UClass* Z_Construct_UClass_UITarget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACM_Player::execGetTargetStats)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCM_TargetStatsComponent**)Z_Param__Result=P_THIS->GetTargetStats_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACM_Player::execInitTargetStatsComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitTargetStatsComponent_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ACM_Player_GetTargetStats = FName(TEXT("GetTargetStats"));
	UCM_TargetStatsComponent* ACM_Player::GetTargetStats()
	{
		CM_Player_eventGetTargetStats_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_ACM_Player_GetTargetStats),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ACM_Player_InitTargetStatsComponent = FName(TEXT("InitTargetStatsComponent"));
	void ACM_Player::InitTargetStatsComponent()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACM_Player_InitTargetStatsComponent),NULL);
	}
	void ACM_Player::StaticRegisterNativesACM_Player()
	{
		UClass* Class = ACM_Player::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTargetStats", &ACM_Player::execGetTargetStats },
			{ "InitTargetStatsComponent", &ACM_Player::execInitTargetStatsComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACM_Player_GetTargetStats_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACM_Player_GetTargetStats_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACM_Player_GetTargetStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CM_Player_eventGetTargetStats_Parms, ReturnValue), Z_Construct_UClass_UCM_TargetStatsComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACM_Player_GetTargetStats_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACM_Player_GetTargetStats_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACM_Player_GetTargetStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACM_Player_GetTargetStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACM_Player_GetTargetStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CM_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACM_Player_GetTargetStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACM_Player, nullptr, "GetTargetStats", nullptr, nullptr, sizeof(CM_Player_eventGetTargetStats_Parms), Z_Construct_UFunction_ACM_Player_GetTargetStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACM_Player_GetTargetStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACM_Player_GetTargetStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACM_Player_GetTargetStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACM_Player_GetTargetStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACM_Player_GetTargetStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACM_Player_InitTargetStatsComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACM_Player_InitTargetStatsComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CM_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACM_Player_InitTargetStatsComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACM_Player, nullptr, "InitTargetStatsComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACM_Player_InitTargetStatsComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACM_Player_InitTargetStatsComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACM_Player_InitTargetStatsComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACM_Player_InitTargetStatsComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACM_Player_NoRegister()
	{
		return ACM_Player::StaticClass();
	}
	struct Z_Construct_UClass_ACM_Player_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_settings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isUseCustomSettings_MetaData[];
#endif
		static void NewProp_isUseCustomSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isUseCustomSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cameraType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_cameraType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerInventoryClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_playerInventoryClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerInventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerTargetStatsClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_playerTargetStatsClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerStats_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerStats;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerMouvementClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_playerMouvementClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerMouvement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerMouvement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACM_Player_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_CamManager,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACM_Player_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACM_Player_GetTargetStats, "GetTargetStats" }, // 22860330
		{ &Z_Construct_UFunction_ACM_Player_InitTargetStatsComponent, "InitTargetStatsComponent" }, // 4030337097
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACM_Player_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CM_Player.h" },
		{ "ModuleRelativePath", "CM_Player.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACM_Player_Statics::NewProp_settings_MetaData[] = {
		{ "Category", "Player Camera" },
		{ "ModuleRelativePath", "CM_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACM_Player_Statics::NewProp_settings = { "settings", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACM_Player, settings), Z_Construct_UScriptStruct_FCamSettings, METADATA_PARAMS(Z_Construct_UClass_ACM_Player_Statics::NewProp_settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACM_Player_Statics::NewProp_settings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACM_Player_Statics::NewProp_isUseCustomSettings_MetaData[] = {
		{ "Category", "Player Camera" },
		{ "ModuleRelativePath", "CM_Player.h" },
	};
#endif
	void Z_Construct_UClass_ACM_Player_Statics::NewProp_isUseCustomSettings_SetBit(void* Obj)
	{
		((ACM_Player*)Obj)->isUseCustomSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACM_Player_Statics::NewProp_isUseCustomSettings = { "isUseCustomSettings", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACM_Player), &Z_Construct_UClass_ACM_Player_Statics::NewProp_isUseCustomSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACM_Player_Statics::NewProp_isUseCustomSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACM_Player_Statics::NewProp_isUseCustomSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACM_Player_Statics::NewProp_cameraType_MetaData[] = {
		{ "Category", "Player Camera" },
		{ "ModuleRelativePath", "CM_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACM_Player_Statics::NewProp_cameraType = { "cameraType", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACM_Player, cameraType), Z_Construct_UClass_ACM_CameraTPS_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACM_Player_Statics::NewProp_cameraType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACM_Player_Statics::NewProp_cameraType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACM_Player_Statics::NewProp_playerCamera_MetaData[] = {
		{ "Category", "Player Camera" },
		{ "ModuleRelativePath", "CM_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACM_Player_Statics::NewProp_playerCamera = { "playerCamera", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACM_Player, playerCamera), Z_Construct_UClass_ACM_CameraTPS_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACM_Player_Statics::NewProp_playerCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACM_Player_Statics::NewProp_playerCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACM_Player_Statics::NewProp_playerInventoryClass_MetaData[] = {
		{ "Category", "Player Component" },
		{ "ModuleRelativePath", "CM_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACM_Player_Statics::NewProp_playerInventoryClass = { "playerInventoryClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACM_Player, playerInventoryClass), Z_Construct_UClass_UActorComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACM_Player_Statics::NewProp_playerInventoryClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACM_Player_Statics::NewProp_playerInventoryClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACM_Player_Statics::NewProp_playerInventory_MetaData[] = {
		{ "Category", "Player Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CM_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACM_Player_Statics::NewProp_playerInventory = { "playerInventory", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACM_Player, playerInventory), Z_Construct_UClass_UCM_InventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACM_Player_Statics::NewProp_playerInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACM_Player_Statics::NewProp_playerInventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACM_Player_Statics::NewProp_playerTargetStatsClass_MetaData[] = {
		{ "Category", "Player Component" },
		{ "ModuleRelativePath", "CM_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACM_Player_Statics::NewProp_playerTargetStatsClass = { "playerTargetStatsClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACM_Player, playerTargetStatsClass), Z_Construct_UClass_UActorComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACM_Player_Statics::NewProp_playerTargetStatsClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACM_Player_Statics::NewProp_playerTargetStatsClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACM_Player_Statics::NewProp_playerStats_MetaData[] = {
		{ "Category", "Player Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CM_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACM_Player_Statics::NewProp_playerStats = { "playerStats", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACM_Player, playerStats), Z_Construct_UClass_UCM_TargetStatsComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACM_Player_Statics::NewProp_playerStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACM_Player_Statics::NewProp_playerStats_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACM_Player_Statics::NewProp_playerMouvementClass_MetaData[] = {
		{ "Category", "Player Component" },
		{ "ModuleRelativePath", "CM_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACM_Player_Statics::NewProp_playerMouvementClass = { "playerMouvementClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACM_Player, playerMouvementClass), Z_Construct_UClass_UActorComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACM_Player_Statics::NewProp_playerMouvementClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACM_Player_Statics::NewProp_playerMouvementClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACM_Player_Statics::NewProp_playerMouvement_MetaData[] = {
		{ "Category", "Player Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CM_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACM_Player_Statics::NewProp_playerMouvement = { "playerMouvement", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACM_Player, playerMouvement), Z_Construct_UClass_UCM_PlayerMouvement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACM_Player_Statics::NewProp_playerMouvement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACM_Player_Statics::NewProp_playerMouvement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACM_Player_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACM_Player_Statics::NewProp_settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACM_Player_Statics::NewProp_isUseCustomSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACM_Player_Statics::NewProp_cameraType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACM_Player_Statics::NewProp_playerCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACM_Player_Statics::NewProp_playerInventoryClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACM_Player_Statics::NewProp_playerInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACM_Player_Statics::NewProp_playerTargetStatsClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACM_Player_Statics::NewProp_playerStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACM_Player_Statics::NewProp_playerMouvementClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACM_Player_Statics::NewProp_playerMouvement,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACM_Player_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UITarget_NoRegister, (int32)VTABLE_OFFSET(ACM_Player, IITarget), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACM_Player_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACM_Player>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACM_Player_Statics::ClassParams = {
		&ACM_Player::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACM_Player_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACM_Player_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACM_Player_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACM_Player_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACM_Player()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACM_Player_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACM_Player, 111464527);
	template<> CAMMANAGER_API UClass* StaticClass<ACM_Player>()
	{
		return ACM_Player::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACM_Player(Z_Construct_UClass_ACM_Player, &ACM_Player::StaticClass, TEXT("/Script/CamManager"), TEXT("ACM_Player"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACM_Player);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
