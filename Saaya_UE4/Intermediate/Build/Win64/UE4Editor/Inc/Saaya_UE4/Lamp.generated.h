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
#ifdef SAAYA_UE4_Lamp_generated_h
#error "Lamp.generated.h already included, missing '#pragma once' in Lamp.h"
#endif
#define SAAYA_UE4_Lamp_generated_h

#define Saaya_UE4_Source_Saaya_UE4_InGame_Possesables_Lamp_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd1) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlapEnd1(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin1) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlapBegin1(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Saaya_UE4_Source_Saaya_UE4_InGame_Possesables_Lamp_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd1) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlapEnd1(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin1) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlapBegin1(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Saaya_UE4_Source_Saaya_UE4_InGame_Possesables_Lamp_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALamp(); \
	friend SAAYA_UE4_API class UClass* Z_Construct_UClass_ALamp(); \
public: \
	DECLARE_CLASS(ALamp, APossesableGameObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Saaya_UE4"), NO_API) \
	DECLARE_SERIALIZER(ALamp) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Saaya_UE4_Source_Saaya_UE4_InGame_Possesables_Lamp_h_16_INCLASS \
private: \
	static void StaticRegisterNativesALamp(); \
	friend SAAYA_UE4_API class UClass* Z_Construct_UClass_ALamp(); \
public: \
	DECLARE_CLASS(ALamp, APossesableGameObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Saaya_UE4"), NO_API) \
	DECLARE_SERIALIZER(ALamp) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Saaya_UE4_Source_Saaya_UE4_InGame_Possesables_Lamp_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALamp(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALamp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALamp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALamp); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALamp(ALamp&&); \
	NO_API ALamp(const ALamp&); \
public:


#define Saaya_UE4_Source_Saaya_UE4_InGame_Possesables_Lamp_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALamp(ALamp&&); \
	NO_API ALamp(const ALamp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALamp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALamp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALamp)


#define Saaya_UE4_Source_Saaya_UE4_InGame_Possesables_Lamp_h_16_PRIVATE_PROPERTY_OFFSET
#define Saaya_UE4_Source_Saaya_UE4_InGame_Possesables_Lamp_h_13_PROLOG
#define Saaya_UE4_Source_Saaya_UE4_InGame_Possesables_Lamp_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Saaya_UE4_Source_Saaya_UE4_InGame_Possesables_Lamp_h_16_PRIVATE_PROPERTY_OFFSET \
	Saaya_UE4_Source_Saaya_UE4_InGame_Possesables_Lamp_h_16_RPC_WRAPPERS \
	Saaya_UE4_Source_Saaya_UE4_InGame_Possesables_Lamp_h_16_INCLASS \
	Saaya_UE4_Source_Saaya_UE4_InGame_Possesables_Lamp_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Saaya_UE4_Source_Saaya_UE4_InGame_Possesables_Lamp_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Saaya_UE4_Source_Saaya_UE4_InGame_Possesables_Lamp_h_16_PRIVATE_PROPERTY_OFFSET \
	Saaya_UE4_Source_Saaya_UE4_InGame_Possesables_Lamp_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Saaya_UE4_Source_Saaya_UE4_InGame_Possesables_Lamp_h_16_INCLASS_NO_PURE_DECLS \
	Saaya_UE4_Source_Saaya_UE4_InGame_Possesables_Lamp_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Saaya_UE4_Source_Saaya_UE4_InGame_Possesables_Lamp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
