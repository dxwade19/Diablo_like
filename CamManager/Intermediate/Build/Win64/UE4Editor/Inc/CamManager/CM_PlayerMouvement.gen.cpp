// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CamManager/CM_PlayerMouvement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCM_PlayerMouvement() {}
// Cross Module References
	CAMMANAGER_API UClass* Z_Construct_UClass_UCM_PlayerMouvement_NoRegister();
	CAMMANAGER_API UClass* Z_Construct_UClass_UCM_PlayerMouvement();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CamManager();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UCM_PlayerMouvement::StaticRegisterNativesUCM_PlayerMouvement()
	{
	}
	UClass* Z_Construct_UClass_UCM_PlayerMouvement_NoRegister()
	{
		return UCM_PlayerMouvement::StaticClass();
	}
	struct Z_Construct_UClass_UCM_PlayerMouvement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_debugLineColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_debugLineColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_debugTargetPosColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_debugTargetPosColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isUseGizmos_MetaData[];
#endif
		static void NewProp_isUseGizmos_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isUseGizmos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxClampXRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxClampXRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_minClampXRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_minClampXRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_useRotateClampX_MetaData[];
#endif
		static void NewProp_useRotateClampX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_useRotateClampX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rotateSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rotateSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_minDistanceWithTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_minDistanceWithTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_targetPos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCM_PlayerMouvement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CamManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCM_PlayerMouvement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CM_PlayerMouvement.h" },
		{ "ModuleRelativePath", "CM_PlayerMouvement.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_debugLineColor_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "CM_PlayerMouvement.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_debugLineColor = { "debugLineColor", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCM_PlayerMouvement, debugLineColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_debugLineColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_debugLineColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_debugTargetPosColor_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "CM_PlayerMouvement.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_debugTargetPosColor = { "debugTargetPosColor", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCM_PlayerMouvement, debugTargetPosColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_debugTargetPosColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_debugTargetPosColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_isUseGizmos_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "CM_PlayerMouvement.h" },
	};
#endif
	void Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_isUseGizmos_SetBit(void* Obj)
	{
		((UCM_PlayerMouvement*)Obj)->isUseGizmos = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_isUseGizmos = { "isUseGizmos", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCM_PlayerMouvement), &Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_isUseGizmos_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_isUseGizmos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_isUseGizmos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_maxClampXRotation_MetaData[] = {
		{ "Category", "Mouvement Clamp" },
		{ "ModuleRelativePath", "CM_PlayerMouvement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_maxClampXRotation = { "maxClampXRotation", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCM_PlayerMouvement, maxClampXRotation), METADATA_PARAMS(Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_maxClampXRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_maxClampXRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_minClampXRotation_MetaData[] = {
		{ "Category", "Mouvement Clamp" },
		{ "ModuleRelativePath", "CM_PlayerMouvement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_minClampXRotation = { "minClampXRotation", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCM_PlayerMouvement, minClampXRotation), METADATA_PARAMS(Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_minClampXRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_minClampXRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_useRotateClampX_MetaData[] = {
		{ "Category", "Mouvement Clamp" },
		{ "ModuleRelativePath", "CM_PlayerMouvement.h" },
	};
#endif
	void Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_useRotateClampX_SetBit(void* Obj)
	{
		((UCM_PlayerMouvement*)Obj)->useRotateClampX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_useRotateClampX = { "useRotateClampX", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCM_PlayerMouvement), &Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_useRotateClampX_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_useRotateClampX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_useRotateClampX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_rotateSpeed_MetaData[] = {
		{ "Category", "Mouvement Settings" },
		{ "Comment", "//UPROPERTY(EditAnywhere, Category = \"Mouvement Settings\") float moveSpeed = .7f;\n" },
		{ "ModuleRelativePath", "CM_PlayerMouvement.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, Category = \"Mouvement Settings\") float moveSpeed = .7f;" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_rotateSpeed = { "rotateSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCM_PlayerMouvement, rotateSpeed), METADATA_PARAMS(Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_rotateSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_rotateSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_minDistanceWithTarget_MetaData[] = {
		{ "Category", "Mouvement Settings" },
		{ "ModuleRelativePath", "CM_PlayerMouvement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_minDistanceWithTarget = { "minDistanceWithTarget", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCM_PlayerMouvement, minDistanceWithTarget), METADATA_PARAMS(Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_minDistanceWithTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_minDistanceWithTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_targetPos_MetaData[] = {
		{ "ModuleRelativePath", "CM_PlayerMouvement.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_targetPos = { "targetPos", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCM_PlayerMouvement, targetPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_targetPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_targetPos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCM_PlayerMouvement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_debugLineColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_debugTargetPosColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_isUseGizmos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_maxClampXRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_minClampXRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_useRotateClampX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_rotateSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_minDistanceWithTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCM_PlayerMouvement_Statics::NewProp_targetPos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCM_PlayerMouvement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCM_PlayerMouvement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCM_PlayerMouvement_Statics::ClassParams = {
		&UCM_PlayerMouvement::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCM_PlayerMouvement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCM_PlayerMouvement_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCM_PlayerMouvement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCM_PlayerMouvement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCM_PlayerMouvement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCM_PlayerMouvement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCM_PlayerMouvement, 2920487842);
	template<> CAMMANAGER_API UClass* StaticClass<UCM_PlayerMouvement>()
	{
		return UCM_PlayerMouvement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCM_PlayerMouvement(Z_Construct_UClass_UCM_PlayerMouvement, &UCM_PlayerMouvement::StaticClass, TEXT("/Script/CamManager"), TEXT("UCM_PlayerMouvement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCM_PlayerMouvement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
