#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.RandomAttachAnimation
struct UGAB_HuskAttachedToShield_C_RandomAttachAnimation_Params
{
	struct FName                                       AnimName;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.Completed_D35D9F8942008716C246249F1CAEFA6B
struct UGAB_HuskAttachedToShield_C_Completed_D35D9F8942008716C246249F1CAEFA6B_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.Cancelled_D35D9F8942008716C246249F1CAEFA6B
struct UGAB_HuskAttachedToShield_C_Cancelled_D35D9F8942008716C246249F1CAEFA6B_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.Triggered_D35D9F8942008716C246249F1CAEFA6B
struct UGAB_HuskAttachedToShield_C_Triggered_D35D9F8942008716C246249F1CAEFA6B_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.Completed_78AC59B04D2A0FC3F2FAAE96D1D2DB13
struct UGAB_HuskAttachedToShield_C_Completed_78AC59B04D2A0FC3F2FAAE96D1D2DB13_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.Cancelled_78AC59B04D2A0FC3F2FAAE96D1D2DB13
struct UGAB_HuskAttachedToShield_C_Cancelled_78AC59B04D2A0FC3F2FAAE96D1D2DB13_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.Triggered_78AC59B04D2A0FC3F2FAAE96D1D2DB13
struct UGAB_HuskAttachedToShield_C_Triggered_78AC59B04D2A0FC3F2FAAE96D1D2DB13_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.K2_ActivateAbilityFromEvent
struct UGAB_HuskAttachedToShield_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.EndAbilityFromTimer
struct UGAB_HuskAttachedToShield_C_EndAbilityFromTimer_Params
{
};

// Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.K2_OnEndAbility
struct UGAB_HuskAttachedToShield_C_K2_OnEndAbility_Params
{
	bool*                                              bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.ExecuteUbergraph_GAB_HuskAttachedToShield
struct UGAB_HuskAttachedToShield_C_ExecuteUbergraph_GAB_HuskAttachedToShield_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
