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

// Function GAB_ShielderAttachPawnDies.GAB_ShielderAttachPawnDies_C.Completed_E6AA24FA40A80C2024C99E9EDD469296
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_ShielderAttachPawnDies_C::Completed_E6AA24FA40A80C2024C99E9EDD469296(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_ShielderAttachPawnDies.GAB_ShielderAttachPawnDies_C.Completed_E6AA24FA40A80C2024C99E9EDD469296");

	UGAB_ShielderAttachPawnDies_C_Completed_E6AA24FA40A80C2024C99E9EDD469296_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_ShielderAttachPawnDies.GAB_ShielderAttachPawnDies_C.Cancelled_E6AA24FA40A80C2024C99E9EDD469296
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_ShielderAttachPawnDies_C::Cancelled_E6AA24FA40A80C2024C99E9EDD469296(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_ShielderAttachPawnDies.GAB_ShielderAttachPawnDies_C.Cancelled_E6AA24FA40A80C2024C99E9EDD469296");

	UGAB_ShielderAttachPawnDies_C_Cancelled_E6AA24FA40A80C2024C99E9EDD469296_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_ShielderAttachPawnDies.GAB_ShielderAttachPawnDies_C.Triggered_E6AA24FA40A80C2024C99E9EDD469296
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_ShielderAttachPawnDies_C::Triggered_E6AA24FA40A80C2024C99E9EDD469296(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_ShielderAttachPawnDies.GAB_ShielderAttachPawnDies_C.Triggered_E6AA24FA40A80C2024C99E9EDD469296");

	UGAB_ShielderAttachPawnDies_C_Triggered_E6AA24FA40A80C2024C99E9EDD469296_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_ShielderAttachPawnDies.GAB_ShielderAttachPawnDies_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData*     EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAB_ShielderAttachPawnDies_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_ShielderAttachPawnDies.GAB_ShielderAttachPawnDies_C.K2_ActivateAbilityFromEvent");

	UGAB_ShielderAttachPawnDies_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_ShielderAttachPawnDies.GAB_ShielderAttachPawnDies_C.ExecuteUbergraph_GAB_ShielderAttachPawnDies
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_ShielderAttachPawnDies_C::ExecuteUbergraph_GAB_ShielderAttachPawnDies(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_ShielderAttachPawnDies.GAB_ShielderAttachPawnDies_C.ExecuteUbergraph_GAB_ShielderAttachPawnDies");

	UGAB_ShielderAttachPawnDies_C_ExecuteUbergraph_GAB_ShielderAttachPawnDies_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
