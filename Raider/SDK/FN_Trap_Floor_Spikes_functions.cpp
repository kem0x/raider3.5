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

// Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.ChangeToNormalMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void ATrap_Floor_Spikes_C::ChangeToNormalMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.ChangeToNormalMaterial");

	ATrap_Floor_Spikes_C_ChangeToNormalMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Spikes.Trap_Floor_Spikes_C. ChangeToFriendlyMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void ATrap_Floor_Spikes_C::_ChangeToFriendlyMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Spikes.Trap_Floor_Spikes_C. ChangeToFriendlyMaterial");

	ATrap_Floor_Spikes_C__ChangeToFriendlyMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.MaterialSweepOnSpikes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SweepSpeed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            SweepColor                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          SweepExponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Floor_Spikes_C::MaterialSweepOnSpikes(float SweepSpeed, const struct FLinearColor& SweepColor, float SweepExponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.MaterialSweepOnSpikes");

	ATrap_Floor_Spikes_C_MaterialSweepOnSpikes_Params params;
	params.SweepSpeed = SweepSpeed;
	params.SweepColor = SweepColor;
	params.SweepExponent = SweepExponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.SetSpikePosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewSpikePosition               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Floor_Spikes_C::SetSpikePosition(float NewSpikePosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.SetSpikePosition");

	ATrap_Floor_Spikes_C_SetSpikePosition_Params params;
	params.NewSpikePosition = NewSpikePosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATrap_Floor_Spikes_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.UserConstructionScript");

	ATrap_Floor_Spikes_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.Fire__FinishedFunc
// (BlueprintEvent)

void ATrap_Floor_Spikes_C::Fire__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.Fire__FinishedFunc");

	ATrap_Floor_Spikes_C_Fire__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.Fire__UpdateFunc
// (BlueprintEvent)

void ATrap_Floor_Spikes_C::Fire__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.Fire__UpdateFunc");

	ATrap_Floor_Spikes_C_Fire__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.Retract__FinishedFunc
// (BlueprintEvent)

void ATrap_Floor_Spikes_C::Retract__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.Retract__FinishedFunc");

	ATrap_Floor_Spikes_C_Retract__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.Retract__UpdateFunc
// (BlueprintEvent)

void ATrap_Floor_Spikes_C::Retract__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.Retract__UpdateFunc");

	ATrap_Floor_Spikes_C_Retract__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.Retract__Sounds__EventFunc
// (BlueprintEvent)

void ATrap_Floor_Spikes_C::Retract__Sounds__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.Retract__Sounds__EventFunc");

	ATrap_Floor_Spikes_C_Retract__Sounds__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.ResetSpikes__FinishedFunc
// (BlueprintEvent)

void ATrap_Floor_Spikes_C::ResetSpikes__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.ResetSpikes__FinishedFunc");

	ATrap_Floor_Spikes_C_ResetSpikes__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.ResetSpikes__UpdateFunc
// (BlueprintEvent)

void ATrap_Floor_Spikes_C::ResetSpikes__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.ResetSpikes__UpdateFunc");

	ATrap_Floor_Spikes_C_ResetSpikes__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.OnReloadEnd
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ATrap_Floor_Spikes_C::OnReloadEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.OnReloadEnd");

	ATrap_Floor_Spikes_C_OnReloadEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.OnPlaced
// (Event, Public, BlueprintEvent)

void ATrap_Floor_Spikes_C::OnPlaced()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.OnPlaced");

	ATrap_Floor_Spikes_C_OnPlaced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.OnFinishedBuilding
// (Event, Public, BlueprintEvent)

void ATrap_Floor_Spikes_C::OnFinishedBuilding()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.OnFinishedBuilding");

	ATrap_Floor_Spikes_C_OnFinishedBuilding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ATrap_Floor_Spikes_C::GameplayCue_Abilities_Activation_Traps_ActivateTrap(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap");

	ATrap_Floor_Spikes_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.OnOutOfDurability
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ATrap_Floor_Spikes_C::OnOutOfDurability()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.OnOutOfDurability");

	ATrap_Floor_Spikes_C_OnOutOfDurability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.OnWorldReady
// (Event, Public, BlueprintEvent)

void ATrap_Floor_Spikes_C::OnWorldReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.OnWorldReady");

	ATrap_Floor_Spikes_C_OnWorldReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.OnInitTeam
// (Event, Protected, BlueprintEvent)

void ATrap_Floor_Spikes_C::OnInitTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.OnInitTeam");

	ATrap_Floor_Spikes_C_OnInitTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.ExecuteUbergraph_Trap_Floor_Spikes
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Floor_Spikes_C::ExecuteUbergraph_Trap_Floor_Spikes(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.ExecuteUbergraph_Trap_Floor_Spikes");

	ATrap_Floor_Spikes_C_ExecuteUbergraph_Trap_Floor_Spikes_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
