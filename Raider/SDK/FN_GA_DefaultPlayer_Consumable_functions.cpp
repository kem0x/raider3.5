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

// Function GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.Completed_A3A081314405D22C4EED5CB989DC8CB1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_DefaultPlayer_Consumable_C::Completed_A3A081314405D22C4EED5CB989DC8CB1(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.Completed_A3A081314405D22C4EED5CB989DC8CB1");

	UGA_DefaultPlayer_Consumable_C_Completed_A3A081314405D22C4EED5CB989DC8CB1_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.Cancelled_A3A081314405D22C4EED5CB989DC8CB1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_DefaultPlayer_Consumable_C::Cancelled_A3A081314405D22C4EED5CB989DC8CB1(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.Cancelled_A3A081314405D22C4EED5CB989DC8CB1");

	UGA_DefaultPlayer_Consumable_C_Cancelled_A3A081314405D22C4EED5CB989DC8CB1_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.Triggered_A3A081314405D22C4EED5CB989DC8CB1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_DefaultPlayer_Consumable_C::Triggered_A3A081314405D22C4EED5CB989DC8CB1(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.Triggered_A3A081314405D22C4EED5CB989DC8CB1");

	UGA_DefaultPlayer_Consumable_C_Triggered_A3A081314405D22C4EED5CB989DC8CB1_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData*     EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_DefaultPlayer_Consumable_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.K2_ActivateAbilityFromEvent");

	UGA_DefaultPlayer_Consumable_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.ExecuteUbergraph_GA_DefaultPlayer_Consumable
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_DefaultPlayer_Consumable_C::ExecuteUbergraph_GA_DefaultPlayer_Consumable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.ExecuteUbergraph_GA_DefaultPlayer_Consumable");

	UGA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
