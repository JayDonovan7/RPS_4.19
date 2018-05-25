// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/FMODStudioPrivatePCH.h"
#include "Private/Sequencer/FMODEventParameterTrack.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODEventParameterTrack() {}
// Cross Module References
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEventParameterTrack_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEventParameterTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
// End Cross Module References
	void UFMODEventParameterTrack::StaticRegisterNativesUFMODEventParameterTrack()
	{
	}
	UClass* Z_Construct_UClass_UFMODEventParameterTrack_NoRegister()
	{
		return UFMODEventParameterTrack::StaticClass();
	}
	UClass* Z_Construct_UClass_UFMODEventParameterTrack()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UMovieSceneNameableTrack();
			Z_Construct_UPackage__Script_FMODStudio();
			OuterClass = UFMODEventParameterTrack::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20A80080u;


				UProperty* NewProp_Sections = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Sections"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Sections, UFMODEventParameterTrack), 0x0040008000000008);
				UProperty* NewProp_Sections_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Sections, TEXT("Sections"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000080008, Z_Construct_UClass_UMovieSceneSection_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<UFMODEventParameterTrack> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Sequencer/FMODEventParameterTrack.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Private/Sequencer/FMODEventParameterTrack.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Handles manipulation of event parameters in a movie scene."));
				MetaData->SetValue(NewProp_Sections, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Sections, TEXT("ModuleRelativePath"), TEXT("Private/Sequencer/FMODEventParameterTrack.h"));
				MetaData->SetValue(NewProp_Sections, TEXT("ToolTip"), TEXT("The sections owned by this track."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFMODEventParameterTrack, 990098107);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFMODEventParameterTrack(Z_Construct_UClass_UFMODEventParameterTrack, &UFMODEventParameterTrack::StaticClass, TEXT("/Script/FMODStudio"), TEXT("UFMODEventParameterTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODEventParameterTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
