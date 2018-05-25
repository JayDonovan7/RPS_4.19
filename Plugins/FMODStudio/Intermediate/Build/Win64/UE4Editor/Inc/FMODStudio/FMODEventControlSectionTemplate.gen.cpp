// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/FMODStudioPrivatePCH.h"
#include "Private/Sequencer/FMODEventControlSectionTemplate.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODEventControlSectionTemplate() {}
// Cross Module References
	FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODEventControlSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIntegralCurve();
// End Cross Module References
class UScriptStruct* FFMODEventControlSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FMODSTUDIO_API uint32 Get_Z_Construct_UScriptStruct_FFMODEventControlSectionTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODEventControlSectionTemplate, Z_Construct_UPackage__Script_FMODStudio(), TEXT("FMODEventControlSectionTemplate"), sizeof(FFMODEventControlSectionTemplate), Get_Z_Construct_UScriptStruct_FFMODEventControlSectionTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFMODEventControlSectionTemplate(FFMODEventControlSectionTemplate::StaticStruct, TEXT("/Script/FMODStudio"), TEXT("FMODEventControlSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_FMODStudio_StaticRegisterNativesFFMODEventControlSectionTemplate
{
	FScriptStruct_FMODStudio_StaticRegisterNativesFFMODEventControlSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FMODEventControlSectionTemplate")),new UScriptStruct::TCppStructOps<FFMODEventControlSectionTemplate>);
	}
} ScriptStruct_FMODStudio_StaticRegisterNativesFFMODEventControlSectionTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FFMODEventControlSectionTemplate()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudio();
		extern uint32 Get_Z_Construct_UScriptStruct_FFMODEventControlSectionTemplate_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FMODEventControlSectionTemplate"), sizeof(FFMODEventControlSectionTemplate), Get_Z_Construct_UScriptStruct_FFMODEventControlSectionTemplate_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FMODEventControlSectionTemplate"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), Z_Construct_UScriptStruct_FMovieSceneEvalTemplate(), new UScriptStruct::TCppStructOps<FFMODEventControlSectionTemplate>, EStructFlags(0x00000005));
			UProperty* NewProp_ControlCurve = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ControlCurve"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ControlCurve, FFMODEventControlSectionTemplate), 0x0040000000000000, Z_Construct_UScriptStruct_FIntegralCurve());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Private/Sequencer/FMODEventControlSectionTemplate.h"));
			MetaData->SetValue(NewProp_ControlCurve, TEXT("ModuleRelativePath"), TEXT("Private/Sequencer/FMODEventControlSectionTemplate.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFMODEventControlSectionTemplate_CRC() { return 1650301101U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
