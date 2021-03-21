// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CamManager/ITarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeITarget() {}
// Cross Module References
	CAMMANAGER_API UClass* Z_Construct_UClass_UITarget_NoRegister();
	CAMMANAGER_API UClass* Z_Construct_UClass_UITarget();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_CamManager();
	CAMMANAGER_API UClass* Z_Construct_UClass_UCM_TargetStatsComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IITarget::execGetTargetStats)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCM_TargetStatsComponent**)Z_Param__Result=P_THIS->GetTargetStats_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IITarget::execInitTargetStatsComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitTargetStatsComponent_Implementation();
		P_NATIVE_END;
	}
	UCM_TargetStatsComponent* IITarget::GetTargetStats()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTargetStats instead.");
		ITarget_eventGetTargetStats_Parms Parms;
		return Parms.ReturnValue;
	}
	void IITarget::InitTargetStatsComponent()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_InitTargetStatsComponent instead.");
	}
	void UITarget::StaticRegisterNativesUITarget()
	{
		UClass* Class = UITarget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTargetStats", &IITarget::execGetTargetStats },
			{ "InitTargetStatsComponent", &IITarget::execInitTargetStatsComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UITarget_GetTargetStats_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UITarget_GetTargetStats_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UITarget_GetTargetStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ITarget_eventGetTargetStats_Parms, ReturnValue), Z_Construct_UClass_UCM_TargetStatsComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UITarget_GetTargetStats_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UITarget_GetTargetStats_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UITarget_GetTargetStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UITarget_GetTargetStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UITarget_GetTargetStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ITarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UITarget_GetTargetStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UITarget, nullptr, "GetTargetStats", nullptr, nullptr, sizeof(ITarget_eventGetTargetStats_Parms), Z_Construct_UFunction_UITarget_GetTargetStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UITarget_GetTargetStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UITarget_GetTargetStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UITarget_GetTargetStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UITarget_GetTargetStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UITarget_GetTargetStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UITarget_InitTargetStatsComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UITarget_InitTargetStatsComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ITarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UITarget_InitTargetStatsComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UITarget, nullptr, "InitTargetStatsComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UITarget_InitTargetStatsComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UITarget_InitTargetStatsComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UITarget_InitTargetStatsComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UITarget_InitTargetStatsComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UITarget_NoRegister()
	{
		return UITarget::StaticClass();
	}
	struct Z_Construct_UClass_UITarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UITarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CamManager,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UITarget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UITarget_GetTargetStats, "GetTargetStats" }, // 1821583946
		{ &Z_Construct_UFunction_UITarget_InitTargetStatsComponent, "InitTargetStatsComponent" }, // 138682996
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UITarget_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "ITarget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UITarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IITarget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UITarget_Statics::ClassParams = {
		&UITarget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UITarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UITarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UITarget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UITarget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UITarget, 2872690789);
	template<> CAMMANAGER_API UClass* StaticClass<UITarget>()
	{
		return UITarget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UITarget(Z_Construct_UClass_UITarget, &UITarget::StaticClass, TEXT("/Script/CamManager"), TEXT("UITarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UITarget);
	static FName NAME_UITarget_GetTargetStats = FName(TEXT("GetTargetStats"));
	UCM_TargetStatsComponent* IITarget::Execute_GetTargetStats(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UITarget::StaticClass()));
		ITarget_eventGetTargetStats_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UITarget_GetTargetStats);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IITarget*)(O->GetNativeInterfaceAddress(UITarget::StaticClass())))
		{
			Parms.ReturnValue = I->GetTargetStats_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UITarget_InitTargetStatsComponent = FName(TEXT("InitTargetStatsComponent"));
	void IITarget::Execute_InitTargetStatsComponent(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UITarget::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UITarget_InitTargetStatsComponent);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IITarget*)(O->GetNativeInterfaceAddress(UITarget::StaticClass())))
		{
			I->InitTargetStatsComponent_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
