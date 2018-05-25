// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/FMODStudioOculusPrivatePCH.h"
#include "Classes/FMODOculusRoomParameters.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODOculusRoomParameters() {}
// Cross Module References
	FMODSTUDIOOCULUS_API UScriptStruct* Z_Construct_UScriptStruct_FFMODOculusRoomParameters();
	UPackage* Z_Construct_UPackage__Script_FMODStudioOculus();
// End Cross Module References
class UScriptStruct* FFMODOculusRoomParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FMODSTUDIOOCULUS_API uint32 Get_Z_Construct_UScriptStruct_FFMODOculusRoomParameters_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODOculusRoomParameters, Z_Construct_UPackage__Script_FMODStudioOculus(), TEXT("FMODOculusRoomParameters"), sizeof(FFMODOculusRoomParameters), Get_Z_Construct_UScriptStruct_FFMODOculusRoomParameters_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFMODOculusRoomParameters(FFMODOculusRoomParameters::StaticStruct, TEXT("/Script/FMODStudioOculus"), TEXT("FMODOculusRoomParameters"), false, nullptr, nullptr);
static struct FScriptStruct_FMODStudioOculus_StaticRegisterNativesFFMODOculusRoomParameters
{
	FScriptStruct_FMODStudioOculus_StaticRegisterNativesFFMODOculusRoomParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FMODOculusRoomParameters")),new UScriptStruct::TCppStructOps<FFMODOculusRoomParameters>);
	}
} ScriptStruct_FMODStudioOculus_StaticRegisterNativesFFMODOculusRoomParameters;
	UScriptStruct* Z_Construct_UScriptStruct_FFMODOculusRoomParameters()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudioOculus();
		extern uint32 Get_Z_Construct_UScriptStruct_FFMODOculusRoomParameters_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FMODOculusRoomParameters"), sizeof(FFMODOculusRoomParameters), Get_Z_Construct_UScriptStruct_FFMODOculusRoomParameters_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FMODOculusRoomParameters"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FFMODOculusRoomParameters>, EStructFlags(0x00000001));
			UProperty* NewProp_RefFar = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RefFar"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(RefFar, FFMODOculusRoomParameters), 0x0010000000000005);
			UProperty* NewProp_RefNear = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RefNear"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(RefNear, FFMODOculusRoomParameters), 0x0010000000000005);
			UProperty* NewProp_RefDown = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RefDown"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(RefDown, FFMODOculusRoomParameters), 0x0010000000000005);
			UProperty* NewProp_RefUp = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RefUp"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(RefUp, FFMODOculusRoomParameters), 0x0010000000000005);
			UProperty* NewProp_RefRight = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RefRight"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(RefRight, FFMODOculusRoomParameters), 0x0010000000000005);
			UProperty* NewProp_RefLeft = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RefLeft"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(RefLeft, FFMODOculusRoomParameters), 0x0010000000000005);
			UProperty* NewProp_RoomDepth = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RoomDepth"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(RoomDepth, FFMODOculusRoomParameters), 0x0010000000000005);
			UProperty* NewProp_RoomHeight = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RoomHeight"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(RoomHeight, FFMODOculusRoomParameters), 0x0010000000000005);
			UProperty* NewProp_RoomWidth = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RoomWidth"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(RoomWidth, FFMODOculusRoomParameters), 0x0010000000000005);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/FMODOculusRoomParameters.h"));
			MetaData->SetValue(NewProp_RefFar, TEXT("Category"), TEXT("Reflections"));
			MetaData->SetValue(NewProp_RefFar, TEXT("ModuleRelativePath"), TEXT("Classes/FMODOculusRoomParameters.h"));
			MetaData->SetValue(NewProp_RefFar, TEXT("ToolTip"), TEXT("Far reflections (0.0 = fully anechoic, 1.0 = fully reflective, but we cap at 0.95)"));
			MetaData->SetValue(NewProp_RefNear, TEXT("Category"), TEXT("Reflections"));
			MetaData->SetValue(NewProp_RefNear, TEXT("ModuleRelativePath"), TEXT("Classes/FMODOculusRoomParameters.h"));
			MetaData->SetValue(NewProp_RefNear, TEXT("ToolTip"), TEXT("Near reflections (0.0 = fully anechoic, 1.0 = fully reflective, but we cap at 0.95)"));
			MetaData->SetValue(NewProp_RefDown, TEXT("Category"), TEXT("Reflections"));
			MetaData->SetValue(NewProp_RefDown, TEXT("ModuleRelativePath"), TEXT("Classes/FMODOculusRoomParameters.h"));
			MetaData->SetValue(NewProp_RefDown, TEXT("ToolTip"), TEXT("Down reflections (0.0 = fully anechoic, 1.0 = fully reflective, but we cap at 0.95)"));
			MetaData->SetValue(NewProp_RefUp, TEXT("Category"), TEXT("Reflections"));
			MetaData->SetValue(NewProp_RefUp, TEXT("ModuleRelativePath"), TEXT("Classes/FMODOculusRoomParameters.h"));
			MetaData->SetValue(NewProp_RefUp, TEXT("ToolTip"), TEXT("Up reflections (0.0 = fully anechoic, 1.0 = fully reflective, but we cap at 0.95)"));
			MetaData->SetValue(NewProp_RefRight, TEXT("Category"), TEXT("Reflections"));
			MetaData->SetValue(NewProp_RefRight, TEXT("ModuleRelativePath"), TEXT("Classes/FMODOculusRoomParameters.h"));
			MetaData->SetValue(NewProp_RefRight, TEXT("ToolTip"), TEXT("Right reflections (0.0 = fully anechoic, 1.0 = fully reflective, but we cap at 0.95)"));
			MetaData->SetValue(NewProp_RefLeft, TEXT("Category"), TEXT("Reflections"));
			MetaData->SetValue(NewProp_RefLeft, TEXT("ModuleRelativePath"), TEXT("Classes/FMODOculusRoomParameters.h"));
			MetaData->SetValue(NewProp_RefLeft, TEXT("ToolTip"), TEXT("Left reflections (0.0 = fully anechoic, 1.0 = fully reflective, but we cap at 0.95)"));
			MetaData->SetValue(NewProp_RoomDepth, TEXT("Category"), TEXT("Room"));
			MetaData->SetValue(NewProp_RoomDepth, TEXT("ModuleRelativePath"), TEXT("Classes/FMODOculusRoomParameters.h"));
			MetaData->SetValue(NewProp_RoomDepth, TEXT("ToolTip"), TEXT("Room depth in unreal units"));
			MetaData->SetValue(NewProp_RoomHeight, TEXT("Category"), TEXT("Room"));
			MetaData->SetValue(NewProp_RoomHeight, TEXT("ModuleRelativePath"), TEXT("Classes/FMODOculusRoomParameters.h"));
			MetaData->SetValue(NewProp_RoomHeight, TEXT("ToolTip"), TEXT("Room height in unreal units"));
			MetaData->SetValue(NewProp_RoomWidth, TEXT("Category"), TEXT("Room"));
			MetaData->SetValue(NewProp_RoomWidth, TEXT("ModuleRelativePath"), TEXT("Classes/FMODOculusRoomParameters.h"));
			MetaData->SetValue(NewProp_RoomWidth, TEXT("ToolTip"), TEXT("Room width in unreal units"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFMODOculusRoomParameters_CRC() { return 4224066651U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
