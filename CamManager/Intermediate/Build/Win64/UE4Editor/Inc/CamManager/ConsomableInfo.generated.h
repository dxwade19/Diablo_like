// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CAMMANAGER_ConsomableInfo_generated_h
#error "ConsomableInfo.generated.h already included, missing '#pragma once' in ConsomableInfo.h"
#endif
#define CAMMANAGER_ConsomableInfo_generated_h

#define CamManager_Source_CamManager_ConsomableInfo_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConsomableInfo_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__numberOfUse() { return STRUCT_OFFSET(FConsomableInfo, numberOfUse); } \
	FORCEINLINE static uint32 __PPO__lifeConsombleType() { return STRUCT_OFFSET(FConsomableInfo, lifeConsombleType); } \
	FORCEINLINE static uint32 __PPO__lifeValue() { return STRUCT_OFFSET(FConsomableInfo, lifeValue); } \
	FORCEINLINE static uint32 __PPO__manaConsombleType() { return STRUCT_OFFSET(FConsomableInfo, manaConsombleType); } \
	FORCEINLINE static uint32 __PPO__manaValue() { return STRUCT_OFFSET(FConsomableInfo, manaValue); }


template<> CAMMANAGER_API UScriptStruct* StaticStruct<struct FConsomableInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CamManager_Source_CamManager_ConsomableInfo_h


#define FOREACH_ENUM_ECONSOMABLEEFFECT(op) \
	op(EConsomableEffect::Additive) \
	op(EConsomableEffect::Substractive) 

enum class EConsomableEffect : uint8;
template<> CAMMANAGER_API UEnum* StaticEnum<EConsomableEffect>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
