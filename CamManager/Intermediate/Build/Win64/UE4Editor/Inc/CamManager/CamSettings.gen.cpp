// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CamManager/CamSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCamSettings() {}
// Cross Module References
	CAMMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FCamSettings();
	UPackage* Z_Construct_UPackage__Script_CamManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FCamSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CAMMANAGER_API uint32 Get_Z_Construct_UScriptStruct_FCamSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCamSettings, Z_Construct_UPackage__Script_CamManager(), TEXT("CamSettings"), sizeof(FCamSettings), Get_Z_Construct_UScriptStruct_FCamSettings_Hash());
	}
	return Singleton;
}
template<> CAMMANAGER_API UScriptStruct* StaticStruct<FCamSettings>()
{
	return FCamSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCamSettings(FCamSettings::StaticStruct, TEXT("/Script/CamManager"), TEXT("CamSettings"), false, nullptr, nullptr);
static struct FScriptStruct_CamManager_StaticRegisterNativesFCamSettings
{
	FScriptStruct_CamManager_StaticRegisterNativesFCamSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CamSettings")),new UScriptStruct::TCppStructOps<FCamSettings>);
	}
} ScriptStruct_CamManager_StaticRegisterNativesFCamSettings;
	struct Z_Construct_UScriptStruct_FCamSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lookAtSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lookAtSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_positionMoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_positionMoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_zPosOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_zPosOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_yPosOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_yPosOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_xPosOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_xPosOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isWorldOffset_MetaData[];
#endif
		static void NewProp_isWorldOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isWorldOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetToLook_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetToLook;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCamSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "CamSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCamSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCamSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCamSettings_Statics::NewProp_lookAtSpeed_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "CamSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCamSettings_Statics::NewProp_lookAtSpeed = { "lookAtSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCamSettings, lookAtSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FCamSettings_Statics::NewProp_lookAtSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCamSettings_Statics::NewProp_lookAtSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCamSettings_Statics::NewProp_positionMoveSpeed_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "CamSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCamSettings_Statics::NewProp_positionMoveSpeed = { "positionMoveSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCamSettings, positionMoveSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FCamSettings_Statics::NewProp_positionMoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCamSettings_Statics::NewProp_positionMoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCamSettings_Statics::NewProp_zPosOffset_MetaData[] = {
		{ "Category", "Position Offset" },
		{ "ModuleRelativePath", "CamSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCamSettings_Statics::NewProp_zPosOffset = { "zPosOffset", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCamSettings, zPosOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FCamSettings_Statics::NewProp_zPosOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCamSettings_Statics::NewProp_zPosOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCamSettings_Statics::NewProp_yPosOffset_MetaData[] = {
		{ "Category", "Position Offset" },
		{ "ModuleRelativePath", "CamSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCamSettings_Statics::NewProp_yPosOffset = { "yPosOffset", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCamSettings, yPosOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FCamSettings_Statics::NewProp_yPosOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCamSettings_Statics::NewProp_yPosOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCamSettings_Statics::NewProp_xPosOffset_MetaData[] = {
		{ "Category", "Position Offset" },
		{ "ModuleRelativePath", "CamSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCamSettings_Statics::NewProp_xPosOffset = { "xPosOffset", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCamSettings, xPosOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FCamSettings_Statics::NewProp_xPosOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCamSettings_Statics::NewProp_xPosOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCamSettings_Statics::NewProp_isWorldOffset_MetaData[] = {
		{ "Category", "Position Offset" },
		{ "ModuleRelativePath", "CamSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCamSettings_Statics::NewProp_isWorldOffset_SetBit(void* Obj)
	{
		((FCamSettings*)Obj)->isWorldOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCamSettings_Statics::NewProp_isWorldOffset = { "isWorldOffset", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCamSettings), &Z_Construct_UScriptStruct_FCamSettings_Statics::NewProp_isWorldOffset_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCamSettings_Statics::NewProp_isWorldOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCamSettings_Statics::NewProp_isWorldOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCamSettings_Statics::NewProp_targetToLook_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "CamSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCamSettings_Statics::NewProp_targetToLook = { "targetToLook", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCamSettings, targetToLook), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCamSettings_Statics::NewProp_targetToLook_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCamSettings_Statics::NewProp_targetToLook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCamSettings_Statics::NewProp_target_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "CamSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCamSettings_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCamSettings, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCamSettings_Statics::NewProp_target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCamSettings_Statics::NewProp_target_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCamSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCamSettings_Statics::NewProp_lookAtSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCamSettings_Statics::NewProp_positionMoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCamSettings_Statics::NewProp_zPosOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCamSettings_Statics::NewProp_yPosOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCamSettings_Statics::NewProp_xPosOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCamSettings_Statics::NewProp_isWorldOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCamSettings_Statics::NewProp_targetToLook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCamSettings_Statics::NewProp_target,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCamSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CamManager,
		nullptr,
		&NewStructOps,
		"CamSettings",
		sizeof(FCamSettings),
		alignof(FCamSettings),
		Z_Construct_UScriptStruct_FCamSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCamSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCamSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCamSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCamSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCamSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CamManager();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CamSettings"), sizeof(FCamSettings), Get_Z_Construct_UScriptStruct_FCamSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCamSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCamSettings_Hash() { return 3732507757U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
