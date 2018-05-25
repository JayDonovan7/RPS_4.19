// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/FMODStudioPrivatePCH.h"
#include "Classes/FMODAmbientSound.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODAmbientSound() {}
// Cross Module References
	FMODSTUDIO_API UClass* Z_Construct_UClass_AFMODAmbientSound_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_AFMODAmbientSound();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAudioComponent_NoRegister();
// End Cross Module References
	void AFMODAmbientSound::StaticRegisterNativesAFMODAmbientSound()
	{
	}
	UClass* Z_Construct_UClass_AFMODAmbientSound_NoRegister()
	{
		return AFMODAmbientSound::StaticClass();
	}
	UClass* Z_Construct_UClass_AFMODAmbientSound()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_FMODStudio();
			OuterClass = AFMODAmbientSound::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_AudioComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AudioComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AudioComponent, AFMODAmbientSound), 0x00100000000a001d, Z_Construct_UClass_UFMODAudioComponent_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<AFMODAmbientSound> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("AutoExpandCategories"), TEXT("Audio"));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Sounds"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Collision Input"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FMODAmbientSound.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/FMODAmbientSound.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("FMOD Ambient Sound."));
				MetaData->SetValue(NewProp_AudioComponent, TEXT("Category"), TEXT("Sound"));
				MetaData->SetValue(NewProp_AudioComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_AudioComponent, TEXT("ExposeFunctionCategories"), TEXT("Sound"));
				MetaData->SetValue(NewProp_AudioComponent, TEXT("ModuleRelativePath"), TEXT("Classes/FMODAmbientSound.h"));
				MetaData->SetValue(NewProp_AudioComponent, TEXT("ToolTip"), TEXT("The Audio component for this actor"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFMODAmbientSound, 3005146364);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFMODAmbientSound(Z_Construct_UClass_AFMODAmbientSound, &AFMODAmbientSound::StaticClass, TEXT("/Script/FMODStudio"), TEXT("AFMODAmbientSound"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFMODAmbientSound);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
