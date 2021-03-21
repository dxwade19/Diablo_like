// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CamManager/CM_CameraTPS.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCM_CameraTPS() {}
// Cross Module References
	CAMMANAGER_API UClass* Z_Construct_UClass_ACM_CameraTPS_NoRegister();
	CAMMANAGER_API UClass* Z_Construct_UClass_ACM_CameraTPS();
	CAMMANAGER_API UClass* Z_Construct_UClass_ACM_Camera();
	UPackage* Z_Construct_UPackage__Script_CamManager();
// End Cross Module References
	void ACM_CameraTPS::StaticRegisterNativesACM_CameraTPS()
	{
	}
	UClass* Z_Construct_UClass_ACM_CameraTPS_NoRegister()
	{
		return ACM_CameraTPS::StaticClass();
	}
	struct Z_Construct_UClass_ACM_CameraTPS_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACM_CameraTPS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACM_Camera,
		(UObject* (*)())Z_Construct_UPackage__Script_CamManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACM_CameraTPS_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CM_CameraTPS.h" },
		{ "ModuleRelativePath", "CM_CameraTPS.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACM_CameraTPS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACM_CameraTPS>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACM_CameraTPS_Statics::ClassParams = {
		&ACM_CameraTPS::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACM_CameraTPS_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACM_CameraTPS_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACM_CameraTPS()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACM_CameraTPS_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACM_CameraTPS, 609404088);
	template<> CAMMANAGER_API UClass* StaticClass<ACM_CameraTPS>()
	{
		return ACM_CameraTPS::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACM_CameraTPS(Z_Construct_UClass_ACM_CameraTPS, &ACM_CameraTPS::StaticClass, TEXT("/Script/CamManager"), TEXT("ACM_CameraTPS"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACM_CameraTPS);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
