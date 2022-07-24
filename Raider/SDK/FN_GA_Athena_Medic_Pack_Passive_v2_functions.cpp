// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GA_Athena_Medic_Pack_Passive_v2.GA_Athena_Medic_Pack_Passive_v2_C.Cancelled_3447DE8E44C8D05AAE0A5B9A9A166E72
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Medic_Pack_Passive_v2_C::Cancelled_3447DE8E44C8D05AAE0A5B9A9A166E72(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Medic_Pack_Passive_v2.GA_Athena_Medic_Pack_Passive_v2_C.Cancelled_3447DE8E44C8D05AAE0A5B9A9A166E72");

	UGA_Athena_Medic_Pack_Passive_v2_C_Cancelled_3447DE8E44C8D05AAE0A5B9A9A166E72_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Medic_Pack_Passive_v2.GA_Athena_Medic_Pack_Passive_v2_C.Targeted_3447DE8E44C8D05AAE0A5B9A9A166E72
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Medic_Pack_Passive_v2_C::Targeted_3447DE8E44C8D05AAE0A5B9A9A166E72(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Medic_Pack_Passive_v2.GA_Athena_Medic_Pack_Passive_v2_C.Targeted_3447DE8E44C8D05AAE0A5B9A9A166E72");

	UGA_Athena_Medic_Pack_Passive_v2_C_Targeted_3447DE8E44C8D05AAE0A5B9A9A166E72_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Medic_Pack_Passive_v2.GA_Athena_Medic_Pack_Passive_v2_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_Medic_Pack_Passive_v2_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Medic_Pack_Passive_v2.GA_Athena_Medic_Pack_Passive_v2_C.K2_ActivateAbility");

	UGA_Athena_Medic_Pack_Passive_v2_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Medic_Pack_Passive_v2.GA_Athena_Medic_Pack_Passive_v2_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Medic_Pack_Passive_v2_C::K2_OnEndAbility(bool* bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Medic_Pack_Passive_v2.GA_Athena_Medic_Pack_Passive_v2_C.K2_OnEndAbility");

	UGA_Athena_Medic_Pack_Passive_v2_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Medic_Pack_Passive_v2.GA_Athena_Medic_Pack_Passive_v2_C.GetTarget
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Medic_Pack_Passive_v2_C::GetTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Medic_Pack_Passive_v2.GA_Athena_Medic_Pack_Passive_v2_C.GetTarget");

	UGA_Athena_Medic_Pack_Passive_v2_C_GetTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Medic_Pack_Passive_v2.GA_Athena_Medic_Pack_Passive_v2_C.ClientUpdate
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_Medic_Pack_Passive_v2_C::ClientUpdate(const struct FGameplayAbilityTargetDataHandle& TargetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Medic_Pack_Passive_v2.GA_Athena_Medic_Pack_Passive_v2_C.ClientUpdate");

	UGA_Athena_Medic_Pack_Passive_v2_C_ClientUpdate_Params params;
	params.TargetData = TargetData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Medic_Pack_Passive_v2.GA_Athena_Medic_Pack_Passive_v2_C.UpdateBoth
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_Medic_Pack_Passive_v2_C::UpdateBoth(const struct FGameplayAbilityTargetDataHandle& TargetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Medic_Pack_Passive_v2.GA_Athena_Medic_Pack_Passive_v2_C.UpdateBoth");

	UGA_Athena_Medic_Pack_Passive_v2_C_UpdateBoth_Params params;
	params.TargetData = TargetData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Medic_Pack_Passive_v2.GA_Athena_Medic_Pack_Passive_v2_C.ExecuteUbergraph_GA_Athena_Medic_Pack_Passive_v2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Medic_Pack_Passive_v2_C::ExecuteUbergraph_GA_Athena_Medic_Pack_Passive_v2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Medic_Pack_Passive_v2.GA_Athena_Medic_Pack_Passive_v2_C.ExecuteUbergraph_GA_Athena_Medic_Pack_Passive_v2");

	UGA_Athena_Medic_Pack_Passive_v2_C_ExecuteUbergraph_GA_Athena_Medic_Pack_Passive_v2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
