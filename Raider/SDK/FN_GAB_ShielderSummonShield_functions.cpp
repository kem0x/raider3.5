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

// Function GAB_ShielderSummonShield.GAB_ShielderSummonShield_C.Completed_A740968F4C3C1AF2475795BD1818ADA3
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_ShielderSummonShield_C::Completed_A740968F4C3C1AF2475795BD1818ADA3(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_ShielderSummonShield.GAB_ShielderSummonShield_C.Completed_A740968F4C3C1AF2475795BD1818ADA3");

	UGAB_ShielderSummonShield_C_Completed_A740968F4C3C1AF2475795BD1818ADA3_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_ShielderSummonShield.GAB_ShielderSummonShield_C.Cancelled_A740968F4C3C1AF2475795BD1818ADA3
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_ShielderSummonShield_C::Cancelled_A740968F4C3C1AF2475795BD1818ADA3(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_ShielderSummonShield.GAB_ShielderSummonShield_C.Cancelled_A740968F4C3C1AF2475795BD1818ADA3");

	UGAB_ShielderSummonShield_C_Cancelled_A740968F4C3C1AF2475795BD1818ADA3_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_ShielderSummonShield.GAB_ShielderSummonShield_C.Triggered_A740968F4C3C1AF2475795BD1818ADA3
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_ShielderSummonShield_C::Triggered_A740968F4C3C1AF2475795BD1818ADA3(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_ShielderSummonShield.GAB_ShielderSummonShield_C.Triggered_A740968F4C3C1AF2475795BD1818ADA3");

	UGAB_ShielderSummonShield_C_Triggered_A740968F4C3C1AF2475795BD1818ADA3_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_ShielderSummonShield.GAB_ShielderSummonShield_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData*     EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAB_ShielderSummonShield_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_ShielderSummonShield.GAB_ShielderSummonShield_C.K2_ActivateAbilityFromEvent");

	UGAB_ShielderSummonShield_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_ShielderSummonShield.GAB_ShielderSummonShield_C.ExecuteUbergraph_GAB_ShielderSummonShield
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_ShielderSummonShield_C::ExecuteUbergraph_GAB_ShielderSummonShield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_ShielderSummonShield.GAB_ShielderSummonShield_C.ExecuteUbergraph_GAB_ShielderSummonShield");

	UGAB_ShielderSummonShield_C_ExecuteUbergraph_GAB_ShielderSummonShield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
