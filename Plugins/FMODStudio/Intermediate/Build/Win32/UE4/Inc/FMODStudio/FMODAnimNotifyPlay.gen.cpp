// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/FMODStudioPrivatePCH.h"
#include "Classes/FMODAnimNotifyPlay.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODAnimNotifyPlay() {}
// Cross Module References
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAnimNotifyPlay_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAnimNotifyPlay();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEvent_NoRegister();
// End Cross Module References
	void UFMODAnimNotifyPlay::StaticRegisterNativesUFMODAnimNotifyPlay()
	{
	}
	UClass* Z_Construct_UClass_UFMODAnimNotifyPlay_NoRegister()
	{
		return UFMODAnimNotifyPlay::StaticClass();
	}
	UClass* Z_Construct_UClass_UFMODAnimNotifyPlay()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UAnimNotify();
			Z_Construct_UPackage__Script_FMODStudio();
			OuterClass = UFMODAnimNotifyPlay::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20112080u;


				UProperty* NewProp_Event = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Event"), RF_Public|RF_Transient|RF_MarkAsNative) UAssetObjectProperty(CPP_PROPERTY_BASE(Event, UFMODAnimNotifyPlay), 0x0014000000000015, Z_Construct_UClass_UFMODEvent_NoRegister());
				UProperty* NewProp_AttachName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AttachName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(AttachName, UFMODAnimNotifyPlay), 0x0010000000000011);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFollow, UFMODAnimNotifyPlay);
				UProperty* NewProp_bFollow = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bFollow"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFollow, UFMODAnimNotifyPlay), 0x0010000000000011, CPP_BOOL_PROPERTY_BITMASK(bFollow, UFMODAnimNotifyPlay), sizeof(uint8), false);
				static TCppClassTypeInfo<TCppClassTypeTraits<UFMODAnimNotifyPlay> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("DisplayName"), TEXT("Play FMOD Event"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FMODAnimNotifyPlay.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/FMODAnimNotifyPlay.h"));
				MetaData->SetValue(NewProp_Event, TEXT("Category"), TEXT("FMOD Anim Notify"));
				MetaData->SetValue(NewProp_Event, TEXT("ModuleRelativePath"), TEXT("Classes/FMODAnimNotifyPlay.h"));
				MetaData->SetValue(NewProp_Event, TEXT("ToolTip"), TEXT("Sount to Play"));
				MetaData->SetValue(NewProp_AttachName, TEXT("Category"), TEXT("FMOD Anim Notify"));
				MetaData->SetValue(NewProp_AttachName, TEXT("EditCondition"), TEXT("bFollow"));
				MetaData->SetValue(NewProp_AttachName, TEXT("ModuleRelativePath"), TEXT("Classes/FMODAnimNotifyPlay.h"));
				MetaData->SetValue(NewProp_AttachName, TEXT("ToolTip"), TEXT("Socket or bone name to attach sound to"));
				MetaData->SetValue(NewProp_bFollow, TEXT("Category"), TEXT("FMOD Anim Notify"));
				MetaData->SetValue(NewProp_bFollow, TEXT("ModuleRelativePath"), TEXT("Classes/FMODAnimNotifyPlay.h"));
				MetaData->SetValue(NewProp_bFollow, TEXT("ToolTip"), TEXT("If this sound should follow its owner"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFMODAnimNotifyPlay, 676624182);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFMODAnimNotifyPlay(Z_Construct_UClass_UFMODAnimNotifyPlay, &UFMODAnimNotifyPlay::StaticClass, TEXT("/Script/FMODStudio"), TEXT("UFMODAnimNotifyPlay"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODAnimNotifyPlay);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
