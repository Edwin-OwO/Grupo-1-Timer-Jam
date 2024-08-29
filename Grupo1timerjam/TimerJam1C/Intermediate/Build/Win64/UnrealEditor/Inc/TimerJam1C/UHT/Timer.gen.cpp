// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimerJam1C/Public/Timer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	TIMERJAM1C_API UClass* Z_Construct_UClass_UTimer();
	TIMERJAM1C_API UClass* Z_Construct_UClass_UTimer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TimerJam1C();
// End Cross Module References
	void UTimer::StaticRegisterNativesUTimer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTimer);
	UClass* Z_Construct_UClass_UTimer_NoRegister()
	{
		return UTimer::StaticClass();
	}
	struct Z_Construct_UClass_UTimer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Minutes_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Minutes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seconds_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TimerJam1C,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTimer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Timer.h" },
		{ "ModuleRelativePath", "Public/Timer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimer_Statics::NewProp_Minutes_MetaData[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "Public/Timer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTimer_Statics::NewProp_Minutes = { "Minutes", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTimer, Minutes), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTimer_Statics::NewProp_Minutes_MetaData), Z_Construct_UClass_UTimer_Statics::NewProp_Minutes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimer_Statics::NewProp_Seconds_MetaData[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "Public/Timer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTimer_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTimer, Seconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTimer_Statics::NewProp_Seconds_MetaData), Z_Construct_UClass_UTimer_Statics::NewProp_Seconds_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTimer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimer_Statics::NewProp_Minutes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimer_Statics::NewProp_Seconds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTimer_Statics::ClassParams = {
		&UTimer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTimer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTimer_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTimer_Statics::Class_MetaDataParams), Z_Construct_UClass_UTimer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTimer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTimer()
	{
		if (!Z_Registration_Info_UClass_UTimer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTimer.OuterSingleton, Z_Construct_UClass_UTimer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTimer.OuterSingleton;
	}
	template<> TIMERJAM1C_API UClass* StaticClass<UTimer>()
	{
		return UTimer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimer);
	UTimer::~UTimer() {}
	struct Z_CompiledInDeferFile_FID_Grupo_1_Timer_Jam_Grupo1timerjam_TimerJam1C_Source_TimerJam1C_Public_Timer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Grupo_1_Timer_Jam_Grupo1timerjam_TimerJam1C_Source_TimerJam1C_Public_Timer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTimer, UTimer::StaticClass, TEXT("UTimer"), &Z_Registration_Info_UClass_UTimer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTimer), 2945084546U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Grupo_1_Timer_Jam_Grupo1timerjam_TimerJam1C_Source_TimerJam1C_Public_Timer_h_1395068108(TEXT("/Script/TimerJam1C"),
		Z_CompiledInDeferFile_FID_Grupo_1_Timer_Jam_Grupo1timerjam_TimerJam1C_Source_TimerJam1C_Public_Timer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Grupo_1_Timer_Jam_Grupo1timerjam_TimerJam1C_Source_TimerJam1C_Public_Timer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
