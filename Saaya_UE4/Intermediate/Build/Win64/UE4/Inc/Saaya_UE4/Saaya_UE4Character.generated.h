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
#ifdef SAAYA_UE4_Saaya_UE4Character_generated_h
#error "Saaya_UE4Character.generated.h already included, missing '#pragma once' in Saaya_UE4Character.h"
#endif
#define SAAYA_UE4_Saaya_UE4Character_generated_h

#define Saaya_UE4_Source_Saaya_UE4_Players_Saaya_UE4Character_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPlayerHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnPlayerHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
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


#define Saaya_UE4_Source_Saaya_UE4_Players_Saaya_UE4Character_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPlayerHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnPlayerHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
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


#define Saaya_UE4_Source_Saaya_UE4_Players_Saaya_UE4Character_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASaaya_UE4Character(); \
	friend SAAYA_UE4_API class UClass* Z_Construct_UClass_ASaaya_UE4Character(); \
public: \
	DECLARE_CLASS(ASaaya_UE4Character, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Saaya_UE4"), NO_API) \
	DECLARE_SERIALIZER(ASaaya_UE4Character) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Saaya_UE4_Source_Saaya_UE4_Players_Saaya_UE4Character_h_20_INCLASS \
private: \
	static void StaticRegisterNativesASaaya_UE4Character(); \
	friend SAAYA_UE4_API class UClass* Z_Construct_UClass_ASaaya_UE4Character(); \
public: \
	DECLARE_CLASS(ASaaya_UE4Character, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Saaya_UE4"), NO_API) \
	DECLARE_SERIALIZER(ASaaya_UE4Character) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Saaya_UE4_Source_Saaya_UE4_Players_Saaya_UE4Character_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASaaya_UE4Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASaaya_UE4Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASaaya_UE4Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASaaya_UE4Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASaaya_UE4Character(ASaaya_UE4Character&&); \
	NO_API ASaaya_UE4Character(const ASaaya_UE4Character&); \
public:


#define Saaya_UE4_Source_Saaya_UE4_Players_Saaya_UE4Character_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASaaya_UE4Character(ASaaya_UE4Character&&); \
	NO_API ASaaya_UE4Character(const ASaaya_UE4Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASaaya_UE4Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASaaya_UE4Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASaaya_UE4Character)


#define Saaya_UE4_Source_Saaya_UE4_Players_Saaya_UE4Character_h_20_PRIVATE_PROPERTY_OFFSET
#define Saaya_UE4_Source_Saaya_UE4_Players_Saaya_UE4Character_h_17_PROLOG
#define Saaya_UE4_Source_Saaya_UE4_Players_Saaya_UE4Character_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Saaya_UE4_Source_Saaya_UE4_Players_Saaya_UE4Character_h_20_PRIVATE_PROPERTY_OFFSET \
	Saaya_UE4_Source_Saaya_UE4_Players_Saaya_UE4Character_h_20_RPC_WRAPPERS \
	Saaya_UE4_Source_Saaya_UE4_Players_Saaya_UE4Character_h_20_INCLASS \
	Saaya_UE4_Source_Saaya_UE4_Players_Saaya_UE4Character_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Saaya_UE4_Source_Saaya_UE4_Players_Saaya_UE4Character_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Saaya_UE4_Source_Saaya_UE4_Players_Saaya_UE4Character_h_20_PRIVATE_PROPERTY_OFFSET \
	Saaya_UE4_Source_Saaya_UE4_Players_Saaya_UE4Character_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Saaya_UE4_Source_Saaya_UE4_Players_Saaya_UE4Character_h_20_INCLASS_NO_PURE_DECLS \
	Saaya_UE4_Source_Saaya_UE4_Players_Saaya_UE4Character_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Saaya_UE4_Source_Saaya_UE4_Players_Saaya_UE4Character_h


#define FOREACH_ENUM_PLAYERTYPE(op) \
	op(PlayerType::Player1) \
	op(PlayerType::Player2) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
