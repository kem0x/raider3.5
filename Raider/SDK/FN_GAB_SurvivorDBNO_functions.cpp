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

// Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.OnCancelled_30185FB0432AA030CE779FBAA5AE1A56
// (BlueprintCallable, BlueprintEvent)

void UGAB_SurvivorDBNO_C::OnCancelled_30185FB0432AA030CE779FBAA5AE1A56()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.OnCancelled_30185FB0432AA030CE779FBAA5AE1A56");

	UGAB_SurvivorDBNO_C_OnCancelled_30185FB0432AA030CE779FBAA5AE1A56_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.OnInterrupted_30185FB0432AA030CE779FBAA5AE1A56
// (BlueprintCallable, BlueprintEvent)

void UGAB_SurvivorDBNO_C::OnInterrupted_30185FB0432AA030CE779FBAA5AE1A56()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.OnInterrupted_30185FB0432AA030CE779FBAA5AE1A56");

	UGAB_SurvivorDBNO_C_OnInterrupted_30185FB0432AA030CE779FBAA5AE1A56_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.OnBlendOut_30185FB0432AA030CE779FBAA5AE1A56
// (BlueprintCallable, BlueprintEvent)

void UGAB_SurvivorDBNO_C::OnBlendOut_30185FB0432AA030CE779FBAA5AE1A56()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.OnBlendOut_30185FB0432AA030CE779FBAA5AE1A56");

	UGAB_SurvivorDBNO_C_OnBlendOut_30185FB0432AA030CE779FBAA5AE1A56_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.OnCompleted_30185FB0432AA030CE779FBAA5AE1A56
// (BlueprintCallable, BlueprintEvent)

void UGAB_SurvivorDBNO_C::OnCompleted_30185FB0432AA030CE779FBAA5AE1A56()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.OnCompleted_30185FB0432AA030CE779FBAA5AE1A56");

	UGAB_SurvivorDBNO_C_OnCompleted_30185FB0432AA030CE779FBAA5AE1A56_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_SurvivorDBNO_C::K2_OnEndAbility(bool* bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.K2_OnEndAbility");

	UGAB_SurvivorDBNO_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData*     EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAB_SurvivorDBNO_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.K2_ActivateAbilityFromEvent");

	UGAB_SurvivorDBNO_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.PlayDownedSpeech
// (BlueprintCallable, BlueprintEvent)

void UGAB_SurvivorDBNO_C::PlayDownedSpeech()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.PlayDownedSpeech");

	UGAB_SurvivorDBNO_C_PlayDownedSpeech_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.ExecuteUbergraph_GAB_SurvivorDBNO
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_SurvivorDBNO_C::ExecuteUbergraph_GAB_SurvivorDBNO(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.ExecuteUbergraph_GAB_SurvivorDBNO");

	UGAB_SurvivorDBNO_C_ExecuteUbergraph_GAB_SurvivorDBNO_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
