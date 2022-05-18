// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GAB_AIBaseSimpleMontage.GAB_AIBaseSimpleMontage_C.Completed_19E6A1264ED43B37D77327A113073715
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_AIBaseSimpleMontage_C::Completed_19E6A1264ED43B37D77327A113073715(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_AIBaseSimpleMontage.GAB_AIBaseSimpleMontage_C.Completed_19E6A1264ED43B37D77327A113073715");

	UGAB_AIBaseSimpleMontage_C_Completed_19E6A1264ED43B37D77327A113073715_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_AIBaseSimpleMontage.GAB_AIBaseSimpleMontage_C.Cancelled_19E6A1264ED43B37D77327A113073715
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_AIBaseSimpleMontage_C::Cancelled_19E6A1264ED43B37D77327A113073715(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_AIBaseSimpleMontage.GAB_AIBaseSimpleMontage_C.Cancelled_19E6A1264ED43B37D77327A113073715");

	UGAB_AIBaseSimpleMontage_C_Cancelled_19E6A1264ED43B37D77327A113073715_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_AIBaseSimpleMontage.GAB_AIBaseSimpleMontage_C.Triggered_19E6A1264ED43B37D77327A113073715
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_AIBaseSimpleMontage_C::Triggered_19E6A1264ED43B37D77327A113073715(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_AIBaseSimpleMontage.GAB_AIBaseSimpleMontage_C.Triggered_19E6A1264ED43B37D77327A113073715");

	UGAB_AIBaseSimpleMontage_C_Triggered_19E6A1264ED43B37D77327A113073715_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_AIBaseSimpleMontage.GAB_AIBaseSimpleMontage_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAB_AIBaseSimpleMontage_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_AIBaseSimpleMontage.GAB_AIBaseSimpleMontage_C.K2_ActivateAbility");

	UGAB_AIBaseSimpleMontage_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_AIBaseSimpleMontage.GAB_AIBaseSimpleMontage_C.ExecuteUbergraph_GAB_AIBaseSimpleMontage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_AIBaseSimpleMontage_C::ExecuteUbergraph_GAB_AIBaseSimpleMontage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_AIBaseSimpleMontage.GAB_AIBaseSimpleMontage_C.ExecuteUbergraph_GAB_AIBaseSimpleMontage");

	UGAB_AIBaseSimpleMontage_C_ExecuteUbergraph_GAB_AIBaseSimpleMontage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
