// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef SAAYA_UE4_Ruler_generated_h
#error "Ruler.generated.h already included, missing '#pragma once' in Ruler.h"
#endif
#define SAAYA_UE4_Ruler_generated_h

#define Saaya_UE4_Source_Saaya_UE4_InGame_PuzzleProps_Ruler_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCollision) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnCollision(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Saaya_UE4_Source_Saaya_UE4_InGame_PuzzleProps_Ruler_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCollision) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnCollision(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Saaya_UE4_Source_Saaya_UE4_InGame_PuzzleProps_Ruler_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARuler(); \
	friend SAAYA_UE4_API class UClass* Z_Construct_UClass_ARuler(); \
public: \
	DECLARE_CLASS(ARuler, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Saaya_UE4"), NO_API) \
	DECLARE_SERIALIZER(ARuler) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Saaya_UE4_Source_Saaya_UE4_InGame_PuzzleProps_Ruler_h_13_INCLASS \
private: \
	static void StaticRegisterNativesARuler(); \
	friend SAAYA_UE4_API class UClass* Z_Construct_UClass_ARuler(); \
public: \
	DECLARE_CLASS(ARuler, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Saaya_UE4"), NO_API) \
	DECLARE_SERIALIZER(ARuler) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Saaya_UE4_Source_Saaya_UE4_InGame_PuzzleProps_Ruler_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARuler(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARuler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARuler); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARuler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARuler(ARuler&&); \
	NO_API ARuler(const ARuler&); \
public:


#define Saaya_UE4_Source_Saaya_UE4_InGame_PuzzleProps_Ruler_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARuler(ARuler&&); \
	NO_API ARuler(const ARuler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARuler); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARuler); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARuler)


#define Saaya_UE4_Source_Saaya_UE4_InGame_PuzzleProps_Ruler_h_13_PRIVATE_PROPERTY_OFFSET
#define Saaya_UE4_Source_Saaya_UE4_InGame_PuzzleProps_Ruler_h_10_PROLOG
#define Saaya_UE4_Source_Saaya_UE4_InGame_PuzzleProps_Ruler_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Saaya_UE4_Source_Saaya_UE4_InGame_PuzzleProps_Ruler_h_13_PRIVATE_PROPERTY_OFFSET \
	Saaya_UE4_Source_Saaya_UE4_InGame_PuzzleProps_Ruler_h_13_RPC_WRAPPERS \
	Saaya_UE4_Source_Saaya_UE4_InGame_PuzzleProps_Ruler_h_13_INCLASS \
	Saaya_UE4_Source_Saaya_UE4_InGame_PuzzleProps_Ruler_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Saaya_UE4_Source_Saaya_UE4_InGame_PuzzleProps_Ruler_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Saaya_UE4_Source_Saaya_UE4_InGame_PuzzleProps_Ruler_h_13_PRIVATE_PROPERTY_OFFSET \
	Saaya_UE4_Source_Saaya_UE4_InGame_PuzzleProps_Ruler_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Saaya_UE4_Source_Saaya_UE4_InGame_PuzzleProps_Ruler_h_13_INCLASS_NO_PURE_DECLS \
	Saaya_UE4_Source_Saaya_UE4_InGame_PuzzleProps_Ruler_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Saaya_UE4_Source_Saaya_UE4_InGame_PuzzleProps_Ruler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
