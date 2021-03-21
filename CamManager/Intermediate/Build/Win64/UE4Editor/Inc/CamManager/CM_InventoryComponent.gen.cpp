// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CamManager/CM_InventoryComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCM_InventoryComponent() {}
// Cross Module References
	CAMMANAGER_API UClass* Z_Construct_UClass_UCM_InventoryComponent_NoRegister();
	CAMMANAGER_API UClass* Z_Construct_UClass_UCM_InventoryComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CamManager();
	CAMMANAGER_API UClass* Z_Construct_UClass_UCM_InventorySlot_NoRegister();
// End Cross Module References
	void UCM_InventoryComponent::StaticRegisterNativesUCM_InventoryComponent()
	{
	}
	UClass* Z_Construct_UClass_UCM_InventoryComponent_NoRegister()
	{
		return UCM_InventoryComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCM_InventoryComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_allSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_allSlots;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_allSlots_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_allSlots_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCM_InventoryComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CamManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCM_InventoryComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CM_InventoryComponent.h" },
		{ "ModuleRelativePath", "CM_InventoryComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCM_InventoryComponent_Statics::NewProp_allSlots_MetaData[] = {
		{ "Category", "CM_InventoryComponent" },
		{ "ModuleRelativePath", "CM_InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCM_InventoryComponent_Statics::NewProp_allSlots = { "allSlots", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCM_InventoryComponent, allSlots), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCM_InventoryComponent_Statics::NewProp_allSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCM_InventoryComponent_Statics::NewProp_allSlots_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCM_InventoryComponent_Statics::NewProp_allSlots_Key_KeyProp = { "allSlots_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCM_InventoryComponent_Statics::NewProp_allSlots_ValueProp = { "allSlots", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UCM_InventorySlot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCM_InventoryComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCM_InventoryComponent_Statics::NewProp_allSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCM_InventoryComponent_Statics::NewProp_allSlots_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCM_InventoryComponent_Statics::NewProp_allSlots_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCM_InventoryComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCM_InventoryComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCM_InventoryComponent_Statics::ClassParams = {
		&UCM_InventoryComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCM_InventoryComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCM_InventoryComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCM_InventoryComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCM_InventoryComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCM_InventoryComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCM_InventoryComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCM_InventoryComponent, 913940144);
	template<> CAMMANAGER_API UClass* StaticClass<UCM_InventoryComponent>()
	{
		return UCM_InventoryComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCM_InventoryComponent(Z_Construct_UClass_UCM_InventoryComponent, &UCM_InventoryComponent::StaticClass, TEXT("/Script/CamManager"), TEXT("UCM_InventoryComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCM_InventoryComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
