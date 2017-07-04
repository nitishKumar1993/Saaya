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
struct FHitResult;
#ifdef SAAYA_UE4_PossesableGameObject_generated_h
#error "PossesableGameObject.generated.h already included, missing '#pragma once' in PossesableGameObject.h"
#endif
#define SAAYA_UE4_PossesableGameObject_generated_h

#define Saaya_UE4_Source_Saaya_UE4_InGame_PossesableGameObject_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Saaya_UE4_Source_Saaya_UE4_InGame_PossesableGameObject_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Saaya_UE4_Source_Saaya_UE4_InGame_PossesableGameObject_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPossesableGameObject(); \
	friend SAAYA_UE4_API class UClass* Z_Construct_UClass_APossesableGameObject(); \
public: \
	DECLARE_CLASS(APossesableGameObject, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Saaya_UE4"), NO_API) \
	DECLARE_SERIALIZER(APossesableGameObject) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Saaya_UE4_Source_Saaya_UE4_InGame_PossesableGameObject_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAPossesableGameObject(); \
	friend SAAYA_UE4_API class UClass* Z_Construct_UClass_APossesableGameObject(); \
public: \
	DECLARE_CLASS(APossesableGameObject, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Saaya_UE4"), NO_API) \
	DECLARE_SERIALIZER(APossesableGameObject) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Saaya_UE4_Source_Saaya_UE4_InGame_PossesableGameObject_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APossesableGameObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APossesableGameObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APossesableGameObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APossesableGameObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APossesableGameObject(APossesableGameObject&&); \
	NO_API APossesableGameObject(const APossesableGameObject&); \
public:


#define Saaya_UE4_Source_Saaya_UE4_InGame_PossesableGameObject_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APossesableGameObject(APossesableGameObject&&); \
	NO_API APossesableGameObject(const APossesableGameObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APossesableGameObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APossesableGameObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APossesableGameObject)


#define Saaya_UE4_Source_Saaya_UE4_InGame_PossesableGameObject_h_20_PRIVATE_PROPERTY_OFFSET
#define Saaya_UE4_Source_Saaya_UE4_InGame_PossesableGameObject_h_17_PROLOG
#define Saaya_UE4_Source_Saaya_UE4_InGame_PossesableGameObject_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Saaya_UE4_Source_Saaya_UE4_InGame_PossesableGameObject_h_20_PRIVATE_PROPERTY_OFFSET \
	Saaya_UE4_Source_Saaya_UE4_InGame_PossesableGameObject_h_20_RPC_WRAPPERS \
	Saaya_UE4_Source_Saaya_UE4_InGame_PossesableGameObject_h_20_INCLASS \
	Saaya_UE4_Source_Saaya_UE4_InGame_PossesableGameObject_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Saaya_UE4_Source_Saaya_UE4_InGame_PossesableGameObject_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Saaya_UE4_Source_Saaya_UE4_InGame_PossesableGameObject_h_20_PRIVATE_PROPERTY_OFFSET \
	Saaya_UE4_Source_Saaya_UE4_InGame_PossesableGameObject_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Saaya_UE4_Source_Saaya_UE4_InGame_PossesableGameObject_h_20_INCLASS_NO_PURE_DECLS \
	Saaya_UE4_Source_Saaya_UE4_InGame_PossesableGameObject_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Saaya_UE4_Source_Saaya_UE4_InGame_PossesableGameObject_h


#define FOREACH_ENUM_POSSESABLETYPE(op) \
	op(Possesabletype::Crane) \
	op(Possesabletype::Lamp) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
