// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CamManager/CM_Camera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCM_Camera() {}
// Cross Module References
	CAMMANAGER_API UClass* Z_Construct_UClass_ACM_Camera_NoRegister();
	CAMMANAGER_API UClass* Z_Construct_UClass_ACM_Camera();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CamManager();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	CAMMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FCamSettings();
// End Cross Module References
	DEFINE_FUNCTION(ACM_Camera::execDrawDebug)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawDebug();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACM_Camera::execLookAt)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LookAt();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACM_Camera::execMove)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Move();
		P_NATIVE_END;
	}
	void ACM_Camera::StaticRegisterNativesACM_Camera()
	{
		UClass* Class = ACM_Camera::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawDebug", &ACM_Camera::execDrawDebug },
			{ "LookAt", &ACM_Camera::execLookAt },
			{ "Move", &ACM_Camera::execMove },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACM_Camera_DrawDebug_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACM_Camera_DrawDebug_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CM_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACM_Camera_DrawDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACM_Camera, nullptr, "DrawDebug", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACM_Camera_DrawDebug_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACM_Camera_DrawDebug_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACM_Camera_DrawDebug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACM_Camera_DrawDebug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACM_Camera_LookAt_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACM_Camera_LookAt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CM_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACM_Camera_LookAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACM_Camera, nullptr, "LookAt", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACM_Camera_LookAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACM_Camera_LookAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACM_Camera_LookAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACM_Camera_LookAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACM_Camera_Move_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACM_Camera_Move_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CM_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACM_Camera_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACM_Camera, nullptr, "Move", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACM_Camera_Move_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACM_Camera_Move_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACM_Camera_Move()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACM_Camera_Move_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACM_Camera_NoRegister()
	{
		return ACM_Camera::StaticClass();
	}
	struct Z_Construct_UClass_ACM_Camera_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lineToTargetColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_lineToTargetColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_useDebug_MetaData[];
#endif
		static void NewProp_useDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_useDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_actorComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_settings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACM_Camera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CamManager,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACM_Camera_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACM_Camera_DrawDebug, "DrawDebug" }, // 1567298360
		{ &Z_Construct_UFunction_ACM_Camera_LookAt, "LookAt" }, // 2460235456
		{ &Z_Construct_UFunction_ACM_Camera_Move, "Move" }, // 2536477377
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACM_Camera_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CM_Camera.h" },
		{ "ModuleRelativePath", "CM_Camera.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACM_Camera_Statics::NewProp_lineToTargetColor_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "CM_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACM_Camera_Statics::NewProp_lineToTargetColor = { "lineToTargetColor", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACM_Camera, lineToTargetColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_ACM_Camera_Statics::NewProp_lineToTargetColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACM_Camera_Statics::NewProp_lineToTargetColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACM_Camera_Statics::NewProp_useDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "CM_Camera.h" },
	};
#endif
	void Z_Construct_UClass_ACM_Camera_Statics::NewProp_useDebug_SetBit(void* Obj)
	{
		((ACM_Camera*)Obj)->useDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACM_Camera_Statics::NewProp_useDebug = { "useDebug", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACM_Camera), &Z_Construct_UClass_ACM_Camera_Statics::NewProp_useDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACM_Camera_Statics::NewProp_useDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACM_Camera_Statics::NewProp_useDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACM_Camera_Statics::NewProp_actorComponent_MetaData[] = {
		{ "Category", "Camera Component" },
		{ "ModuleRelativePath", "CM_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACM_Camera_Statics::NewProp_actorComponent = { "actorComponent", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACM_Camera, actorComponent), Z_Construct_UClass_UActorComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACM_Camera_Statics::NewProp_actorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACM_Camera_Statics::NewProp_actorComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACM_Camera_Statics::NewProp_cameraComponent_MetaData[] = {
		{ "Category", "Camera Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CM_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACM_Camera_Statics::NewProp_cameraComponent = { "cameraComponent", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACM_Camera, cameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACM_Camera_Statics::NewProp_cameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACM_Camera_Statics::NewProp_cameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACM_Camera_Statics::NewProp_settings_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "ModuleRelativePath", "CM_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACM_Camera_Statics::NewProp_settings = { "settings", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACM_Camera, settings), Z_Construct_UScriptStruct_FCamSettings, METADATA_PARAMS(Z_Construct_UClass_ACM_Camera_Statics::NewProp_settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACM_Camera_Statics::NewProp_settings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACM_Camera_Statics::NewProp_id_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "ModuleRelativePath", "CM_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACM_Camera_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACM_Camera, id), METADATA_PARAMS(Z_Construct_UClass_ACM_Camera_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACM_Camera_Statics::NewProp_id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACM_Camera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACM_Camera_Statics::NewProp_lineToTargetColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACM_Camera_Statics::NewProp_useDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACM_Camera_Statics::NewProp_actorComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACM_Camera_Statics::NewProp_cameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACM_Camera_Statics::NewProp_settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACM_Camera_Statics::NewProp_id,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACM_Camera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACM_Camera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACM_Camera_Statics::ClassParams = {
		&ACM_Camera::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACM_Camera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACM_Camera_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACM_Camera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACM_Camera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACM_Camera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACM_Camera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACM_Camera, 2178429961);
	template<> CAMMANAGER_API UClass* StaticClass<ACM_Camera>()
	{
		return ACM_Camera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACM_Camera(Z_Construct_UClass_ACM_Camera, &ACM_Camera::StaticClass, TEXT("/Script/CamManager"), TEXT("ACM_Camera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACM_Camera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
