// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/FMODStudioOculusPrivatePCH.h"
#include "Classes/FMODOculusBlueprintStatics.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODOculusBlueprintStatics() {}
// Cross Module References
	FMODSTUDIOOCULUS_API UFunction* Z_Construct_UFunction_UFMODOculusBlueprintStatics_SetEarlyReflectionsEnabled();
	FMODSTUDIOOCULUS_API UClass* Z_Construct_UClass_UFMODOculusBlueprintStatics();
	FMODSTUDIOOCULUS_API UFunction* Z_Construct_UFunction_UFMODOculusBlueprintStatics_SetLateReverberationEnabled();
	FMODSTUDIOOCULUS_API UFunction* Z_Construct_UFunction_UFMODOculusBlueprintStatics_SetRoomParameters();
	FMODSTUDIOOCULUS_API UScriptStruct* Z_Construct_UScriptStruct_FFMODOculusRoomParameters();
	FMODSTUDIOOCULUS_API UClass* Z_Construct_UClass_UFMODOculusBlueprintStatics_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_FMODStudioOculus();
// End Cross Module References
	void UFMODOculusBlueprintStatics::StaticRegisterNativesUFMODOculusBlueprintStatics()
	{
		UClass* Class = UFMODOculusBlueprintStatics::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "SetEarlyReflectionsEnabled", (Native)&UFMODOculusBlueprintStatics::execSetEarlyReflectionsEnabled },
			{ "SetLateReverberationEnabled", (Native)&UFMODOculusBlueprintStatics::execSetLateReverberationEnabled },
			{ "SetRoomParameters", (Native)&UFMODOculusBlueprintStatics::execSetRoomParameters },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UFMODOculusBlueprintStatics_SetEarlyReflectionsEnabled()
	{
		struct FMODOculusBlueprintStatics_eventSetEarlyReflectionsEnabled_Parms
		{
			bool bEnable;
		};
		UObject* Outer = Z_Construct_UClass_UFMODOculusBlueprintStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetEarlyReflectionsEnabled"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(FMODOculusBlueprintStatics_eventSetEarlyReflectionsEnabled_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnable, FMODOculusBlueprintStatics_eventSetEarlyReflectionsEnabled_Parms);
			UProperty* NewProp_bEnable = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bEnable"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnable, FMODOculusBlueprintStatics_eventSetEarlyReflectionsEnabled_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bEnable, FMODOculusBlueprintStatics_eventSetEarlyReflectionsEnabled_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD|Oculus"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODOculusBlueprintStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Enables or disables early reflections"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODOculusBlueprintStatics_SetLateReverberationEnabled()
	{
		struct FMODOculusBlueprintStatics_eventSetLateReverberationEnabled_Parms
		{
			bool bEnable;
		};
		UObject* Outer = Z_Construct_UClass_UFMODOculusBlueprintStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetLateReverberationEnabled"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(FMODOculusBlueprintStatics_eventSetLateReverberationEnabled_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnable, FMODOculusBlueprintStatics_eventSetLateReverberationEnabled_Parms);
			UProperty* NewProp_bEnable = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bEnable"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnable, FMODOculusBlueprintStatics_eventSetLateReverberationEnabled_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bEnable, FMODOculusBlueprintStatics_eventSetLateReverberationEnabled_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD|Oculus"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODOculusBlueprintStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Enables or disables late reverberation"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODOculusBlueprintStatics_SetRoomParameters()
	{
		struct FMODOculusBlueprintStatics_eventSetRoomParameters_Parms
		{
			FFMODOculusRoomParameters Params;
		};
		UObject* Outer = Z_Construct_UClass_UFMODOculusBlueprintStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetRoomParameters"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(FMODOculusBlueprintStatics_eventSetRoomParameters_Parms));
			UProperty* NewProp_Params = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Params"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Params, FMODOculusBlueprintStatics_eventSetRoomParameters_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FFMODOculusRoomParameters());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD|Oculus"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODOculusBlueprintStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Default room parameters"));
			MetaData->SetValue(NewProp_Params, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFMODOculusBlueprintStatics_NoRegister()
	{
		return UFMODOculusBlueprintStatics::StaticClass();
	}
	UClass* Z_Construct_UClass_UFMODOculusBlueprintStatics()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_FMODStudioOculus();
			OuterClass = UFMODOculusBlueprintStatics::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UFMODOculusBlueprintStatics_SetEarlyReflectionsEnabled());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODOculusBlueprintStatics_SetLateReverberationEnabled());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODOculusBlueprintStatics_SetRoomParameters());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODOculusBlueprintStatics_SetEarlyReflectionsEnabled(), "SetEarlyReflectionsEnabled"); // 3188886182
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODOculusBlueprintStatics_SetLateReverberationEnabled(), "SetLateReverberationEnabled"); // 3058957490
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODOculusBlueprintStatics_SetRoomParameters(), "SetRoomParameters"); // 2463257739
				static TCppClassTypeInfo<TCppClassTypeTraits<UFMODOculusBlueprintStatics> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FMODOculusBlueprintStatics.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/FMODOculusBlueprintStatics.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFMODOculusBlueprintStatics, 4104513982);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFMODOculusBlueprintStatics(Z_Construct_UClass_UFMODOculusBlueprintStatics, &UFMODOculusBlueprintStatics::StaticClass, TEXT("/Script/FMODStudioOculus"), TEXT("UFMODOculusBlueprintStatics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODOculusBlueprintStatics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
