// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CamManager/CM_CameraManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCM_CameraManager() {}
// Cross Module References
	CAMMANAGER_API UClass* Z_Construct_UClass_ACM_CameraManager_NoRegister();
	CAMMANAGER_API UClass* Z_Construct_UClass_ACM_CameraManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CamManager();
	CAMMANAGER_API UClass* Z_Construct_UClass_ACM_Camera_NoRegister();
// End Cross Module References
	void ACM_CameraManager::StaticRegisterNativesACM_CameraManager()
	{
	}
	UClass* Z_Construct_UClass_ACM_CameraManager_NoRegister()
	{
		return ACM_CameraManager::StaticClass();
	}
	struct Z_Construct_UClass_ACM_CameraManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_handler_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_handler;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_handler_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_handler_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACM_CameraManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CamManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACM_CameraManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CM_CameraManager.h" },
		{ "ModuleRelativePath", "CM_CameraManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACM_CameraManager_Statics::NewProp_handler_MetaData[] = {
		{ "ModuleRelativePath", "CM_CameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ACM_CameraManager_Statics::NewProp_handler = { "handler", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACM_CameraManager, handler), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACM_CameraManager_Statics::NewProp_handler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACM_CameraManager_Statics::NewProp_handler_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACM_CameraManager_Statics::NewProp_handler_Key_KeyProp = { "handler_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACM_CameraManager_Statics::NewProp_handler_ValueProp = { "handler", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_ACM_Camera_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACM_CameraManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACM_CameraManager_Statics::NewProp_handler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACM_CameraManager_Statics::NewProp_handler_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACM_CameraManager_Statics::NewProp_handler_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACM_CameraManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACM_CameraManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACM_CameraManager_Statics::ClassParams = {
		&ACM_CameraManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACM_CameraManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACM_CameraManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACM_CameraManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACM_CameraManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACM_CameraManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACM_CameraManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACM_CameraManager, 1295448928);
	template<> CAMMANAGER_API UClass* StaticClass<ACM_CameraManager>()
	{
		return ACM_CameraManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACM_CameraManager(Z_Construct_UClass_ACM_CameraManager, &ACM_CameraManager::StaticClass, TEXT("/Script/CamManager"), TEXT("ACM_CameraManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACM_CameraManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
