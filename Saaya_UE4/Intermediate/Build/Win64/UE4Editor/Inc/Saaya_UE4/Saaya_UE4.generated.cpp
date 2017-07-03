// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Saaya_UE4.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1Saaya_UE4() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API class UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UAnimInstance();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();

	SAAYA_UE4_API class UClass* Z_Construct_UClass_ACameraViewSetArea_NoRegister();
	SAAYA_UE4_API class UClass* Z_Construct_UClass_ACameraViewSetArea();
	SAAYA_UE4_API class UClass* Z_Construct_UClass_AGameLight_NoRegister();
	SAAYA_UE4_API class UClass* Z_Construct_UClass_AGameLight();
	SAAYA_UE4_API class UClass* Z_Construct_UClass_AGameManager_NoRegister();
	SAAYA_UE4_API class UClass* Z_Construct_UClass_AGameManager();
	SAAYA_UE4_API class UFunction* Z_Construct_UFunction_AMovableGameObject_OnOverlapBegin();
	SAAYA_UE4_API class UFunction* Z_Construct_UFunction_AMovableGameObject_OnOverlapEnd();
	SAAYA_UE4_API class UClass* Z_Construct_UClass_AMovableGameObject_NoRegister();
	SAAYA_UE4_API class UClass* Z_Construct_UClass_AMovableGameObject();
	SAAYA_UE4_API class UClass* Z_Construct_UClass_UPlayer1AnimInstance_NoRegister();
	SAAYA_UE4_API class UClass* Z_Construct_UClass_UPlayer1AnimInstance();
	SAAYA_UE4_API class UClass* Z_Construct_UClass_UPlayer2AnimInstance_NoRegister();
	SAAYA_UE4_API class UClass* Z_Construct_UClass_UPlayer2AnimInstance();
	SAAYA_UE4_API class UEnum* Z_Construct_UEnum_Saaya_UE4_Possesabletype();
	SAAYA_UE4_API class UFunction* Z_Construct_UFunction_APossesableGameObject_OnOverlapBegin();
	SAAYA_UE4_API class UFunction* Z_Construct_UFunction_APossesableGameObject_OnOverlapEnd();
	SAAYA_UE4_API class UClass* Z_Construct_UClass_APossesableGameObject_NoRegister();
	SAAYA_UE4_API class UClass* Z_Construct_UClass_APossesableGameObject();
	SAAYA_UE4_API class UFunction* Z_Construct_UFunction_ALamp_OnOverlapBegin1();
	SAAYA_UE4_API class UFunction* Z_Construct_UFunction_ALamp_OnOverlapEnd1();
	SAAYA_UE4_API class UClass* Z_Construct_UClass_ALamp_NoRegister();
	SAAYA_UE4_API class UClass* Z_Construct_UClass_ALamp();
	SAAYA_UE4_API class UEnum* Z_Construct_UEnum_Saaya_UE4_PlayerType();
	SAAYA_UE4_API class UFunction* Z_Construct_UFunction_ASaaya_UE4Character_OnOverlapBegin();
	SAAYA_UE4_API class UFunction* Z_Construct_UFunction_ASaaya_UE4Character_OnOverlapEnd();
	SAAYA_UE4_API class UFunction* Z_Construct_UFunction_ASaaya_UE4Character_OnPlayerHit();
	SAAYA_UE4_API class UClass* Z_Construct_UClass_ASaaya_UE4Character_NoRegister();
	SAAYA_UE4_API class UClass* Z_Construct_UClass_ASaaya_UE4Character();
	SAAYA_UE4_API class UClass* Z_Construct_UClass_ASaaya_UE4GameMode_NoRegister();
	SAAYA_UE4_API class UClass* Z_Construct_UClass_ASaaya_UE4GameMode();
	SAAYA_UE4_API class UPackage* Z_Construct_UPackage__Script_Saaya_UE4();
	void ACameraViewSetArea::StaticRegisterNativesACameraViewSetArea()
	{
	}
	UClass* Z_Construct_UClass_ACameraViewSetArea_NoRegister()
	{
		return ACameraViewSetArea::StaticClass();
	}
	UClass* Z_Construct_UClass_ACameraViewSetArea()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Saaya_UE4();
			OuterClass = ACameraViewSetArea::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_TransitionTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TransitionTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TransitionTime, ACameraViewSetArea), 0x0010000000000001);
				UProperty* NewProp_CameraDirection = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraDirection"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CameraDirection, ACameraViewSetArea), 0x001000000008001c, Z_Construct_UClass_USceneComponent_NoRegister());
				UProperty* NewProp_CameraHandle = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraHandle"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CameraHandle, ACameraViewSetArea), 0x0010000000080009, Z_Construct_UClass_USceneComponent_NoRegister());
				UProperty* NewProp_ViewTrigger = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ViewTrigger"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ViewTrigger, ACameraViewSetArea), 0x0010000000080009, Z_Construct_UClass_UBoxComponent_NoRegister());
				UProperty* NewProp_Root = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Root"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Root, ACameraViewSetArea), 0x0010000000080009, Z_Construct_UClass_USceneComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<ACameraViewSetArea> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Game/CameraViewSetArea.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Game/CameraViewSetArea.h"));
				MetaData->SetValue(NewProp_TransitionTime, TEXT("Category"), TEXT("Public_Variables"));
				MetaData->SetValue(NewProp_TransitionTime, TEXT("ModuleRelativePath"), TEXT("Game/CameraViewSetArea.h"));
				MetaData->SetValue(NewProp_CameraDirection, TEXT("Category"), TEXT("Public_Variables"));
				MetaData->SetValue(NewProp_CameraDirection, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraDirection, TEXT("ModuleRelativePath"), TEXT("Game/CameraViewSetArea.h"));
				MetaData->SetValue(NewProp_CameraHandle, TEXT("Category"), TEXT("Public_Variables"));
				MetaData->SetValue(NewProp_CameraHandle, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraHandle, TEXT("ModuleRelativePath"), TEXT("Game/CameraViewSetArea.h"));
				MetaData->SetValue(NewProp_ViewTrigger, TEXT("Category"), TEXT("Public_Variables"));
				MetaData->SetValue(NewProp_ViewTrigger, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_ViewTrigger, TEXT("ModuleRelativePath"), TEXT("Game/CameraViewSetArea.h"));
				MetaData->SetValue(NewProp_Root, TEXT("Category"), TEXT("Public_Variables"));
				MetaData->SetValue(NewProp_Root, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Root, TEXT("ModuleRelativePath"), TEXT("Game/CameraViewSetArea.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACameraViewSetArea, 493402723);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACameraViewSetArea(Z_Construct_UClass_ACameraViewSetArea, &ACameraViewSetArea::StaticClass, TEXT("/Script/Saaya_UE4"), TEXT("ACameraViewSetArea"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraViewSetArea);
	void AGameLight::StaticRegisterNativesAGameLight()
	{
	}
	UClass* Z_Construct_UClass_AGameLight_NoRegister()
	{
		return AGameLight::StaticClass();
	}
	UClass* Z_Construct_UClass_AGameLight()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Saaya_UE4();
			OuterClass = AGameLight::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_LightSource = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LightSource"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(LightSource, AGameLight), 0x0010000000080009, Z_Construct_UClass_USpotLightComponent_NoRegister());
				UProperty* NewProp_ColliderMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ColliderMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ColliderMesh, AGameLight), 0x0010000000080009, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_Root = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Root"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Root, AGameLight), 0x0010000000080009, Z_Construct_UClass_USceneComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<AGameLight> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("InGame/GameLight.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("InGame/GameLight.h"));
				MetaData->SetValue(NewProp_LightSource, TEXT("Category"), TEXT("GameLight"));
				MetaData->SetValue(NewProp_LightSource, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_LightSource, TEXT("ModuleRelativePath"), TEXT("InGame/GameLight.h"));
				MetaData->SetValue(NewProp_ColliderMesh, TEXT("Category"), TEXT("GameLight"));
				MetaData->SetValue(NewProp_ColliderMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_ColliderMesh, TEXT("ModuleRelativePath"), TEXT("InGame/GameLight.h"));
				MetaData->SetValue(NewProp_Root, TEXT("Category"), TEXT("GameLight"));
				MetaData->SetValue(NewProp_Root, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Root, TEXT("ModuleRelativePath"), TEXT("InGame/GameLight.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameLight, 3846365526);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameLight(Z_Construct_UClass_AGameLight, &AGameLight::StaticClass, TEXT("/Script/Saaya_UE4"), TEXT("AGameLight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameLight);
	void AGameManager::StaticRegisterNativesAGameManager()
	{
	}
	UClass* Z_Construct_UClass_AGameManager_NoRegister()
	{
		return AGameManager::StaticClass();
	}
	UClass* Z_Construct_UClass_AGameManager()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Saaya_UE4();
			OuterClass = AGameManager::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_m_gameCamera = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("m_gameCamera"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(m_gameCamera, AGameManager), 0x0010000000000001, Z_Construct_UClass_AActor_NoRegister());
				UProperty* NewProp_m_player2 = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("m_player2"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(m_player2, AGameManager), 0x0010000000000001, Z_Construct_UClass_APawn_NoRegister());
				UProperty* NewProp_m_player1 = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("m_player1"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(m_player1, AGameManager), 0x0010000000000001, Z_Construct_UClass_APawn_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<AGameManager> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Game/GameManager.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Game/GameManager.h"));
				MetaData->SetValue(NewProp_m_gameCamera, TEXT("Category"), TEXT("Public_Variables"));
				MetaData->SetValue(NewProp_m_gameCamera, TEXT("ModuleRelativePath"), TEXT("Game/GameManager.h"));
				MetaData->SetValue(NewProp_m_player2, TEXT("Category"), TEXT("Public_Variables"));
				MetaData->SetValue(NewProp_m_player2, TEXT("ModuleRelativePath"), TEXT("Game/GameManager.h"));
				MetaData->SetValue(NewProp_m_player1, TEXT("Category"), TEXT("Public_Variables"));
				MetaData->SetValue(NewProp_m_player1, TEXT("ModuleRelativePath"), TEXT("Game/GameManager.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameManager, 1799588994);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameManager(Z_Construct_UClass_AGameManager, &AGameManager::StaticClass, TEXT("/Script/Saaya_UE4"), TEXT("AGameManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameManager);
	void AMovableGameObject::StaticRegisterNativesAMovableGameObject()
	{
		UClass* Class = AMovableGameObject::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnOverlapBegin", (Native)&AMovableGameObject::execOnOverlapBegin },
			{ "OnOverlapEnd", (Native)&AMovableGameObject::execOnOverlapEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 2);
	}
	UFunction* Z_Construct_UFunction_AMovableGameObject_OnOverlapBegin()
	{
		struct MovableGameObject_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
		UObject* Outer=Z_Construct_UClass_AMovableGameObject();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnOverlapBegin"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00420401, 65535, sizeof(MovableGameObject_eventOnOverlapBegin_Parms));
			UProperty* NewProp_SweepResult = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SweepResult"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SweepResult, MovableGameObject_eventOnOverlapBegin_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFromSweep, MovableGameObject_eventOnOverlapBegin_Parms, bool);
			UProperty* NewProp_bFromSweep = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bFromSweep"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFromSweep, MovableGameObject_eventOnOverlapBegin_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bFromSweep, MovableGameObject_eventOnOverlapBegin_Parms), sizeof(bool), true);
			UProperty* NewProp_OtherBodyIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherBodyIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(OtherBodyIndex, MovableGameObject_eventOnOverlapBegin_Parms), 0x0010000000000080);
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, MovableGameObject_eventOnOverlapBegin_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, MovableGameObject_eventOnOverlapBegin_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_OverlappedComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OverlappedComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OverlappedComp, MovableGameObject_eventOnOverlapBegin_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("InGame/MovableGameObject.h"));
			MetaData->SetValue(NewProp_SweepResult, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_OverlappedComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMovableGameObject_OnOverlapEnd()
	{
		struct MovableGameObject_eventOnOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
		UObject* Outer=Z_Construct_UClass_AMovableGameObject();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnOverlapEnd"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535, sizeof(MovableGameObject_eventOnOverlapEnd_Parms));
			UProperty* NewProp_OtherBodyIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherBodyIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(OtherBodyIndex, MovableGameObject_eventOnOverlapEnd_Parms), 0x0010000000000080);
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, MovableGameObject_eventOnOverlapEnd_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, MovableGameObject_eventOnOverlapEnd_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_OverlappedComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OverlappedComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OverlappedComp, MovableGameObject_eventOnOverlapEnd_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("InGame/MovableGameObject.h"));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_OverlappedComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMovableGameObject_NoRegister()
	{
		return AMovableGameObject::StaticClass();
	}
	UClass* Z_Construct_UClass_AMovableGameObject()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Saaya_UE4();
			OuterClass = AMovableGameObject::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_AMovableGameObject_OnOverlapBegin());
				OuterClass->LinkChild(Z_Construct_UFunction_AMovableGameObject_OnOverlapEnd());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_PlayerObjectGap = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PlayerObjectGap"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(PlayerObjectGap, AMovableGameObject), 0x0010000000000001);
				UProperty* NewProp_PushSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PushSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(PushSpeed, AMovableGameObject), 0x0010000000000001);
				UProperty* NewProp_TriggerComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TriggerComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(TriggerComp, AMovableGameObject), 0x0010000000080009, Z_Construct_UClass_UBoxComponent_NoRegister());
				UProperty* NewProp_MeshComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MeshComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MeshComp, AMovableGameObject), 0x0010000000080009, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_Root = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Root"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Root, AMovableGameObject), 0x0010000000080009, Z_Construct_UClass_USceneComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AMovableGameObject_OnOverlapBegin(), "OnOverlapBegin"); // 3195274607
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AMovableGameObject_OnOverlapEnd(), "OnOverlapEnd"); // 3658287430
				static TCppClassTypeInfo<TCppClassTypeTraits<AMovableGameObject> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("InGame/MovableGameObject.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("InGame/MovableGameObject.h"));
				MetaData->SetValue(NewProp_PlayerObjectGap, TEXT("Category"), TEXT("Public_Variable"));
				MetaData->SetValue(NewProp_PlayerObjectGap, TEXT("ModuleRelativePath"), TEXT("InGame/MovableGameObject.h"));
				MetaData->SetValue(NewProp_PushSpeed, TEXT("Category"), TEXT("Public_Variable"));
				MetaData->SetValue(NewProp_PushSpeed, TEXT("ModuleRelativePath"), TEXT("InGame/MovableGameObject.h"));
				MetaData->SetValue(NewProp_TriggerComp, TEXT("Category"), TEXT("MovableGameObject"));
				MetaData->SetValue(NewProp_TriggerComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_TriggerComp, TEXT("ModuleRelativePath"), TEXT("InGame/MovableGameObject.h"));
				MetaData->SetValue(NewProp_MeshComp, TEXT("Category"), TEXT("MovableGameObject"));
				MetaData->SetValue(NewProp_MeshComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_MeshComp, TEXT("ModuleRelativePath"), TEXT("InGame/MovableGameObject.h"));
				MetaData->SetValue(NewProp_Root, TEXT("Category"), TEXT("MovableGameObject"));
				MetaData->SetValue(NewProp_Root, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Root, TEXT("ModuleRelativePath"), TEXT("InGame/MovableGameObject.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMovableGameObject, 1603461192);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMovableGameObject(Z_Construct_UClass_AMovableGameObject, &AMovableGameObject::StaticClass, TEXT("/Script/Saaya_UE4"), TEXT("AMovableGameObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovableGameObject);
	void UPlayer1AnimInstance::StaticRegisterNativesUPlayer1AnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UPlayer1AnimInstance_NoRegister()
	{
		return UPlayer1AnimInstance::StaticClass();
	}
	UClass* Z_Construct_UClass_UPlayer1AnimInstance()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UAnimInstance();
			Z_Construct_UPackage__Script_Saaya_UE4();
			OuterClass = UPlayer1AnimInstance::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900088;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_WalkValue = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WalkValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(WalkValue, UPlayer1AnimInstance), 0x0010000000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(IsPushing, UPlayer1AnimInstance, bool);
				UProperty* NewProp_IsPushing = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("IsPushing"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(IsPushing, UPlayer1AnimInstance), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(IsPushing, UPlayer1AnimInstance), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(IsInAir, UPlayer1AnimInstance, bool);
				UProperty* NewProp_IsInAir = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("IsInAir"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(IsInAir, UPlayer1AnimInstance), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(IsInAir, UPlayer1AnimInstance), sizeof(bool), true);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UPlayer1AnimInstance> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("AnimInstance AnimInstance"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Animation/Player1AnimInstance.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Animation/Player1AnimInstance.h"));
				MetaData->SetValue(NewProp_WalkValue, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_WalkValue, TEXT("ModuleRelativePath"), TEXT("Animation/Player1AnimInstance.h"));
				MetaData->SetValue(NewProp_IsPushing, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_IsPushing, TEXT("ModuleRelativePath"), TEXT("Animation/Player1AnimInstance.h"));
				MetaData->SetValue(NewProp_IsInAir, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_IsInAir, TEXT("ModuleRelativePath"), TEXT("Animation/Player1AnimInstance.h"));
				MetaData->SetValue(NewProp_IsInAir, TEXT("ToolTip"), TEXT("Is Moving"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayer1AnimInstance, 71720633);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayer1AnimInstance(Z_Construct_UClass_UPlayer1AnimInstance, &UPlayer1AnimInstance::StaticClass, TEXT("/Script/Saaya_UE4"), TEXT("UPlayer1AnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayer1AnimInstance);
	void UPlayer2AnimInstance::StaticRegisterNativesUPlayer2AnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UPlayer2AnimInstance_NoRegister()
	{
		return UPlayer2AnimInstance::StaticClass();
	}
	UClass* Z_Construct_UClass_UPlayer2AnimInstance()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UAnimInstance();
			Z_Construct_UPackage__Script_Saaya_UE4();
			OuterClass = UPlayer2AnimInstance::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900088;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_WalkValue = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WalkValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(WalkValue, UPlayer2AnimInstance), 0x0010000000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(IsInAir, UPlayer2AnimInstance, bool);
				UProperty* NewProp_IsInAir = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("IsInAir"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(IsInAir, UPlayer2AnimInstance), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(IsInAir, UPlayer2AnimInstance), sizeof(bool), true);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UPlayer2AnimInstance> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("AnimInstance AnimInstance"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Animation/Player2AnimInstance.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Animation/Player2AnimInstance.h"));
				MetaData->SetValue(NewProp_WalkValue, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_WalkValue, TEXT("ModuleRelativePath"), TEXT("Animation/Player2AnimInstance.h"));
				MetaData->SetValue(NewProp_IsInAir, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_IsInAir, TEXT("ModuleRelativePath"), TEXT("Animation/Player2AnimInstance.h"));
				MetaData->SetValue(NewProp_IsInAir, TEXT("ToolTip"), TEXT("Is Moving"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayer2AnimInstance, 1897134646);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayer2AnimInstance(Z_Construct_UClass_UPlayer2AnimInstance, &UPlayer2AnimInstance::StaticClass, TEXT("/Script/Saaya_UE4"), TEXT("UPlayer2AnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayer2AnimInstance);
static UEnum* Possesabletype_StaticEnum()
{
	extern SAAYA_UE4_API class UPackage* Z_Construct_UPackage__Script_Saaya_UE4();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern SAAYA_UE4_API class UEnum* Z_Construct_UEnum_Saaya_UE4_Possesabletype();
		Singleton = GetStaticEnum(Z_Construct_UEnum_Saaya_UE4_Possesabletype, Z_Construct_UPackage__Script_Saaya_UE4(), TEXT("Possesabletype"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_Possesabletype(Possesabletype_StaticEnum, TEXT("/Script/Saaya_UE4"), TEXT("Possesabletype"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_Saaya_UE4_Possesabletype()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_Saaya_UE4();
		extern uint32 Get_Z_Construct_UEnum_Saaya_UE4_Possesabletype_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("Possesabletype"), 0, Get_Z_Construct_UEnum_Saaya_UE4_Possesabletype_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Possesabletype"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("Possesabletype::Crane"), 0);
			EnumNames.Emplace(TEXT("Possesabletype::Lamp"), 1);
			EnumNames.Emplace(TEXT("Possesabletype::Possesabletype_MAX"), 2);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("Possesabletype");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("Crane.DisplayName"), TEXT("Crane"));
			MetaData->SetValue(ReturnEnum, TEXT("Lamp.DisplayName"), TEXT("Lamp"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("InGame/PossesableGameObject.h"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("\"BlueprintType\" is essential to include"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_Saaya_UE4_Possesabletype_CRC() { return 2228618161U; }
	void APossesableGameObject::StaticRegisterNativesAPossesableGameObject()
	{
		UClass* Class = APossesableGameObject::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnOverlapBegin", (Native)&APossesableGameObject::execOnOverlapBegin },
			{ "OnOverlapEnd", (Native)&APossesableGameObject::execOnOverlapEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 2);
	}
	UFunction* Z_Construct_UFunction_APossesableGameObject_OnOverlapBegin()
	{
		struct PossesableGameObject_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
		UObject* Outer=Z_Construct_UClass_APossesableGameObject();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnOverlapBegin"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00420401, 65535, sizeof(PossesableGameObject_eventOnOverlapBegin_Parms));
			UProperty* NewProp_SweepResult = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SweepResult"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SweepResult, PossesableGameObject_eventOnOverlapBegin_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFromSweep, PossesableGameObject_eventOnOverlapBegin_Parms, bool);
			UProperty* NewProp_bFromSweep = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bFromSweep"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFromSweep, PossesableGameObject_eventOnOverlapBegin_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bFromSweep, PossesableGameObject_eventOnOverlapBegin_Parms), sizeof(bool), true);
			UProperty* NewProp_OtherBodyIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherBodyIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(OtherBodyIndex, PossesableGameObject_eventOnOverlapBegin_Parms), 0x0010000000000080);
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, PossesableGameObject_eventOnOverlapBegin_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, PossesableGameObject_eventOnOverlapBegin_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_OverlappedComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OverlappedComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OverlappedComp, PossesableGameObject_eventOnOverlapBegin_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("InGame/PossesableGameObject.h"));
			MetaData->SetValue(NewProp_SweepResult, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_OverlappedComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APossesableGameObject_OnOverlapEnd()
	{
		struct PossesableGameObject_eventOnOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
		UObject* Outer=Z_Construct_UClass_APossesableGameObject();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnOverlapEnd"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535, sizeof(PossesableGameObject_eventOnOverlapEnd_Parms));
			UProperty* NewProp_OtherBodyIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherBodyIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(OtherBodyIndex, PossesableGameObject_eventOnOverlapEnd_Parms), 0x0010000000000080);
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, PossesableGameObject_eventOnOverlapEnd_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, PossesableGameObject_eventOnOverlapEnd_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_OverlappedComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OverlappedComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OverlappedComp, PossesableGameObject_eventOnOverlapEnd_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("InGame/PossesableGameObject.h"));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_OverlappedComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APossesableGameObject_NoRegister()
	{
		return APossesableGameObject::StaticClass();
	}
	UClass* Z_Construct_UClass_APossesableGameObject()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Saaya_UE4();
			OuterClass = APossesableGameObject::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_APossesableGameObject_OnOverlapBegin());
				OuterClass->LinkChild(Z_Construct_UFunction_APossesableGameObject_OnOverlapEnd());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_TriggerComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TriggerComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(TriggerComp, APossesableGameObject), 0x0010000000080009, Z_Construct_UClass_UBoxComponent_NoRegister());
				UProperty* NewProp_MeshComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MeshComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MeshComp, APossesableGameObject), 0x0010000000080009, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_Root = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Root"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Root, APossesableGameObject), 0x0010000000080009, Z_Construct_UClass_USceneComponent_NoRegister());
				UProperty* NewProp_CurrentPossableRType = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentPossableRType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(CurrentPossableRType, APossesableGameObject), 0x0010000000000005, Z_Construct_UEnum_Saaya_UE4_Possesabletype());
				UProperty* NewProp_CurrentPossableRType_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_CurrentPossableRType, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_APossesableGameObject_OnOverlapBegin(), "OnOverlapBegin"); // 3075611461
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_APossesableGameObject_OnOverlapEnd(), "OnOverlapEnd"); // 3850471663
				static TCppClassTypeInfo<TCppClassTypeTraits<APossesableGameObject> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("InGame/PossesableGameObject.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("InGame/PossesableGameObject.h"));
				MetaData->SetValue(NewProp_TriggerComp, TEXT("Category"), TEXT("PossesableGameObject"));
				MetaData->SetValue(NewProp_TriggerComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_TriggerComp, TEXT("ModuleRelativePath"), TEXT("InGame/PossesableGameObject.h"));
				MetaData->SetValue(NewProp_MeshComp, TEXT("Category"), TEXT("PossesableGameObject"));
				MetaData->SetValue(NewProp_MeshComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_MeshComp, TEXT("ModuleRelativePath"), TEXT("InGame/PossesableGameObject.h"));
				MetaData->SetValue(NewProp_Root, TEXT("Category"), TEXT("PossesableGameObject"));
				MetaData->SetValue(NewProp_Root, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Root, TEXT("ModuleRelativePath"), TEXT("InGame/PossesableGameObject.h"));
				MetaData->SetValue(NewProp_CurrentPossableRType, TEXT("Category"), TEXT("Public_Variables"));
				MetaData->SetValue(NewProp_CurrentPossableRType, TEXT("ModuleRelativePath"), TEXT("InGame/PossesableGameObject.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(APossesableGameObject, 4190486162);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APossesableGameObject(Z_Construct_UClass_APossesableGameObject, &APossesableGameObject::StaticClass, TEXT("/Script/Saaya_UE4"), TEXT("APossesableGameObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APossesableGameObject);
	void ALamp::StaticRegisterNativesALamp()
	{
		UClass* Class = ALamp::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnOverlapBegin1", (Native)&ALamp::execOnOverlapBegin1 },
			{ "OnOverlapEnd1", (Native)&ALamp::execOnOverlapEnd1 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 2);
	}
	UFunction* Z_Construct_UFunction_ALamp_OnOverlapBegin1()
	{
		struct Lamp_eventOnOverlapBegin1_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
		UObject* Outer=Z_Construct_UClass_ALamp();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnOverlapBegin1"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00420401, 65535, sizeof(Lamp_eventOnOverlapBegin1_Parms));
			UProperty* NewProp_SweepResult = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SweepResult"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SweepResult, Lamp_eventOnOverlapBegin1_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFromSweep, Lamp_eventOnOverlapBegin1_Parms, bool);
			UProperty* NewProp_bFromSweep = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bFromSweep"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFromSweep, Lamp_eventOnOverlapBegin1_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bFromSweep, Lamp_eventOnOverlapBegin1_Parms), sizeof(bool), true);
			UProperty* NewProp_OtherBodyIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherBodyIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(OtherBodyIndex, Lamp_eventOnOverlapBegin1_Parms), 0x0010000000000080);
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, Lamp_eventOnOverlapBegin1_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, Lamp_eventOnOverlapBegin1_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_OverlappedComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OverlappedComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OverlappedComp, Lamp_eventOnOverlapBegin1_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("InGame/Possesables/Lamp.h"));
			MetaData->SetValue(NewProp_SweepResult, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_OverlappedComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALamp_OnOverlapEnd1()
	{
		struct Lamp_eventOnOverlapEnd1_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
		UObject* Outer=Z_Construct_UClass_ALamp();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnOverlapEnd1"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535, sizeof(Lamp_eventOnOverlapEnd1_Parms));
			UProperty* NewProp_OtherBodyIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherBodyIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(OtherBodyIndex, Lamp_eventOnOverlapEnd1_Parms), 0x0010000000000080);
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, Lamp_eventOnOverlapEnd1_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, Lamp_eventOnOverlapEnd1_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_OverlappedComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OverlappedComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OverlappedComp, Lamp_eventOnOverlapEnd1_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("InGame/Possesables/Lamp.h"));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_OverlappedComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALamp_NoRegister()
	{
		return ALamp::StaticClass();
	}
	UClass* Z_Construct_UClass_ALamp()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APossesableGameObject();
			Z_Construct_UPackage__Script_Saaya_UE4();
			OuterClass = ALamp::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_ALamp_OnOverlapBegin1());
				OuterClass->LinkChild(Z_Construct_UFunction_ALamp_OnOverlapEnd1());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_LightSource = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LightSource"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(LightSource, ALamp), 0x0010000000080009, Z_Construct_UClass_USpotLightComponent_NoRegister());
				UProperty* NewProp_LightColliderMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LightColliderMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(LightColliderMesh, ALamp), 0x0010000000080009, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_Light = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Light"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Light, ALamp), 0x0010000000080009, Z_Construct_UClass_USceneComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ALamp_OnOverlapBegin1(), "OnOverlapBegin1"); // 2455248053
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ALamp_OnOverlapEnd1(), "OnOverlapEnd1"); // 249109501
				static TCppClassTypeInfo<TCppClassTypeTraits<ALamp> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("InGame/Possesables/Lamp.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("InGame/Possesables/Lamp.h"));
				MetaData->SetValue(NewProp_LightSource, TEXT("Category"), TEXT("Public_Variables"));
				MetaData->SetValue(NewProp_LightSource, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_LightSource, TEXT("ModuleRelativePath"), TEXT("InGame/Possesables/Lamp.h"));
				MetaData->SetValue(NewProp_LightColliderMesh, TEXT("Category"), TEXT("Public_Variables"));
				MetaData->SetValue(NewProp_LightColliderMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_LightColliderMesh, TEXT("ModuleRelativePath"), TEXT("InGame/Possesables/Lamp.h"));
				MetaData->SetValue(NewProp_Light, TEXT("Category"), TEXT("Public_Variables"));
				MetaData->SetValue(NewProp_Light, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Light, TEXT("ModuleRelativePath"), TEXT("InGame/Possesables/Lamp.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALamp, 1010879);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALamp(Z_Construct_UClass_ALamp, &ALamp::StaticClass, TEXT("/Script/Saaya_UE4"), TEXT("ALamp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALamp);
static UEnum* PlayerType_StaticEnum()
{
	extern SAAYA_UE4_API class UPackage* Z_Construct_UPackage__Script_Saaya_UE4();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern SAAYA_UE4_API class UEnum* Z_Construct_UEnum_Saaya_UE4_PlayerType();
		Singleton = GetStaticEnum(Z_Construct_UEnum_Saaya_UE4_PlayerType, Z_Construct_UPackage__Script_Saaya_UE4(), TEXT("PlayerType"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_PlayerType(PlayerType_StaticEnum, TEXT("/Script/Saaya_UE4"), TEXT("PlayerType"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_Saaya_UE4_PlayerType()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_Saaya_UE4();
		extern uint32 Get_Z_Construct_UEnum_Saaya_UE4_PlayerType_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("PlayerType"), 0, Get_Z_Construct_UEnum_Saaya_UE4_PlayerType_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PlayerType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("PlayerType::Player1"), 0);
			EnumNames.Emplace(TEXT("PlayerType::Player2"), 1);
			EnumNames.Emplace(TEXT("PlayerType::PlayerType_MAX"), 2);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("PlayerType");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Players/Saaya_UE4Character.h"));
			MetaData->SetValue(ReturnEnum, TEXT("Player1.DisplayName"), TEXT("Player1"));
			MetaData->SetValue(ReturnEnum, TEXT("Player2.DisplayName"), TEXT("Player2"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("\"BlueprintType\" is essential to include"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_Saaya_UE4_PlayerType_CRC() { return 1229732340U; }
	void ASaaya_UE4Character::StaticRegisterNativesASaaya_UE4Character()
	{
		UClass* Class = ASaaya_UE4Character::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnOverlapBegin", (Native)&ASaaya_UE4Character::execOnOverlapBegin },
			{ "OnOverlapEnd", (Native)&ASaaya_UE4Character::execOnOverlapEnd },
			{ "OnPlayerHit", (Native)&ASaaya_UE4Character::execOnPlayerHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 3);
	}
	UFunction* Z_Construct_UFunction_ASaaya_UE4Character_OnOverlapBegin()
	{
		struct Saaya_UE4Character_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
		UObject* Outer=Z_Construct_UClass_ASaaya_UE4Character();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnOverlapBegin"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00420401, 65535, sizeof(Saaya_UE4Character_eventOnOverlapBegin_Parms));
			UProperty* NewProp_SweepResult = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SweepResult"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SweepResult, Saaya_UE4Character_eventOnOverlapBegin_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFromSweep, Saaya_UE4Character_eventOnOverlapBegin_Parms, bool);
			UProperty* NewProp_bFromSweep = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bFromSweep"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFromSweep, Saaya_UE4Character_eventOnOverlapBegin_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bFromSweep, Saaya_UE4Character_eventOnOverlapBegin_Parms), sizeof(bool), true);
			UProperty* NewProp_OtherBodyIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherBodyIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(OtherBodyIndex, Saaya_UE4Character_eventOnOverlapBegin_Parms), 0x0010000000000080);
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, Saaya_UE4Character_eventOnOverlapBegin_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, Saaya_UE4Character_eventOnOverlapBegin_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_OverlappedComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OverlappedComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OverlappedComp, Saaya_UE4Character_eventOnOverlapBegin_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Players/Saaya_UE4Character.h"));
			MetaData->SetValue(NewProp_SweepResult, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_OverlappedComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASaaya_UE4Character_OnOverlapEnd()
	{
		struct Saaya_UE4Character_eventOnOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
		UObject* Outer=Z_Construct_UClass_ASaaya_UE4Character();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnOverlapEnd"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535, sizeof(Saaya_UE4Character_eventOnOverlapEnd_Parms));
			UProperty* NewProp_OtherBodyIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherBodyIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(OtherBodyIndex, Saaya_UE4Character_eventOnOverlapEnd_Parms), 0x0010000000000080);
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, Saaya_UE4Character_eventOnOverlapEnd_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, Saaya_UE4Character_eventOnOverlapEnd_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_OverlappedComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OverlappedComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OverlappedComp, Saaya_UE4Character_eventOnOverlapEnd_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Players/Saaya_UE4Character.h"));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_OverlappedComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASaaya_UE4Character_OnPlayerHit()
	{
		struct Saaya_UE4Character_eventOnPlayerHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		UObject* Outer=Z_Construct_UClass_ASaaya_UE4Character();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnPlayerHit"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00C20401, 65535, sizeof(Saaya_UE4Character_eventOnPlayerHit_Parms));
			UProperty* NewProp_Hit = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Hit"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Hit, Saaya_UE4Character_eventOnPlayerHit_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			UProperty* NewProp_NormalImpulse = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NormalImpulse"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NormalImpulse, Saaya_UE4Character_eventOnPlayerHit_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_OtherComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComponent, Saaya_UE4Character_eventOnPlayerHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, Saaya_UE4Character_eventOnPlayerHit_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_HitComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HitComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HitComponent, Saaya_UE4Character_eventOnPlayerHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Players/Saaya_UE4Character.h"));
			MetaData->SetValue(NewProp_Hit, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComponent, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_HitComponent, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASaaya_UE4Character_NoRegister()
	{
		return ASaaya_UE4Character::StaticClass();
	}
	UClass* Z_Construct_UClass_ASaaya_UE4Character()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_Saaya_UE4();
			OuterClass = ASaaya_UE4Character::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800080;

				OuterClass->LinkChild(Z_Construct_UFunction_ASaaya_UE4Character_OnOverlapBegin());
				OuterClass->LinkChild(Z_Construct_UFunction_ASaaya_UE4Character_OnOverlapEnd());
				OuterClass->LinkChild(Z_Construct_UFunction_ASaaya_UE4Character_OnPlayerHit());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_CurrentPlayerType = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentPlayerType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(CurrentPlayerType, ASaaya_UE4Character), 0x0010000000000005, Z_Construct_UEnum_Saaya_UE4_PlayerType());
				UProperty* NewProp_CurrentPlayerType_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_CurrentPlayerType, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_GameManagerActor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GameManagerActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(GameManagerActor, ASaaya_UE4Character), 0x0010000000000001, Z_Construct_UClass_AActor_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASaaya_UE4Character_OnOverlapBegin(), "OnOverlapBegin"); // 3117495541
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASaaya_UE4Character_OnOverlapEnd(), "OnOverlapEnd"); // 4224037690
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASaaya_UE4Character_OnPlayerHit(), "OnPlayerHit"); // 1604319655
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<ASaaya_UE4Character> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Players/Saaya_UE4Character.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Players/Saaya_UE4Character.h"));
				MetaData->SetValue(NewProp_CurrentPlayerType, TEXT("Category"), TEXT("Public_Variables"));
				MetaData->SetValue(NewProp_CurrentPlayerType, TEXT("ModuleRelativePath"), TEXT("Players/Saaya_UE4Character.h"));
				MetaData->SetValue(NewProp_GameManagerActor, TEXT("Category"), TEXT("Saaya_UE4Character"));
				MetaData->SetValue(NewProp_GameManagerActor, TEXT("ModuleRelativePath"), TEXT("Players/Saaya_UE4Character.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASaaya_UE4Character, 2225942446);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASaaya_UE4Character(Z_Construct_UClass_ASaaya_UE4Character, &ASaaya_UE4Character::StaticClass, TEXT("/Script/Saaya_UE4"), TEXT("ASaaya_UE4Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASaaya_UE4Character);
	void ASaaya_UE4GameMode::StaticRegisterNativesASaaya_UE4GameMode()
	{
	}
	UClass* Z_Construct_UClass_ASaaya_UE4GameMode_NoRegister()
	{
		return ASaaya_UE4GameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ASaaya_UE4GameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_Saaya_UE4();
			OuterClass = ASaaya_UE4GameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20880288;


				static TCppClassTypeInfo<TCppClassTypeTraits<ASaaya_UE4GameMode> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Saaya_UE4GameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Saaya_UE4GameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASaaya_UE4GameMode, 4228383596);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASaaya_UE4GameMode(Z_Construct_UClass_ASaaya_UE4GameMode, &ASaaya_UE4GameMode::StaticClass, TEXT("/Script/Saaya_UE4"), TEXT("ASaaya_UE4GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASaaya_UE4GameMode);
	UPackage* Z_Construct_UPackage__Script_Saaya_UE4()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/Saaya_UE4")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xA66C0516;
			Guid.B = 0x944E1C13;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
