// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/FMODStudioPrivatePCH.h"
#include "Private/Sequencer/FMODEventControlSection.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODEventControlSection() {}
// Cross Module References
	FMODSTUDIO_API UEnum* Z_Construct_UEnum_FMODStudio_EFMODEventControlKey();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEventControlSection_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEventControlSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIntegralCurve();
// End Cross Module References
static UEnum* EFMODEventControlKey_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_FMODStudio_EFMODEventControlKey, Z_Construct_UPackage__Script_FMODStudio(), TEXT("EFMODEventControlKey"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFMODEventControlKey(EFMODEventControlKey_StaticEnum, TEXT("/Script/FMODStudio"), TEXT("EFMODEventControlKey"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_FMODStudio_EFMODEventControlKey()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudio();
		extern uint32 Get_Z_Construct_UEnum_FMODStudio_EFMODEventControlKey_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFMODEventControlKey"), 0, Get_Z_Construct_UEnum_FMODStudio_EFMODEventControlKey_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EFMODEventControlKey"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EFMODEventControlKey::Play"), 0);
			EnumNames.Emplace(TEXT("EFMODEventControlKey::Stop"), 1);
			EnumNames.Emplace(TEXT("EFMODEventControlKey::EFMODEventControlKey_MAX"), 2);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Namespaced);
			ReturnEnum->CppType = TEXT("EFMODEventControlKey::Type");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Private/Sequencer/FMODEventControlSection.h"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("Defines the types of FMOD event control keys."));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_FMODStudio_EFMODEventControlKey_CRC() { return 3732663990U; }
	void UFMODEventControlSection::StaticRegisterNativesUFMODEventControlSection()
	{
	}
	UClass* Z_Construct_UClass_UFMODEventControlSection_NoRegister()
	{
		return UFMODEventControlSection::StaticClass();
	}
	UClass* Z_Construct_UClass_UFMODEventControlSection()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UMovieSceneSection();
			Z_Construct_UPackage__Script_FMODStudio();
			OuterClass = UFMODEventControlSection::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20280080u;


				UProperty* NewProp_ControlKeys = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ControlKeys"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ControlKeys, UFMODEventControlSection), 0x0040000000000000, Z_Construct_UScriptStruct_FIntegralCurve());
				static TCppClassTypeInfo<TCppClassTypeTraits<UFMODEventControlSection> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Sequencer/FMODEventControlSection.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Private/Sequencer/FMODEventControlSection.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("FMOD Event control section"));
				MetaData->SetValue(NewProp_ControlKeys, TEXT("ModuleRelativePath"), TEXT("Private/Sequencer/FMODEventControlSection.h"));
				MetaData->SetValue(NewProp_ControlKeys, TEXT("ToolTip"), TEXT("Curve containing the event control keys"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFMODEventControlSection, 1696428383);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFMODEventControlSection(Z_Construct_UClass_UFMODEventControlSection, &UFMODEventControlSection::StaticClass, TEXT("/Script/FMODStudio"), TEXT("UFMODEventControlSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODEventControlSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
