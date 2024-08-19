// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyWFC/Public/WFCTile.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWFCTile() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	EASYWFC_API UClass* Z_Construct_UClass_AWFCTile();
	EASYWFC_API UClass* Z_Construct_UClass_AWFCTile_NoRegister();
	EASYWFC_API UScriptStruct* Z_Construct_UScriptStruct_FConnectType();
	EASYWFC_API UScriptStruct* Z_Construct_UScriptStruct_FTileType();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_EasyWFC();
// End Cross Module References

static_assert(std::is_polymorphic<FConnectType>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FConnectType cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConnectType;
class UScriptStruct* FConnectType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConnectType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConnectType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConnectType, (UObject*)Z_Construct_UPackage__Script_EasyWFC(), TEXT("ConnectType"));
	}
	return Z_Registration_Info_UScriptStruct_ConnectType.OuterSingleton;
}
template<> EASYWFC_API UScriptStruct* StaticStruct<FConnectType>()
{
	return FConnectType::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConnectType_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanConnectID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CanConnectID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConnectType_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WFCTile.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConnectType_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConnectType>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConnectType_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "WFC" },
		{ "ModuleRelativePath", "Public/WFCTile.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConnectType_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConnectType, ID), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectType_Statics::NewProp_ID_MetaData), Z_Construct_UScriptStruct_FConnectType_Statics::NewProp_ID_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConnectType_Statics::NewProp_CanConnectID_MetaData[] = {
		{ "Category", "WFC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb4\xcb\xb1\xdf\xb5\xc4\xb1\xef\xbf\xbdID\n" },
#endif
		{ "ModuleRelativePath", "Public/WFCTile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb4\xcb\xb1\xdf\xb5\xc4\xb1\xef\xbf\xbdID" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConnectType_Statics::NewProp_CanConnectID = { "CanConnectID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConnectType, CanConnectID), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectType_Statics::NewProp_CanConnectID_MetaData), Z_Construct_UScriptStruct_FConnectType_Statics::NewProp_CanConnectID_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConnectType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConnectType_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConnectType_Statics::NewProp_CanConnectID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConnectType_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyWFC,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ConnectType",
		Z_Construct_UScriptStruct_FConnectType_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectType_Statics::PropPointers),
		sizeof(FConnectType),
		alignof(FConnectType),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectType_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConnectType_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectType_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FConnectType()
	{
		if (!Z_Registration_Info_UScriptStruct_ConnectType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConnectType.InnerSingleton, Z_Construct_UScriptStruct_FConnectType_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConnectType.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTileType>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FTileType cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TileType;
class UScriptStruct* FTileType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TileType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TileType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTileType, (UObject*)Z_Construct_UPackage__Script_EasyWFC(), TEXT("TileType"));
	}
	return Z_Registration_Info_UScriptStruct_TileType.OuterSingleton;
}
template<> EASYWFC_API UScriptStruct* StaticStruct<FTileType>()
{
	return FTileType::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTileType_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionOfRotation_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DirectionOfRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Connect_L_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Connect_L_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Connect_R_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Connect_R_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Connect_F_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Connect_F_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Connect_B_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Connect_B_ID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileType_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WFCTile.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTileType_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTileType>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileType_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "WFC" },
		{ "ModuleRelativePath", "Public/WFCTile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTileType_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTileType, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileType_Statics::NewProp_Mesh_MetaData), Z_Construct_UScriptStruct_FTileType_Statics::NewProp_Mesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileType_Statics::NewProp_DirectionOfRotation_MetaData[] = {
		{ "Category", "WFC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xd7\xaa\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (0=\xef\xbf\xbd\xef\xbf\xbd, 1=\xef\xbf\xbd\xef\xbf\xbd, 2=\xef\xbf\xbd\xef\xbf\xbd, 3=\xef\xbf\xbd\xef\xbf\xbd) */" },
#endif
		{ "ModuleRelativePath", "Public/WFCTile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xd7\xaa\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (0=\xef\xbf\xbd\xef\xbf\xbd, 1=\xef\xbf\xbd\xef\xbf\xbd, 2=\xef\xbf\xbd\xef\xbf\xbd, 3=\xef\xbf\xbd\xef\xbf\xbd)" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTileType_Statics::NewProp_DirectionOfRotation = { "DirectionOfRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTileType, DirectionOfRotation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileType_Statics::NewProp_DirectionOfRotation_MetaData), Z_Construct_UScriptStruct_FTileType_Statics::NewProp_DirectionOfRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileType_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "WFC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xc8\xa8\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/WFCTile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc8\xa8\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTileType_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTileType, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileType_Statics::NewProp_Weight_MetaData), Z_Construct_UScriptStruct_FTileType_Statics::NewProp_Weight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileType_Statics::NewProp_Connect_L_ID_MetaData[] = {
		{ "Category", "WFC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb1\xef\xbf\xbd\n// \xef\xbf\xbd\xef\xbf\xbd\xdf\xb5\xc4\xb1\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/WFCTile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb1\xef\xbf\xbd\n\xef\xbf\xbd\xef\xbf\xbd\xdf\xb5\xc4\xb1\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTileType_Statics::NewProp_Connect_L_ID = { "Connect_L_ID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTileType, Connect_L_ID), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileType_Statics::NewProp_Connect_L_ID_MetaData), Z_Construct_UScriptStruct_FTileType_Statics::NewProp_Connect_L_ID_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileType_Statics::NewProp_Connect_R_ID_MetaData[] = {
		{ "Category", "WFC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xd2\xb1\xdf\xb5\xc4\xb1\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/WFCTile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd2\xb1\xdf\xb5\xc4\xb1\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTileType_Statics::NewProp_Connect_R_ID = { "Connect_R_ID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTileType, Connect_R_ID), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileType_Statics::NewProp_Connect_R_ID_MetaData), Z_Construct_UScriptStruct_FTileType_Statics::NewProp_Connect_R_ID_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileType_Statics::NewProp_Connect_F_ID_MetaData[] = {
		{ "Category", "WFC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xc7\xb0\xef\xbf\xbd\xef\xbf\xbd\xdf\xb5\xc4\xb1\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/WFCTile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc7\xb0\xef\xbf\xbd\xef\xbf\xbd\xdf\xb5\xc4\xb1\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTileType_Statics::NewProp_Connect_F_ID = { "Connect_F_ID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTileType, Connect_F_ID), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileType_Statics::NewProp_Connect_F_ID_MetaData), Z_Construct_UScriptStruct_FTileType_Statics::NewProp_Connect_F_ID_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileType_Statics::NewProp_Connect_B_ID_MetaData[] = {
		{ "Category", "WFC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xb5\xc4\xb1\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/WFCTile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xb5\xc4\xb1\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTileType_Statics::NewProp_Connect_B_ID = { "Connect_B_ID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTileType, Connect_B_ID), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileType_Statics::NewProp_Connect_B_ID_MetaData), Z_Construct_UScriptStruct_FTileType_Statics::NewProp_Connect_B_ID_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTileType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileType_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileType_Statics::NewProp_DirectionOfRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileType_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileType_Statics::NewProp_Connect_L_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileType_Statics::NewProp_Connect_R_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileType_Statics::NewProp_Connect_F_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileType_Statics::NewProp_Connect_B_ID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTileType_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyWFC,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"TileType",
		Z_Construct_UScriptStruct_FTileType_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileType_Statics::PropPointers),
		sizeof(FTileType),
		alignof(FTileType),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileType_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTileType_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileType_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTileType()
	{
		if (!Z_Registration_Info_UScriptStruct_TileType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TileType.InnerSingleton, Z_Construct_UScriptStruct_FTileType_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TileType.InnerSingleton;
	}
	void AWFCTile::StaticRegisterNativesAWFCTile()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWFCTile);
	UClass* Z_Construct_UClass_AWFCTile_NoRegister()
	{
		return AWFCTile::StaticClass();
	}
	struct Z_Construct_UClass_AWFCTile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapCoordinate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MapCoordinate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entropy_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Entropy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCollapsed_MetaData[];
#endif
		static void NewProp_bIsCollapsed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCollapsed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollapseState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollapseState;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaybeStates_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaybeStates_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaybeStates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWFCTile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyWFC,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWFCTile_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFCTile_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n \xef\xbf\xbd\xef\xbf\xbd\xcd\xbc \xef\xbf\xbd\xef\xbf\xbd\xc6\xac\n*/" },
#endif
		{ "IncludePath", "WFCTile.h" },
		{ "ModuleRelativePath", "Public/WFCTile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc \xef\xbf\xbd\xef\xbf\xbd\xc6\xac" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFCTile_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "WFC" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WFCTile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWFCTile_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWFCTile, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFCTile_Statics::NewProp_StaticMeshComponent_MetaData), Z_Construct_UClass_AWFCTile_Statics::NewProp_StaticMeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFCTile_Statics::NewProp_MapCoordinate_MetaData[] = {
		{ "Category", "WFC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xc6\xac\xef\xbf\xbd\xda\xb5\xef\xbf\xbd\xcd\xbc\xef\xbf\xbd\xcf\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Public/WFCTile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc6\xac\xef\xbf\xbd\xda\xb5\xef\xbf\xbd\xcd\xbc\xef\xbf\xbd\xcf\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWFCTile_Statics::NewProp_MapCoordinate = { "MapCoordinate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWFCTile, MapCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFCTile_Statics::NewProp_MapCoordinate_MetaData), Z_Construct_UClass_AWFCTile_Statics::NewProp_MapCoordinate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFCTile_Statics::NewProp_Entropy_MetaData[] = {
		{ "Category", "WFC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xd6\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdWave Function Collapse\xef\xbf\xbd\xe3\xb7\xa8 */" },
#endif
		{ "ModuleRelativePath", "Public/WFCTile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xd6\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdWave Function Collapse\xef\xbf\xbd\xe3\xb7\xa8" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWFCTile_Statics::NewProp_Entropy = { "Entropy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWFCTile, Entropy), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFCTile_Statics::NewProp_Entropy_MetaData), Z_Construct_UClass_AWFCTile_Statics::NewProp_Entropy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFCTile_Statics::NewProp_bIsCollapsed_MetaData[] = {
		{ "Category", "WFC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xca\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xac\xef\xbf\xbd\xc7\xb7\xef\xbf\xbd\xef\xbf\xbd\xd1\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Public/WFCTile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xca\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xac\xef\xbf\xbd\xc7\xb7\xef\xbf\xbd\xef\xbf\xbd\xd1\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	void Z_Construct_UClass_AWFCTile_Statics::NewProp_bIsCollapsed_SetBit(void* Obj)
	{
		((AWFCTile*)Obj)->bIsCollapsed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWFCTile_Statics::NewProp_bIsCollapsed = { "bIsCollapsed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWFCTile), &Z_Construct_UClass_AWFCTile_Statics::NewProp_bIsCollapsed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFCTile_Statics::NewProp_bIsCollapsed_MetaData), Z_Construct_UClass_AWFCTile_Statics::NewProp_bIsCollapsed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFCTile_Statics::NewProp_CollapseState_MetaData[] = {
		{ "Category", "WFC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdd\xb5\xef\xbf\xbd\xd7\xb4\xcc\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb1\xef\xbf\xbd + \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd + \xef\xbf\xbd\xef\xbf\xbd\xd7\xaa\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Public/WFCTile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdd\xb5\xef\xbf\xbd\xd7\xb4\xcc\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb1\xef\xbf\xbd + \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd + \xef\xbf\xbd\xef\xbf\xbd\xd7\xaa\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWFCTile_Statics::NewProp_CollapseState = { "CollapseState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWFCTile, CollapseState), Z_Construct_UScriptStruct_FTileType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFCTile_Statics::NewProp_CollapseState_MetaData), Z_Construct_UClass_AWFCTile_Statics::NewProp_CollapseState_MetaData) }; // 2806207001
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWFCTile_Statics::NewProp_MaybeStates_Inner = { "MaybeStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTileType, METADATA_PARAMS(0, nullptr) }; // 2806207001
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFCTile_Statics::NewProp_MaybeStates_MetaData[] = {
		{ "Category", "WFC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdc\xb5\xef\xbf\xbd\xd7\xb4\xcc\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Public/WFCTile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdc\xb5\xef\xbf\xbd\xd7\xb4\xcc\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWFCTile_Statics::NewProp_MaybeStates = { "MaybeStates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWFCTile, MaybeStates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFCTile_Statics::NewProp_MaybeStates_MetaData), Z_Construct_UClass_AWFCTile_Statics::NewProp_MaybeStates_MetaData) }; // 2806207001
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWFCTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFCTile_Statics::NewProp_StaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFCTile_Statics::NewProp_MapCoordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFCTile_Statics::NewProp_Entropy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFCTile_Statics::NewProp_bIsCollapsed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFCTile_Statics::NewProp_CollapseState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFCTile_Statics::NewProp_MaybeStates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFCTile_Statics::NewProp_MaybeStates,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWFCTile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWFCTile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWFCTile_Statics::ClassParams = {
		&AWFCTile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWFCTile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWFCTile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFCTile_Statics::Class_MetaDataParams), Z_Construct_UClass_AWFCTile_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWFCTile_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AWFCTile()
	{
		if (!Z_Registration_Info_UClass_AWFCTile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWFCTile.OuterSingleton, Z_Construct_UClass_AWFCTile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWFCTile.OuterSingleton;
	}
	template<> EASYWFC_API UClass* StaticClass<AWFCTile>()
	{
		return AWFCTile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWFCTile);
	AWFCTile::~AWFCTile() {}
	struct Z_CompiledInDeferFile_FID_Project_WFCDemo_Plugins_EasyWFC_Source_EasyWFC_Public_WFCTile_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_WFCDemo_Plugins_EasyWFC_Source_EasyWFC_Public_WFCTile_h_Statics::ScriptStructInfo[] = {
		{ FConnectType::StaticStruct, Z_Construct_UScriptStruct_FConnectType_Statics::NewStructOps, TEXT("ConnectType"), &Z_Registration_Info_UScriptStruct_ConnectType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConnectType), 2362687830U) },
		{ FTileType::StaticStruct, Z_Construct_UScriptStruct_FTileType_Statics::NewStructOps, TEXT("TileType"), &Z_Registration_Info_UScriptStruct_TileType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTileType), 2806207001U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_WFCDemo_Plugins_EasyWFC_Source_EasyWFC_Public_WFCTile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWFCTile, AWFCTile::StaticClass, TEXT("AWFCTile"), &Z_Registration_Info_UClass_AWFCTile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWFCTile), 3369089330U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_WFCDemo_Plugins_EasyWFC_Source_EasyWFC_Public_WFCTile_h_2320285339(TEXT("/Script/EasyWFC"),
		Z_CompiledInDeferFile_FID_Project_WFCDemo_Plugins_EasyWFC_Source_EasyWFC_Public_WFCTile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_WFCDemo_Plugins_EasyWFC_Source_EasyWFC_Public_WFCTile_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Project_WFCDemo_Plugins_EasyWFC_Source_EasyWFC_Public_WFCTile_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_WFCDemo_Plugins_EasyWFC_Source_EasyWFC_Public_WFCTile_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
