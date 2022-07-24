// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Trap_Ceiling_BouncePad.Trap_Ceiling_BouncePad_C.ApplyGameplayEffects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATrap_Ceiling_BouncePad_C::ApplyGameplayEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Ceiling_BouncePad.Trap_Ceiling_BouncePad_C.ApplyGameplayEffects");

	ATrap_Ceiling_BouncePad_C_ApplyGameplayEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Ceiling_BouncePad.Trap_Ceiling_BouncePad_C.OnRep_Overlappedactor
// (BlueprintCallable, BlueprintEvent)

void ATrap_Ceiling_BouncePad_C::OnRep_Overlappedactor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Ceiling_BouncePad.Trap_Ceiling_BouncePad_C.OnRep_Overlappedactor");

	ATrap_Ceiling_BouncePad_C_OnRep_Overlappedactor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Ceiling_BouncePad.Trap_Ceiling_BouncePad_C.PlayerLaunch
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawnAthena*   Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Ceiling_BouncePad_C::PlayerLaunch(class AFortPlayerPawnAthena* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Ceiling_BouncePad.Trap_Ceiling_BouncePad_C.PlayerLaunch");

	ATrap_Ceiling_BouncePad_C_PlayerLaunch_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Ceiling_BouncePad.Trap_Ceiling_BouncePad_C.VehicleLaunch
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortAthenaVehicle*      Vehicle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Ceiling_BouncePad_C::VehicleLaunch(class AFortAthenaVehicle* Vehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Ceiling_BouncePad.Trap_Ceiling_BouncePad_C.VehicleLaunch");

	ATrap_Ceiling_BouncePad_C_VehicleLaunch_Params params;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Ceiling_BouncePad.Trap_Ceiling_BouncePad_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATrap_Ceiling_BouncePad_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Ceiling_BouncePad.Trap_Ceiling_BouncePad_C.UserConstructionScript");

	ATrap_Ceiling_BouncePad_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Ceiling_BouncePad.Trap_Ceiling_BouncePad_C.OnPlaced
// (Event, Public, BlueprintEvent)

void ATrap_Ceiling_BouncePad_C::OnPlaced()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Ceiling_BouncePad.Trap_Ceiling_BouncePad_C.OnPlaced");

	ATrap_Ceiling_BouncePad_C_OnPlaced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Ceiling_BouncePad.Trap_Ceiling_BouncePad_C.OnFinishedBuilding
// (Event, Public, BlueprintEvent)

void ATrap_Ceiling_BouncePad_C::OnFinishedBuilding()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Ceiling_BouncePad.Trap_Ceiling_BouncePad_C.OnFinishedBuilding");

	ATrap_Ceiling_BouncePad_C_OnFinishedBuilding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Ceiling_BouncePad.Trap_Ceiling_BouncePad_C.BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ATrap_Ceiling_BouncePad_C::BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Ceiling_BouncePad.Trap_Ceiling_BouncePad_C.BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ATrap_Ceiling_BouncePad_C_BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Ceiling_BouncePad.Trap_Ceiling_BouncePad_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ATrap_Ceiling_BouncePad_C::GameplayCue_Abilities_Activation_Traps_ActivateTrap(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Ceiling_BouncePad.Trap_Ceiling_BouncePad_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap");

	ATrap_Ceiling_BouncePad_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Ceiling_BouncePad.Trap_Ceiling_BouncePad_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ATrap_Ceiling_BouncePad_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Ceiling_BouncePad.Trap_Ceiling_BouncePad_C.ReceiveDestroyed");

	ATrap_Ceiling_BouncePad_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Ceiling_BouncePad.Trap_Ceiling_BouncePad_C.ExecuteUbergraph_Trap_Ceiling_BouncePad
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Ceiling_BouncePad_C::ExecuteUbergraph_Trap_Ceiling_BouncePad(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Ceiling_BouncePad.Trap_Ceiling_BouncePad_C.ExecuteUbergraph_Trap_Ceiling_BouncePad");

	ATrap_Ceiling_BouncePad_C_ExecuteUbergraph_Trap_Ceiling_BouncePad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
