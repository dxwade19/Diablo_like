// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CamManager/CM_PlayerHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCM_PlayerHUD() {}
// Cross Module References
	CAMMANAGER_API UClass* Z_Construct_UClass_ACM_PlayerHUD_NoRegister();
	CAMMANAGER_API UClass* Z_Construct_UClass_ACM_PlayerHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_CamManager();
	CAMMANAGER_API UClass* Z_Construct_UClass_UCM_UserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void ACM_PlayerHUD::StaticRegisterNativesACM_PlayerHUD()
	{
	}
	UClass* Z_Construct_UClass_ACM_PlayerHUD_NoRegister()
	{
		return ACM_PlayerHUD::StaticClass();
	}
	struct Z_Construct_UClass_ACM_PlayerHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_userWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_userWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_userWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_userWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACM_PlayerHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_CamManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACM_PlayerHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "CM_PlayerHUD.h" },
		{ "ModuleRelativePath", "CM_PlayerHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACM_PlayerHUD_Statics::NewProp_userWidget_MetaData[] = {
		{ "Category", "CM_PlayerHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CM_PlayerHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACM_PlayerHUD_Statics::NewProp_userWidget = { "userWidget", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACM_PlayerHUD, userWidget), Z_Construct_UClass_UCM_UserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACM_PlayerHUD_Statics::NewProp_userWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACM_PlayerHUD_Statics::NewProp_userWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACM_PlayerHUD_Statics::NewProp_userWidgetClass_MetaData[] = {
		{ "Category", "CM_PlayerHUD" },
		{ "ModuleRelativePath", "CM_PlayerHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACM_PlayerHUD_Statics::NewProp_userWidgetClass = { "userWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACM_PlayerHUD, userWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACM_PlayerHUD_Statics::NewProp_userWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACM_PlayerHUD_Statics::NewProp_userWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACM_PlayerHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACM_PlayerHUD_Statics::NewProp_userWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACM_PlayerHUD_Statics::NewProp_userWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACM_PlayerHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACM_PlayerHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACM_PlayerHUD_Statics::ClassParams = {
		&ACM_PlayerHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACM_PlayerHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACM_PlayerHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACM_PlayerHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACM_PlayerHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACM_PlayerHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACM_PlayerHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACM_PlayerHUD, 456078244);
	template<> CAMMANAGER_API UClass* StaticClass<ACM_PlayerHUD>()
	{
		return ACM_PlayerHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACM_PlayerHUD(Z_Construct_UClass_ACM_PlayerHUD, &ACM_PlayerHUD::StaticClass, TEXT("/Script/CamManager"), TEXT("ACM_PlayerHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACM_PlayerHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
