// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/FMODStudioPrivatePCH.h"
#include "Classes/FMODAsset.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODAsset() {}
// Cross Module References
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAsset_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void UFMODAsset::StaticRegisterNativesUFMODAsset()
	{
	}
	UClass* Z_Construct_UClass_UFMODAsset_NoRegister()
	{
		return UFMODAsset::StaticClass();
	}
	UClass* Z_Construct_UClass_UFMODAsset()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_FMODStudio();
			OuterClass = UFMODAsset::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;


				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bShowAsAsset, UFMODAsset);
				UProperty* NewProp_bShowAsAsset = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bShowAsAsset"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bShowAsAsset, UFMODAsset), 0x0010000000000000, CPP_BOOL_PROPERTY_BITMASK(bShowAsAsset, UFMODAsset), sizeof(bool), true);
				UProperty* NewProp_AssetGuid = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AssetGuid"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(AssetGuid, UFMODAsset), 0x0010000000000000, Z_Construct_UScriptStruct_FGuid());
				static TCppClassTypeInfo<TCppClassTypeTraits<UFMODAsset> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FMODAsset.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/FMODAsset.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("FMOD Asset."));
				MetaData->SetValue(NewProp_bShowAsAsset, TEXT("ModuleRelativePath"), TEXT("Classes/FMODAsset.h"));
				MetaData->SetValue(NewProp_bShowAsAsset, TEXT("ToolTip"), TEXT("Whether to show in the content window"));
				MetaData->SetValue(NewProp_AssetGuid, TEXT("ModuleRelativePath"), TEXT("Classes/FMODAsset.h"));
				MetaData->SetValue(NewProp_AssetGuid, TEXT("ToolTip"), TEXT("The unique Guid, which matches the one exported from FMOD Studio"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFMODAsset, 3687371660);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFMODAsset(Z_Construct_UClass_UFMODAsset, &UFMODAsset::StaticClass, TEXT("/Script/FMODStudio"), TEXT("UFMODAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
