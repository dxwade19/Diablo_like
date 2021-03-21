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
	void UCM_TargetStatsComponent::StaticRegisterNativesUCM_TargetStatsComponent()
	{
	}
	UClass* Z_Construct_UClass_UCM_TargetStatsComponent_NoRegister()
	{
		return UCM_TargetStatsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCM_TargetStatsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
		nullptr,
		Z_Construct_UClass_UCM_TargetStatsComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	IMPLEMENT_CLASS(UCM_TargetStatsComponent, 2803612873);
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
