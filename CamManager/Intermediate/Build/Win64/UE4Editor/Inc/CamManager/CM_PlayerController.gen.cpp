// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CamManager/CM_PlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCM_PlayerController() {}
// Cross Module References
	CAMMANAGER_API UClass* Z_Construct_UClass_ACM_PlayerController_NoRegister();
	CAMMANAGER_API UClass* Z_Construct_UClass_ACM_PlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_CamManager();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ACM_PlayerController::StaticRegisterNativesACM_PlayerController()
	{
	}
	UClass* Z_Construct_UClass_ACM_PlayerController_NoRegister()
	{
		return ACM_PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ACM_PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_targetPos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACM_PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_CamManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACM_PlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CM_PlayerController.h" },
		{ "ModuleRelativePath", "CM_PlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACM_PlayerController_Statics::NewProp_targetPos_MetaData[] = {
		{ "ModuleRelativePath", "CM_PlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACM_PlayerController_Statics::NewProp_targetPos = { "targetPos", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACM_PlayerController, targetPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ACM_PlayerController_Statics::NewProp_targetPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACM_PlayerController_Statics::NewProp_targetPos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACM_PlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACM_PlayerController_Statics::NewProp_targetPos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACM_PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACM_PlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACM_PlayerController_Statics::ClassParams = {
		&ACM_PlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACM_PlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACM_PlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACM_PlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACM_PlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACM_PlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACM_PlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACM_PlayerController, 92474880);
	template<> CAMMANAGER_API UClass* StaticClass<ACM_PlayerController>()
	{
		return ACM_PlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACM_PlayerController(Z_Construct_UClass_ACM_PlayerController, &ACM_PlayerController::StaticClass, TEXT("/Script/CamManager"), TEXT("ACM_PlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACM_PlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
