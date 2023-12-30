// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOMS_init() {}
	OMS_API UFunction* Z_Construct_UDelegateFunction_OMS_MultiplayerOnCreateSessionComplete__DelegateSignature();
	OMS_API UFunction* Z_Construct_UDelegateFunction_OMS_MultiplayerOnDestroySessionComplete__DelegateSignature();
	OMS_API UFunction* Z_Construct_UDelegateFunction_OMS_MultiplayerOnStartSessionComplete__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_OMS;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_OMS()
	{
		if (!Z_Registration_Info_UPackage__Script_OMS.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_OMS_MultiplayerOnCreateSessionComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OMS_MultiplayerOnDestroySessionComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OMS_MultiplayerOnStartSessionComplete__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/OMS",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xAC75544A,
				0xA1C07F2D,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_OMS.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_OMS.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_OMS(Z_Construct_UPackage__Script_OMS, TEXT("/Script/OMS"), Z_Registration_Info_UPackage__Script_OMS, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xAC75544A, 0xA1C07F2D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
