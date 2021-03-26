// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CamManager/CM_UserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCM_UserWidget() {}
// Cross Module References
	CAMMANAGER_API UClass* Z_Construct_UClass_UCM_UserWidget_NoRegister();
	CAMMANAGER_API UClass* Z_Construct_UClass_UCM_UserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_CamManager();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	CAMMANAGER_API UClass* Z_Construct_UClass_ACM_Player_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCM_UserWidget::execUpdatePotionValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePotionValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCM_UserWidget::execUpdateManaBarValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateManaBarValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCM_UserWidget::execUpdateHealBarValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHealBarValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCM_UserWidget::execSetManaPotionText)
	{
		P_GET_OBJECT(UTextBlock,Z_Param__newText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetManaPotionText(Z_Param__newText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCM_UserWidget::execSetHealPotionText)
	{
		P_GET_OBJECT(UTextBlock,Z_Param__newText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHealPotionText(Z_Param__newText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCM_UserWidget::execSetManaProgressBar)
	{
		P_GET_OBJECT(UProgressBar,Z_Param__newBar);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetManaProgressBar(Z_Param__newBar);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCM_UserWidget::execSetHealProgressBar)
	{
		P_GET_OBJECT(UProgressBar,Z_Param__newBar);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHealProgressBar(Z_Param__newBar);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCM_UserWidget::execInitStatsBar)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitStatsBar();
		P_NATIVE_END;
	}
	void UCM_UserWidget::StaticRegisterNativesUCM_UserWidget()
	{
		UClass* Class = UCM_UserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitStatsBar", &UCM_UserWidget::execInitStatsBar },
			{ "SetHealPotionText", &UCM_UserWidget::execSetHealPotionText },
			{ "SetHealProgressBar", &UCM_UserWidget::execSetHealProgressBar },
			{ "SetManaPotionText", &UCM_UserWidget::execSetManaPotionText },
			{ "SetManaProgressBar", &UCM_UserWidget::execSetManaProgressBar },
			{ "UpdateHealBarValue", &UCM_UserWidget::execUpdateHealBarValue },
			{ "UpdateManaBarValue", &UCM_UserWidget::execUpdateManaBarValue },
			{ "UpdatePotionValue", &UCM_UserWidget::execUpdatePotionValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCM_UserWidget_InitStatsBar_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCM_UserWidget_InitStatsBar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CM_UserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCM_UserWidget_InitStatsBar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCM_UserWidget, nullptr, "InitStatsBar", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCM_UserWidget_InitStatsBar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCM_UserWidget_InitStatsBar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCM_UserWidget_InitStatsBar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCM_UserWidget_InitStatsBar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCM_UserWidget_SetHealPotionText_Statics
	{
		struct CM_UserWidget_eventSetHealPotionText_Parms
		{
			UTextBlock* _newText;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__newText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__newText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCM_UserWidget_SetHealPotionText_Statics::NewProp__newText_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCM_UserWidget_SetHealPotionText_Statics::NewProp__newText = { "_newText", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CM_UserWidget_eventSetHealPotionText_Parms, _newText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCM_UserWidget_SetHealPotionText_Statics::NewProp__newText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCM_UserWidget_SetHealPotionText_Statics::NewProp__newText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCM_UserWidget_SetHealPotionText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCM_UserWidget_SetHealPotionText_Statics::NewProp__newText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCM_UserWidget_SetHealPotionText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CM_UserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCM_UserWidget_SetHealPotionText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCM_UserWidget, nullptr, "SetHealPotionText", nullptr, nullptr, sizeof(CM_UserWidget_eventSetHealPotionText_Parms), Z_Construct_UFunction_UCM_UserWidget_SetHealPotionText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCM_UserWidget_SetHealPotionText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCM_UserWidget_SetHealPotionText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCM_UserWidget_SetHealPotionText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCM_UserWidget_SetHealPotionText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCM_UserWidget_SetHealPotionText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCM_UserWidget_SetHealProgressBar_Statics
	{
		struct CM_UserWidget_eventSetHealProgressBar_Parms
		{
			UProgressBar* _newBar;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__newBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__newBar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCM_UserWidget_SetHealProgressBar_Statics::NewProp__newBar_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCM_UserWidget_SetHealProgressBar_Statics::NewProp__newBar = { "_newBar", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CM_UserWidget_eventSetHealProgressBar_Parms, _newBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCM_UserWidget_SetHealProgressBar_Statics::NewProp__newBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCM_UserWidget_SetHealProgressBar_Statics::NewProp__newBar_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCM_UserWidget_SetHealProgressBar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCM_UserWidget_SetHealProgressBar_Statics::NewProp__newBar,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCM_UserWidget_SetHealProgressBar_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Setter\n" },
		{ "ModuleRelativePath", "CM_UserWidget.h" },
		{ "ToolTip", "Setter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCM_UserWidget_SetHealProgressBar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCM_UserWidget, nullptr, "SetHealProgressBar", nullptr, nullptr, sizeof(CM_UserWidget_eventSetHealProgressBar_Parms), Z_Construct_UFunction_UCM_UserWidget_SetHealProgressBar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCM_UserWidget_SetHealProgressBar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCM_UserWidget_SetHealProgressBar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCM_UserWidget_SetHealProgressBar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCM_UserWidget_SetHealProgressBar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCM_UserWidget_SetHealProgressBar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCM_UserWidget_SetManaPotionText_Statics
	{
		struct CM_UserWidget_eventSetManaPotionText_Parms
		{
			UTextBlock* _newText;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__newText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__newText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCM_UserWidget_SetManaPotionText_Statics::NewProp__newText_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCM_UserWidget_SetManaPotionText_Statics::NewProp__newText = { "_newText", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CM_UserWidget_eventSetManaPotionText_Parms, _newText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCM_UserWidget_SetManaPotionText_Statics::NewProp__newText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCM_UserWidget_SetManaPotionText_Statics::NewProp__newText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCM_UserWidget_SetManaPotionText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCM_UserWidget_SetManaPotionText_Statics::NewProp__newText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCM_UserWidget_SetManaPotionText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CM_UserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCM_UserWidget_SetManaPotionText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCM_UserWidget, nullptr, "SetManaPotionText", nullptr, nullptr, sizeof(CM_UserWidget_eventSetManaPotionText_Parms), Z_Construct_UFunction_UCM_UserWidget_SetManaPotionText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCM_UserWidget_SetManaPotionText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCM_UserWidget_SetManaPotionText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCM_UserWidget_SetManaPotionText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCM_UserWidget_SetManaPotionText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCM_UserWidget_SetManaPotionText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCM_UserWidget_SetManaProgressBar_Statics
	{
		struct CM_UserWidget_eventSetManaProgressBar_Parms
		{
			UProgressBar* _newBar;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__newBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__newBar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCM_UserWidget_SetManaProgressBar_Statics::NewProp__newBar_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCM_UserWidget_SetManaProgressBar_Statics::NewProp__newBar = { "_newBar", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CM_UserWidget_eventSetManaProgressBar_Parms, _newBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCM_UserWidget_SetManaProgressBar_Statics::NewProp__newBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCM_UserWidget_SetManaProgressBar_Statics::NewProp__newBar_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCM_UserWidget_SetManaProgressBar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCM_UserWidget_SetManaProgressBar_Statics::NewProp__newBar,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCM_UserWidget_SetManaProgressBar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CM_UserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCM_UserWidget_SetManaProgressBar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCM_UserWidget, nullptr, "SetManaProgressBar", nullptr, nullptr, sizeof(CM_UserWidget_eventSetManaProgressBar_Parms), Z_Construct_UFunction_UCM_UserWidget_SetManaProgressBar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCM_UserWidget_SetManaProgressBar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCM_UserWidget_SetManaProgressBar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCM_UserWidget_SetManaProgressBar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCM_UserWidget_SetManaProgressBar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCM_UserWidget_SetManaProgressBar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCM_UserWidget_UpdateHealBarValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCM_UserWidget_UpdateHealBarValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CM_UserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCM_UserWidget_UpdateHealBarValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCM_UserWidget, nullptr, "UpdateHealBarValue", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCM_UserWidget_UpdateHealBarValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCM_UserWidget_UpdateHealBarValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCM_UserWidget_UpdateHealBarValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCM_UserWidget_UpdateHealBarValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCM_UserWidget_UpdateManaBarValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCM_UserWidget_UpdateManaBarValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CM_UserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCM_UserWidget_UpdateManaBarValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCM_UserWidget, nullptr, "UpdateManaBarValue", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCM_UserWidget_UpdateManaBarValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCM_UserWidget_UpdateManaBarValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCM_UserWidget_UpdateManaBarValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCM_UserWidget_UpdateManaBarValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCM_UserWidget_UpdatePotionValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCM_UserWidget_UpdatePotionValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CM_UserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCM_UserWidget_UpdatePotionValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCM_UserWidget, nullptr, "UpdatePotionValue", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCM_UserWidget_UpdatePotionValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCM_UserWidget_UpdatePotionValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCM_UserWidget_UpdatePotionValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCM_UserWidget_UpdatePotionValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCM_UserWidget_NoRegister()
	{
		return UCM_UserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCM_UserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_manaPotionTextBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_manaPotionTextBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_healPotionTextBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_healPotionTextBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_manaProgressBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_manaProgressBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_healProgressBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_healProgressBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCM_UserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CamManager,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCM_UserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCM_UserWidget_InitStatsBar, "InitStatsBar" }, // 1557073950
		{ &Z_Construct_UFunction_UCM_UserWidget_SetHealPotionText, "SetHealPotionText" }, // 3726467644
		{ &Z_Construct_UFunction_UCM_UserWidget_SetHealProgressBar, "SetHealProgressBar" }, // 2907006915
		{ &Z_Construct_UFunction_UCM_UserWidget_SetManaPotionText, "SetManaPotionText" }, // 1128005966
		{ &Z_Construct_UFunction_UCM_UserWidget_SetManaProgressBar, "SetManaProgressBar" }, // 1553781986
		{ &Z_Construct_UFunction_UCM_UserWidget_UpdateHealBarValue, "UpdateHealBarValue" }, // 2726007206
		{ &Z_Construct_UFunction_UCM_UserWidget_UpdateManaBarValue, "UpdateManaBarValue" }, // 338554328
		{ &Z_Construct_UFunction_UCM_UserWidget_UpdatePotionValue, "UpdatePotionValue" }, // 1013643725
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCM_UserWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CM_UserWidget.h" },
		{ "ModuleRelativePath", "CM_UserWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCM_UserWidget_Statics::NewProp_manaPotionTextBlock_MetaData[] = {
		{ "Category", "CM_UserWidget" },
		{ "EditInline", "true" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "CM_UserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCM_UserWidget_Statics::NewProp_manaPotionTextBlock = { "manaPotionTextBlock", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCM_UserWidget, manaPotionTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCM_UserWidget_Statics::NewProp_manaPotionTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCM_UserWidget_Statics::NewProp_manaPotionTextBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCM_UserWidget_Statics::NewProp_healPotionTextBlock_MetaData[] = {
		{ "Category", "CM_UserWidget" },
		{ "EditInline", "true" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "CM_UserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCM_UserWidget_Statics::NewProp_healPotionTextBlock = { "healPotionTextBlock", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCM_UserWidget, healPotionTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCM_UserWidget_Statics::NewProp_healPotionTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCM_UserWidget_Statics::NewProp_healPotionTextBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCM_UserWidget_Statics::NewProp_manaProgressBar_MetaData[] = {
		{ "Category", "CM_UserWidget" },
		{ "EditInline", "true" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "CM_UserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCM_UserWidget_Statics::NewProp_manaProgressBar = { "manaProgressBar", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCM_UserWidget, manaProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCM_UserWidget_Statics::NewProp_manaProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCM_UserWidget_Statics::NewProp_manaProgressBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCM_UserWidget_Statics::NewProp_healProgressBar_MetaData[] = {
		{ "Category", "CM_UserWidget" },
		{ "EditInline", "true" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "CM_UserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCM_UserWidget_Statics::NewProp_healProgressBar = { "healProgressBar", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCM_UserWidget, healProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCM_UserWidget_Statics::NewProp_healProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCM_UserWidget_Statics::NewProp_healProgressBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCM_UserWidget_Statics::NewProp_player_MetaData[] = {
		{ "Category", "CM_UserWidget" },
		{ "ModuleRelativePath", "CM_UserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCM_UserWidget_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCM_UserWidget, player), Z_Construct_UClass_ACM_Player_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCM_UserWidget_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCM_UserWidget_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCM_UserWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCM_UserWidget_Statics::NewProp_manaPotionTextBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCM_UserWidget_Statics::NewProp_healPotionTextBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCM_UserWidget_Statics::NewProp_manaProgressBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCM_UserWidget_Statics::NewProp_healProgressBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCM_UserWidget_Statics::NewProp_player,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCM_UserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCM_UserWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCM_UserWidget_Statics::ClassParams = {
		&UCM_UserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCM_UserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCM_UserWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCM_UserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCM_UserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCM_UserWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCM_UserWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCM_UserWidget, 1504089649);
	template<> CAMMANAGER_API UClass* StaticClass<UCM_UserWidget>()
	{
		return UCM_UserWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCM_UserWidget(Z_Construct_UClass_UCM_UserWidget, &UCM_UserWidget::StaticClass, TEXT("/Script/CamManager"), TEXT("UCM_UserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCM_UserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
