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

// Function BP_VictoryDrone.BP_VictoryDrone_C.NotifyTeleportFinishedTriggered
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VictoryDrone_C::NotifyTeleportFinishedTriggered()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VictoryDrone.BP_VictoryDrone_C.NotifyTeleportFinishedTriggered");

	ABP_VictoryDrone_C_NotifyTeleportFinishedTriggered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VictoryDrone.BP_VictoryDrone_C.PlaySpawnOutAnim
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VictoryDrone_C::PlaySpawnOutAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VictoryDrone.BP_VictoryDrone_C.PlaySpawnOutAnim");

	ABP_VictoryDrone_C_PlaySpawnOutAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VictoryDrone.BP_VictoryDrone_C.InitDrone
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VictoryDrone_C::InitDrone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VictoryDrone.BP_VictoryDrone_C.InitDrone");

	ABP_VictoryDrone_C_InitDrone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VictoryDrone.BP_VictoryDrone_C.TriggerPlayerSpawnEffects
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VictoryDrone_C::TriggerPlayerSpawnEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VictoryDrone.BP_VictoryDrone_C.TriggerPlayerSpawnEffects");

	ABP_VictoryDrone_C_TriggerPlayerSpawnEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VictoryDrone.BP_VictoryDrone_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_VictoryDrone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VictoryDrone.BP_VictoryDrone_C.UserConstructionScript");

	ABP_VictoryDrone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VictoryDrone.BP_VictoryDrone_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_VictoryDrone_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VictoryDrone.BP_VictoryDrone_C.ReceiveBeginPlay");

	ABP_VictoryDrone_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VictoryDrone.BP_VictoryDrone_C.OnSpawnOutAnimEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VictoryDrone_C::OnSpawnOutAnimEnded(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VictoryDrone.BP_VictoryDrone_C.OnSpawnOutAnimEnded");

	ABP_VictoryDrone_C_OnSpawnOutAnimEnded_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VictoryDrone.BP_VictoryDrone_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VictoryDrone_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VictoryDrone.BP_VictoryDrone_C.ReceiveTick");

	ABP_VictoryDrone_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VictoryDrone.BP_VictoryDrone_C.ExecuteUbergraph_BP_VictoryDrone
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VictoryDrone_C::ExecuteUbergraph_BP_VictoryDrone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VictoryDrone.BP_VictoryDrone_C.ExecuteUbergraph_BP_VictoryDrone");

	ABP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VictoryDrone.BP_VictoryDrone_C.SpawnOutAnimEndedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_VictoryDrone_C*      Drone                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VictoryDrone_C::SpawnOutAnimEndedDispatcher__DelegateSignature(class ABP_VictoryDrone_C* Drone)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VictoryDrone.BP_VictoryDrone_C.SpawnOutAnimEndedDispatcher__DelegateSignature");

	ABP_VictoryDrone_C_SpawnOutAnimEndedDispatcher__DelegateSignature_Params params;
	params.Drone = Drone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
