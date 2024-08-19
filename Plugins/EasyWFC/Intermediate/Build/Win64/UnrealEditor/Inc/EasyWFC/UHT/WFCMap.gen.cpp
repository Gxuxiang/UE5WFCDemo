// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyWFC/Public/WFCMap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWFCMap() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	EASYWFC_API UClass* Z_Construct_UClass_AWFCMap();
	EASYWFC_API UClass* Z_Construct_UClass_AWFCMap_NoRegister();
	EASYWFC_API UClass* Z_Construct_UClass_AWFCTile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EasyWFC();
// End Cross Module References
	void AWFCMap::StaticRegisterNativesAWFCMap()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWFCMap);
	UClass* Z_Construct_UClass_AWFCMap_NoRegister()
	{
		return AWFCMap::StaticClass();
	}
	struct Z_Construct_UClass_AWFCMap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MapSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TileSize;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AllTiles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllTiles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllTiles;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InitTiles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitTiles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InitTiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectStatsTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConnectStatsTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileStatsTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TileStatsTable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWFCMap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyWFC,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWFCMap_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFCMap_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\n*/" },
#endif
		{ "IncludePath", "WFCMap.h" },
		{ "ModuleRelativePath", "Public/WFCMap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xcd\xbc" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFCMap_Statics::NewProp_MapSize_MetaData[] = {
		{ "Category", "WFCMap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\xef\xbf\xbd\xef\xbf\xbd\xd0\xa1\n" },
#endif
		{ "ModuleRelativePath", "Public/WFCMap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\xef\xbf\xbd\xef\xbf\xbd\xd0\xa1" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWFCMap_Statics::NewProp_MapSize = { "MapSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWFCMap, MapSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFCMap_Statics::NewProp_MapSize_MetaData), Z_Construct_UClass_AWFCMap_Statics::NewProp_MapSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFCMap_Statics::NewProp_TileSize_MetaData[] = {
		{ "Category", "WFCMap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc6\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/WFCMap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc6\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWFCMap_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWFCMap, TileSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFCMap_Statics::NewProp_TileSize_MetaData), Z_Construct_UClass_AWFCMap_Statics::NewProp_TileSize_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWFCMap_Statics::NewProp_AllTiles_Inner = { "AllTiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AWFCTile_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFCMap_Statics::NewProp_AllTiles_MetaData[] = {
		{ "Category", "WFCMap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xac\n" },
#endif
		{ "ModuleRelativePath", "Public/WFCMap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xac" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWFCMap_Statics::NewProp_AllTiles = { "AllTiles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWFCMap, AllTiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFCMap_Statics::NewProp_AllTiles_MetaData), Z_Construct_UClass_AWFCMap_Statics::NewProp_AllTiles_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWFCMap_Statics::NewProp_InitTiles_Inner = { "InitTiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AWFCTile_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFCMap_Statics::NewProp_InitTiles_MetaData[] = {
		{ "Category", "WFCMap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xca\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xac\n" },
#endif
		{ "ModuleRelativePath", "Public/WFCMap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xca\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xac" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWFCMap_Statics::NewProp_InitTiles = { "InitTiles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWFCMap, InitTiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFCMap_Statics::NewProp_InitTiles_MetaData), Z_Construct_UClass_AWFCMap_Statics::NewProp_InitTiles_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFCMap_Statics::NewProp_ConnectStatsTable_MetaData[] = {
		{ "Category", "WFCMap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb5\xc4\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/WFCMap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb5\xc4\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWFCMap_Statics::NewProp_ConnectStatsTable = { "ConnectStatsTable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWFCMap, ConnectStatsTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFCMap_Statics::NewProp_ConnectStatsTable_MetaData), Z_Construct_UClass_AWFCMap_Statics::NewProp_ConnectStatsTable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFCMap_Statics::NewProp_TileStatsTable_MetaData[] = {
		{ "Category", "WFCMap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xc6\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/WFCMap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc6\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWFCMap_Statics::NewProp_TileStatsTable = { "TileStatsTable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWFCMap, TileStatsTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFCMap_Statics::NewProp_TileStatsTable_MetaData), Z_Construct_UClass_AWFCMap_Statics::NewProp_TileStatsTable_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWFCMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFCMap_Statics::NewProp_MapSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFCMap_Statics::NewProp_TileSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFCMap_Statics::NewProp_AllTiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFCMap_Statics::NewProp_AllTiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFCMap_Statics::NewProp_InitTiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFCMap_Statics::NewProp_InitTiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFCMap_Statics::NewProp_ConnectStatsTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFCMap_Statics::NewProp_TileStatsTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWFCMap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWFCMap>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWFCMap_Statics::ClassParams = {
		&AWFCMap::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWFCMap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWFCMap_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFCMap_Statics::Class_MetaDataParams), Z_Construct_UClass_AWFCMap_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWFCMap_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AWFCMap()
	{
		if (!Z_Registration_Info_UClass_AWFCMap.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWFCMap.OuterSingleton, Z_Construct_UClass_AWFCMap_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWFCMap.OuterSingleton;
	}
	template<> EASYWFC_API UClass* StaticClass<AWFCMap>()
	{
		return AWFCMap::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWFCMap);
	AWFCMap::~AWFCMap() {}
	struct Z_CompiledInDeferFile_FID_Project_WFCDemo_Plugins_EasyWFC_Source_EasyWFC_Public_WFCMap_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_WFCDemo_Plugins_EasyWFC_Source_EasyWFC_Public_WFCMap_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWFCMap, AWFCMap::StaticClass, TEXT("AWFCMap"), &Z_Registration_Info_UClass_AWFCMap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWFCMap), 834126748U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_WFCDemo_Plugins_EasyWFC_Source_EasyWFC_Public_WFCMap_h_2926519672(TEXT("/Script/EasyWFC"),
		Z_CompiledInDeferFile_FID_Project_WFCDemo_Plugins_EasyWFC_Source_EasyWFC_Public_WFCMap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_WFCDemo_Plugins_EasyWFC_Source_EasyWFC_Public_WFCMap_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
