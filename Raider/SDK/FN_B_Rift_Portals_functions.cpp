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

// Function B_Rift_Portals.B_Rift_Portals_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Rift_Portals_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Rift_Portals.B_Rift_Portals_C.UserConstructionScript");

	AB_Rift_Portals_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Rift_Portals.B_Rift_Portals_C.BoostLight__FinishedFunc
// (BlueprintEvent)

void AB_Rift_Portals_C::BoostLight__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Rift_Portals.B_Rift_Portals_C.BoostLight__FinishedFunc");

	AB_Rift_Portals_C_BoostLight__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Rift_Portals.B_Rift_Portals_C.BoostLight__UpdateFunc
// (BlueprintEvent)

void AB_Rift_Portals_C::BoostLight__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Rift_Portals.B_Rift_Portals_C.BoostLight__UpdateFunc");

	AB_Rift_Portals_C_BoostLight__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Rift_Portals.B_Rift_Portals_C.ScaleLightOnOff__FinishedFunc
// (BlueprintEvent)

void AB_Rift_Portals_C::ScaleLightOnOff__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Rift_Portals.B_Rift_Portals_C.ScaleLightOnOff__FinishedFunc");

	AB_Rift_Portals_C_ScaleLightOnOff__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Rift_Portals.B_Rift_Portals_C.ScaleLightOnOff__UpdateFunc
// (BlueprintEvent)

void AB_Rift_Portals_C::ScaleLightOnOff__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Rift_Portals.B_Rift_Portals_C.ScaleLightOnOff__UpdateFunc");

	AB_Rift_Portals_C_ScaleLightOnOff__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Rift_Portals.B_Rift_Portals_C.OnPlaced
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void AB_Rift_Portals_C::OnPlaced()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Rift_Portals.B_Rift_Portals_C.OnPlaced");

	AB_Rift_Portals_C_OnPlaced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Rift_Portals.B_Rift_Portals_C.OnRemoved
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void AB_Rift_Portals_C::OnRemoved()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Rift_Portals.B_Rift_Portals_C.OnRemoved");

	AB_Rift_Portals_C_OnRemoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Rift_Portals.B_Rift_Portals_C.OnSpawnAI
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void AB_Rift_Portals_C::OnSpawnAI()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Rift_Portals.B_Rift_Portals_C.OnSpawnAI");

	AB_Rift_Portals_C_OnSpawnAI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Rift_Portals.B_Rift_Portals_C.Lightning Impact Event
// (BlueprintCallable, BlueprintEvent)

void AB_Rift_Portals_C::Lightning_Impact_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Rift_Portals.B_Rift_Portals_C.Lightning Impact Event");

	AB_Rift_Portals_C_Lightning_Impact_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Rift_Portals.B_Rift_Portals_C.OnActivated
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void AB_Rift_Portals_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Rift_Portals.B_Rift_Portals_C.OnActivated");

	AB_Rift_Portals_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Rift_Portals.B_Rift_Portals_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Rift_Portals_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Rift_Portals.B_Rift_Portals_C.ReceiveEndPlay");

	AB_Rift_Portals_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Rift_Portals.B_Rift_Portals_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Rift_Portals_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Rift_Portals.B_Rift_Portals_C.ReceiveBeginPlay");

	AB_Rift_Portals_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Rift_Portals.B_Rift_Portals_C.FadeLightIn
// (BlueprintCallable, BlueprintEvent)

void AB_Rift_Portals_C::FadeLightIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Rift_Portals.B_Rift_Portals_C.FadeLightIn");

	AB_Rift_Portals_C_FadeLightIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Rift_Portals.B_Rift_Portals_C.FadeLightOut
// (BlueprintCallable, BlueprintEvent)

void AB_Rift_Portals_C::FadeLightOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Rift_Portals.B_Rift_Portals_C.FadeLightOut");

	AB_Rift_Portals_C_FadeLightOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Rift_Portals.B_Rift_Portals_C.ManuallyActivateRift
// (BlueprintCallable, BlueprintEvent)

void AB_Rift_Portals_C::ManuallyActivateRift()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Rift_Portals.B_Rift_Portals_C.ManuallyActivateRift");

	AB_Rift_Portals_C_ManuallyActivateRift_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Rift_Portals.B_Rift_Portals_C.ManuallyDeactivateRift
// (BlueprintCallable, BlueprintEvent)

void AB_Rift_Portals_C::ManuallyDeactivateRift()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Rift_Portals.B_Rift_Portals_C.ManuallyDeactivateRift");

	AB_Rift_Portals_C_ManuallyDeactivateRift_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Rift_Portals.B_Rift_Portals_C.PatrolEnemySuckIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RiftLightningDuration          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SpawnImpactParticles           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Rift_Portals_C::PatrolEnemySuckIn(float Delay, float RiftLightningDuration, bool SpawnImpactParticles)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Rift_Portals.B_Rift_Portals_C.PatrolEnemySuckIn");

	AB_Rift_Portals_C_PatrolEnemySuckIn_Params params;
	params.Delay = Delay;
	params.RiftLightningDuration = RiftLightningDuration;
	params.SpawnImpactParticles = SpawnImpactParticles;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Rift_Portals.B_Rift_Portals_C.OnDeactivated
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void AB_Rift_Portals_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Rift_Portals.B_Rift_Portals_C.OnDeactivated");

	AB_Rift_Portals_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Rift_Portals.B_Rift_Portals_C.ResetGate
// (BlueprintCallable, BlueprintEvent)

void AB_Rift_Portals_C::ResetGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Rift_Portals.B_Rift_Portals_C.ResetGate");

	AB_Rift_Portals_C_ResetGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Rift_Portals.B_Rift_Portals_C.ExecuteUbergraph_B_Rift_Portals
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Rift_Portals_C::ExecuteUbergraph_B_Rift_Portals(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Rift_Portals.B_Rift_Portals_C.ExecuteUbergraph_B_Rift_Portals");

	AB_Rift_Portals_C_ExecuteUbergraph_B_Rift_Portals_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
