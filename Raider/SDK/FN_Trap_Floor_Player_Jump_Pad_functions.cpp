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

// Function Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATrap_Floor_Player_Jump_Pad_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.UserConstructionScript");

	ATrap_Floor_Player_Jump_Pad_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.OnReloadEnd
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ATrap_Floor_Player_Jump_Pad_C::OnReloadEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.OnReloadEnd");

	ATrap_Floor_Player_Jump_Pad_C_OnReloadEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.OnPlaced
// (Event, Public, BlueprintEvent)

void ATrap_Floor_Player_Jump_Pad_C::OnPlaced()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.OnPlaced");

	ATrap_Floor_Player_Jump_Pad_C_OnPlaced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.OnFinishedBuilding
// (Event, Public, BlueprintEvent)

void ATrap_Floor_Player_Jump_Pad_C::OnFinishedBuilding()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.OnFinishedBuilding");

	ATrap_Floor_Player_Jump_Pad_C_OnFinishedBuilding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.GameplayCue.Abilities.Activation.Traps.ReloadBegin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ATrap_Floor_Player_Jump_Pad_C::GameplayCue_Abilities_Activation_Traps_ReloadBegin(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.GameplayCue.Abilities.Activation.Traps.ReloadBegin");

	ATrap_Floor_Player_Jump_Pad_C_GameplayCue_Abilities_Activation_Traps_ReloadBegin_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ATrap_Floor_Player_Jump_Pad_C::GameplayCue_Abilities_Activation_Traps_ActivateTrap(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap");

	ATrap_Floor_Player_Jump_Pad_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.OnOutOfDurability
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ATrap_Floor_Player_Jump_Pad_C::OnOutOfDurability()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.OnOutOfDurability");

	ATrap_Floor_Player_Jump_Pad_C_OnOutOfDurability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.ExecuteUbergraph_Trap_Floor_Player_Jump_Pad
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Floor_Player_Jump_Pad_C::ExecuteUbergraph_Trap_Floor_Player_Jump_Pad(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.ExecuteUbergraph_Trap_Floor_Player_Jump_Pad");

	ATrap_Floor_Player_Jump_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Jump_Pad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
