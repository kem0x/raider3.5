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

// Function GA_Constructor_HammerHitsHeal.GA_Constructor_HammerHitsHeal_C.SetupAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent** AbilitySystem                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGA_Constructor_HammerHitsHeal_C::SetupAbility(class UAbilitySystemComponent** AbilitySystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_HammerHitsHeal.GA_Constructor_HammerHitsHeal_C.SetupAbility");

	UGA_Constructor_HammerHitsHeal_C_SetupAbility_Params params;
	params.AbilitySystem = AbilitySystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_HammerHitsHeal.GA_Constructor_HammerHitsHeal_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityActorInfo* ActorInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayEventData*     Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGA_Constructor_HammerHitsHeal_C::K2_ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayEventData* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_HammerHitsHeal.GA_Constructor_HammerHitsHeal_C.K2_ShouldAbilityRespondToEvent");

	UGA_Constructor_HammerHitsHeal_C_K2_ShouldAbilityRespondToEvent_Params params;
	params.ActorInfo = ActorInfo;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_Constructor_HammerHitsHeal.GA_Constructor_HammerHitsHeal_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData*     EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Constructor_HammerHitsHeal_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_HammerHitsHeal.GA_Constructor_HammerHitsHeal_C.K2_ActivateAbilityFromEvent");

	UGA_Constructor_HammerHitsHeal_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_HammerHitsHeal.GA_Constructor_HammerHitsHeal_C.ExecuteUbergraph_GA_Constructor_HammerHitsHeal
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Constructor_HammerHitsHeal_C::ExecuteUbergraph_GA_Constructor_HammerHitsHeal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_HammerHitsHeal.GA_Constructor_HammerHitsHeal_C.ExecuteUbergraph_GA_Constructor_HammerHitsHeal");

	UGA_Constructor_HammerHitsHeal_C_ExecuteUbergraph_GA_Constructor_HammerHitsHeal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
