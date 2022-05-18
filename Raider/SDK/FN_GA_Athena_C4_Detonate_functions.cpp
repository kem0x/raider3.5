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

// Function GA_Athena_C4_Detonate.GA_Athena_C4_Detonate_C.Cancelled_0FC6F3A9476E143A48E14F9AC0AF6604
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_C4_Detonate_C::Cancelled_0FC6F3A9476E143A48E14F9AC0AF6604(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_C4_Detonate.GA_Athena_C4_Detonate_C.Cancelled_0FC6F3A9476E143A48E14F9AC0AF6604");

	UGA_Athena_C4_Detonate_C_Cancelled_0FC6F3A9476E143A48E14F9AC0AF6604_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_C4_Detonate.GA_Athena_C4_Detonate_C.Targeted_0FC6F3A9476E143A48E14F9AC0AF6604
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_C4_Detonate_C::Targeted_0FC6F3A9476E143A48E14F9AC0AF6604(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_C4_Detonate.GA_Athena_C4_Detonate_C.Targeted_0FC6F3A9476E143A48E14F9AC0AF6604");

	UGA_Athena_C4_Detonate_C_Targeted_0FC6F3A9476E143A48E14F9AC0AF6604_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_C4_Detonate.GA_Athena_C4_Detonate_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData*     EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_C4_Detonate_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_C4_Detonate.GA_Athena_C4_Detonate_C.K2_ActivateAbilityFromEvent");

	UGA_Athena_C4_Detonate_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_C4_Detonate.GA_Athena_C4_Detonate_C.ExecuteUbergraph_GA_Athena_C4_Detonate
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_C4_Detonate_C::ExecuteUbergraph_GA_Athena_C4_Detonate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_C4_Detonate.GA_Athena_C4_Detonate_C.ExecuteUbergraph_GA_Athena_C4_Detonate");

	UGA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
