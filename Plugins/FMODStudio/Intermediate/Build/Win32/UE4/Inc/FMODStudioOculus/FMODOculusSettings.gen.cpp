// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/FMODStudioOculusPrivatePCH.h"
#include "Classes/FMODOculusSettings.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODOculusSettings() {}
// Cross Module References
	FMODSTUDIOOCULUS_API UClass* Z_Construct_UClass_UFMODOculusSettings_NoRegister();
	FMODSTUDIOOCULUS_API UClass* Z_Construct_UClass_UFMODOculusSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FMODStudioOculus();
	FMODSTUDIOOCULUS_API UScriptStruct* Z_Construct_UScriptStruct_FFMODOculusRoomParameters();
// End Cross Module References
	void UFMODOculusSettings::StaticRegisterNativesUFMODOculusSettings()
	{
	}
	UClass* Z_Construct_UClass_UFMODOculusSettings_NoRegister()
	{
		return UFMODOculusSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UFMODOculusSettings()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_FMODStudioOculus();
			OuterClass = UFMODOculusSettings::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100086u;


				UProperty* NewProp_RoomParameters = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RoomParameters"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(RoomParameters, UFMODOculusSettings), 0x0010000000004001, Z_Construct_UScriptStruct_FFMODOculusRoomParameters());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bLateReverberationEnabled, UFMODOculusSettings);
				UProperty* NewProp_bLateReverberationEnabled = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bLateReverberationEnabled"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bLateReverberationEnabled, UFMODOculusSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bLateReverberationEnabled, UFMODOculusSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEarlyReflectionsEnabled, UFMODOculusSettings);
				UProperty* NewProp_bEarlyReflectionsEnabled = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bEarlyReflectionsEnabled"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEarlyReflectionsEnabled, UFMODOculusSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bEarlyReflectionsEnabled, UFMODOculusSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bOculusEnabled, UFMODOculusSettings);
				UProperty* NewProp_bOculusEnabled = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bOculusEnabled"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bOculusEnabled, UFMODOculusSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bOculusEnabled, UFMODOculusSettings), sizeof(bool), true);
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UFMODOculusSettings> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FMODOculusSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/FMODOculusSettings.h"));
				MetaData->SetValue(NewProp_RoomParameters, TEXT("Category"), TEXT("Oculus"));
				MetaData->SetValue(NewProp_RoomParameters, TEXT("ModuleRelativePath"), TEXT("Classes/FMODOculusSettings.h"));
				MetaData->SetValue(NewProp_RoomParameters, TEXT("ToolTip"), TEXT("Default room parameters to apply at startup"));
				MetaData->SetValue(NewProp_bLateReverberationEnabled, TEXT("Category"), TEXT("Oculus"));
				MetaData->SetValue(NewProp_bLateReverberationEnabled, TEXT("ModuleRelativePath"), TEXT("Classes/FMODOculusSettings.h"));
				MetaData->SetValue(NewProp_bLateReverberationEnabled, TEXT("ToolTip"), TEXT("Enable Late Reverb"));
				MetaData->SetValue(NewProp_bEarlyReflectionsEnabled, TEXT("Category"), TEXT("Oculus"));
				MetaData->SetValue(NewProp_bEarlyReflectionsEnabled, TEXT("ModuleRelativePath"), TEXT("Classes/FMODOculusSettings.h"));
				MetaData->SetValue(NewProp_bEarlyReflectionsEnabled, TEXT("ToolTip"), TEXT("Enable Early Reflections"));
				MetaData->SetValue(NewProp_bOculusEnabled, TEXT("Category"), TEXT("Oculus"));
				MetaData->SetValue(NewProp_bOculusEnabled, TEXT("ModuleRelativePath"), TEXT("Classes/FMODOculusSettings.h"));
				MetaData->SetValue(NewProp_bOculusEnabled, TEXT("ToolTip"), TEXT("Enable Oculus plugin"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFMODOculusSettings, 421487781);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFMODOculusSettings(Z_Construct_UClass_UFMODOculusSettings, &UFMODOculusSettings::StaticClass, TEXT("/Script/FMODStudioOculus"), TEXT("UFMODOculusSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODOculusSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
