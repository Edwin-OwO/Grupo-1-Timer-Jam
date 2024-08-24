// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimerJam1C/TimerJam1CGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimerJam1CGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TIMERJAM1C_API UClass* Z_Construct_UClass_ATimerJam1CGameMode();
	TIMERJAM1C_API UClass* Z_Construct_UClass_ATimerJam1CGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TimerJam1C();
// End Cross Module References
	void ATimerJam1CGameMode::StaticRegisterNativesATimerJam1CGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATimerJam1CGameMode);
	UClass* Z_Construct_UClass_ATimerJam1CGameMode_NoRegister()
	{
		return ATimerJam1CGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATimerJam1CGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATimerJam1CGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TimerJam1C,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATimerJam1CGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimerJam1CGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TimerJam1CGameMode.h" },
		{ "ModuleRelativePath", "TimerJam1CGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATimerJam1CGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATimerJam1CGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATimerJam1CGameMode_Statics::ClassParams = {
		&ATimerJam1CGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimerJam1CGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATimerJam1CGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATimerJam1CGameMode()
	{
		if (!Z_Registration_Info_UClass_ATimerJam1CGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATimerJam1CGameMode.OuterSingleton, Z_Construct_UClass_ATimerJam1CGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATimerJam1CGameMode.OuterSingleton;
	}
	template<> TIMERJAM1C_API UClass* StaticClass<ATimerJam1CGameMode>()
	{
		return ATimerJam1CGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATimerJam1CGameMode);
	ATimerJam1CGameMode::~ATimerJam1CGameMode() {}
	struct Z_CompiledInDeferFile_FID_TimerJam1C_Source_TimerJam1C_TimerJam1CGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TimerJam1C_Source_TimerJam1C_TimerJam1CGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATimerJam1CGameMode, ATimerJam1CGameMode::StaticClass, TEXT("ATimerJam1CGameMode"), &Z_Registration_Info_UClass_ATimerJam1CGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATimerJam1CGameMode), 2246641315U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TimerJam1C_Source_TimerJam1C_TimerJam1CGameMode_h_1392206827(TEXT("/Script/TimerJam1C"),
		Z_CompiledInDeferFile_FID_TimerJam1C_Source_TimerJam1C_TimerJam1CGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TimerJam1C_Source_TimerJam1C_TimerJam1CGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
