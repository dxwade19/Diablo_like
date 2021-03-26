// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CamManager/CM_TargetStatsComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCM_TargetStatsComponent() {}
// Cross Module References
	CAMMANAGER_API UClass* Z_Construct_UClass_UCM_TargetStatsComponent_NoRegister();
	CAMMANAGER_API UClass* Z_Construct_UClass_UCM_TargetStatsComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CamManager();
// End Cross Module References
	DEFINE_FUNCTION(UCM_TargetStatsComponent::execReduceMana)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param__manaToReduce);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReduceMana(Z_Param__manaToReduce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCM_TargetStatsComponent::execIncreaseMana)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param__manaToAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncreaseMana(Z_Param__manaToAdd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCM_TargetStatsComponent::execTakeDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param__damageToTake);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeDamage(Z_Param__damageToTake);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCM_TargetStatsComponent::execIncreaseLife)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param__lifeToAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncreaseLife(Z_Param__lifeToAdd);
		P_NATIVE_END;
	}
	void UCM_TargetStatsComponent::StaticRegisterNativesUCM_TargetStatsComponent()
	{
		UClass* Class = UCM_TargetStatsComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IncreaseLife", &UCM_TargetStatsComponent::execIncreaseLife },
			{ "IncreaseMana", &UCM_TargetStatsComponent::execIncreaseMana },
			{ "ReduceMana", &UCM_TargetStatsComponent::execReduceMana },
			{ "TakeDamage", &UCM_TargetStatsComponent::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCM_TargetStatsComponent_IncreaseLife_Statics
	{
		struct CM_TargetStatsComponent_eventIncreaseLife_Parms
		{
			float _lifeToAdd;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__lifeToAdd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCM_TargetStatsComponent_IncreaseLife_Statics::NewProp__lifeToAdd = { "_lifeToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CM_TargetStatsComponent_eventIncreaseLife_Parms, _lifeToAdd), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCM_TargetStatsComponent_IncreaseLife_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCM_TargetStatsComponent_IncreaseLife_Statics::NewProp__lifeToAdd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCM_TargetStatsComponent_IncreaseLife_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//----Setter----//\n" },
		{ "ModuleRelativePath", "CM_TargetStatsComponent.h" },
		{ "ToolTip", "----Setter----" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCM_TargetStatsComponent_IncreaseLife_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCM_TargetStatsComponent, nullptr, "IncreaseLife", nullptr, nullptr, sizeof(CM_TargetStatsComponent_eventIncreaseLife_Parms), Z_Construct_UFunction_UCM_TargetStatsComponent_IncreaseLife_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCM_TargetStatsComponent_IncreaseLife_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCM_TargetStatsComponent_IncreaseLife_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCM_TargetStatsComponent_IncreaseLife_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCM_TargetStatsComponent_IncreaseLife()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCM_TargetStatsComponent_IncreaseLife_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCM_TargetStatsComponent_IncreaseMana_Statics
	{
		struct CM_TargetStatsComponent_eventIncreaseMana_Parms
		{
			float _manaToAdd;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__manaToAdd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCM_TargetStatsComponent_IncreaseMana_Statics::NewProp__manaToAdd = { "_manaToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CM_TargetStatsComponent_eventIncreaseMana_Parms, _manaToAdd), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCM_TargetStatsComponent_IncreaseMana_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCM_TargetStatsComponent_IncreaseMana_Statics::NewProp__manaToAdd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCM_TargetStatsComponent_IncreaseMana_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CM_TargetStatsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCM_TargetStatsComponent_IncreaseMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCM_TargetStatsComponent, nullptr, "IncreaseMana", nullptr, nullptr, sizeof(CM_TargetStatsComponent_eventIncreaseMana_Parms), Z_Construct_UFunction_UCM_TargetStatsComponent_IncreaseMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCM_TargetStatsComponent_IncreaseMana_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCM_TargetStatsComponent_IncreaseMana_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCM_TargetStatsComponent_IncreaseMana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCM_TargetStatsComponent_IncreaseMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCM_TargetStatsComponent_IncreaseMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCM_TargetStatsComponent_ReduceMana_Statics
	{
		struct CM_TargetStatsComponent_eventReduceMana_Parms
		{
			float _manaToReduce;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__manaToReduce;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCM_TargetStatsComponent_ReduceMana_Statics::NewProp__manaToReduce = { "_manaToReduce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CM_TargetStatsComponent_eventReduceMana_Parms, _manaToReduce), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCM_TargetStatsComponent_ReduceMana_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCM_TargetStatsComponent_ReduceMana_Statics::NewProp__manaToReduce,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCM_TargetStatsComponent_ReduceMana_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CM_TargetStatsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCM_TargetStatsComponent_ReduceMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCM_TargetStatsComponent, nullptr, "ReduceMana", nullptr, nullptr, sizeof(CM_TargetStatsComponent_eventReduceMana_Parms), Z_Construct_UFunction_UCM_TargetStatsComponent_ReduceMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCM_TargetStatsComponent_ReduceMana_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCM_TargetStatsComponent_ReduceMana_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCM_TargetStatsComponent_ReduceMana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCM_TargetStatsComponent_ReduceMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCM_TargetStatsComponent_ReduceMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCM_TargetStatsComponent_TakeDamage_Statics
	{
		struct CM_TargetStatsComponent_eventTakeDamage_Parms
		{
			float _damageToTake;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__damageToTake;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCM_TargetStatsComponent_TakeDamage_Statics::NewProp__damageToTake = { "_damageToTake", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CM_TargetStatsComponent_eventTakeDamage_Parms, _damageToTake), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCM_TargetStatsComponent_TakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCM_TargetStatsComponent_TakeDamage_Statics::NewProp__damageToTake,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCM_TargetStatsComponent_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CM_TargetStatsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCM_TargetStatsComponent_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCM_TargetStatsComponent, nullptr, "TakeDamage", nullptr, nullptr, sizeof(CM_TargetStatsComponent_eventTakeDamage_Parms), Z_Construct_UFunction_UCM_TargetStatsComponent_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCM_TargetStatsComponent_TakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCM_TargetStatsComponent_TakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCM_TargetStatsComponent_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCM_TargetStatsComponent_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCM_TargetStatsComponent_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCM_TargetStatsComponent_NoRegister()
	{
		return UCM_TargetStatsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCM_TargetStatsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxMana_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxMana;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentMana_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_currentMana;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxLife_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxLife;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentLife_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_currentLife;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCM_TargetStatsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CamManager,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCM_TargetStatsComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCM_TargetStatsComponent_IncreaseLife, "IncreaseLife" }, // 2121755697
		{ &Z_Construct_UFunction_UCM_TargetStatsComponent_IncreaseMana, "IncreaseMana" }, // 2902602290
		{ &Z_Construct_UFunction_UCM_TargetStatsComponent_ReduceMana, "ReduceMana" }, // 1202042028
		{ &Z_Construct_UFunction_UCM_TargetStatsComponent_TakeDamage, "TakeDamage" }, // 1356899123
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCM_TargetStatsComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CM_TargetStatsComponent.h" },
		{ "ModuleRelativePath", "CM_TargetStatsComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCM_TargetStatsComponent_Statics::NewProp_maxMana_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "CM_TargetStatsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCM_TargetStatsComponent_Statics::NewProp_maxMana = { "maxMana", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCM_TargetStatsComponent, maxMana), METADATA_PARAMS(Z_Construct_UClass_UCM_TargetStatsComponent_Statics::NewProp_maxMana_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCM_TargetStatsComponent_Statics::NewProp_maxMana_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCM_TargetStatsComponent_Statics::NewProp_currentMana_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "CM_TargetStatsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCM_TargetStatsComponent_Statics::NewProp_currentMana = { "currentMana", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCM_TargetStatsComponent, currentMana), METADATA_PARAMS(Z_Construct_UClass_UCM_TargetStatsComponent_Statics::NewProp_currentMana_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCM_TargetStatsComponent_Statics::NewProp_currentMana_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCM_TargetStatsComponent_Statics::NewProp_maxLife_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "CM_TargetStatsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCM_TargetStatsComponent_Statics::NewProp_maxLife = { "maxLife", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCM_TargetStatsComponent, maxLife), METADATA_PARAMS(Z_Construct_UClass_UCM_TargetStatsComponent_Statics::NewProp_maxLife_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCM_TargetStatsComponent_Statics::NewProp_maxLife_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCM_TargetStatsComponent_Statics::NewProp_currentLife_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "CM_TargetStatsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCM_TargetStatsComponent_Statics::NewProp_currentLife = { "currentLife", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCM_TargetStatsComponent, currentLife), METADATA_PARAMS(Z_Construct_UClass_UCM_TargetStatsComponent_Statics::NewProp_currentLife_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCM_TargetStatsComponent_Statics::NewProp_currentLife_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCM_TargetStatsComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCM_TargetStatsComponent_Statics::NewProp_maxMana,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCM_TargetStatsComponent_Statics::NewProp_currentMana,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCM_TargetStatsComponent_Statics::NewProp_maxLife,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCM_TargetStatsComponent_Statics::NewProp_currentLife,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCM_TargetStatsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCM_TargetStatsComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCM_TargetStatsComponent_Statics::ClassParams = {
		&UCM_TargetStatsComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCM_TargetStatsComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCM_TargetStatsComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCM_TargetStatsComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCM_TargetStatsComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCM_TargetStatsComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCM_TargetStatsComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCM_TargetStatsComponent, 4042744387);
	template<> CAMMANAGER_API UClass* StaticClass<UCM_TargetStatsComponent>()
	{
		return UCM_TargetStatsComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCM_TargetStatsComponent(Z_Construct_UClass_UCM_TargetStatsComponent, &UCM_TargetStatsComponent::StaticClass, TEXT("/Script/CamManager"), TEXT("UCM_TargetStatsComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCM_TargetStatsComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
