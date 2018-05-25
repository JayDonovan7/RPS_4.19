// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/FMODStudioPrivatePCH.h"
#include "Private/Sequencer/FMODEventControlTrack.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODEventControlTrack() {}
// Cross Module References
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEventControlTrack_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEventControlTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
// End Cross Module References
	void UFMODEventControlTrack::StaticRegisterNativesUFMODEventControlTrack()
	{
	}
	UClass* Z_Construct_UClass_UFMODEventControlTrack_NoRegister()
	{
		return UFMODEventControlTrack::StaticClass();
	}
	UClass* Z_Construct_UClass_UFMODEventControlTrack()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UMovieSceneNameableTrack();
			Z_Construct_UPackage__Script_FMODStudio();
			OuterClass = UFMODEventControlTrack::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20A80080u;


				UProperty* NewProp_ControlSections = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ControlSections"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ControlSections, UFMODEventControlTrack), 0x0040008000000008);
				UProperty* NewProp_ControlSections_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ControlSections, TEXT("ControlSections"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000080008, Z_Construct_UClass_UMovieSceneSection_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<UFMODEventControlTrack> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Sequencer/FMODEventControlTrack.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Private/Sequencer/FMODEventControlTrack.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Handles control of an FMOD Event"));
				MetaData->SetValue(NewProp_ControlSections, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_ControlSections, TEXT("ModuleRelativePath"), TEXT("Private/Sequencer/FMODEventControlTrack.h"));
				MetaData->SetValue(NewProp_ControlSections, TEXT("ToolTip"), TEXT("List of all evemt control sections."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFMODEventControlTrack, 1694745192);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFMODEventControlTrack(Z_Construct_UClass_UFMODEventControlTrack, &UFMODEventControlTrack::StaticClass, TEXT("/Script/FMODStudio"), TEXT("UFMODEventControlTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODEventControlTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
