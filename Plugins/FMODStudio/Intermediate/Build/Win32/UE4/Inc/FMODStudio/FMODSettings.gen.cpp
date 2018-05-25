// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/FMODStudioPrivatePCH.h"
#include "Classes/FMODSettings.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODSettings() {}
// Cross Module References
	FMODSTUDIO_API UEnum* Z_Construct_UEnum_FMODStudio_EFMODSpeakerMode();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODSettings_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
// End Cross Module References
static UEnum* EFMODSpeakerMode_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_FMODStudio_EFMODSpeakerMode, Z_Construct_UPackage__Script_FMODStudio(), TEXT("EFMODSpeakerMode"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFMODSpeakerMode(EFMODSpeakerMode_StaticEnum, TEXT("/Script/FMODStudio"), TEXT("EFMODSpeakerMode"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_FMODStudio_EFMODSpeakerMode()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudio();
		extern uint32 Get_Z_Construct_UEnum_FMODStudio_EFMODSpeakerMode_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFMODSpeakerMode"), 0, Get_Z_Construct_UEnum_FMODStudio_EFMODSpeakerMode_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EFMODSpeakerMode"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EFMODSpeakerMode::Stereo"), 0);
			EnumNames.Emplace(TEXT("EFMODSpeakerMode::Surround_5_1"), 1);
			EnumNames.Emplace(TEXT("EFMODSpeakerMode::Surround_7_1"), 2);
			EnumNames.Emplace(TEXT("EFMODSpeakerMode::EFMODSpeakerMode_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Namespaced);
			ReturnEnum->CppType = TEXT("EFMODSpeakerMode::Type");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Classes/FMODSettings.h"));
			MetaData->SetValue(ReturnEnum, TEXT("Stereo.ToolTip"), TEXT("The speakers are stereo"));
			MetaData->SetValue(ReturnEnum, TEXT("Surround_5_1.ToolTip"), TEXT("5.1 speaker setup"));
			MetaData->SetValue(ReturnEnum, TEXT("Surround_7_1.ToolTip"), TEXT("7.1 speaker setup"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_FMODStudio_EFMODSpeakerMode_CRC() { return 51122315U; }
	void UFMODSettings::StaticRegisterNativesUFMODSettings()
	{
	}
	UClass* Z_Construct_UClass_UFMODSettings_NoRegister()
	{
		return UFMODSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UFMODSettings()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_FMODStudio();
			OuterClass = UFMODSettings::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100086u;


				UProperty* NewProp_WavWriterPath = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WavWriterPath"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(WavWriterPath, UFMODSettings), 0x0010000000004001);
				UProperty* NewProp_SkipLoadBankName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SkipLoadBankName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(SkipLoadBankName, UFMODSettings), 0x0010000000004001);
				UProperty* NewProp_MasterBankName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MasterBankName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(MasterBankName, UFMODSettings), 0x0010000000004001);
				UProperty* NewProp_ForcePlatformName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ForcePlatformName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ForcePlatformName, UFMODSettings), 0x0010000000004001);
				UProperty* NewProp_ContentBrowserPrefix = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ContentBrowserPrefix"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ContentBrowserPrefix, UFMODSettings), 0x0010000000004001);
				UProperty* NewProp_PluginFiles = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PluginFiles"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(PluginFiles, UFMODSettings), 0x0010000000004001);
				UProperty* NewProp_PluginFiles_Inner = new(EC_InternalUseOnlyConstructor, NewProp_PluginFiles, TEXT("PluginFiles"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000004000);
				UProperty* NewProp_LiveUpdatePort = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LiveUpdatePort"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(LiveUpdatePort, UFMODSettings), 0x0010000000004001);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bLockAllBuses, UFMODSettings);
				UProperty* NewProp_bLockAllBuses = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bLockAllBuses"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bLockAllBuses, UFMODSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bLockAllBuses, UFMODSettings), sizeof(bool), true);
				UProperty* NewProp_InitialOutputDriverName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("InitialOutputDriverName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(InitialOutputDriverName, UFMODSettings), 0x0010000000004001);
				UProperty* NewProp_StudioUpdatePeriod = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StudioUpdatePeriod"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(StudioUpdatePeriod, UFMODSettings), 0x0010000000004001);
				UProperty* NewProp_DSPBufferCount = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DSPBufferCount"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(DSPBufferCount, UFMODSettings), 0x0010000000004001);
				UProperty* NewProp_DSPBufferLength = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DSPBufferLength"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(DSPBufferLength, UFMODSettings), 0x0010000000004001);
				UProperty* NewProp_TotalChannelCount = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TotalChannelCount"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(TotalChannelCount, UFMODSettings), 0x0010000000004001);
				UProperty* NewProp_RealChannelCount = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RealChannelCount"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(RealChannelCount, UFMODSettings), 0x0010000000004001);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bMatchHardwareSampleRate, UFMODSettings);
				UProperty* NewProp_bMatchHardwareSampleRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bMatchHardwareSampleRate"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bMatchHardwareSampleRate, UFMODSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bMatchHardwareSampleRate, UFMODSettings), sizeof(bool), true);
				UProperty* NewProp_SampleRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SampleRate"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(SampleRate, UFMODSettings), 0x0010000000004001);
				UProperty* NewProp_Vol0VirtualLevel = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Vol0VirtualLevel"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Vol0VirtualLevel, UFMODSettings), 0x0010000000004001);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bVol0Virtual, UFMODSettings);
				UProperty* NewProp_bVol0Virtual = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bVol0Virtual"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bVol0Virtual, UFMODSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bVol0Virtual, UFMODSettings), sizeof(bool), true);
				UProperty* NewProp_OutputFormat = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OutputFormat"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(OutputFormat, UFMODSettings), 0x0010000000004001, Z_Construct_UEnum_FMODStudio_EFMODSpeakerMode());
				UProperty* NewProp_BankOutputDirectory = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BankOutputDirectory"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(BankOutputDirectory, UFMODSettings), 0x0010000000004001, Z_Construct_UScriptStruct_FDirectoryPath());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnableLiveUpdate, UFMODSettings);
				UProperty* NewProp_bEnableLiveUpdate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bEnableLiveUpdate"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnableLiveUpdate, UFMODSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bEnableLiveUpdate, UFMODSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bLoadAllSampleData, UFMODSettings);
				UProperty* NewProp_bLoadAllSampleData = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bLoadAllSampleData"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bLoadAllSampleData, UFMODSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bLoadAllSampleData, UFMODSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bLoadAllBanks, UFMODSettings);
				UProperty* NewProp_bLoadAllBanks = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bLoadAllBanks"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bLoadAllBanks, UFMODSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bLoadAllBanks, UFMODSettings), sizeof(bool), true);
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UFMODSettings> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FMODSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/FMODSettings.h"));
				MetaData->SetValue(NewProp_WavWriterPath, TEXT("Category"), TEXT("Advanced"));
				MetaData->SetValue(NewProp_WavWriterPath, TEXT("ModuleRelativePath"), TEXT("Classes/FMODSettings.h"));
				MetaData->SetValue(NewProp_WavWriterPath, TEXT("ToolTip"), TEXT("Force wav writer output, for debugging only.  Setting this will prevent normal sound output!"));
				MetaData->SetValue(NewProp_SkipLoadBankName, TEXT("Category"), TEXT("Advanced"));
				MetaData->SetValue(NewProp_SkipLoadBankName, TEXT("ModuleRelativePath"), TEXT("Classes/FMODSettings.h"));
				MetaData->SetValue(NewProp_SkipLoadBankName, TEXT("ToolTip"), TEXT("Skip bank files of the given name.\nCan be used to load all banks except for a certain set, such as localization banks."));
				MetaData->SetValue(NewProp_MasterBankName, TEXT("Category"), TEXT("Advanced"));
				MetaData->SetValue(NewProp_MasterBankName, TEXT("ModuleRelativePath"), TEXT("Classes/FMODSettings.h"));
				MetaData->SetValue(NewProp_MasterBankName, TEXT("ToolTip"), TEXT("Name of master bank.  The default in Studio is \"Master Bank\"."));
				MetaData->SetValue(NewProp_ForcePlatformName, TEXT("Category"), TEXT("Advanced"));
				MetaData->SetValue(NewProp_ForcePlatformName, TEXT("ModuleRelativePath"), TEXT("Classes/FMODSettings.h"));
				MetaData->SetValue(NewProp_ForcePlatformName, TEXT("ToolTip"), TEXT("Force platform directory name, or leave empty for automatic (Desktop/Mobile/PS4/XBoxOne)"));
				MetaData->SetValue(NewProp_ContentBrowserPrefix, TEXT("Category"), TEXT("Advanced"));
				MetaData->SetValue(NewProp_ContentBrowserPrefix, TEXT("ModuleRelativePath"), TEXT("Classes/FMODSettings.h"));
				MetaData->SetValue(NewProp_ContentBrowserPrefix, TEXT("ToolTip"), TEXT("Directory for content to appear in content window. Be careful changing this!"));
				MetaData->SetValue(NewProp_PluginFiles, TEXT("Category"), TEXT("Advanced"));
				MetaData->SetValue(NewProp_PluginFiles, TEXT("ModuleRelativePath"), TEXT("Classes/FMODSettings.h"));
				MetaData->SetValue(NewProp_PluginFiles, TEXT("ToolTip"), TEXT("Extra plugin files to load.\nThe plugin files should sit alongside the FMOD dynamic libraries in the ThirdParty directory."));
				MetaData->SetValue(NewProp_LiveUpdatePort, TEXT("Category"), TEXT("Advanced"));
				MetaData->SetValue(NewProp_LiveUpdatePort, TEXT("ModuleRelativePath"), TEXT("Classes/FMODSettings.h"));
				MetaData->SetValue(NewProp_LiveUpdatePort, TEXT("ToolTip"), TEXT("Live update port to use, or 0 for default."));
				MetaData->SetValue(NewProp_bLockAllBuses, TEXT("Category"), TEXT("InitSettings"));
				MetaData->SetValue(NewProp_bLockAllBuses, TEXT("ModuleRelativePath"), TEXT("Classes/FMODSettings.h"));
				MetaData->SetValue(NewProp_bLockAllBuses, TEXT("ToolTip"), TEXT("Lock all mixer buses at startup, making sure they are created up front."));
				MetaData->SetValue(NewProp_InitialOutputDriverName, TEXT("Category"), TEXT("InitSettings"));
				MetaData->SetValue(NewProp_InitialOutputDriverName, TEXT("ModuleRelativePath"), TEXT("Classes/FMODSettings.h"));
				MetaData->SetValue(NewProp_InitialOutputDriverName, TEXT("ToolTip"), TEXT("Output device to choose at system start up, or empty for default."));
				MetaData->SetValue(NewProp_StudioUpdatePeriod, TEXT("Category"), TEXT("InitSettings"));
				MetaData->SetValue(NewProp_StudioUpdatePeriod, TEXT("ModuleRelativePath"), TEXT("Classes/FMODSettings.h"));
				MetaData->SetValue(NewProp_StudioUpdatePeriod, TEXT("ToolTip"), TEXT("Studio update period in milliseconds, or 0 for default (which means 20ms)."));
				MetaData->SetValue(NewProp_DSPBufferCount, TEXT("Category"), TEXT("InitSettings"));
				MetaData->SetValue(NewProp_DSPBufferCount, TEXT("ModuleRelativePath"), TEXT("Classes/FMODSettings.h"));
				MetaData->SetValue(NewProp_DSPBufferCount, TEXT("ToolTip"), TEXT("DSP mixer buffer count, or 0 for system default."));
				MetaData->SetValue(NewProp_DSPBufferLength, TEXT("Category"), TEXT("InitSettings"));
				MetaData->SetValue(NewProp_DSPBufferLength, TEXT("ModuleRelativePath"), TEXT("Classes/FMODSettings.h"));
				MetaData->SetValue(NewProp_DSPBufferLength, TEXT("ToolTip"), TEXT("DSP mixer buffer length, or 0 for system default."));
				MetaData->SetValue(NewProp_TotalChannelCount, TEXT("Category"), TEXT("InitSettings"));
				MetaData->SetValue(NewProp_TotalChannelCount, TEXT("ModuleRelativePath"), TEXT("Classes/FMODSettings.h"));
				MetaData->SetValue(NewProp_TotalChannelCount, TEXT("ToolTip"), TEXT("Total number of voices available that can be either real or virtual."));
				MetaData->SetValue(NewProp_RealChannelCount, TEXT("Category"), TEXT("InitSettings"));
				MetaData->SetValue(NewProp_RealChannelCount, TEXT("ModuleRelativePath"), TEXT("Classes/FMODSettings.h"));
				MetaData->SetValue(NewProp_RealChannelCount, TEXT("ToolTip"), TEXT("Number of actual software voices that can be used at once."));
				MetaData->SetValue(NewProp_bMatchHardwareSampleRate, TEXT("Category"), TEXT("InitSettings"));
				MetaData->SetValue(NewProp_bMatchHardwareSampleRate, TEXT("ModuleRelativePath"), TEXT("Classes/FMODSettings.h"));
				MetaData->SetValue(NewProp_bMatchHardwareSampleRate, TEXT("ToolTip"), TEXT("Whether to match hardware sample rate where reasonable (44.1kHz to 48kHz)."));
				MetaData->SetValue(NewProp_SampleRate, TEXT("Category"), TEXT("InitSettings"));
				MetaData->SetValue(NewProp_SampleRate, TEXT("ModuleRelativePath"), TEXT("Classes/FMODSettings.h"));
				MetaData->SetValue(NewProp_SampleRate, TEXT("ToolTip"), TEXT("Sample rate to use, or 0 to match system rate."));
				MetaData->SetValue(NewProp_Vol0VirtualLevel, TEXT("Category"), TEXT("InitSettings"));
				MetaData->SetValue(NewProp_Vol0VirtualLevel, TEXT("ModuleRelativePath"), TEXT("Classes/FMODSettings.h"));
				MetaData->SetValue(NewProp_Vol0VirtualLevel, TEXT("ToolTip"), TEXT("If vol0virtual is enabled, the signal level at which to make channels virtual."));
				MetaData->SetValue(NewProp_bVol0Virtual, TEXT("Category"), TEXT("InitSettings"));
				MetaData->SetValue(NewProp_bVol0Virtual, TEXT("ModuleRelativePath"), TEXT("Classes/FMODSettings.h"));
				MetaData->SetValue(NewProp_bVol0Virtual, TEXT("ToolTip"), TEXT("Whether to enable vol0virtual, which means voices with low volume will automatically go virtual to save CPU."));
				MetaData->SetValue(NewProp_OutputFormat, TEXT("Category"), TEXT("Basic"));
				MetaData->SetValue(NewProp_OutputFormat, TEXT("ModuleRelativePath"), TEXT("Classes/FMODSettings.h"));
				MetaData->SetValue(NewProp_OutputFormat, TEXT("ToolTip"), TEXT("Project Output Format, should match the mode set up for the Studio project."));
				MetaData->SetValue(NewProp_BankOutputDirectory, TEXT("Category"), TEXT("Basic"));
				MetaData->SetValue(NewProp_BankOutputDirectory, TEXT("ModuleRelativePath"), TEXT("Classes/FMODSettings.h"));
				MetaData->SetValue(NewProp_BankOutputDirectory, TEXT("RelativeToGameContentDir"), TEXT(""));
				MetaData->SetValue(NewProp_BankOutputDirectory, TEXT("ToolTip"), TEXT("Path to find your studio bank output directory, relative to Content directory."));
				MetaData->SetValue(NewProp_bEnableLiveUpdate, TEXT("Category"), TEXT("Basic"));
				MetaData->SetValue(NewProp_bEnableLiveUpdate, TEXT("ModuleRelativePath"), TEXT("Classes/FMODSettings.h"));
				MetaData->SetValue(NewProp_bEnableLiveUpdate, TEXT("ToolTip"), TEXT("Enable live update in non-final builds."));
				MetaData->SetValue(NewProp_bLoadAllSampleData, TEXT("Category"), TEXT("Basic"));
				MetaData->SetValue(NewProp_bLoadAllSampleData, TEXT("ModuleRelativePath"), TEXT("Classes/FMODSettings.h"));
				MetaData->SetValue(NewProp_bLoadAllSampleData, TEXT("ToolTip"), TEXT("Whether to load all bank sample data into memory at startup."));
				MetaData->SetValue(NewProp_bLoadAllBanks, TEXT("Category"), TEXT("Basic"));
				MetaData->SetValue(NewProp_bLoadAllBanks, TEXT("ModuleRelativePath"), TEXT("Classes/FMODSettings.h"));
				MetaData->SetValue(NewProp_bLoadAllBanks, TEXT("ToolTip"), TEXT("Whether to load all banks at startup."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFMODSettings, 3766579102);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFMODSettings(Z_Construct_UClass_UFMODSettings, &UFMODSettings::StaticClass, TEXT("/Script/FMODStudio"), TEXT("UFMODSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
