// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CarbonPushTwo/MainPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainPlayerController() {}
// Cross Module References
	CARBONPUSHTWO_API UClass* Z_Construct_UClass_AMainPlayerController_NoRegister();
	CARBONPUSHTWO_API UClass* Z_Construct_UClass_AMainPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_CarbonPushTwo();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(AMainPlayerController::execReturnTotalGrenades)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->ReturnTotalGrenades();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMainPlayerController::execReturnPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->ReturnPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMainPlayerController::execReturnPlayersHealthPercentage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->ReturnPlayersHealthPercentage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMainPlayerController::execReturnTotalAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->ReturnTotalAmmo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMainPlayerController::execReturnCurrentClip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->ReturnCurrentClip();
		P_NATIVE_END;
	}
	void AMainPlayerController::StaticRegisterNativesAMainPlayerController()
	{
		UClass* Class = AMainPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReturnCurrentClip", &AMainPlayerController::execReturnCurrentClip },
			{ "ReturnPlayersHealthPercentage", &AMainPlayerController::execReturnPlayersHealthPercentage },
			{ "ReturnPoints", &AMainPlayerController::execReturnPoints },
			{ "ReturnTotalAmmo", &AMainPlayerController::execReturnTotalAmmo },
			{ "ReturnTotalGrenades", &AMainPlayerController::execReturnTotalGrenades },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMainPlayerController_ReturnCurrentClip_Statics
	{
		struct MainPlayerController_eventReturnCurrentClip_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMainPlayerController_ReturnCurrentClip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MainPlayerController_eventReturnCurrentClip_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainPlayerController_ReturnCurrentClip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainPlayerController_ReturnCurrentClip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainPlayerController_ReturnCurrentClip_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Private functions that only apply to this class\n" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
		{ "ToolTip", "Private functions that only apply to this class" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayerController_ReturnCurrentClip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayerController, nullptr, "ReturnCurrentClip", nullptr, nullptr, sizeof(MainPlayerController_eventReturnCurrentClip_Parms), Z_Construct_UFunction_AMainPlayerController_ReturnCurrentClip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerController_ReturnCurrentClip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainPlayerController_ReturnCurrentClip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerController_ReturnCurrentClip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainPlayerController_ReturnCurrentClip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainPlayerController_ReturnCurrentClip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainPlayerController_ReturnPlayersHealthPercentage_Statics
	{
		struct MainPlayerController_eventReturnPlayersHealthPercentage_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMainPlayerController_ReturnPlayersHealthPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MainPlayerController_eventReturnPlayersHealthPercentage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainPlayerController_ReturnPlayersHealthPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainPlayerController_ReturnPlayersHealthPercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainPlayerController_ReturnPlayersHealthPercentage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayerController_ReturnPlayersHealthPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayerController, nullptr, "ReturnPlayersHealthPercentage", nullptr, nullptr, sizeof(MainPlayerController_eventReturnPlayersHealthPercentage_Parms), Z_Construct_UFunction_AMainPlayerController_ReturnPlayersHealthPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerController_ReturnPlayersHealthPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainPlayerController_ReturnPlayersHealthPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerController_ReturnPlayersHealthPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainPlayerController_ReturnPlayersHealthPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainPlayerController_ReturnPlayersHealthPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainPlayerController_ReturnPoints_Statics
	{
		struct MainPlayerController_eventReturnPoints_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMainPlayerController_ReturnPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MainPlayerController_eventReturnPoints_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainPlayerController_ReturnPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainPlayerController_ReturnPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainPlayerController_ReturnPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayerController_ReturnPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayerController, nullptr, "ReturnPoints", nullptr, nullptr, sizeof(MainPlayerController_eventReturnPoints_Parms), Z_Construct_UFunction_AMainPlayerController_ReturnPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerController_ReturnPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainPlayerController_ReturnPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerController_ReturnPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainPlayerController_ReturnPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainPlayerController_ReturnPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainPlayerController_ReturnTotalAmmo_Statics
	{
		struct MainPlayerController_eventReturnTotalAmmo_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMainPlayerController_ReturnTotalAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MainPlayerController_eventReturnTotalAmmo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainPlayerController_ReturnTotalAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainPlayerController_ReturnTotalAmmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainPlayerController_ReturnTotalAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayerController_ReturnTotalAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayerController, nullptr, "ReturnTotalAmmo", nullptr, nullptr, sizeof(MainPlayerController_eventReturnTotalAmmo_Parms), Z_Construct_UFunction_AMainPlayerController_ReturnTotalAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerController_ReturnTotalAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainPlayerController_ReturnTotalAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerController_ReturnTotalAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainPlayerController_ReturnTotalAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainPlayerController_ReturnTotalAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainPlayerController_ReturnTotalGrenades_Statics
	{
		struct MainPlayerController_eventReturnTotalGrenades_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMainPlayerController_ReturnTotalGrenades_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MainPlayerController_eventReturnTotalGrenades_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainPlayerController_ReturnTotalGrenades_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainPlayerController_ReturnTotalGrenades_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainPlayerController_ReturnTotalGrenades_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayerController_ReturnTotalGrenades_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayerController, nullptr, "ReturnTotalGrenades", nullptr, nullptr, sizeof(MainPlayerController_eventReturnTotalGrenades_Parms), Z_Construct_UFunction_AMainPlayerController_ReturnTotalGrenades_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerController_ReturnTotalGrenades_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainPlayerController_ReturnTotalGrenades_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerController_ReturnTotalGrenades_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainPlayerController_ReturnTotalGrenades()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainPlayerController_ReturnTotalGrenades_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMainPlayerController_NoRegister()
	{
		return AMainPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AMainPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalThrowableAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TotalThrowableAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalGunAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TotalGunAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentClip_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentClip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoClip_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AmmoClip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerMaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerMaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReloadSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GunSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RulesScreenDisplay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RulesScreenDisplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndScreenDisplay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EndScreenDisplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerInterfaceDisplay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerInterfaceDisplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartDisplay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartDisplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RulesScreenWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RulesScreenWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndScreenWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EndScreenWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerInterfaceWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlayerInterfaceWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StartWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_CarbonPushTwo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMainPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainPlayerController_ReturnCurrentClip, "ReturnCurrentClip" }, // 2473264950
		{ &Z_Construct_UFunction_AMainPlayerController_ReturnPlayersHealthPercentage, "ReturnPlayersHealthPercentage" }, // 2156128466
		{ &Z_Construct_UFunction_AMainPlayerController_ReturnPoints, "ReturnPoints" }, // 4004342946
		{ &Z_Construct_UFunction_AMainPlayerController_ReturnTotalAmmo, "ReturnTotalAmmo" }, // 2851146607
		{ &Z_Construct_UFunction_AMainPlayerController_ReturnTotalGrenades, "ReturnTotalGrenades" }, // 4141659706
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MainPlayerController.h" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerController_Statics::NewProp_Level_MetaData[] = {
		{ "Comment", "//Level variable\n" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
		{ "ToolTip", "Level variable" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayerController, Level), METADATA_PARAMS(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerController_Statics::NewProp_TotalThrowableAmmo_MetaData[] = {
		{ "Category", "MainPlayerController" },
		{ "Comment", "//TotalThrowableAmmo variable\n" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
		{ "ToolTip", "TotalThrowableAmmo variable" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_TotalThrowableAmmo = { "TotalThrowableAmmo", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayerController, TotalThrowableAmmo), METADATA_PARAMS(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_TotalThrowableAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_TotalThrowableAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerController_Statics::NewProp_TotalGunAmmo_MetaData[] = {
		{ "Category", "MainPlayerController" },
		{ "Comment", "//TotalGunAmmo variable\n" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
		{ "ToolTip", "TotalGunAmmo variable" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_TotalGunAmmo = { "TotalGunAmmo", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayerController, TotalGunAmmo), METADATA_PARAMS(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_TotalGunAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_TotalGunAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerController_Statics::NewProp_CurrentClip_MetaData[] = {
		{ "Category", "MainPlayerController" },
		{ "Comment", "//CurrentClip variable\n" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
		{ "ToolTip", "CurrentClip variable" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_CurrentClip = { "CurrentClip", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayerController, CurrentClip), METADATA_PARAMS(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_CurrentClip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_CurrentClip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerController_Statics::NewProp_AmmoClip_MetaData[] = {
		{ "Category", "MainPlayerController" },
		{ "Comment", "//AmmoClip variable\n" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
		{ "ToolTip", "AmmoClip variable" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_AmmoClip = { "AmmoClip", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayerController, AmmoClip), METADATA_PARAMS(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_AmmoClip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_AmmoClip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerController_Statics::NewProp_PlayerMaxHealth_MetaData[] = {
		{ "Category", "MainPlayerController" },
		{ "Comment", "//PlayerMaxHealth variable\n" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
		{ "ToolTip", "PlayerMaxHealth variable" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_PlayerMaxHealth = { "PlayerMaxHealth", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayerController, PlayerMaxHealth), METADATA_PARAMS(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_PlayerMaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_PlayerMaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerController_Statics::NewProp_ReloadSound_MetaData[] = {
		{ "Category", "MainPlayerController" },
		{ "Comment", "//SoundBase component\n" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
		{ "ToolTip", "SoundBase component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_ReloadSound = { "ReloadSound", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayerController, ReloadSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_ReloadSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_ReloadSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerController_Statics::NewProp_GunSound_MetaData[] = {
		{ "Category", "MainPlayerController" },
		{ "Comment", "//SoundBase component\n" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
		{ "ToolTip", "SoundBase component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_GunSound = { "GunSound", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayerController, GunSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_GunSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_GunSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerController_Statics::NewProp_RulesScreenDisplay_MetaData[] = {
		{ "Comment", "//UserWidget Component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
		{ "ToolTip", "UserWidget Component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_RulesScreenDisplay = { "RulesScreenDisplay", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayerController, RulesScreenDisplay), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_RulesScreenDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_RulesScreenDisplay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerController_Statics::NewProp_EndScreenDisplay_MetaData[] = {
		{ "Comment", "//UserWidget Component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
		{ "ToolTip", "UserWidget Component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_EndScreenDisplay = { "EndScreenDisplay", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayerController, EndScreenDisplay), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_EndScreenDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_EndScreenDisplay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerController_Statics::NewProp_PlayerInterfaceDisplay_MetaData[] = {
		{ "Comment", "//UserWidget Component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
		{ "ToolTip", "UserWidget Component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_PlayerInterfaceDisplay = { "PlayerInterfaceDisplay", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayerController, PlayerInterfaceDisplay), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_PlayerInterfaceDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_PlayerInterfaceDisplay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerController_Statics::NewProp_StartDisplay_MetaData[] = {
		{ "Comment", "//UserWidget Component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
		{ "ToolTip", "UserWidget Component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_StartDisplay = { "StartDisplay", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayerController, StartDisplay), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_StartDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_StartDisplay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerController_Statics::NewProp_RulesScreenWidget_MetaData[] = {
		{ "Category", "MainPlayerController" },
		{ "Comment", "//Creates a RulesScreenWidget object of type UUserWidget\n" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
		{ "ToolTip", "Creates a RulesScreenWidget object of type UUserWidget" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_RulesScreenWidget = { "RulesScreenWidget", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayerController, RulesScreenWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_RulesScreenWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_RulesScreenWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerController_Statics::NewProp_EndScreenWidget_MetaData[] = {
		{ "Category", "MainPlayerController" },
		{ "Comment", "//Creates a EndScreenWidget object of type UUserWidget\n" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
		{ "ToolTip", "Creates a EndScreenWidget object of type UUserWidget" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_EndScreenWidget = { "EndScreenWidget", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayerController, EndScreenWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_EndScreenWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_EndScreenWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerController_Statics::NewProp_PlayerInterfaceWidget_MetaData[] = {
		{ "Category", "MainPlayerController" },
		{ "Comment", "//Creates a PlayerInterfaceWidget object of type UUserWidget\n" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
		{ "ToolTip", "Creates a PlayerInterfaceWidget object of type UUserWidget" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_PlayerInterfaceWidget = { "PlayerInterfaceWidget", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayerController, PlayerInterfaceWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_PlayerInterfaceWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_PlayerInterfaceWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerController_Statics::NewProp_StartWidget_MetaData[] = {
		{ "Category", "MainPlayerController" },
		{ "Comment", "//Creates a StartWidget object of type UUserWidget\n" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
		{ "ToolTip", "Creates a StartWidget object of type UUserWidget" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_StartWidget = { "StartWidget", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayerController, StartWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_StartWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_StartWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_TotalThrowableAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_TotalGunAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_CurrentClip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_AmmoClip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_PlayerMaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_ReloadSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_GunSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_RulesScreenDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_EndScreenDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_PlayerInterfaceDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_StartDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_RulesScreenWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_EndScreenWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_PlayerInterfaceWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_StartWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMainPlayerController_Statics::ClassParams = {
		&AMainPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMainPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMainPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMainPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMainPlayerController, 1670795776);
	template<> CARBONPUSHTWO_API UClass* StaticClass<AMainPlayerController>()
	{
		return AMainPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMainPlayerController(Z_Construct_UClass_AMainPlayerController, &AMainPlayerController::StaticClass, TEXT("/Script/CarbonPushTwo"), TEXT("AMainPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
