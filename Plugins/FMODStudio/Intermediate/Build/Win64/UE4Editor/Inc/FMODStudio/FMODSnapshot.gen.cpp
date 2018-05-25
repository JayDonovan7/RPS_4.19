// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/FMODStudioPrivatePCH.h"
#include "Classes/FMODSnapshot.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODSnapshot() {}
// Cross Module References
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODSnapshot_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODSnapshot();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEvent();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
// End Cross Module References
	void UFMODSnapshot::StaticRegisterNativesUFMODSnapshot()
	{
	}
	UClass* Z_Construct_UClass_UFMODSnapshot_NoRegister()
	{
		return UFMODSnapshot::StaticClass();
	}
	UClass* Z_Construct_UClass_UFMODSnapshot()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UFMODEvent();
			Z_Construct_UPackage__Script_FMODStudio();
			OuterClass = UFMODSnapshot::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<UFMODSnapshot> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FMODSnapshot.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/FMODSnapshot.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("FMOD Snapshot Asset."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFMODSnapshot, 2419001833);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFMODSnapshot(Z_Construct_UClass_UFMODSnapshot, &UFMODSnapshot::StaticClass, TEXT("/Script/FMODStudio"), TEXT("UFMODSnapshot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODSnapshot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
