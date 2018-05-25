// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/FMODStudioPrivatePCH.h"
#include "Private/Sequencer/FMODEventParameterSection.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODEventParameterSection() {}
// Cross Module References
	FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODEventParameterNameAndCurve();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEventParameterSection_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEventParameterSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
// End Cross Module References
class UScriptStruct* FFMODEventParameterNameAndCurve::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FMODSTUDIO_API uint32 Get_Z_Construct_UScriptStruct_FFMODEventParameterNameAndCurve_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODEventParameterNameAndCurve, Z_Construct_UPackage__Script_FMODStudio(), TEXT("FMODEventParameterNameAndCurve"), sizeof(FFMODEventParameterNameAndCurve), Get_Z_Construct_UScriptStruct_FFMODEventParameterNameAndCurve_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFMODEventParameterNameAndCurve(FFMODEventParameterNameAndCurve::StaticStruct, TEXT("/Script/FMODStudio"), TEXT("FMODEventParameterNameAndCurve"), false, nullptr, nullptr);
static struct FScriptStruct_FMODStudio_StaticRegisterNativesFFMODEventParameterNameAndCurve
{
	FScriptStruct_FMODStudio_StaticRegisterNativesFFMODEventParameterNameAndCurve()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FMODEventParameterNameAndCurve")),new UScriptStruct::TCppStructOps<FFMODEventParameterNameAndCurve>);
	}
} ScriptStruct_FMODStudio_StaticRegisterNativesFFMODEventParameterNameAndCurve;
	UScriptStruct* Z_Construct_UScriptStruct_FFMODEventParameterNameAndCurve()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudio();
		extern uint32 Get_Z_Construct_UScriptStruct_FFMODEventParameterNameAndCurve_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FMODEventParameterNameAndCurve"), sizeof(FFMODEventParameterNameAndCurve), Get_Z_Construct_UScriptStruct_FFMODEventParameterNameAndCurve_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FMODEventParameterNameAndCurve"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FFMODEventParameterNameAndCurve>, EStructFlags(0x00000001));
			UProperty* NewProp_Curve = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Curve"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Curve, FFMODEventParameterNameAndCurve), 0x0010000000000000, Z_Construct_UScriptStruct_FRichCurve());
			UProperty* NewProp_Index = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Index"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Index, FFMODEventParameterNameAndCurve), 0x0010000000000000);
			UProperty* NewProp_ParameterName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ParameterName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(ParameterName, FFMODEventParameterNameAndCurve), 0x0010000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Private/Sequencer/FMODEventParameterSection.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Structure representing an animated event parameter and it's associated animation curve."));
			MetaData->SetValue(NewProp_Curve, TEXT("ModuleRelativePath"), TEXT("Private/Sequencer/FMODEventParameterSection.h"));
			MetaData->SetValue(NewProp_Index, TEXT("ModuleRelativePath"), TEXT("Private/Sequencer/FMODEventParameterSection.h"));
			MetaData->SetValue(NewProp_ParameterName, TEXT("ModuleRelativePath"), TEXT("Private/Sequencer/FMODEventParameterSection.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFMODEventParameterNameAndCurve_CRC() { return 3230246273U; }
	void UFMODEventParameterSection::StaticRegisterNativesUFMODEventParameterSection()
	{
	}
	UClass* Z_Construct_UClass_UFMODEventParameterSection_NoRegister()
	{
		return UFMODEventParameterSection::StaticClass();
	}
	UClass* Z_Construct_UClass_UFMODEventParameterSection()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UMovieSceneSection();
			Z_Construct_UPackage__Script_FMODStudio();
			OuterClass = UFMODEventParameterSection::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20280080u;


				UProperty* NewProp_EventParameterNamesAndCurves = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EventParameterNamesAndCurves"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(EventParameterNamesAndCurves, UFMODEventParameterSection), 0x0040000000000000);
				UProperty* NewProp_EventParameterNamesAndCurves_Inner = new(EC_InternalUseOnlyConstructor, NewProp_EventParameterNamesAndCurves, TEXT("EventParameterNamesAndCurves"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FFMODEventParameterNameAndCurve());
				static TCppClassTypeInfo<TCppClassTypeTraits<UFMODEventParameterSection> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Sequencer/FMODEventParameterSection.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Private/Sequencer/FMODEventParameterSection.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("A single movie scene section which can contain data for multiple event parameters."));
				MetaData->SetValue(NewProp_EventParameterNamesAndCurves, TEXT("ModuleRelativePath"), TEXT("Private/Sequencer/FMODEventParameterSection.h"));
				MetaData->SetValue(NewProp_EventParameterNamesAndCurves, TEXT("ToolTip"), TEXT("The event parameter names and their associated curves."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFMODEventParameterSection, 2832783816);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFMODEventParameterSection(Z_Construct_UClass_UFMODEventParameterSection, &UFMODEventParameterSection::StaticClass, TEXT("/Script/FMODStudio"), TEXT("UFMODEventParameterSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODEventParameterSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
