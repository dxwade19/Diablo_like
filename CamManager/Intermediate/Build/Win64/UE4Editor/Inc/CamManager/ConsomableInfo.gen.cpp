// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CamManager/ConsomableInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConsomableInfo() {}
// Cross Module References
	CAMMANAGER_API UEnum* Z_Construct_UEnum_CamManager_EConsomableEffect();
	UPackage* Z_Construct_UPackage__Script_CamManager();
	CAMMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FConsomableInfo();
// End Cross Module References
	static UEnum* EConsomableEffect_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CamManager_EConsomableEffect, Z_Construct_UPackage__Script_CamManager(), TEXT("EConsomableEffect"));
		}
		return Singleton;
	}
	template<> CAMMANAGER_API UEnum* StaticEnum<EConsomableEffect>()
	{
		return EConsomableEffect_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EConsomableEffect(EConsomableEffect_StaticEnum, TEXT("/Script/CamManager"), TEXT("EConsomableEffect"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CamManager_EConsomableEffect_Hash() { return 2309916264U; }
	UEnum* Z_Construct_UEnum_CamManager_EConsomableEffect()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CamManager();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EConsomableEffect"), 0, Get_Z_Construct_UEnum_CamManager_EConsomableEffect_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EConsomableEffect::Additive", (int64)EConsomableEffect::Additive },
				{ "EConsomableEffect::Substractive", (int64)EConsomableEffect::Substractive },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Additive.Name", "EConsomableEffect::Additive" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "ConsomableInfo.h" },
				{ "Substractive.Name", "EConsomableEffect::Substractive" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CamManager,
				nullptr,
				"EConsomableEffect",
				"EConsomableEffect",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FConsomableInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CAMMANAGER_API uint32 Get_Z_Construct_UScriptStruct_FConsomableInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConsomableInfo, Z_Construct_UPackage__Script_CamManager(), TEXT("ConsomableInfo"), sizeof(FConsomableInfo), Get_Z_Construct_UScriptStruct_FConsomableInfo_Hash());
	}
	return Singleton;
}
template<> CAMMANAGER_API UScriptStruct* StaticStruct<FConsomableInfo>()
{
	return FConsomableInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConsomableInfo(FConsomableInfo::StaticStruct, TEXT("/Script/CamManager"), TEXT("ConsomableInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CamManager_StaticRegisterNativesFConsomableInfo
{
	FScriptStruct_CamManager_StaticRegisterNativesFConsomableInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConsomableInfo")),new UScriptStruct::TCppStructOps<FConsomableInfo>);
	}
} ScriptStruct_CamManager_StaticRegisterNativesFConsomableInfo;
	struct Z_Construct_UScriptStruct_FConsomableInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_manaValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_manaValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_manaConsombleType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_manaConsombleType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_manaConsombleType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lifeValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lifeValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lifeConsombleType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_lifeConsombleType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_lifeConsombleType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_numberOfUse_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_numberOfUse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsomableInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ConsomableInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConsomableInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConsomableInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsomableInfo_Statics::NewProp_manaValue_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "ConsomableInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConsomableInfo_Statics::NewProp_manaValue = { "manaValue", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConsomableInfo, manaValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FConsomableInfo_Statics::NewProp_manaValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsomableInfo_Statics::NewProp_manaValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsomableInfo_Statics::NewProp_manaConsombleType_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "ConsomableInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConsomableInfo_Statics::NewProp_manaConsombleType = { "manaConsombleType", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConsomableInfo, manaConsombleType), Z_Construct_UEnum_CamManager_EConsomableEffect, METADATA_PARAMS(Z_Construct_UScriptStruct_FConsomableInfo_Statics::NewProp_manaConsombleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsomableInfo_Statics::NewProp_manaConsombleType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConsomableInfo_Statics::NewProp_manaConsombleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsomableInfo_Statics::NewProp_lifeValue_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "ConsomableInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConsomableInfo_Statics::NewProp_lifeValue = { "lifeValue", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConsomableInfo, lifeValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FConsomableInfo_Statics::NewProp_lifeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsomableInfo_Statics::NewProp_lifeValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsomableInfo_Statics::NewProp_lifeConsombleType_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "ConsomableInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConsomableInfo_Statics::NewProp_lifeConsombleType = { "lifeConsombleType", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConsomableInfo, lifeConsombleType), Z_Construct_UEnum_CamManager_EConsomableEffect, METADATA_PARAMS(Z_Construct_UScriptStruct_FConsomableInfo_Statics::NewProp_lifeConsombleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsomableInfo_Statics::NewProp_lifeConsombleType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConsomableInfo_Statics::NewProp_lifeConsombleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsomableInfo_Statics::NewProp_numberOfUse_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "ConsomableInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FConsomableInfo_Statics::NewProp_numberOfUse = { "numberOfUse", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConsomableInfo, numberOfUse), METADATA_PARAMS(Z_Construct_UScriptStruct_FConsomableInfo_Statics::NewProp_numberOfUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsomableInfo_Statics::NewProp_numberOfUse_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConsomableInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsomableInfo_Statics::NewProp_manaValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsomableInfo_Statics::NewProp_manaConsombleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsomableInfo_Statics::NewProp_manaConsombleType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsomableInfo_Statics::NewProp_lifeValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsomableInfo_Statics::NewProp_lifeConsombleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsomableInfo_Statics::NewProp_lifeConsombleType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsomableInfo_Statics::NewProp_numberOfUse,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConsomableInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CamManager,
		nullptr,
		&NewStructOps,
		"ConsomableInfo",
		sizeof(FConsomableInfo),
		alignof(FConsomableInfo),
		Z_Construct_UScriptStruct_FConsomableInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsomableInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConsomableInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsomableInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConsomableInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConsomableInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CamManager();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConsomableInfo"), sizeof(FConsomableInfo), Get_Z_Construct_UScriptStruct_FConsomableInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConsomableInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConsomableInfo_Hash() { return 2405114118U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
