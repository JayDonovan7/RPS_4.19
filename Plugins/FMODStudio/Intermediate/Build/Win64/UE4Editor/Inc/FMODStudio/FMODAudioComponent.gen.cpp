// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/FMODStudioPrivatePCH.h"
#include "Classes/FMODAudioComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODAudioComponent() {}
// Cross Module References
	FMODSTUDIO_API UFunction* Z_Construct_UDelegateFunction_FMODStudio_OnTimelineBeat__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
	FMODSTUDIO_API UFunction* Z_Construct_UDelegateFunction_FMODStudio_OnTimelineMarker__DelegateSignature();
	FMODSTUDIO_API UFunction* Z_Construct_UDelegateFunction_FMODStudio_OnEventStopped__DelegateSignature();
	FMODSTUDIO_API UEnum* Z_Construct_UEnum_FMODStudio_EFMODEventProperty();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_GetLength();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAudioComponent();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_GetParameter();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_GetTimelinePosition();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_IsPlaying();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_Play();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_Release();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetEvent();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEvent_NoRegister();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetParameter();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetPaused();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetPitch();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetProgrammerSoundName();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetProperty();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetTimelinePosition();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetVolume();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_Stop();
	FMODSTUDIO_API UFunction* Z_Construct_UFunction_UFMODAudioComponent_TriggerCue();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundAttenuationSettings();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_FMODStudio_OnTimelineBeat__DelegateSignature()
	{
		struct _Script_FMODStudio_eventOnTimelineBeat_Parms
		{
			int32 Bar;
			int32 Beat;
			int32 Position;
			float Tempo;
			int32 TimeSignatureUpper;
			int32 TimeSignatureLower;
		};
		UObject* Outer = Z_Construct_UPackage__Script_FMODStudio();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnTimelineBeat__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(_Script_FMODStudio_eventOnTimelineBeat_Parms));
			UProperty* NewProp_TimeSignatureLower = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TimeSignatureLower"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(TimeSignatureLower, _Script_FMODStudio_eventOnTimelineBeat_Parms), 0x0010000000000080);
			UProperty* NewProp_TimeSignatureUpper = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TimeSignatureUpper"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(TimeSignatureUpper, _Script_FMODStudio_eventOnTimelineBeat_Parms), 0x0010000000000080);
			UProperty* NewProp_Tempo = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Tempo"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Tempo, _Script_FMODStudio_eventOnTimelineBeat_Parms), 0x0010000000000080);
			UProperty* NewProp_Position = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Position"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Position, _Script_FMODStudio_eventOnTimelineBeat_Parms), 0x0010000000000080);
			UProperty* NewProp_Beat = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Beat"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Beat, _Script_FMODStudio_eventOnTimelineBeat_Parms), 0x0010000000000080);
			UProperty* NewProp_Bar = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Bar"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Bar, _Script_FMODStudio_eventOnTimelineBeat_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODAudioComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("called when we reach a beat on the timeline"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_FMODStudio_OnTimelineMarker__DelegateSignature()
	{
		struct _Script_FMODStudio_eventOnTimelineMarker_Parms
		{
			FString Name;
			int32 Position;
		};
		UObject* Outer = Z_Construct_UPackage__Script_FMODStudio();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnTimelineMarker__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(_Script_FMODStudio_eventOnTimelineMarker_Parms));
			UProperty* NewProp_Position = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Position"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Position, _Script_FMODStudio_eventOnTimelineMarker_Parms), 0x0010000000000080);
			UProperty* NewProp_Name = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Name"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Name, _Script_FMODStudio_eventOnTimelineMarker_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODAudioComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("called when we reach a named marker on the timeline"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_FMODStudio_OnEventStopped__DelegateSignature()
	{
		UObject* Outer = Z_Construct_UPackage__Script_FMODStudio();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnEventStopped__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODAudioComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("called when an event stops, either because it played to completion or because a Stop() call turned it off early"));
#endif
		}
		return ReturnFunction;
	}
static UEnum* EFMODEventProperty_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_FMODStudio_EFMODEventProperty, Z_Construct_UPackage__Script_FMODStudio(), TEXT("EFMODEventProperty"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFMODEventProperty(EFMODEventProperty_StaticEnum, TEXT("/Script/FMODStudio"), TEXT("EFMODEventProperty"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_FMODStudio_EFMODEventProperty()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudio();
		extern uint32 Get_Z_Construct_UEnum_FMODStudio_EFMODEventProperty_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFMODEventProperty"), 0, Get_Z_Construct_UEnum_FMODStudio_EFMODEventProperty_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EFMODEventProperty"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EFMODEventProperty::ChannelPriority"), 0);
			EnumNames.Emplace(TEXT("EFMODEventProperty::ScheduleDelay"), 1);
			EnumNames.Emplace(TEXT("EFMODEventProperty::ScheduleLookahead"), 2);
			EnumNames.Emplace(TEXT("EFMODEventProperty::MinimumDistance"), 3);
			EnumNames.Emplace(TEXT("EFMODEventProperty::MaximumDistance"), 4);
			EnumNames.Emplace(TEXT("EFMODEventProperty::Count"), 5);
			EnumNames.Emplace(TEXT("EFMODEventProperty::EFMODEventProperty_MAX"), 6);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Namespaced);
			ReturnEnum->CppType = TEXT("EFMODEventProperty::Type");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("ChannelPriority.ToolTip"), TEXT("Priority to set on low-level channels created by this event instance (-1 to 256)."));
			MetaData->SetValue(ReturnEnum, TEXT("Count.ToolTip"), TEXT("Number of options"));
			MetaData->SetValue(ReturnEnum, TEXT("MaximumDistance.ToolTip"), TEXT("Override the event's 3D maximum distance, or -1 for default."));
			MetaData->SetValue(ReturnEnum, TEXT("MinimumDistance.ToolTip"), TEXT("Override the event's 3D minimum distance, or -1 for default."));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Classes/FMODAudioComponent.h"));
			MetaData->SetValue(ReturnEnum, TEXT("ScheduleDelay.ToolTip"), TEXT("Schedule delay to synchronized playback for multiple tracks in DSP clocks, or -1 for default."));
			MetaData->SetValue(ReturnEnum, TEXT("ScheduleLookahead.ToolTip"), TEXT("Schedule look-ahead on the timeline in DSP clocks, or -1 for default."));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("Event property"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_FMODStudio_EFMODEventProperty_CRC() { return 3500730701U; }
	void UFMODAudioComponent::StaticRegisterNativesUFMODAudioComponent()
	{
		UClass* Class = UFMODAudioComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetLength", (Native)&UFMODAudioComponent::execGetLength },
			{ "GetParameter", (Native)&UFMODAudioComponent::execGetParameter },
			{ "GetTimelinePosition", (Native)&UFMODAudioComponent::execGetTimelinePosition },
			{ "IsPlaying", (Native)&UFMODAudioComponent::execIsPlaying },
			{ "Play", (Native)&UFMODAudioComponent::execPlay },
			{ "Release", (Native)&UFMODAudioComponent::execRelease },
			{ "SetEvent", (Native)&UFMODAudioComponent::execSetEvent },
			{ "SetParameter", (Native)&UFMODAudioComponent::execSetParameter },
			{ "SetPaused", (Native)&UFMODAudioComponent::execSetPaused },
			{ "SetPitch", (Native)&UFMODAudioComponent::execSetPitch },
			{ "SetProgrammerSoundName", (Native)&UFMODAudioComponent::execSetProgrammerSoundName },
			{ "SetProperty", (Native)&UFMODAudioComponent::execSetProperty },
			{ "SetTimelinePosition", (Native)&UFMODAudioComponent::execSetTimelinePosition },
			{ "SetVolume", (Native)&UFMODAudioComponent::execSetVolume },
			{ "Stop", (Native)&UFMODAudioComponent::execStop },
			{ "TriggerCue", (Native)&UFMODAudioComponent::execTriggerCue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_GetLength()
	{
		struct FMODAudioComponent_eventGetLength_Parms
		{
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UFMODAudioComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetLength"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(FMODAudioComponent_eventGetLength_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, FMODAudioComponent_eventGetLength_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD|Components"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODAudioComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get the event length in milliseconds"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_GetParameter()
	{
		struct FMODAudioComponent_eventGetParameter_Parms
		{
			FName Name;
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UFMODAudioComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetParameter"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(FMODAudioComponent_eventGetParameter_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, FMODAudioComponent_eventGetParameter_Parms), 0x0010000000000580);
			UProperty* NewProp_Name = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Name"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(Name, FMODAudioComponent_eventGetParameter_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD|Components"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODAudioComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get parameter value from the event"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_GetTimelinePosition()
	{
		struct FMODAudioComponent_eventGetTimelinePosition_Parms
		{
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UFMODAudioComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetTimelinePosition"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(FMODAudioComponent_eventGetTimelinePosition_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, FMODAudioComponent_eventGetTimelinePosition_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD|Components"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODAudioComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get the timeline position in milliseconds"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_IsPlaying()
	{
		struct FMODAudioComponent_eventIsPlaying_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UFMODAudioComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsPlaying"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(FMODAudioComponent_eventIsPlaying_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, FMODAudioComponent_eventIsPlaying_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, FMODAudioComponent_eventIsPlaying_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, FMODAudioComponent_eventIsPlaying_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD|Components"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODAudioComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("@return true if this component is currently playing an event"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_Play()
	{
		UObject* Outer = Z_Construct_UClass_UFMODAudioComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Play"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD|Components"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODAudioComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Start a sound playing on an audio component"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_Release()
	{
		UObject* Outer = Z_Construct_UClass_UFMODAudioComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Release"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD|Components"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODAudioComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetEvent()
	{
		struct FMODAudioComponent_eventSetEvent_Parms
		{
			UFMODEvent* NewEvent;
		};
		UObject* Outer = Z_Construct_UClass_UFMODAudioComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetEvent"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(FMODAudioComponent_eventSetEvent_Parms));
			UProperty* NewProp_NewEvent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewEvent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(NewEvent, FMODAudioComponent_eventSetEvent_Parms), 0x0010000000000080, Z_Construct_UClass_UFMODEvent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD|Components"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODAudioComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetParameter()
	{
		struct FMODAudioComponent_eventSetParameter_Parms
		{
			FName Name;
			float Value;
		};
		UObject* Outer = Z_Construct_UClass_UFMODAudioComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetParameter"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(FMODAudioComponent_eventSetParameter_Parms));
			UProperty* NewProp_Value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Value"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Value, FMODAudioComponent_eventSetParameter_Parms), 0x0010000000000080);
			UProperty* NewProp_Name = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Name"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(Name, FMODAudioComponent_eventSetParameter_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD|Components"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODAudioComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set a parameter into the event"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetPaused()
	{
		struct FMODAudioComponent_eventSetPaused_Parms
		{
			bool paused;
		};
		UObject* Outer = Z_Construct_UClass_UFMODAudioComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetPaused"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(FMODAudioComponent_eventSetPaused_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(paused, FMODAudioComponent_eventSetPaused_Parms);
			UProperty* NewProp_paused = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("paused"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(paused, FMODAudioComponent_eventSetPaused_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(paused, FMODAudioComponent_eventSetPaused_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD|Components"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODAudioComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Pause/Unpause an audio component"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetPitch()
	{
		struct FMODAudioComponent_eventSetPitch_Parms
		{
			float pitch;
		};
		UObject* Outer = Z_Construct_UClass_UFMODAudioComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetPitch"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(FMODAudioComponent_eventSetPitch_Parms));
			UProperty* NewProp_pitch = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("pitch"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(pitch, FMODAudioComponent_eventSetPitch_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD|Components"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODAudioComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set pitch on an audio component"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetProgrammerSoundName()
	{
		struct FMODAudioComponent_eventSetProgrammerSoundName_Parms
		{
			FString Value;
		};
		UObject* Outer = Z_Construct_UClass_UFMODAudioComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetProgrammerSoundName"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(FMODAudioComponent_eventSetProgrammerSoundName_Parms));
			UProperty* NewProp_Value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Value"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Value, FMODAudioComponent_eventSetProgrammerSoundName_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD|Components"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODAudioComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set the sound name to use for programmer sound.  Will look up the name in any loaded audio table."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetProperty()
	{
		struct FMODAudioComponent_eventSetProperty_Parms
		{
			TEnumAsByte<EFMODEventProperty::Type> Property;
			float Value;
		};
		UObject* Outer = Z_Construct_UClass_UFMODAudioComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetProperty"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(FMODAudioComponent_eventSetProperty_Parms));
			UProperty* NewProp_Value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Value"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Value, FMODAudioComponent_eventSetProperty_Parms), 0x0010000000000080);
			UProperty* NewProp_Property = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Property"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(Property, FMODAudioComponent_eventSetProperty_Parms), 0x0010000000000080, Z_Construct_UEnum_FMODStudio_EFMODEventProperty());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD|Components"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODAudioComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set a parameter into the event"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetTimelinePosition()
	{
		struct FMODAudioComponent_eventSetTimelinePosition_Parms
		{
			int32 Time;
		};
		UObject* Outer = Z_Construct_UClass_UFMODAudioComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetTimelinePosition"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(FMODAudioComponent_eventSetTimelinePosition_Parms));
			UProperty* NewProp_Time = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Time"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Time, FMODAudioComponent_eventSetTimelinePosition_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD|Components"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODAudioComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set the timeline position in milliseconds"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetVolume()
	{
		struct FMODAudioComponent_eventSetVolume_Parms
		{
			float volume;
		};
		UObject* Outer = Z_Construct_UClass_UFMODAudioComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetVolume"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(FMODAudioComponent_eventSetVolume_Parms));
			UProperty* NewProp_volume = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("volume"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(volume, FMODAudioComponent_eventSetVolume_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD|Components"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODAudioComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set volume on an audio component"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_Stop()
	{
		UObject* Outer = Z_Construct_UClass_UFMODAudioComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Stop"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD|Components"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODAudioComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Stop an audio component playing its sound cue, issue any delegates if needed"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_TriggerCue()
	{
		UObject* Outer = Z_Construct_UClass_UFMODAudioComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("TriggerCue"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD|Components"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODAudioComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Trigger a cue in an event"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFMODAudioComponent_NoRegister()
	{
		return UFMODAudioComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UFMODAudioComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USceneComponent();
			Z_Construct_UPackage__Script_FMODStudio();
			OuterClass = UFMODAudioComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UFMODAudioComponent_GetLength());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODAudioComponent_GetParameter());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODAudioComponent_GetTimelinePosition());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODAudioComponent_IsPlaying());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODAudioComponent_Play());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODAudioComponent_Release());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODAudioComponent_SetEvent());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODAudioComponent_SetParameter());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODAudioComponent_SetPaused());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODAudioComponent_SetPitch());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODAudioComponent_SetProgrammerSoundName());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODAudioComponent_SetProperty());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODAudioComponent_SetTimelinePosition());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODAudioComponent_SetVolume());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODAudioComponent_Stop());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODAudioComponent_TriggerCue());

				UProperty* NewProp_AttenuationOverrides = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AttenuationOverrides"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(AttenuationOverrides, UFMODAudioComponent), 0x0010000000000005, Z_Construct_UScriptStruct_FSoundAttenuationSettings());
				UProperty* NewProp_AttenuationSettings = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AttenuationSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AttenuationSettings, UFMODAudioComponent), 0x0010000000000005, Z_Construct_UClass_USoundAttenuation_NoRegister());
				UProperty* NewProp_ProgrammerSoundName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ProgrammerSoundName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ProgrammerSoundName, UFMODAudioComponent), 0x0010000000000005);
				UProperty* NewProp_OnTimelineBeat = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnTimelineBeat"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnTimelineBeat, UFMODAudioComponent), 0x0010000010080000, Z_Construct_UDelegateFunction_FMODStudio_OnTimelineBeat__DelegateSignature());
				UProperty* NewProp_OnTimelineMarker = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnTimelineMarker"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnTimelineMarker, UFMODAudioComponent), 0x0010000010080000, Z_Construct_UDelegateFunction_FMODStudio_OnTimelineMarker__DelegateSignature());
				UProperty* NewProp_OnEventStopped = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnEventStopped"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnEventStopped, UFMODAudioComponent), 0x0010000010080000, Z_Construct_UDelegateFunction_FMODStudio_OnEventStopped__DelegateSignature());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bOverrideAttenuation, UFMODAudioComponent);
				UProperty* NewProp_bOverrideAttenuation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bOverrideAttenuation"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bOverrideAttenuation, UFMODAudioComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bOverrideAttenuation, UFMODAudioComponent), sizeof(uint8), false);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bStopWhenOwnerDestroyed, UFMODAudioComponent);
				UProperty* NewProp_bStopWhenOwnerDestroyed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bStopWhenOwnerDestroyed"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bStopWhenOwnerDestroyed, UFMODAudioComponent), 0x0010000000000000, CPP_BOOL_PROPERTY_BITMASK(bStopWhenOwnerDestroyed, UFMODAudioComponent), sizeof(uint8), false);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bAutoDestroy, UFMODAudioComponent);
				UProperty* NewProp_bAutoDestroy = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bAutoDestroy"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bAutoDestroy, UFMODAudioComponent), 0x0010000000000000, CPP_BOOL_PROPERTY_BITMASK(bAutoDestroy, UFMODAudioComponent), sizeof(uint8), false);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnableTimelineCallbacks, UFMODAudioComponent);
				UProperty* NewProp_bEnableTimelineCallbacks = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bEnableTimelineCallbacks"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnableTimelineCallbacks, UFMODAudioComponent), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bEnableTimelineCallbacks, UFMODAudioComponent), sizeof(uint8), false);
				UProperty* NewProp_Event = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Event"), RF_Public|RF_Transient|RF_MarkAsNative) UAssetObjectProperty(CPP_PROPERTY_BASE(Event, UFMODAudioComponent), 0x0014000000000005, Z_Construct_UClass_UFMODEvent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODAudioComponent_GetLength(), "GetLength"); // 3233804141
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODAudioComponent_GetParameter(), "GetParameter"); // 2970071814
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODAudioComponent_GetTimelinePosition(), "GetTimelinePosition"); // 2049734949
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODAudioComponent_IsPlaying(), "IsPlaying"); // 1790707690
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODAudioComponent_Play(), "Play"); // 3074695547
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODAudioComponent_Release(), "Release"); // 1172917070
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODAudioComponent_SetEvent(), "SetEvent"); // 4107345701
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODAudioComponent_SetParameter(), "SetParameter"); // 14412151
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODAudioComponent_SetPaused(), "SetPaused"); // 4275852189
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODAudioComponent_SetPitch(), "SetPitch"); // 3275561138
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODAudioComponent_SetProgrammerSoundName(), "SetProgrammerSoundName"); // 3146024833
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODAudioComponent_SetProperty(), "SetProperty"); // 2860572069
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODAudioComponent_SetTimelinePosition(), "SetTimelinePosition"); // 714930618
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODAudioComponent_SetVolume(), "SetVolume"); // 569407893
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODAudioComponent_Stop(), "Stop"); // 541570371
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODAudioComponent_TriggerCue(), "TriggerCue"); // 4141662996
				static TCppClassTypeInfo<TCppClassTypeTraits<UFMODAudioComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Audio Common"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object ActorComponent Physics Rendering Mobility LOD PhysicsVolume"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FMODAudioComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/FMODAudioComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Plays FMOD Studio events."));
				MetaData->SetValue(NewProp_AttenuationOverrides, TEXT("Category"), TEXT("Attenuation"));
				MetaData->SetValue(NewProp_AttenuationOverrides, TEXT("EditCondition"), TEXT("bOverrideAttenuation"));
				MetaData->SetValue(NewProp_AttenuationOverrides, TEXT("ModuleRelativePath"), TEXT("Classes/FMODAudioComponent.h"));
				MetaData->SetValue(NewProp_AttenuationOverrides, TEXT("ToolTip"), TEXT("If bOverrideSettings is true, the attenuation properties to use for sounds generated by this component (FMOD only uses the Occlusion part)"));
				MetaData->SetValue(NewProp_AttenuationSettings, TEXT("Category"), TEXT("Attenuation"));
				MetaData->SetValue(NewProp_AttenuationSettings, TEXT("EditCondition"), TEXT("!bOverrideAttenuation"));
				MetaData->SetValue(NewProp_AttenuationSettings, TEXT("ModuleRelativePath"), TEXT("Classes/FMODAudioComponent.h"));
				MetaData->SetValue(NewProp_AttenuationSettings, TEXT("ToolTip"), TEXT("If bOverrideSettings is false, the asset to use to determine attenuation properties for sounds generated by this component (FMOD only uses the Occlusion part)"));
				MetaData->SetValue(NewProp_ProgrammerSoundName, TEXT("Category"), TEXT("Sound"));
				MetaData->SetValue(NewProp_ProgrammerSoundName, TEXT("ModuleRelativePath"), TEXT("Classes/FMODAudioComponent.h"));
				MetaData->SetValue(NewProp_ProgrammerSoundName, TEXT("ToolTip"), TEXT("Sound name used for programmer sound.  Will look up the name in any loaded audio table."));
				MetaData->SetValue(NewProp_OnTimelineBeat, TEXT("ModuleRelativePath"), TEXT("Classes/FMODAudioComponent.h"));
				MetaData->SetValue(NewProp_OnTimelineBeat, TEXT("ToolTip"), TEXT("called when we reach a beat of a tempo (if bEnableTimelineCallbacks is true)"));
				MetaData->SetValue(NewProp_OnTimelineMarker, TEXT("ModuleRelativePath"), TEXT("Classes/FMODAudioComponent.h"));
				MetaData->SetValue(NewProp_OnTimelineMarker, TEXT("ToolTip"), TEXT("called when we reach a named marker (if bEnableTimelineCallbacks is true)"));
				MetaData->SetValue(NewProp_OnEventStopped, TEXT("ModuleRelativePath"), TEXT("Classes/FMODAudioComponent.h"));
				MetaData->SetValue(NewProp_OnEventStopped, TEXT("ToolTip"), TEXT("called when an event stops, either because it played to completion or because a Stop() call turned it off early"));
				MetaData->SetValue(NewProp_bOverrideAttenuation, TEXT("Category"), TEXT("Attenuation"));
				MetaData->SetValue(NewProp_bOverrideAttenuation, TEXT("ModuleRelativePath"), TEXT("Classes/FMODAudioComponent.h"));
				MetaData->SetValue(NewProp_bOverrideAttenuation, TEXT("ToolTip"), TEXT("Should the Attenuation Settings asset be used or should the properties set directly on the component be used for attenuation properties (FMOD only uses the Occlusion part)"));
				MetaData->SetValue(NewProp_bStopWhenOwnerDestroyed, TEXT("ModuleRelativePath"), TEXT("Classes/FMODAudioComponent.h"));
				MetaData->SetValue(NewProp_bStopWhenOwnerDestroyed, TEXT("ToolTip"), TEXT("Stop sound when owner is destroyed"));
				MetaData->SetValue(NewProp_bAutoDestroy, TEXT("ModuleRelativePath"), TEXT("Classes/FMODAudioComponent.h"));
				MetaData->SetValue(NewProp_bAutoDestroy, TEXT("ToolTip"), TEXT("Auto destroy this component on completion"));
				MetaData->SetValue(NewProp_bEnableTimelineCallbacks, TEXT("Category"), TEXT("Callbacks"));
				MetaData->SetValue(NewProp_bEnableTimelineCallbacks, TEXT("ModuleRelativePath"), TEXT("Classes/FMODAudioComponent.h"));
				MetaData->SetValue(NewProp_bEnableTimelineCallbacks, TEXT("ToolTip"), TEXT("Enable timeline callbacks for this sound, so that OnTimelineMarker and OnTimelineBeat can be used"));
				MetaData->SetValue(NewProp_Event, TEXT("Category"), TEXT("Sound"));
				MetaData->SetValue(NewProp_Event, TEXT("ModuleRelativePath"), TEXT("Classes/FMODAudioComponent.h"));
				MetaData->SetValue(NewProp_Event, TEXT("ToolTip"), TEXT("The event asset to use for this sound"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFMODAudioComponent, 786728957);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFMODAudioComponent(Z_Construct_UClass_UFMODAudioComponent, &UFMODAudioComponent::StaticClass, TEXT("/Script/FMODStudio"), TEXT("UFMODAudioComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODAudioComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
