// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/FMODStudioPrivatePCH.h"
#include "Private/Sequencer/FMODEventParameterSectionTemplate.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODEventParameterSectionTemplate() {}
// Cross Module References
	FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODEventParameterNameAndCurve();
// End Cross Module References
class UScriptStruct* FFMODEventParameterSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FMODSTUDIO_API uint32 Get_Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate, Z_Construct_UPackage__Script_FMODStudio(), TEXT("FMODEventParameterSectionTemplate"), sizeof(FFMODEventParameterSectionTemplate), Get_Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFMODEventParameterSectionTemplate(FFMODEventParameterSectionTemplate::StaticStruct, TEXT("/Script/FMODStudio"), TEXT("FMODEventParameterSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_FMODStudio_StaticRegisterNativesFFMODEventParameterSectionTemplate
{
	FScriptStruct_FMODStudio_StaticRegisterNativesFFMODEventParameterSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FMODEventParameterSectionTemplate")),new UScriptStruct::TCppStructOps<FFMODEventParameterSectionTemplate>);
	}
} ScriptStruct_FMODStudio_StaticRegisterNativesFFMODEventParameterSectionTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudio();
		extern uint32 Get_Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FMODEventParameterSectionTemplate"), sizeof(FFMODEventParameterSectionTemplate), Get_Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FMODEventParameterSectionTemplate"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), Z_Construct_UScriptStruct_FMovieSceneEvalTemplate(), new UScriptStruct::TCppStructOps<FFMODEventParameterSectionTemplate>, EStructFlags(0x00000005));
			UProperty* NewProp_Parameters = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Parameters"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Parameters, FFMODEventParameterSectionTemplate), 0x0040000000000000);
			UProperty* NewProp_Parameters_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Parameters, TEXT("Parameters"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FFMODEventParameterNameAndCurve());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Private/Sequencer/FMODEventParameterSectionTemplate.h"));
			MetaData->SetValue(NewProp_Parameters, TEXT("ModuleRelativePath"), TEXT("Private/Sequencer/FMODEventParameterSectionTemplate.h"));
			MetaData->SetValue(NewProp_Parameters, TEXT("ToolTip"), TEXT("The scalar parameter names and their associated curves."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate_CRC() { return 3782987509U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
