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

// Function GAB_SurvivorCower.GAB_SurvivorCower_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData*     EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAB_SurvivorCower_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorCower.GAB_SurvivorCower_C.K2_ActivateAbilityFromEvent");

	UGAB_SurvivorCower_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurvivorCower.GAB_SurvivorCower_C.CowerFalse
// (BlueprintCallable, BlueprintEvent)

void UGAB_SurvivorCower_C::CowerFalse()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorCower.GAB_SurvivorCower_C.CowerFalse");

	UGAB_SurvivorCower_C_CowerFalse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurvivorCower.GAB_SurvivorCower_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_SurvivorCower_C::K2_OnEndAbility(bool* bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorCower.GAB_SurvivorCower_C.K2_OnEndAbility");

	UGAB_SurvivorCower_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurvivorCower.GAB_SurvivorCower_C.ExecuteUbergraph_GAB_SurvivorCower
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_SurvivorCower_C::ExecuteUbergraph_GAB_SurvivorCower(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorCower.GAB_SurvivorCower_C.ExecuteUbergraph_GAB_SurvivorCower");

	UGAB_SurvivorCower_C_ExecuteUbergraph_GAB_SurvivorCower_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
