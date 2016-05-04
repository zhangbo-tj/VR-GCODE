// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GCODEViewer.h"
#include "GCODEViewer.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGCODEViewer() {}
static class UEnum* EPrintMoveEnum_StaticEnum()
{
	extern GCODEVIEWER_API class UPackage* Z_Construct_UPackage__Script_GCODEViewer();
	static class UEnum* Singleton = NULL;
	if (!Singleton)
	{
		extern GCODEVIEWER_API class UEnum* Z_Construct_UEnum_GCODEViewer_EPrintMoveEnum();
		Singleton = GetStaticEnum(Z_Construct_UEnum_GCODEViewer_EPrintMoveEnum, Z_Construct_UPackage__Script_GCODEViewer(), TEXT("EPrintMoveEnum"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPrintMoveEnum(EPrintMoveEnum_StaticEnum, TEXT("/Script/GCODEViewer"), TEXT("EPrintMoveEnum"), false, nullptr, nullptr);
class UScriptStruct* FPrintMoveStructCPP::StaticStruct()
{
	extern GCODEVIEWER_API class UPackage* Z_Construct_UPackage__Script_GCODEViewer();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GCODEVIEWER_API class UScriptStruct* Z_Construct_UScriptStruct_FPrintMoveStructCPP();
		extern GCODEVIEWER_API uint32 Get_Z_Construct_UScriptStruct_FPrintMoveStructCPP_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPrintMoveStructCPP, Z_Construct_UPackage__Script_GCODEViewer(), TEXT("PrintMoveStructCPP"), sizeof(FPrintMoveStructCPP), Get_Z_Construct_UScriptStruct_FPrintMoveStructCPP_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPrintMoveStructCPP(FPrintMoveStructCPP::StaticStruct, TEXT("/Script/GCODEViewer"), TEXT("PrintMoveStructCPP"), false, nullptr, nullptr);
static struct FScriptStruct_GCODEViewer_StaticRegisterNativesFPrintMoveStructCPP
{
	FScriptStruct_GCODEViewer_StaticRegisterNativesFPrintMoveStructCPP()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PrintMoveStructCPP")),new UScriptStruct::TCppStructOps<FPrintMoveStructCPP>);
	}
} ScriptStruct_GCODEViewer_StaticRegisterNativesFPrintMoveStructCPP;
	void UMyBlueprintFunctionLibrary::StaticRegisterNativesUMyBlueprintFunctionLibrary()
	{
		FNativeFunctionRegistrar::RegisterFunction(UMyBlueprintFunctionLibrary::StaticClass(), "extrudeTransform",(Native)&UMyBlueprintFunctionLibrary::execextrudeTransform);
		FNativeFunctionRegistrar::RegisterFunction(UMyBlueprintFunctionLibrary::StaticClass(), "getAxisCoordinateCPP",(Native)&UMyBlueprintFunctionLibrary::execgetAxisCoordinateCPP);
		FNativeFunctionRegistrar::RegisterFunction(UMyBlueprintFunctionLibrary::StaticClass(), "getFloat32FromByteArray",(Native)&UMyBlueprintFunctionLibrary::execgetFloat32FromByteArray);
		FNativeFunctionRegistrar::RegisterFunction(UMyBlueprintFunctionLibrary::StaticClass(), "getInt32FromByteArray",(Native)&UMyBlueprintFunctionLibrary::execgetInt32FromByteArray);
		FNativeFunctionRegistrar::RegisterFunction(UMyBlueprintFunctionLibrary::StaticClass(), "getNewCoordinate",(Native)&UMyBlueprintFunctionLibrary::execgetNewCoordinate);
		FNativeFunctionRegistrar::RegisterFunction(UMyBlueprintFunctionLibrary::StaticClass(), "loadBinarySTL",(Native)&UMyBlueprintFunctionLibrary::execloadBinarySTL);
		FNativeFunctionRegistrar::RegisterFunction(UMyBlueprintFunctionLibrary::StaticClass(), "parseBinarySTL",(Native)&UMyBlueprintFunctionLibrary::execparseBinarySTL);
		FNativeFunctionRegistrar::RegisterFunction(UMyBlueprintFunctionLibrary::StaticClass(), "parseGcode",(Native)&UMyBlueprintFunctionLibrary::execparseGcode);
	}
	IMPLEMENT_CLASS(UMyBlueprintFunctionLibrary, 1322396606);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API class UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();

	GCODEVIEWER_API class UEnum* Z_Construct_UEnum_GCODEViewer_EPrintMoveEnum();
	GCODEVIEWER_API class UScriptStruct* Z_Construct_UScriptStruct_FPrintMoveStructCPP();
	GCODEVIEWER_API class UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_extrudeTransform();
	GCODEVIEWER_API class UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_getAxisCoordinateCPP();
	GCODEVIEWER_API class UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_getFloat32FromByteArray();
	GCODEVIEWER_API class UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_getInt32FromByteArray();
	GCODEVIEWER_API class UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_getNewCoordinate();
	GCODEVIEWER_API class UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_loadBinarySTL();
	GCODEVIEWER_API class UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_parseBinarySTL();
	GCODEVIEWER_API class UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_parseGcode();
	GCODEVIEWER_API class UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary_NoRegister();
	GCODEVIEWER_API class UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary();
	GCODEVIEWER_API class UPackage* Z_Construct_UPackage__Script_GCODEViewer();
	UEnum* Z_Construct_UEnum_GCODEViewer_EPrintMoveEnum()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_GCODEViewer();
		extern uint32 Get_Z_Construct_UEnum_GCODEViewer_EPrintMoveEnum_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPrintMoveEnum"), 0, Get_Z_Construct_UEnum_GCODEViewer_EPrintMoveEnum_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EPrintMoveEnum"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, uint8>> EnumNames;
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EPrintMoveEnum::PE_Travel")), 0));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EPrintMoveEnum::PE_Perimeter")), 1));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EPrintMoveEnum::PE_Infill")), 2));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EPrintMoveEnum::PE_Support")), 3));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EPrintMoveEnum::PE_MAX")), 4));
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EPrintMoveEnum");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("MyBlueprintFunctionLibrary.h"));
			MetaData->SetValue(ReturnEnum, TEXT("PE_Infill.DisplayName"), TEXT("Infill"));
			MetaData->SetValue(ReturnEnum, TEXT("PE_Perimeter.DisplayName"), TEXT("Perimeter"));
			MetaData->SetValue(ReturnEnum, TEXT("PE_Support.DisplayName"), TEXT("Support"));
			MetaData->SetValue(ReturnEnum, TEXT("PE_Travel.DisplayName"), TEXT("Travel"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("\"BlueprintType\" is essential to include"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_GCODEViewer_EPrintMoveEnum_CRC() { return 1336112517U; }
	UScriptStruct* Z_Construct_UScriptStruct_FPrintMoveStructCPP()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_GCODEViewer();
		extern uint32 Get_Z_Construct_UScriptStruct_FPrintMoveStructCPP_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PrintMoveStructCPP"), sizeof(FPrintMoveStructCPP), Get_Z_Construct_UScriptStruct_FPrintMoveStructCPP_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PrintMoveStructCPP"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FPrintMoveStructCPP>, EStructFlags(0x00000201));
			UProperty* NewProp_moveType = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("moveType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(moveType, FPrintMoveStructCPP), 0x0010000000000005, Z_Construct_UEnum_GCODEViewer_EPrintMoveEnum());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(layerChange, FPrintMoveStructCPP, bool);
			UProperty* NewProp_layerChange = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("layerChange"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(layerChange, FPrintMoveStructCPP), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(layerChange, FPrintMoveStructCPP), sizeof(bool), true);
			UProperty* NewProp_endPoint = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("endPoint"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(endPoint, FPrintMoveStructCPP), 0x0010000000000005, Z_Construct_UScriptStruct_FVector());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("MyBlueprintFunctionLibrary.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("USTRUCT()\nstruct PrintMoveStruct\n{\n       GENERATED_USTRUCT_BODY()\n\n       Always make USTRUCT variables into UPROPERTY()\n           any non-UPROPERTY() struct vars are not replicated\n\n        So to simplify your life for later debugging, always use UPROPERTY()\n       UPROPERTY()\n       FVector EndPoint;\n\n       UPROPERTY()\n       EPrintMoveEnum moveType;\n\n};"));
			MetaData->SetValue(NewProp_moveType, TEXT("Category"), TEXT("Range"));
			MetaData->SetValue(NewProp_moveType, TEXT("ModuleRelativePath"), TEXT("MyBlueprintFunctionLibrary.h"));
			MetaData->SetValue(NewProp_moveType, TEXT("ToolTip"), TEXT("Max range value"));
			MetaData->SetValue(NewProp_layerChange, TEXT("Category"), TEXT("Range"));
			MetaData->SetValue(NewProp_layerChange, TEXT("ModuleRelativePath"), TEXT("MyBlueprintFunctionLibrary.h"));
			MetaData->SetValue(NewProp_layerChange, TEXT("ToolTip"), TEXT("Min range value"));
			MetaData->SetValue(NewProp_endPoint, TEXT("Category"), TEXT("Range"));
			MetaData->SetValue(NewProp_endPoint, TEXT("ModuleRelativePath"), TEXT("MyBlueprintFunctionLibrary.h"));
			MetaData->SetValue(NewProp_endPoint, TEXT("ToolTip"), TEXT("Min range value"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPrintMoveStructCPP_CRC() { return 4155857845U; }
	UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_extrudeTransform()
	{
		struct MyBlueprintFunctionLibrary_eventextrudeTransform_Parms
		{
			FVector startPoint;
			FVector endPoint;
			FVector modelCentre;
			FTransform ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UMyBlueprintFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("extrudeTransform"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14822401, 65535, sizeof(MyBlueprintFunctionLibrary_eventextrudeTransform_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, MyBlueprintFunctionLibrary_eventextrudeTransform_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FTransform());
			UProperty* NewProp_modelCentre = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("modelCentre"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(modelCentre, MyBlueprintFunctionLibrary_eventextrudeTransform_Parms), 0x0010000000000082, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_endPoint = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("endPoint"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(endPoint, MyBlueprintFunctionLibrary_eventextrudeTransform_Parms), 0x0010000000000082, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_startPoint = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("startPoint"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(startPoint, MyBlueprintFunctionLibrary_eventextrudeTransform_Parms), 0x0010000000000082, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("GCODE"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MyBlueprintFunctionLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_getAxisCoordinateCPP()
	{
		struct MyBlueprintFunctionLibrary_eventgetAxisCoordinateCPP_Parms
		{
			FString gcodeLine;
			FString axisPrefix;
			bool foundAxis;
			float ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UMyBlueprintFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("getAxisCoordinateCPP"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04422401, 65535, sizeof(MyBlueprintFunctionLibrary_eventgetAxisCoordinateCPP_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, MyBlueprintFunctionLibrary_eventgetAxisCoordinateCPP_Parms), 0x0010000000000580);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(foundAxis, MyBlueprintFunctionLibrary_eventgetAxisCoordinateCPP_Parms, bool);
			UProperty* NewProp_foundAxis = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("foundAxis"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(foundAxis, MyBlueprintFunctionLibrary_eventgetAxisCoordinateCPP_Parms), 0x0010000000000180, CPP_BOOL_PROPERTY_BITMASK(foundAxis, MyBlueprintFunctionLibrary_eventgetAxisCoordinateCPP_Parms), sizeof(bool), true);
			UProperty* NewProp_axisPrefix = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("axisPrefix"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(axisPrefix, MyBlueprintFunctionLibrary_eventgetAxisCoordinateCPP_Parms), 0x0010000000000082);
			UProperty* NewProp_gcodeLine = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("gcodeLine"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(gcodeLine, MyBlueprintFunctionLibrary_eventgetAxisCoordinateCPP_Parms), 0x0010000000000082);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("GCODE"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MyBlueprintFunctionLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_getFloat32FromByteArray()
	{
		struct MyBlueprintFunctionLibrary_eventgetFloat32FromByteArray_Parms
		{
			TArray<uint8> binaryData;
			int32 startIndex;
			float ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UMyBlueprintFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("getFloat32FromByteArray"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(MyBlueprintFunctionLibrary_eventgetFloat32FromByteArray_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, MyBlueprintFunctionLibrary_eventgetFloat32FromByteArray_Parms), 0x0010000000000580);
			UProperty* NewProp_startIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("startIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(startIndex, MyBlueprintFunctionLibrary_eventgetFloat32FromByteArray_Parms), 0x0010000000000082);
			UProperty* NewProp_binaryData = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("binaryData"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(binaryData, MyBlueprintFunctionLibrary_eventgetFloat32FromByteArray_Parms), 0x0010000000000082);
			UProperty* NewProp_binaryData_Inner = new(EC_InternalUseOnlyConstructor, NewProp_binaryData, TEXT("binaryData"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("STL"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MyBlueprintFunctionLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_getInt32FromByteArray()
	{
		struct MyBlueprintFunctionLibrary_eventgetInt32FromByteArray_Parms
		{
			TArray<uint8> binaryData;
			int32 startIndex;
			int32 ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UMyBlueprintFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("getInt32FromByteArray"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(MyBlueprintFunctionLibrary_eventgetInt32FromByteArray_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, MyBlueprintFunctionLibrary_eventgetInt32FromByteArray_Parms), 0x0010000000000580);
			UProperty* NewProp_startIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("startIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(startIndex, MyBlueprintFunctionLibrary_eventgetInt32FromByteArray_Parms), 0x0010000000000082);
			UProperty* NewProp_binaryData = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("binaryData"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(binaryData, MyBlueprintFunctionLibrary_eventgetInt32FromByteArray_Parms), 0x0010000000000082);
			UProperty* NewProp_binaryData_Inner = new(EC_InternalUseOnlyConstructor, NewProp_binaryData, TEXT("binaryData"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("STL"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MyBlueprintFunctionLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_getNewCoordinate()
	{
		struct MyBlueprintFunctionLibrary_eventgetNewCoordinate_Parms
		{
			FString gcodeLine;
			FVector lastPoint;
			bool success;
			FVector ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UMyBlueprintFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("getNewCoordinate"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04C22401, 65535, sizeof(MyBlueprintFunctionLibrary_eventgetNewCoordinate_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, MyBlueprintFunctionLibrary_eventgetNewCoordinate_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FVector());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(success, MyBlueprintFunctionLibrary_eventgetNewCoordinate_Parms, bool);
			UProperty* NewProp_success = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("success"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(success, MyBlueprintFunctionLibrary_eventgetNewCoordinate_Parms), 0x0010000000000180, CPP_BOOL_PROPERTY_BITMASK(success, MyBlueprintFunctionLibrary_eventgetNewCoordinate_Parms), sizeof(bool), true);
			UProperty* NewProp_lastPoint = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("lastPoint"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(lastPoint, MyBlueprintFunctionLibrary_eventgetNewCoordinate_Parms), 0x0010000000000082, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_gcodeLine = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("gcodeLine"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(gcodeLine, MyBlueprintFunctionLibrary_eventgetNewCoordinate_Parms), 0x0010000000000082);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("GCODE"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MyBlueprintFunctionLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_loadBinarySTL()
	{
		struct MyBlueprintFunctionLibrary_eventloadBinarySTL_Parms
		{
			FString FullFilePath;
			TArray<uint8> binaryData;
			int32 triangleCount;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UMyBlueprintFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("loadBinarySTL"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04422401, 65535, sizeof(MyBlueprintFunctionLibrary_eventloadBinarySTL_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, MyBlueprintFunctionLibrary_eventloadBinarySTL_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, MyBlueprintFunctionLibrary_eventloadBinarySTL_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, MyBlueprintFunctionLibrary_eventloadBinarySTL_Parms), sizeof(bool), true);
			UProperty* NewProp_triangleCount = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("triangleCount"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(triangleCount, MyBlueprintFunctionLibrary_eventloadBinarySTL_Parms), 0x0010000000000180);
			UProperty* NewProp_binaryData = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("binaryData"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(binaryData, MyBlueprintFunctionLibrary_eventloadBinarySTL_Parms), 0x0010000000000180);
			UProperty* NewProp_binaryData_Inner = new(EC_InternalUseOnlyConstructor, NewProp_binaryData, TEXT("binaryData"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_FullFilePath = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FullFilePath"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(FullFilePath, MyBlueprintFunctionLibrary_eventloadBinarySTL_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("STL"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MyBlueprintFunctionLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_parseBinarySTL()
	{
		struct MyBlueprintFunctionLibrary_eventparseBinarySTL_Parms
		{
			TArray<uint8> binaryData;
			int32 startingIndex;
			int32 linesToParse;
			TArray<FVector> vertexArray;
			TArray<FVector> normalArray;
			int32 newIndex;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UMyBlueprintFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("parseBinarySTL"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04422401, 65535, sizeof(MyBlueprintFunctionLibrary_eventparseBinarySTL_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, MyBlueprintFunctionLibrary_eventparseBinarySTL_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, MyBlueprintFunctionLibrary_eventparseBinarySTL_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, MyBlueprintFunctionLibrary_eventparseBinarySTL_Parms), sizeof(bool), true);
			UProperty* NewProp_newIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("newIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(newIndex, MyBlueprintFunctionLibrary_eventparseBinarySTL_Parms), 0x0010000000000180);
			UProperty* NewProp_normalArray = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("normalArray"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(normalArray, MyBlueprintFunctionLibrary_eventparseBinarySTL_Parms), 0x0010000000000180);
			UProperty* NewProp_normalArray_Inner = new(EC_InternalUseOnlyConstructor, NewProp_normalArray, TEXT("normalArray"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_vertexArray = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("vertexArray"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(vertexArray, MyBlueprintFunctionLibrary_eventparseBinarySTL_Parms), 0x0010000000000180);
			UProperty* NewProp_vertexArray_Inner = new(EC_InternalUseOnlyConstructor, NewProp_vertexArray, TEXT("vertexArray"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_linesToParse = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("linesToParse"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(linesToParse, MyBlueprintFunctionLibrary_eventparseBinarySTL_Parms), 0x0010000000000082);
			UProperty* NewProp_startingIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("startingIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(startingIndex, MyBlueprintFunctionLibrary_eventparseBinarySTL_Parms), 0x0010000000000082);
			UProperty* NewProp_binaryData = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("binaryData"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(binaryData, MyBlueprintFunctionLibrary_eventparseBinarySTL_Parms), 0x0010000000000082);
			UProperty* NewProp_binaryData_Inner = new(EC_InternalUseOnlyConstructor, NewProp_binaryData, TEXT("binaryData"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("STL"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MyBlueprintFunctionLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_parseGcode()
	{
		struct MyBlueprintFunctionLibrary_eventparseGcode_Parms
		{
			TArray<FString> gcodeArray;
			int32 prevIndex;
			int32 linesPerTick;
			FVector lastPoint;
			TArray<FPrintMoveStructCPP> moveStruct;
			int32 newIndex;
			bool completed;
			float percentageProgress;
			TArray<FPrintMoveStructCPP> ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UMyBlueprintFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("parseGcode"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04C22401, 65535, sizeof(MyBlueprintFunctionLibrary_eventparseGcode_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ReturnValue, MyBlueprintFunctionLibrary_eventparseGcode_Parms), 0x0010000000000580);
			UProperty* NewProp_ReturnValue_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ReturnValue, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FPrintMoveStructCPP());
			UProperty* NewProp_percentageProgress = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("percentageProgress"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(percentageProgress, MyBlueprintFunctionLibrary_eventparseGcode_Parms), 0x0010000000000180);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(completed, MyBlueprintFunctionLibrary_eventparseGcode_Parms, bool);
			UProperty* NewProp_completed = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("completed"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(completed, MyBlueprintFunctionLibrary_eventparseGcode_Parms), 0x0010000000000180, CPP_BOOL_PROPERTY_BITMASK(completed, MyBlueprintFunctionLibrary_eventparseGcode_Parms), sizeof(bool), true);
			UProperty* NewProp_newIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("newIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(newIndex, MyBlueprintFunctionLibrary_eventparseGcode_Parms), 0x0010000000000180);
			UProperty* NewProp_moveStruct = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("moveStruct"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(moveStruct, MyBlueprintFunctionLibrary_eventparseGcode_Parms), 0x0010000000000080);
			UProperty* NewProp_moveStruct_Inner = new(EC_InternalUseOnlyConstructor, NewProp_moveStruct, TEXT("moveStruct"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FPrintMoveStructCPP());
			UProperty* NewProp_lastPoint = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("lastPoint"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(lastPoint, MyBlueprintFunctionLibrary_eventparseGcode_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_linesPerTick = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("linesPerTick"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(linesPerTick, MyBlueprintFunctionLibrary_eventparseGcode_Parms), 0x0010000000000082);
			UProperty* NewProp_prevIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("prevIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(prevIndex, MyBlueprintFunctionLibrary_eventparseGcode_Parms), 0x0010000000000082);
			UProperty* NewProp_gcodeArray = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("gcodeArray"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(gcodeArray, MyBlueprintFunctionLibrary_eventparseGcode_Parms), 0x0010000000000082);
			UProperty* NewProp_gcodeArray_Inner = new(EC_InternalUseOnlyConstructor, NewProp_gcodeArray, TEXT("gcodeArray"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("GCODE"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MyBlueprintFunctionLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary_NoRegister()
	{
		return UMyBlueprintFunctionLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_GCODEViewer();
			OuterClass = UMyBlueprintFunctionLibrary::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100080;

				OuterClass->LinkChild(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_extrudeTransform());
				OuterClass->LinkChild(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_getAxisCoordinateCPP());
				OuterClass->LinkChild(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_getFloat32FromByteArray());
				OuterClass->LinkChild(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_getInt32FromByteArray());
				OuterClass->LinkChild(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_getNewCoordinate());
				OuterClass->LinkChild(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_loadBinarySTL());
				OuterClass->LinkChild(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_parseBinarySTL());
				OuterClass->LinkChild(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_parseGcode());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_PrintMoveEnum = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PrintMoveEnum"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(PrintMoveEnum, UMyBlueprintFunctionLibrary), 0x0010000000000005, Z_Construct_UEnum_GCODEViewer_EPrintMoveEnum());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_extrudeTransform(), "extrudeTransform"); // 4110027590
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_getAxisCoordinateCPP(), "getAxisCoordinateCPP"); // 3844589454
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_getFloat32FromByteArray(), "getFloat32FromByteArray"); // 2098516711
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_getInt32FromByteArray(), "getInt32FromByteArray"); // 1184602587
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_getNewCoordinate(), "getNewCoordinate"); // 3811042676
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_loadBinarySTL(), "loadBinarySTL"); // 3393789004
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_parseBinarySTL(), "parseBinarySTL"); // 4010274360
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_parseGcode(), "parseGcode"); // 533672629
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyBlueprintFunctionLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyBlueprintFunctionLibrary.h"));
				MetaData->SetValue(NewProp_PrintMoveEnum, TEXT("Category"), TEXT("Enum"));
				MetaData->SetValue(NewProp_PrintMoveEnum, TEXT("ModuleRelativePath"), TEXT("MyBlueprintFunctionLibrary.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyBlueprintFunctionLibrary(Z_Construct_UClass_UMyBlueprintFunctionLibrary, &UMyBlueprintFunctionLibrary::StaticClass, TEXT("UMyBlueprintFunctionLibrary"), false, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyBlueprintFunctionLibrary);
	UPackage* Z_Construct_UPackage__Script_GCODEViewer()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/GCODEViewer")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x6E015766;
			Guid.B = 0x9EA1B325;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
