// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/FMODStudioPrivatePCH.h"
#include "Classes/FMODVCA.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODVCA() {}
// Cross Module References
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODVCA_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODVCA();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAsset();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
// End Cross Module References
	void UFMODVCA::StaticRegisterNativesUFMODVCA()
	{
	}
	UClass* Z_Construct_UClass_UFMODVCA_NoRegister()
	{
		return UFMODVCA::StaticClass();
	}
	UClass* Z_Construct_UClass_UFMODVCA()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UFMODAsset();
			Z_Construct_UPackage__Script_FMODStudio();
			OuterClass = UFMODVCA::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<UFMODVCA> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FMODVCA.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/FMODVCA.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("FMOD VCA Asset."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFMODVCA, 2524604512);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFMODVCA(Z_Construct_UClass_UFMODVCA, &UFMODVCA::StaticClass, TEXT("/Script/FMODStudio"), TEXT("UFMODVCA"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODVCA);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
