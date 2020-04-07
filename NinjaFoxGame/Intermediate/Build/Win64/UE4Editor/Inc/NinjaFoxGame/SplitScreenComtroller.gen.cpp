// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaFoxGame/SplitScreenComtroller.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplitScreenComtroller() {}
// Cross Module References
	NINJAFOXGAME_API UClass* Z_Construct_UClass_ASplitScreenComtroller_NoRegister();
	NINJAFOXGAME_API UClass* Z_Construct_UClass_ASplitScreenComtroller();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NinjaFoxGame();
	NINJAFOXGAME_API UFunction* Z_Construct_UFunction_ASplitScreenComtroller_OnToggleSplitscreen();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ASplitScreenComtroller::StaticRegisterNativesASplitScreenComtroller()
	{
		UClass* Class = ASplitScreenComtroller::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnToggleSplitscreen", &ASplitScreenComtroller::execOnToggleSplitscreen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASplitScreenComtroller_OnToggleSplitscreen_Statics
	{
		struct SplitScreenComtroller_eventOnToggleSplitscreen_Parms
		{
			AActor* Context;
			bool status;
		};
		static void NewProp_status_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_status;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASplitScreenComtroller_OnToggleSplitscreen_Statics::NewProp_status_SetBit(void* Obj)
	{
		((SplitScreenComtroller_eventOnToggleSplitscreen_Parms*)Obj)->status = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASplitScreenComtroller_OnToggleSplitscreen_Statics::NewProp_status = { "status", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SplitScreenComtroller_eventOnToggleSplitscreen_Parms), &Z_Construct_UFunction_ASplitScreenComtroller_OnToggleSplitscreen_Statics::NewProp_status_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASplitScreenComtroller_OnToggleSplitscreen_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplitScreenComtroller_eventOnToggleSplitscreen_Parms, Context), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASplitScreenComtroller_OnToggleSplitscreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplitScreenComtroller_OnToggleSplitscreen_Statics::NewProp_status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplitScreenComtroller_OnToggleSplitscreen_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplitScreenComtroller_OnToggleSplitscreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Splitscreen" },
		{ "ModuleRelativePath", "SplitScreenComtroller.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplitScreenComtroller_OnToggleSplitscreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASplitScreenComtroller, nullptr, "OnToggleSplitscreen", nullptr, nullptr, sizeof(SplitScreenComtroller_eventOnToggleSplitscreen_Parms), Z_Construct_UFunction_ASplitScreenComtroller_OnToggleSplitscreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASplitScreenComtroller_OnToggleSplitscreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASplitScreenComtroller_OnToggleSplitscreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASplitScreenComtroller_OnToggleSplitscreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASplitScreenComtroller_OnToggleSplitscreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASplitScreenComtroller_OnToggleSplitscreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASplitScreenComtroller_NoRegister()
	{
		return ASplitScreenComtroller::StaticClass();
	}
	struct Z_Construct_UClass_ASplitScreenComtroller_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASplitScreenComtroller_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NinjaFoxGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASplitScreenComtroller_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASplitScreenComtroller_OnToggleSplitscreen, "OnToggleSplitscreen" }, // 3581596677
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplitScreenComtroller_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SplitScreenComtroller.h" },
		{ "ModuleRelativePath", "SplitScreenComtroller.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASplitScreenComtroller_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASplitScreenComtroller>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASplitScreenComtroller_Statics::ClassParams = {
		&ASplitScreenComtroller::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASplitScreenComtroller_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASplitScreenComtroller_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASplitScreenComtroller()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASplitScreenComtroller_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASplitScreenComtroller, 21877455);
	template<> NINJAFOXGAME_API UClass* StaticClass<ASplitScreenComtroller>()
	{
		return ASplitScreenComtroller::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASplitScreenComtroller(Z_Construct_UClass_ASplitScreenComtroller, &ASplitScreenComtroller::StaticClass, TEXT("/Script/NinjaFoxGame"), TEXT("ASplitScreenComtroller"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASplitScreenComtroller);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
