// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef NINJAFOXGAME_SplitScreenController_generated_h
#error "SplitScreenController.generated.h already included, missing '#pragma once' in SplitScreenController.h"
#endif
#define NINJAFOXGAME_SplitScreenController_generated_h

#define NinjaFoxGame_Source_NinjaFoxGame_SplitScreenController_h_15_SPARSE_DATA
#define NinjaFoxGame_Source_NinjaFoxGame_SplitScreenController_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisableSplitScreen) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Context); \
		P_GET_UBOOL(Z_Param_Disable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USplitScreenController::DisableSplitScreen(Z_Param_Context,Z_Param_Disable); \
		P_NATIVE_END; \
	}


#define NinjaFoxGame_Source_NinjaFoxGame_SplitScreenController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisableSplitScreen) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Context); \
		P_GET_UBOOL(Z_Param_Disable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USplitScreenController::DisableSplitScreen(Z_Param_Context,Z_Param_Disable); \
		P_NATIVE_END; \
	}


#define NinjaFoxGame_Source_NinjaFoxGame_SplitScreenController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSplitScreenController(); \
	friend struct Z_Construct_UClass_USplitScreenController_Statics; \
public: \
	DECLARE_CLASS(USplitScreenController, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaFoxGame"), NO_API) \
	DECLARE_SERIALIZER(USplitScreenController)


#define NinjaFoxGame_Source_NinjaFoxGame_SplitScreenController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSplitScreenController(); \
	friend struct Z_Construct_UClass_USplitScreenController_Statics; \
public: \
	DECLARE_CLASS(USplitScreenController, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaFoxGame"), NO_API) \
	DECLARE_SERIALIZER(USplitScreenController)


#define NinjaFoxGame_Source_NinjaFoxGame_SplitScreenController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USplitScreenController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USplitScreenController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USplitScreenController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USplitScreenController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USplitScreenController(USplitScreenController&&); \
	NO_API USplitScreenController(const USplitScreenController&); \
public:


#define NinjaFoxGame_Source_NinjaFoxGame_SplitScreenController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USplitScreenController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USplitScreenController(USplitScreenController&&); \
	NO_API USplitScreenController(const USplitScreenController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USplitScreenController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USplitScreenController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USplitScreenController)


#define NinjaFoxGame_Source_NinjaFoxGame_SplitScreenController_h_15_PRIVATE_PROPERTY_OFFSET
#define NinjaFoxGame_Source_NinjaFoxGame_SplitScreenController_h_12_PROLOG
#define NinjaFoxGame_Source_NinjaFoxGame_SplitScreenController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NinjaFoxGame_Source_NinjaFoxGame_SplitScreenController_h_15_PRIVATE_PROPERTY_OFFSET \
	NinjaFoxGame_Source_NinjaFoxGame_SplitScreenController_h_15_SPARSE_DATA \
	NinjaFoxGame_Source_NinjaFoxGame_SplitScreenController_h_15_RPC_WRAPPERS \
	NinjaFoxGame_Source_NinjaFoxGame_SplitScreenController_h_15_INCLASS \
	NinjaFoxGame_Source_NinjaFoxGame_SplitScreenController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NinjaFoxGame_Source_NinjaFoxGame_SplitScreenController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NinjaFoxGame_Source_NinjaFoxGame_SplitScreenController_h_15_PRIVATE_PROPERTY_OFFSET \
	NinjaFoxGame_Source_NinjaFoxGame_SplitScreenController_h_15_SPARSE_DATA \
	NinjaFoxGame_Source_NinjaFoxGame_SplitScreenController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	NinjaFoxGame_Source_NinjaFoxGame_SplitScreenController_h_15_INCLASS_NO_PURE_DECLS \
	NinjaFoxGame_Source_NinjaFoxGame_SplitScreenController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAFOXGAME_API UClass* StaticClass<class USplitScreenController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NinjaFoxGame_Source_NinjaFoxGame_SplitScreenController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
