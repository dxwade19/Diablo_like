// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CamManager/CamManagerGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCamManagerGameModeBase() {}
// Cross Module References
	CAMMANAGER_API UClass* Z_Construct_UClass_ACamManagerGameModeBase_NoRegister();
	CAMMANAGER_API UClass* Z_Construct_UClass_ACamManagerGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CamManager();
	CAMMANAGER_API UClass* Z_Construct_UClass_ACM_CameraManager_NoRegister();
// End Cross Module References
	void ACamManagerGameModeBase::StaticRegisterNativesACamManagerGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ACamManagerGameModeBase_NoRegister()
	{
		return ACamManagerGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACamManagerGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cameraManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cameraManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACamManagerGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CamManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamManagerGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CamManagerGameModeBase.h" },
		{ "ModuleRelativePath", "CamManagerGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamManagerGameModeBase_Statics::NewProp_cameraManager_MetaData[] = {
		{ "Category", "CamManagerGameModeBase" },
		{ "ModuleRelativePath", "CamManagerGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACamManagerGameModeBase_Statics::NewProp_cameraManager = { "cameraManager", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACamManagerGameModeBase, cameraManager), Z_Construct_UClass_ACM_CameraManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACamManagerGameModeBase_Statics::NewProp_cameraManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACamManagerGameModeBase_Statics::NewProp_cameraManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACamManagerGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamManagerGameModeBase_Statics::NewProp_cameraManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACamManagerGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACamManagerGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACamManagerGameModeBase_Statics::ClassParams = {
		&ACamManagerGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACamManagerGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACamManagerGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACamManagerGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACamManagerGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACamManagerGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACamManagerGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACamManagerGameModeBase, 2027754075);
	template<> CAMMANAGER_API UClass* StaticClass<ACamManagerGameModeBase>()
	{
		return ACamManagerGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACamManagerGameModeBase(Z_Construct_UClass_ACamManagerGameModeBase, &ACamManagerGameModeBase::StaticClass, TEXT("/Script/CamManager"), TEXT("ACamManagerGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACamManagerGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
