// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef NINJAFOXGAME_SplitScreenComtroller_generated_h
#error "SplitScreenComtroller.generated.h already included, missing '#pragma once' in SplitScreenComtroller.h"
#endif
#define NINJAFOXGAME_SplitScreenComtroller_generated_h

#define NinjaFoxGame_Source_NinjaFoxGame_SplitScreenComtroller_h_12_SPARSE_DATA
#define NinjaFoxGame_Source_NinjaFoxGame_SplitScreenComtroller_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnToggleSplitscreen) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Context); \
		P_GET_UBOOL(Z_Param_status); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnToggleSplitscreen(Z_Param_Context,Z_Param_status); \
		P_NATIVE_END; \
	}


#define NinjaFoxGame_Source_NinjaFoxGame_SplitScreenComtroller_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnToggleSplitscreen) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Context); \
		P_GET_UBOOL(Z_Param_status); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnToggleSplitscreen(Z_Param_Context,Z_Param_status); \
		P_NATIVE_END; \
	}


#define NinjaFoxGame_Source_NinjaFoxGame_SplitScreenComtroller_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASplitScreenComtroller(); \
	friend struct Z_Construct_UClass_ASplitScreenComtroller_Statics; \
public: \
	DECLARE_CLASS(ASplitScreenComtroller, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaFoxGame"), NO_API) \
	DECLARE_SERIALIZER(ASplitScreenComtroller)


#define NinjaFoxGame_Source_NinjaFoxGame_SplitScreenComtroller_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASplitScreenComtroller(); \
	friend struct Z_Construct_UClass_ASplitScreenComtroller_Statics; \
public: \
	DECLARE_CLASS(ASplitScreenComtroller, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaFoxGame"), NO_API) \
	DECLARE_SERIALIZER(ASplitScreenComtroller)


#define NinjaFoxGame_Source_NinjaFoxGame_SplitScreenComtroller_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASplitScreenComtroller(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASplitScreenComtroller) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASplitScreenComtroller); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASplitScreenComtroller); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASplitScreenComtroller(ASplitScreenComtroller&&); \
	NO_API ASplitScreenComtroller(const ASplitScreenComtroller&); \
public:


#define NinjaFoxGame_Source_NinjaFoxGame_SplitScreenComtroller_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASplitScreenComtroller(ASplitScreenComtroller&&); \
	NO_API ASplitScreenComtroller(const ASplitScreenComtroller&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASplitScreenComtroller); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASplitScreenComtroller); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASplitScreenComtroller)


#define NinjaFoxGame_Source_NinjaFoxGame_SplitScreenComtroller_h_12_PRIVATE_PROPERTY_OFFSET
#define NinjaFoxGame_Source_NinjaFoxGame_SplitScreenComtroller_h_9_PROLOG
#define NinjaFoxGame_Source_NinjaFoxGame_SplitScreenComtroller_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NinjaFoxGame_Source_NinjaFoxGame_SplitScreenComtroller_h_12_PRIVATE_PROPERTY_OFFSET \
	NinjaFoxGame_Source_NinjaFoxGame_SplitScreenComtroller_h_12_SPARSE_DATA \
	NinjaFoxGame_Source_NinjaFoxGame_SplitScreenComtroller_h_12_RPC_WRAPPERS \
	NinjaFoxGame_Source_NinjaFoxGame_SplitScreenComtroller_h_12_INCLASS \
	NinjaFoxGame_Source_NinjaFoxGame_SplitScreenComtroller_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NinjaFoxGame_Source_NinjaFoxGame_SplitScreenComtroller_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NinjaFoxGame_Source_NinjaFoxGame_SplitScreenComtroller_h_12_PRIVATE_PROPERTY_OFFSET \
	NinjaFoxGame_Source_NinjaFoxGame_SplitScreenComtroller_h_12_SPARSE_DATA \
	NinjaFoxGame_Source_NinjaFoxGame_SplitScreenComtroller_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	NinjaFoxGame_Source_NinjaFoxGame_SplitScreenComtroller_h_12_INCLASS_NO_PURE_DECLS \
	NinjaFoxGame_Source_NinjaFoxGame_SplitScreenComtroller_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAFOXGAME_API UClass* StaticClass<class ASplitScreenComtroller>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NinjaFoxGame_Source_NinjaFoxGame_SplitScreenComtroller_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
