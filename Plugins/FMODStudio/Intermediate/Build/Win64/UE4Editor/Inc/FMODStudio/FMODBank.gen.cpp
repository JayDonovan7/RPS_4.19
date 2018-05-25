// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/FMODStudioPrivatePCH.h"
#include "Classes/FMODBank.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODBank() {}
// Cross Module References
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODBank_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODBank();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAsset();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
// End Cross Module References
	void UFMODBank::StaticRegisterNativesUFMODBank()
	{
	}
	UClass* Z_Construct_UClass_UFMODBank_NoRegister()
	{
		return UFMODBank::StaticClass();
	}
	UClass* Z_Construct_UClass_UFMODBank()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UFMODAsset();
			Z_Construct_UPackage__Script_FMODStudio();
			OuterClass = UFMODBank::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<UFMODBank> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FMODBank.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/FMODBank.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("FMOD Bank Asset."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFMODBank, 2755798861);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFMODBank(Z_Construct_UClass_UFMODBank, &UFMODBank::StaticClass, TEXT("/Script/FMODStudio"), TEXT("UFMODBank"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODBank);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
