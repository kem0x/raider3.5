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

// Function GAB_ShielderTeleportOut.GAB_ShielderTeleportOut_C.Completed_04B647A04AB380AFDCCBD9B139883995
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_ShielderTeleportOut_C::Completed_04B647A04AB380AFDCCBD9B139883995(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_ShielderTeleportOut.GAB_ShielderTeleportOut_C.Completed_04B647A04AB380AFDCCBD9B139883995");

	UGAB_ShielderTeleportOut_C_Completed_04B647A04AB380AFDCCBD9B139883995_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_ShielderTeleportOut.GAB_ShielderTeleportOut_C.Cancelled_04B647A04AB380AFDCCBD9B139883995
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_ShielderTeleportOut_C::Cancelled_04B647A04AB380AFDCCBD9B139883995(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_ShielderTeleportOut.GAB_ShielderTeleportOut_C.Cancelled_04B647A04AB380AFDCCBD9B139883995");

	UGAB_ShielderTeleportOut_C_Cancelled_04B647A04AB380AFDCCBD9B139883995_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_ShielderTeleportOut.GAB_ShielderTeleportOut_C.Triggered_04B647A04AB380AFDCCBD9B139883995
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_ShielderTeleportOut_C::Triggered_04B647A04AB380AFDCCBD9B139883995(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_ShielderTeleportOut.GAB_ShielderTeleportOut_C.Triggered_04B647A04AB380AFDCCBD9B139883995");

	UGAB_ShielderTeleportOut_C_Triggered_04B647A04AB380AFDCCBD9B139883995_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_ShielderTeleportOut.GAB_ShielderTeleportOut_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData*     EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAB_ShielderTeleportOut_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_ShielderTeleportOut.GAB_ShielderTeleportOut_C.K2_ActivateAbilityFromEvent");

	UGAB_ShielderTeleportOut_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_ShielderTeleportOut.GAB_ShielderTeleportOut_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_ShielderTeleportOut_C::K2_OnEndAbility(bool* bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_ShielderTeleportOut.GAB_ShielderTeleportOut_C.K2_OnEndAbility");

	UGAB_ShielderTeleportOut_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_ShielderTeleportOut.GAB_ShielderTeleportOut_C.ExecuteUbergraph_GAB_ShielderTeleportOut
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_ShielderTeleportOut_C::ExecuteUbergraph_GAB_ShielderTeleportOut(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_ShielderTeleportOut.GAB_ShielderTeleportOut_C.ExecuteUbergraph_GAB_ShielderTeleportOut");

	UGAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
