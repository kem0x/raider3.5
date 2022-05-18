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

// Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.Completed_8BD132F745BDCD15EBF232861F392E7B
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_SurvivorRescue_C::Completed_8BD132F745BDCD15EBF232861F392E7B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.Completed_8BD132F745BDCD15EBF232861F392E7B");

	UGAB_SurvivorRescue_C_Completed_8BD132F745BDCD15EBF232861F392E7B_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.Cancelled_8BD132F745BDCD15EBF232861F392E7B
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_SurvivorRescue_C::Cancelled_8BD132F745BDCD15EBF232861F392E7B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.Cancelled_8BD132F745BDCD15EBF232861F392E7B");

	UGAB_SurvivorRescue_C_Cancelled_8BD132F745BDCD15EBF232861F392E7B_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.Triggered_8BD132F745BDCD15EBF232861F392E7B
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_SurvivorRescue_C::Triggered_8BD132F745BDCD15EBF232861F392E7B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.Triggered_8BD132F745BDCD15EBF232861F392E7B");

	UGAB_SurvivorRescue_C_Triggered_8BD132F745BDCD15EBF232861F392E7B_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.EventReceived_AE3E49574CEC70DFC62B01973CCF7515
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_SurvivorRescue_C::EventReceived_AE3E49574CEC70DFC62B01973CCF7515(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.EventReceived_AE3E49574CEC70DFC62B01973CCF7515");

	UGAB_SurvivorRescue_C_EventReceived_AE3E49574CEC70DFC62B01973CCF7515_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData*     EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAB_SurvivorRescue_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.K2_ActivateAbilityFromEvent");

	UGAB_SurvivorRescue_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.SpawnVictoryDrone
// (BlueprintCallable, BlueprintEvent)

void UGAB_SurvivorRescue_C::SpawnVictoryDrone()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.SpawnVictoryDrone");

	UGAB_SurvivorRescue_C_SpawnVictoryDrone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.RescueComplete
// (BlueprintCallable, BlueprintEvent)

void UGAB_SurvivorRescue_C::RescueComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.RescueComplete");

	UGAB_SurvivorRescue_C_RescueComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.PlayRescueAnimation
// (BlueprintCallable, BlueprintEvent)

void UGAB_SurvivorRescue_C::PlayRescueAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.PlayRescueAnimation");

	UGAB_SurvivorRescue_C_PlayRescueAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_SurvivorRescue_C::K2_OnEndAbility(bool* bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.K2_OnEndAbility");

	UGAB_SurvivorRescue_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.WaitForFinishRescueEvent
// (BlueprintCallable, BlueprintEvent)

void UGAB_SurvivorRescue_C::WaitForFinishRescueEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.WaitForFinishRescueEvent");

	UGAB_SurvivorRescue_C_WaitForFinishRescueEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.ExecuteUbergraph_GAB_SurvivorRescue
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_SurvivorRescue_C::ExecuteUbergraph_GAB_SurvivorRescue(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.ExecuteUbergraph_GAB_SurvivorRescue");

	UGAB_SurvivorRescue_C_ExecuteUbergraph_GAB_SurvivorRescue_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
