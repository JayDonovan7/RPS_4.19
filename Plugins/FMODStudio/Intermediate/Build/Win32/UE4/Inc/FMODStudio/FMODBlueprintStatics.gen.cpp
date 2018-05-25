// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/FMODStudioPrivatePCH.h"
#include "Classes/FMODBlueprintStatics.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODBlueprintStatics() {}
// Cross Module References
	FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODEventInstance();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_BusSetMute();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODBlueprintStatics();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODBus_NoRegister();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_BusSetPaused();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_BusSetVolume();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceGetParameter();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceIsValid();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_EventInstancePlay();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceSetParameter();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceSetPaused();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceSetPitch();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceSetProperty();
	FMODSTUDIO_API UEnum* Z_Construct_UEnum_FMODStudio_EFMODEventProperty();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceSetTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceSetVolume();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceStop();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceTriggerCue();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_FindAssetByName();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAsset_NoRegister();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_FindEventByName();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEvent_NoRegister();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_FindEventInstances();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_GetOutputDrivers();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_IsBankLoaded();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODBank_NoRegister();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_LoadBank();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_LoadBankSampleData();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_LoadEventSampleData();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_MixerResume();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_MixerSuspend();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_PlayEvent2D();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_PlayEventAtLocation();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_PlayEventAttached();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAudioComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachLocation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_SetOutputDriverByIndex();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_SetOutputDriverByName();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_UnloadBank();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_UnloadBankSampleData();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_UnloadEventSampleData();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_VCASetVolume();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODVCA_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODBlueprintStatics_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
class UScriptStruct* FFMODEventInstance::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FMODSTUDIO_API uint32 Get_Z_Construct_UScriptStruct_FFMODEventInstance_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODEventInstance, Z_Construct_UPackage__Script_FMODStudio(), TEXT("FMODEventInstance"), sizeof(FFMODEventInstance), Get_Z_Construct_UScriptStruct_FFMODEventInstance_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFMODEventInstance(FFMODEventInstance::StaticStruct, TEXT("/Script/FMODStudio"), TEXT("FMODEventInstance"), false, nullptr, nullptr);
static struct FScriptStruct_FMODStudio_StaticRegisterNativesFFMODEventInstance
{
	FScriptStruct_FMODStudio_StaticRegisterNativesFFMODEventInstance()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FMODEventInstance")),new UScriptStruct::TCppStructOps<FFMODEventInstance>);
	}
} ScriptStruct_FMODStudio_StaticRegisterNativesFFMODEventInstance;
	UScriptStruct* Z_Construct_UScriptStruct_FFMODEventInstance()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudio();
		extern uint32 Get_Z_Construct_UScriptStruct_FFMODEventInstance_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FMODEventInstance"), sizeof(FFMODEventInstance), Get_Z_Construct_UScriptStruct_FFMODEventInstance_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FMODEventInstance"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FFMODEventInstance>, EStructFlags(0x00000001));
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/FMODBlueprintStatics.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFMODEventInstance_CRC() { return 3639153964U; }
	void UFMODBlueprintStatics::StaticRegisterNativesUFMODBlueprintStatics()
	{
		UClass* Class = UFMODBlueprintStatics::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "BusSetMute", (Native)&UFMODBlueprintStatics::execBusSetMute },
			{ "BusSetPaused", (Native)&UFMODBlueprintStatics::execBusSetPaused },
			{ "BusSetVolume", (Native)&UFMODBlueprintStatics::execBusSetVolume },
			{ "EventInstanceGetParameter", (Native)&UFMODBlueprintStatics::execEventInstanceGetParameter },
			{ "EventInstanceIsValid", (Native)&UFMODBlueprintStatics::execEventInstanceIsValid },
			{ "EventInstancePlay", (Native)&UFMODBlueprintStatics::execEventInstancePlay },
			{ "EventInstanceSetParameter", (Native)&UFMODBlueprintStatics::execEventInstanceSetParameter },
			{ "EventInstanceSetPaused", (Native)&UFMODBlueprintStatics::execEventInstanceSetPaused },
			{ "EventInstanceSetPitch", (Native)&UFMODBlueprintStatics::execEventInstanceSetPitch },
			{ "EventInstanceSetProperty", (Native)&UFMODBlueprintStatics::execEventInstanceSetProperty },
			{ "EventInstanceSetTransform", (Native)&UFMODBlueprintStatics::execEventInstanceSetTransform },
			{ "EventInstanceSetVolume", (Native)&UFMODBlueprintStatics::execEventInstanceSetVolume },
			{ "EventInstanceStop", (Native)&UFMODBlueprintStatics::execEventInstanceStop },
			{ "EventInstanceTriggerCue", (Native)&UFMODBlueprintStatics::execEventInstanceTriggerCue },
			{ "FindAssetByName", (Native)&UFMODBlueprintStatics::execFindAssetByName },
			{ "FindEventByName", (Native)&UFMODBlueprintStatics::execFindEventByName },
			{ "FindEventInstances", (Native)&UFMODBlueprintStatics::execFindEventInstances },
			{ "GetOutputDrivers", (Native)&UFMODBlueprintStatics::execGetOutputDrivers },
			{ "IsBankLoaded", (Native)&UFMODBlueprintStatics::execIsBankLoaded },
			{ "LoadBank", (Native)&UFMODBlueprintStatics::execLoadBank },
			{ "LoadBankSampleData", (Native)&UFMODBlueprintStatics::execLoadBankSampleData },
			{ "LoadEventSampleData", (Native)&UFMODBlueprintStatics::execLoadEventSampleData },
			{ "MixerResume", (Native)&UFMODBlueprintStatics::execMixerResume },
			{ "MixerSuspend", (Native)&UFMODBlueprintStatics::execMixerSuspend },
			{ "PlayEvent2D", (Native)&UFMODBlueprintStatics::execPlayEvent2D },
			{ "PlayEventAtLocation", (Native)&UFMODBlueprintStatics::execPlayEventAtLocation },
			{ "PlayEventAttached", (Native)&UFMODBlueprintStatics::execPlayEventAttached },
			{ "SetOutputDriverByIndex", (Native)&UFMODBlueprintStatics::execSetOutputDriverByIndex },
			{ "SetOutputDriverByName", (Native)&UFMODBlueprintStatics::execSetOutputDriverByName },
			{ "UnloadBank", (Native)&UFMODBlueprintStatics::execUnloadBank },
			{ "UnloadBankSampleData", (Native)&UFMODBlueprintStatics::execUnloadBankSampleData },
			{ "UnloadEventSampleData", (Native)&UFMODBlueprintStatics::execUnloadEventSampleData },
			{ "VCASetVolume", (Native)&UFMODBlueprintStatics::execVCASetVolume },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_BusSetMute()
	{
		struct FMODBlueprintStatics_eventBusSetMute_Parms
		{
			UFMODBus* Bus;
			bool bMute;
		};
		UObject* Outer = Z_Construct_UClass_UFMODBlueprintStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BusSetMute"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(FMODBlueprintStatics_eventBusSetMute_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bMute, FMODBlueprintStatics_eventBusSetMute_Parms);
			UProperty* NewProp_bMute = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bMute"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bMute, FMODBlueprintStatics_eventBusSetMute_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bMute, FMODBlueprintStatics_eventBusSetMute_Parms), sizeof(bool), true);
			UProperty* NewProp_Bus = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Bus"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Bus, FMODBlueprintStatics_eventBusSetMute_Parms), 0x0010000000000080, Z_Construct_UClass_UFMODBus_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD|Bus"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODBlueprintStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Mute/Unmute this bus\n@param Bus - bus to use\n@param bMute - mute"));
			MetaData->SetValue(ReturnFunction, TEXT("UnsafeDuringActorConstruction"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_BusSetPaused()
	{
		struct FMODBlueprintStatics_eventBusSetPaused_Parms
		{
			UFMODBus* Bus;
			bool bPaused;
		};
		UObject* Outer = Z_Construct_UClass_UFMODBlueprintStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BusSetPaused"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(FMODBlueprintStatics_eventBusSetPaused_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bPaused, FMODBlueprintStatics_eventBusSetPaused_Parms);
			UProperty* NewProp_bPaused = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bPaused"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bPaused, FMODBlueprintStatics_eventBusSetPaused_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bPaused, FMODBlueprintStatics_eventBusSetPaused_Parms), sizeof(bool), true);
			UProperty* NewProp_Bus = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Bus"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Bus, FMODBlueprintStatics_eventBusSetPaused_Parms), 0x0010000000000080, Z_Construct_UClass_UFMODBus_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD|Bus"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODBlueprintStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Pause/Unpause all events going through this bus\n@param Bus - bus to use\n@param bPaused - paused"));
			MetaData->SetValue(ReturnFunction, TEXT("UnsafeDuringActorConstruction"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_BusSetVolume()
	{
		struct FMODBlueprintStatics_eventBusSetVolume_Parms
		{
			UFMODBus* Bus;
			float Volume;
		};
		UObject* Outer = Z_Construct_UClass_UFMODBlueprintStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BusSetVolume"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(FMODBlueprintStatics_eventBusSetVolume_Parms));
			UProperty* NewProp_Volume = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Volume"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Volume, FMODBlueprintStatics_eventBusSetVolume_Parms), 0x0010000000000080);
			UProperty* NewProp_Bus = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Bus"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Bus, FMODBlueprintStatics_eventBusSetVolume_Parms), 0x0010000000000080, Z_Construct_UClass_UFMODBus_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD|Bus"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODBlueprintStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set volume on a bus\n@param Bus - bus to use\n@param Volume - volume"));
			MetaData->SetValue(ReturnFunction, TEXT("UnsafeDuringActorConstruction"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceGetParameter()
	{
		struct FMODBlueprintStatics_eventEventInstanceGetParameter_Parms
		{
			FFMODEventInstance EventInstance;
			FName Name;
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UFMODBlueprintStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EventInstanceGetParameter"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(FMODBlueprintStatics_eventEventInstanceGetParameter_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, FMODBlueprintStatics_eventEventInstanceGetParameter_Parms), 0x0010000000000580);
			UProperty* NewProp_Name = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Name"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(Name, FMODBlueprintStatics_eventEventInstanceGetParameter_Parms), 0x0010000000000080);
			UProperty* NewProp_EventInstance = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EventInstance"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(EventInstance, FMODBlueprintStatics_eventEventInstanceGetParameter_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FFMODEventInstance());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD|EventInstance"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODBlueprintStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get a parameter on an FMOD Event Instance.\n@param EventInstance - Event instance\n@param Name - Name of parameter"));
			MetaData->SetValue(ReturnFunction, TEXT("UnsafeDuringActorConstruction"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceIsValid()
	{
		struct FMODBlueprintStatics_eventEventInstanceIsValid_Parms
		{
			FFMODEventInstance EventInstance;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UFMODBlueprintStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EventInstanceIsValid"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(FMODBlueprintStatics_eventEventInstanceIsValid_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, FMODBlueprintStatics_eventEventInstanceIsValid_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, FMODBlueprintStatics_eventEventInstanceIsValid_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, FMODBlueprintStatics_eventEventInstanceIsValid_Parms), sizeof(bool), true);
			UProperty* NewProp_EventInstance = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EventInstance"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(EventInstance, FMODBlueprintStatics_eventEventInstanceIsValid_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FFMODEventInstance());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD|EventInstance"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODBlueprintStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns whether this FMOD Event Instance is valid.  The instance will be invalidated when the sound stops.\n@param EventInstance - Event instance"));
			MetaData->SetValue(ReturnFunction, TEXT("UnsafeDuringActorConstruction"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_EventInstancePlay()
	{
		struct FMODBlueprintStatics_eventEventInstancePlay_Parms
		{
			FFMODEventInstance EventInstance;
		};
		UObject* Outer = Z_Construct_UClass_UFMODBlueprintStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EventInstancePlay"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(FMODBlueprintStatics_eventEventInstancePlay_Parms));
			UProperty* NewProp_EventInstance = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EventInstance"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(EventInstance, FMODBlueprintStatics_eventEventInstancePlay_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FFMODEventInstance());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD|EventInstance"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODBlueprintStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Plays a FMOD Event Instance.\n@param EventInstance - Event instance"));
			MetaData->SetValue(ReturnFunction, TEXT("UnsafeDuringActorConstruction"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceSetParameter()
	{
		struct FMODBlueprintStatics_eventEventInstanceSetParameter_Parms
		{
			FFMODEventInstance EventInstance;
			FName Name;
			float Value;
		};
		UObject* Outer = Z_Construct_UClass_UFMODBlueprintStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EventInstanceSetParameter"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(FMODBlueprintStatics_eventEventInstanceSetParameter_Parms));
			UProperty* NewProp_Value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Value"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Value, FMODBlueprintStatics_eventEventInstanceSetParameter_Parms), 0x0010000000000080);
			UProperty* NewProp_Name = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Name"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(Name, FMODBlueprintStatics_eventEventInstanceSetParameter_Parms), 0x0010000000000080);
			UProperty* NewProp_EventInstance = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EventInstance"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(EventInstance, FMODBlueprintStatics_eventEventInstanceSetParameter_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FFMODEventInstance());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD|EventInstance"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODBlueprintStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set a parameter on an FMOD Event Instance.\n@param EventInstance - Event instance\n@param Name - Name of parameter\n@param Value - Value of parameter"));
			MetaData->SetValue(ReturnFunction, TEXT("UnsafeDuringActorConstruction"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceSetPaused()
	{
		struct FMODBlueprintStatics_eventEventInstanceSetPaused_Parms
		{
			FFMODEventInstance EventInstance;
			bool Paused;
		};
		UObject* Outer = Z_Construct_UClass_UFMODBlueprintStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EventInstanceSetPaused"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(FMODBlueprintStatics_eventEventInstanceSetPaused_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(Paused, FMODBlueprintStatics_eventEventInstanceSetPaused_Parms);
			UProperty* NewProp_Paused = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Paused"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(Paused, FMODBlueprintStatics_eventEventInstanceSetPaused_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(Paused, FMODBlueprintStatics_eventEventInstanceSetPaused_Parms), sizeof(bool), true);
			UProperty* NewProp_EventInstance = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EventInstance"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(EventInstance, FMODBlueprintStatics_eventEventInstanceSetPaused_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FFMODEventInstance());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD|EventInstance"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODBlueprintStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Pause/Unpause an FMOD Event Instance.\n@param EventInstance - Event instance\n@param Paused - Whether to pause or unpause"));
			MetaData->SetValue(ReturnFunction, TEXT("UnsafeDuringActorConstruction"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceSetPitch()
	{
		struct FMODBlueprintStatics_eventEventInstanceSetPitch_Parms
		{
			FFMODEventInstance EventInstance;
			float Pitch;
		};
		UObject* Outer = Z_Construct_UClass_UFMODBlueprintStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EventInstanceSetPitch"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(FMODBlueprintStatics_eventEventInstanceSetPitch_Parms));
			UProperty* NewProp_Pitch = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Pitch"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Pitch, FMODBlueprintStatics_eventEventInstanceSetPitch_Parms), 0x0010000000000080);
			UProperty* NewProp_EventInstance = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EventInstance"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(EventInstance, FMODBlueprintStatics_eventEventInstanceSetPitch_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FFMODEventInstance());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD|EventInstance"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODBlueprintStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set pitch on an FMOD Event Instance.\n@param EventInstance - Event instance\n@param Value - Volume to set"));
			MetaData->SetValue(ReturnFunction, TEXT("UnsafeDuringActorConstruction"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceSetProperty()
	{
		struct FMODBlueprintStatics_eventEventInstanceSetProperty_Parms
		{
			FFMODEventInstance EventInstance;
			TEnumAsByte<EFMODEventProperty::Type> Property;
			float Value;
		};
		UObject* Outer = Z_Construct_UClass_UFMODBlueprintStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EventInstanceSetProperty"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(FMODBlueprintStatics_eventEventInstanceSetProperty_Parms));
			UProperty* NewProp_Value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Value"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Value, FMODBlueprintStatics_eventEventInstanceSetProperty_Parms), 0x0010000000000080);
			UProperty* NewProp_Property = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Property"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(Property, FMODBlueprintStatics_eventEventInstanceSetProperty_Parms), 0x0010000000000080, Z_Construct_UEnum_FMODStudio_EFMODEventProperty());
			UProperty* NewProp_EventInstance = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EventInstance"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(EventInstance, FMODBlueprintStatics_eventEventInstanceSetProperty_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FFMODEventInstance());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD|EventInstance"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODBlueprintStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set an FMOD event property on an FMOD Event Instance.\n@param EventInstance - Event instance\n@param Property - Property to set\n@param Value - Value to set"));
			MetaData->SetValue(ReturnFunction, TEXT("UnsafeDuringActorConstruction"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceSetTransform()
	{
		struct FMODBlueprintStatics_eventEventInstanceSetTransform_Parms
		{
			FFMODEventInstance EventInstance;
			FTransform Location;
		};
		UObject* Outer = Z_Construct_UClass_UFMODBlueprintStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EventInstanceSetTransform"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04C22401, 65535, sizeof(FMODBlueprintStatics_eventEventInstanceSetTransform_Parms));
			UProperty* NewProp_Location = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Location"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Location, FMODBlueprintStatics_eventEventInstanceSetTransform_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FTransform());
			UProperty* NewProp_EventInstance = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EventInstance"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(EventInstance, FMODBlueprintStatics_eventEventInstanceSetTransform_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FFMODEventInstance());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD|EventInstance"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODBlueprintStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set transform on an FMOD Event Instance.\n@param EventInstance - Event instance\n@param Location - Location to place event"));
			MetaData->SetValue(ReturnFunction, TEXT("UnsafeDuringActorConstruction"), TEXT("true"));
			MetaData->SetValue(NewProp_Location, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceSetVolume()
	{
		struct FMODBlueprintStatics_eventEventInstanceSetVolume_Parms
		{
			FFMODEventInstance EventInstance;
			float Volume;
		};
		UObject* Outer = Z_Construct_UClass_UFMODBlueprintStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EventInstanceSetVolume"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(FMODBlueprintStatics_eventEventInstanceSetVolume_Parms));
			UProperty* NewProp_Volume = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Volume"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Volume, FMODBlueprintStatics_eventEventInstanceSetVolume_Parms), 0x0010000000000080);
			UProperty* NewProp_EventInstance = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EventInstance"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(EventInstance, FMODBlueprintStatics_eventEventInstanceSetVolume_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FFMODEventInstance());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD|EventInstance"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODBlueprintStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set volume on an FMOD Event Instance.\n@param EventInstance - Event instance\n@param Value - Volume to set"));
			MetaData->SetValue(ReturnFunction, TEXT("UnsafeDuringActorConstruction"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceStop()
	{
		struct FMODBlueprintStatics_eventEventInstanceStop_Parms
		{
			FFMODEventInstance EventInstance;
		};
		UObject* Outer = Z_Construct_UClass_UFMODBlueprintStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EventInstanceStop"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(FMODBlueprintStatics_eventEventInstanceStop_Parms));
			UProperty* NewProp_EventInstance = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EventInstance"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(EventInstance, FMODBlueprintStatics_eventEventInstanceStop_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FFMODEventInstance());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD|EventInstance"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODBlueprintStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Stops a FMOD Event Instance.\n@param EventInstance - Event instance"));
			MetaData->SetValue(ReturnFunction, TEXT("UnsafeDuringActorConstruction"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceTriggerCue()
	{
		struct FMODBlueprintStatics_eventEventInstanceTriggerCue_Parms
		{
			FFMODEventInstance EventInstance;
		};
		UObject* Outer = Z_Construct_UClass_UFMODBlueprintStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EventInstanceTriggerCue"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(FMODBlueprintStatics_eventEventInstanceTriggerCue_Parms));
			UProperty* NewProp_EventInstance = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EventInstance"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(EventInstance, FMODBlueprintStatics_eventEventInstanceTriggerCue_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FFMODEventInstance());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD|EventInstance"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODBlueprintStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Trigger a cue on an FMOD Event Instance.\n@param EventInstance - Event instance"));
			MetaData->SetValue(ReturnFunction, TEXT("UnsafeDuringActorConstruction"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_FindAssetByName()
	{
		struct FMODBlueprintStatics_eventFindAssetByName_Parms
		{
			FString Name;
			UFMODAsset* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UFMODBlueprintStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FindAssetByName"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(FMODBlueprintStatics_eventFindAssetByName_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, FMODBlueprintStatics_eventFindAssetByName_Parms), 0x0010000000000580, Z_Construct_UClass_UFMODAsset_NoRegister());
			UProperty* NewProp_Name = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Name"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Name, FMODBlueprintStatics_eventFindAssetByName_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODBlueprintStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Find an asset by name.\n@param EventName - The asset name"));
			MetaData->SetValue(NewProp_Name, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_FindEventByName()
	{
		struct FMODBlueprintStatics_eventFindEventByName_Parms
		{
			FString Name;
			UFMODEvent* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UFMODBlueprintStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FindEventByName"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(FMODBlueprintStatics_eventFindEventByName_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, FMODBlueprintStatics_eventFindEventByName_Parms), 0x0010000000000580, Z_Construct_UClass_UFMODEvent_NoRegister());
			UProperty* NewProp_Name = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Name"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Name, FMODBlueprintStatics_eventFindEventByName_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODBlueprintStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Find an event by name.\n@param EventName - The event name"));
			MetaData->SetValue(NewProp_Name, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_FindEventInstances()
	{
		struct FMODBlueprintStatics_eventFindEventInstances_Parms
		{
			UObject* WorldContextObject;
			UFMODEvent* Event;
			TArray<FFMODEventInstance> ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UFMODBlueprintStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FindEventInstances"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(FMODBlueprintStatics_eventFindEventInstances_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ReturnValue, FMODBlueprintStatics_eventFindEventInstances_Parms), 0x0010000000000580);
			UProperty* NewProp_ReturnValue_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ReturnValue, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FFMODEventInstance());
			UProperty* NewProp_Event = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Event"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Event, FMODBlueprintStatics_eventFindEventInstances_Parms), 0x0010000000000080, Z_Construct_UClass_UFMODEvent_NoRegister());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, FMODBlueprintStatics_eventFindEventInstances_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD"));
			MetaData->SetValue(ReturnFunction, TEXT("DefaultToSelf"), TEXT("WorldContextObject"));
			MetaData->SetValue(ReturnFunction, TEXT("HidePin"), TEXT("WorldContextObject"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODBlueprintStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Return a list of all event instances that are playing for this event.\n              Be careful using this function because it is possible to find and alter any playing sound, even ones owned by other audio components.\n@param Event - event to find instances from."));
			MetaData->SetValue(ReturnFunction, TEXT("UnsafeDuringActorConstruction"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_GetOutputDrivers()
	{
		struct FMODBlueprintStatics_eventGetOutputDrivers_Parms
		{
			TArray<FString> ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UFMODBlueprintStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetOutputDrivers"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(FMODBlueprintStatics_eventGetOutputDrivers_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ReturnValue, FMODBlueprintStatics_eventGetOutputDrivers_Parms), 0x0010000000000580);
			UProperty* NewProp_ReturnValue_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ReturnValue, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODBlueprintStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("List all output device names."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_IsBankLoaded()
	{
		struct FMODBlueprintStatics_eventIsBankLoaded_Parms
		{
			UFMODBank* Bank;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UFMODBlueprintStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsBankLoaded"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(FMODBlueprintStatics_eventIsBankLoaded_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, FMODBlueprintStatics_eventIsBankLoaded_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, FMODBlueprintStatics_eventIsBankLoaded_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, FMODBlueprintStatics_eventIsBankLoaded_Parms), sizeof(bool), true);
			UProperty* NewProp_Bank = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Bank"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Bank, FMODBlueprintStatics_eventIsBankLoaded_Parms), 0x0010000000000080, Z_Construct_UClass_UFMODBank_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODBlueprintStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns true if a bank is loaded.\n@param Bank - bank to query"));
			MetaData->SetValue(ReturnFunction, TEXT("UnsafeDuringActorConstruction"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_LoadBank()
	{
		struct FMODBlueprintStatics_eventLoadBank_Parms
		{
			UFMODBank* Bank;
			bool bBlocking;
			bool bLoadSampleData;
		};
		UObject* Outer = Z_Construct_UClass_UFMODBlueprintStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LoadBank"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(FMODBlueprintStatics_eventLoadBank_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bLoadSampleData, FMODBlueprintStatics_eventLoadBank_Parms);
			UProperty* NewProp_bLoadSampleData = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bLoadSampleData"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bLoadSampleData, FMODBlueprintStatics_eventLoadBank_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bLoadSampleData, FMODBlueprintStatics_eventLoadBank_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bBlocking, FMODBlueprintStatics_eventLoadBank_Parms);
			UProperty* NewProp_bBlocking = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bBlocking"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bBlocking, FMODBlueprintStatics_eventLoadBank_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bBlocking, FMODBlueprintStatics_eventLoadBank_Parms), sizeof(bool), true);
			UProperty* NewProp_Bank = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Bank"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Bank, FMODBlueprintStatics_eventLoadBank_Parms), 0x0010000000000080, Z_Construct_UClass_UFMODBank_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODBlueprintStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Loads a bank.\n@param Bank - bank to load\n@param bBlocking - determines whether the bank will load synchronously\n@param bLoadSampleData - determines whether sample data will be preloaded immediately"));
			MetaData->SetValue(ReturnFunction, TEXT("UnsafeDuringActorConstruction"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_LoadBankSampleData()
	{
		struct FMODBlueprintStatics_eventLoadBankSampleData_Parms
		{
			UFMODBank* Bank;
		};
		UObject* Outer = Z_Construct_UClass_UFMODBlueprintStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LoadBankSampleData"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(FMODBlueprintStatics_eventLoadBankSampleData_Parms));
			UProperty* NewProp_Bank = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Bank"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Bank, FMODBlueprintStatics_eventLoadBankSampleData_Parms), 0x0010000000000080, Z_Construct_UClass_UFMODBank_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODBlueprintStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Load bank sample data.\n@param Bank - bank to load sample data from"));
			MetaData->SetValue(ReturnFunction, TEXT("UnsafeDuringActorConstruction"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_LoadEventSampleData()
	{
		struct FMODBlueprintStatics_eventLoadEventSampleData_Parms
		{
			UObject* WorldContextObject;
			UFMODEvent* Event;
		};
		UObject* Outer = Z_Construct_UClass_UFMODBlueprintStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LoadEventSampleData"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(FMODBlueprintStatics_eventLoadEventSampleData_Parms));
			UProperty* NewProp_Event = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Event"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Event, FMODBlueprintStatics_eventLoadEventSampleData_Parms), 0x0010000000000080, Z_Construct_UClass_UFMODEvent_NoRegister());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, FMODBlueprintStatics_eventLoadEventSampleData_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD"));
			MetaData->SetValue(ReturnFunction, TEXT("DefaultToSelf"), TEXT("WorldContextObject"));
			MetaData->SetValue(ReturnFunction, TEXT("HidePin"), TEXT("WorldContextObject"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODBlueprintStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Load event sample data.  This can be done ahead of time to avoid loading stalls.\n@param Event - event to load sample data from."));
			MetaData->SetValue(ReturnFunction, TEXT("UnsafeDuringActorConstruction"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_MixerResume()
	{
		UObject* Outer = Z_Construct_UClass_UFMODBlueprintStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MixerResume"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODBlueprintStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Resume the FMOD mixer.  Used when resuming the application."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_MixerSuspend()
	{
		UObject* Outer = Z_Construct_UClass_UFMODBlueprintStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MixerSuspend"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODBlueprintStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Suspend the FMOD mixer.  Used when suspending the application."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_PlayEvent2D()
	{
		struct FMODBlueprintStatics_eventPlayEvent2D_Parms
		{
			UObject* WorldContextObject;
			UFMODEvent* Event;
			bool bAutoPlay;
			FFMODEventInstance ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UFMODBlueprintStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PlayEvent2D"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(FMODBlueprintStatics_eventPlayEvent2D_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, FMODBlueprintStatics_eventPlayEvent2D_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FFMODEventInstance());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bAutoPlay, FMODBlueprintStatics_eventPlayEvent2D_Parms);
			UProperty* NewProp_bAutoPlay = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bAutoPlay"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bAutoPlay, FMODBlueprintStatics_eventPlayEvent2D_Parms), 0x0010040000000080, CPP_BOOL_PROPERTY_BITMASK(bAutoPlay, FMODBlueprintStatics_eventPlayEvent2D_Parms), sizeof(bool), true);
			UProperty* NewProp_Event = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Event"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Event, FMODBlueprintStatics_eventPlayEvent2D_Parms), 0x0010000000000080, Z_Construct_UClass_UFMODEvent_NoRegister());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, FMODBlueprintStatics_eventPlayEvent2D_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("AdvancedDisplay"), TEXT("2"));
			MetaData->SetValue(ReturnFunction, TEXT("bAutoPlay"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD"));
			MetaData->SetValue(ReturnFunction, TEXT("DefaultToSelf"), TEXT("WorldContextObject"));
			MetaData->SetValue(ReturnFunction, TEXT("HidePin"), TEXT("WorldContextObject"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODBlueprintStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Plays an event.  This returns an FMOD Event Instance.  The sound does not travel with any actor.\n@param Event - event to play\n@param bAutoPlay - Start the event automatically."));
			MetaData->SetValue(ReturnFunction, TEXT("UnsafeDuringActorConstruction"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_PlayEventAtLocation()
	{
		struct FMODBlueprintStatics_eventPlayEventAtLocation_Parms
		{
			UObject* WorldContextObject;
			UFMODEvent* Event;
			FTransform Location;
			bool bAutoPlay;
			FFMODEventInstance ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UFMODBlueprintStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PlayEventAtLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04C22401, 65535, sizeof(FMODBlueprintStatics_eventPlayEventAtLocation_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, FMODBlueprintStatics_eventPlayEventAtLocation_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FFMODEventInstance());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bAutoPlay, FMODBlueprintStatics_eventPlayEventAtLocation_Parms);
			UProperty* NewProp_bAutoPlay = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bAutoPlay"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bAutoPlay, FMODBlueprintStatics_eventPlayEventAtLocation_Parms), 0x0010040000000080, CPP_BOOL_PROPERTY_BITMASK(bAutoPlay, FMODBlueprintStatics_eventPlayEventAtLocation_Parms), sizeof(bool), true);
			UProperty* NewProp_Location = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Location"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Location, FMODBlueprintStatics_eventPlayEventAtLocation_Parms), 0x0010040008000182, Z_Construct_UScriptStruct_FTransform());
			UProperty* NewProp_Event = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Event"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Event, FMODBlueprintStatics_eventPlayEventAtLocation_Parms), 0x0010000000000080, Z_Construct_UClass_UFMODEvent_NoRegister());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, FMODBlueprintStatics_eventPlayEventAtLocation_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("AdvancedDisplay"), TEXT("2"));
			MetaData->SetValue(ReturnFunction, TEXT("bAutoPlay"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD"));
			MetaData->SetValue(ReturnFunction, TEXT("DefaultToSelf"), TEXT("WorldContextObject"));
			MetaData->SetValue(ReturnFunction, TEXT("HidePin"), TEXT("WorldContextObject"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODBlueprintStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Plays an event at the given location. This returns an FMOD Event Instance.  The sound does not travel with any actor.\n@param Event - event to play\n@param Location - World position to play event at\n@param bAutoPlay - Start the event automatically."));
			MetaData->SetValue(ReturnFunction, TEXT("UnsafeDuringActorConstruction"), TEXT("true"));
			MetaData->SetValue(NewProp_Location, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_PlayEventAttached()
	{
		struct FMODBlueprintStatics_eventPlayEventAttached_Parms
		{
			UFMODEvent* Event;
			USceneComponent* AttachToComponent;
			FName AttachPointName;
			FVector Location;
			TEnumAsByte<EAttachLocation::Type> LocationType;
			bool bStopWhenAttachedToDestroyed;
			bool bAutoPlay;
			UFMODAudioComponent* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UFMODBlueprintStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PlayEventAttached"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04822401, 65535, sizeof(FMODBlueprintStatics_eventPlayEventAttached_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, FMODBlueprintStatics_eventPlayEventAttached_Parms), 0x0010000000080588, Z_Construct_UClass_UFMODAudioComponent_NoRegister());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bAutoPlay, FMODBlueprintStatics_eventPlayEventAttached_Parms);
			UProperty* NewProp_bAutoPlay = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bAutoPlay"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bAutoPlay, FMODBlueprintStatics_eventPlayEventAttached_Parms), 0x0010040000000080, CPP_BOOL_PROPERTY_BITMASK(bAutoPlay, FMODBlueprintStatics_eventPlayEventAttached_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bStopWhenAttachedToDestroyed, FMODBlueprintStatics_eventPlayEventAttached_Parms);
			UProperty* NewProp_bStopWhenAttachedToDestroyed = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bStopWhenAttachedToDestroyed"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bStopWhenAttachedToDestroyed, FMODBlueprintStatics_eventPlayEventAttached_Parms), 0x0010040000000080, CPP_BOOL_PROPERTY_BITMASK(bStopWhenAttachedToDestroyed, FMODBlueprintStatics_eventPlayEventAttached_Parms), sizeof(bool), true);
			UProperty* NewProp_LocationType = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LocationType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(LocationType, FMODBlueprintStatics_eventPlayEventAttached_Parms), 0x0010040000000080, Z_Construct_UEnum_Engine_EAttachLocation());
			UProperty* NewProp_Location = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Location"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Location, FMODBlueprintStatics_eventPlayEventAttached_Parms), 0x0010040000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_AttachPointName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AttachPointName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(AttachPointName, FMODBlueprintStatics_eventPlayEventAttached_Parms), 0x0010040000000080);
			UProperty* NewProp_AttachToComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AttachToComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AttachToComponent, FMODBlueprintStatics_eventPlayEventAttached_Parms), 0x0010000000080080, Z_Construct_UClass_USceneComponent_NoRegister());
			UProperty* NewProp_Event = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Event"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Event, FMODBlueprintStatics_eventPlayEventAttached_Parms), 0x0010000000000080, Z_Construct_UClass_UFMODEvent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("AdvancedDisplay"), TEXT("2"));
			MetaData->SetValue(ReturnFunction, TEXT("bAutoPlay"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODBlueprintStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Plays an event attached to and following the specified component.\n@param Event - event to play\n@param AttachComponent - Component to attach to.\n@param AttachPointName - Optional named point within the AttachComponent to play the sound at\n@param Location - Depending on the value of Location Type this is either a relative offset from the attach component/point or an absolute world position that will be translated to a relative offset\n@param LocationType - Specifies whether Location is a relative offset or an absolute world position\n@param bStopWhenAttachedToDestroyed - Specifies whether the sound should stop playing when the owner of the attach to component is destroyed.\n@param bAutoPlay - Start the event automatically."));
			MetaData->SetValue(ReturnFunction, TEXT("UnsafeDuringActorConstruction"), TEXT("true"));
			MetaData->SetValue(NewProp_ReturnValue, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_AttachToComponent, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_SetOutputDriverByIndex()
	{
		struct FMODBlueprintStatics_eventSetOutputDriverByIndex_Parms
		{
			int32 NewDriverIndex;
		};
		UObject* Outer = Z_Construct_UClass_UFMODBlueprintStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetOutputDriverByIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(FMODBlueprintStatics_eventSetOutputDriverByIndex_Parms));
			UProperty* NewProp_NewDriverIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewDriverIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(NewDriverIndex, FMODBlueprintStatics_eventSetOutputDriverByIndex_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODBlueprintStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set current output device by its index from GetOutputDrivers."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_SetOutputDriverByName()
	{
		struct FMODBlueprintStatics_eventSetOutputDriverByName_Parms
		{
			FString NewDriverName;
		};
		UObject* Outer = Z_Construct_UClass_UFMODBlueprintStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetOutputDriverByName"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(FMODBlueprintStatics_eventSetOutputDriverByName_Parms));
			UProperty* NewProp_NewDriverName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewDriverName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(NewDriverName, FMODBlueprintStatics_eventSetOutputDriverByName_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODBlueprintStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set current output device by name or part of the name."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_UnloadBank()
	{
		struct FMODBlueprintStatics_eventUnloadBank_Parms
		{
			UFMODBank* Bank;
		};
		UObject* Outer = Z_Construct_UClass_UFMODBlueprintStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UnloadBank"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(FMODBlueprintStatics_eventUnloadBank_Parms));
			UProperty* NewProp_Bank = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Bank"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Bank, FMODBlueprintStatics_eventUnloadBank_Parms), 0x0010000000000080, Z_Construct_UClass_UFMODBank_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODBlueprintStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Unloads a bank.\n@param Bank - bank to unload"));
			MetaData->SetValue(ReturnFunction, TEXT("UnsafeDuringActorConstruction"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_UnloadBankSampleData()
	{
		struct FMODBlueprintStatics_eventUnloadBankSampleData_Parms
		{
			UFMODBank* Bank;
		};
		UObject* Outer = Z_Construct_UClass_UFMODBlueprintStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UnloadBankSampleData"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(FMODBlueprintStatics_eventUnloadBankSampleData_Parms));
			UProperty* NewProp_Bank = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Bank"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Bank, FMODBlueprintStatics_eventUnloadBankSampleData_Parms), 0x0010000000000080, Z_Construct_UClass_UFMODBank_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODBlueprintStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Unload bank sample data.\n@param Bank - bank to unload sample data from"));
			MetaData->SetValue(ReturnFunction, TEXT("UnsafeDuringActorConstruction"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_UnloadEventSampleData()
	{
		struct FMODBlueprintStatics_eventUnloadEventSampleData_Parms
		{
			UObject* WorldContextObject;
			UFMODEvent* Event;
		};
		UObject* Outer = Z_Construct_UClass_UFMODBlueprintStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UnloadEventSampleData"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(FMODBlueprintStatics_eventUnloadEventSampleData_Parms));
			UProperty* NewProp_Event = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Event"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Event, FMODBlueprintStatics_eventUnloadEventSampleData_Parms), 0x0010000000000080, Z_Construct_UClass_UFMODEvent_NoRegister());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, FMODBlueprintStatics_eventUnloadEventSampleData_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD"));
			MetaData->SetValue(ReturnFunction, TEXT("DefaultToSelf"), TEXT("WorldContextObject"));
			MetaData->SetValue(ReturnFunction, TEXT("HidePin"), TEXT("WorldContextObject"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODBlueprintStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Unload event sample data.\n@param Event - event to load sample data from."));
			MetaData->SetValue(ReturnFunction, TEXT("UnsafeDuringActorConstruction"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_VCASetVolume()
	{
		struct FMODBlueprintStatics_eventVCASetVolume_Parms
		{
			UFMODVCA* Vca;
			float Volume;
		};
		UObject* Outer = Z_Construct_UClass_UFMODBlueprintStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("VCASetVolume"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(FMODBlueprintStatics_eventVCASetVolume_Parms));
			UProperty* NewProp_Volume = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Volume"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Volume, FMODBlueprintStatics_eventVCASetVolume_Parms), 0x0010000000000080);
			UProperty* NewProp_Vca = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Vca"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Vca, FMODBlueprintStatics_eventVCASetVolume_Parms), 0x0010000000000080, Z_Construct_UClass_UFMODVCA_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD|VCA"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODBlueprintStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set volume on a VCA\n@param Vca - VCA to use\n@param Volume - volume"));
			MetaData->SetValue(ReturnFunction, TEXT("UnsafeDuringActorConstruction"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFMODBlueprintStatics_NoRegister()
	{
		return UFMODBlueprintStatics::StaticClass();
	}
	UClass* Z_Construct_UClass_UFMODBlueprintStatics()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_FMODStudio();
			OuterClass = UFMODBlueprintStatics::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UFMODBlueprintStatics_BusSetMute());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODBlueprintStatics_BusSetPaused());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODBlueprintStatics_BusSetVolume());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceGetParameter());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceIsValid());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODBlueprintStatics_EventInstancePlay());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceSetParameter());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceSetPaused());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceSetPitch());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceSetProperty());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceSetTransform());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceSetVolume());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceStop());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceTriggerCue());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODBlueprintStatics_FindAssetByName());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODBlueprintStatics_FindEventByName());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODBlueprintStatics_FindEventInstances());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODBlueprintStatics_GetOutputDrivers());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODBlueprintStatics_IsBankLoaded());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODBlueprintStatics_LoadBank());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODBlueprintStatics_LoadBankSampleData());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODBlueprintStatics_LoadEventSampleData());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODBlueprintStatics_MixerResume());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODBlueprintStatics_MixerSuspend());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODBlueprintStatics_PlayEvent2D());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODBlueprintStatics_PlayEventAtLocation());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODBlueprintStatics_PlayEventAttached());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODBlueprintStatics_SetOutputDriverByIndex());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODBlueprintStatics_SetOutputDriverByName());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODBlueprintStatics_UnloadBank());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODBlueprintStatics_UnloadBankSampleData());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODBlueprintStatics_UnloadEventSampleData());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODBlueprintStatics_VCASetVolume());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODBlueprintStatics_BusSetMute(), "BusSetMute"); // 3838283312
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODBlueprintStatics_BusSetPaused(), "BusSetPaused"); // 2843857074
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODBlueprintStatics_BusSetVolume(), "BusSetVolume"); // 3936189987
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceGetParameter(), "EventInstanceGetParameter"); // 4211356777
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceIsValid(), "EventInstanceIsValid"); // 3967590524
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODBlueprintStatics_EventInstancePlay(), "EventInstancePlay"); // 3566304586
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceSetParameter(), "EventInstanceSetParameter"); // 328843769
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceSetPaused(), "EventInstanceSetPaused"); // 751055896
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceSetPitch(), "EventInstanceSetPitch"); // 223405942
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceSetProperty(), "EventInstanceSetProperty"); // 3415076700
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceSetTransform(), "EventInstanceSetTransform"); // 3162785469
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceSetVolume(), "EventInstanceSetVolume"); // 46381108
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceStop(), "EventInstanceStop"); // 948753194
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceTriggerCue(), "EventInstanceTriggerCue"); // 3262478982
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODBlueprintStatics_FindAssetByName(), "FindAssetByName"); // 4268739974
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODBlueprintStatics_FindEventByName(), "FindEventByName"); // 3842335838
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODBlueprintStatics_FindEventInstances(), "FindEventInstances"); // 305490168
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODBlueprintStatics_GetOutputDrivers(), "GetOutputDrivers"); // 92644910
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODBlueprintStatics_IsBankLoaded(), "IsBankLoaded"); // 375218212
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODBlueprintStatics_LoadBank(), "LoadBank"); // 816732733
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODBlueprintStatics_LoadBankSampleData(), "LoadBankSampleData"); // 1492621598
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODBlueprintStatics_LoadEventSampleData(), "LoadEventSampleData"); // 1608249290
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODBlueprintStatics_MixerResume(), "MixerResume"); // 475974056
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODBlueprintStatics_MixerSuspend(), "MixerSuspend"); // 1449026711
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODBlueprintStatics_PlayEvent2D(), "PlayEvent2D"); // 3300512390
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODBlueprintStatics_PlayEventAtLocation(), "PlayEventAtLocation"); // 2935882999
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODBlueprintStatics_PlayEventAttached(), "PlayEventAttached"); // 730867401
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODBlueprintStatics_SetOutputDriverByIndex(), "SetOutputDriverByIndex"); // 2921824363
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODBlueprintStatics_SetOutputDriverByName(), "SetOutputDriverByName"); // 2674437037
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODBlueprintStatics_UnloadBank(), "UnloadBank"); // 1937429343
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODBlueprintStatics_UnloadBankSampleData(), "UnloadBankSampleData"); // 3521904844
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODBlueprintStatics_UnloadEventSampleData(), "UnloadEventSampleData"); // 3876066946
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODBlueprintStatics_VCASetVolume(), "VCASetVolume"); // 696271821
				static TCppClassTypeInfo<TCppClassTypeTraits<UFMODBlueprintStatics> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FMODBlueprintStatics.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/FMODBlueprintStatics.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFMODBlueprintStatics, 19922557);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFMODBlueprintStatics(Z_Construct_UClass_UFMODBlueprintStatics, &UFMODBlueprintStatics::StaticClass, TEXT("/Script/FMODStudio"), TEXT("UFMODBlueprintStatics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODBlueprintStatics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
