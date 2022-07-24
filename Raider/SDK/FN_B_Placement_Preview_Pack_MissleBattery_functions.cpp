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

// Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.GetPlayerController
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPlayerControllerZone* Controller                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_Placement_Preview_Pack_MissleBattery_C::GetPlayerController(class AFortPlayerControllerZone** Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.GetPlayerController");

	AB_Placement_Preview_Pack_MissleBattery_C_GetPlayerController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Controller != nullptr)
		*Controller = params.Controller;
}


// Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.GetGadgetItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UFortItem*               Gadget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_Placement_Preview_Pack_MissleBattery_C::GetGadgetItem(class UFortItem** Gadget)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.GetGadgetItem");

	AB_Placement_Preview_Pack_MissleBattery_C_GetGadgetItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Gadget != nullptr)
		*Gadget = params.Gadget;
}


// Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.CalcRocketSpeedFromPitch
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          AimPitch                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RocketSpeed                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_Placement_Preview_Pack_MissleBattery_C::CalcRocketSpeedFromPitch(float AimPitch, float* RocketSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.CalcRocketSpeedFromPitch");

	AB_Placement_Preview_Pack_MissleBattery_C_CalcRocketSpeedFromPitch_Params params;
	params.AimPitch = AimPitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RocketSpeed != nullptr)
		*RocketSpeed = params.RocketSpeed;
}


// Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.SpawnLocationAndRotation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 OutLoc                         (Parm, OutParm, IsPlainOldData)
// struct FRotator                OutRot                         (Parm, OutParm, IsPlainOldData)

void AB_Placement_Preview_Pack_MissleBattery_C::SpawnLocationAndRotation(struct FVector* OutLoc, struct FRotator* OutRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.SpawnLocationAndRotation");

	AB_Placement_Preview_Pack_MissleBattery_C_SpawnLocationAndRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLoc != nullptr)
		*OutLoc = params.OutLoc;
	if (OutRot != nullptr)
		*OutRot = params.OutRot;
}


// Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.UpdateTrajectorySpline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Placement_Preview_Pack_MissleBattery_C::UpdateTrajectorySpline()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.UpdateTrajectorySpline");

	AB_Placement_Preview_Pack_MissleBattery_C_UpdateTrajectorySpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.SetupDummyProjectile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Placement_Preview_Pack_MissleBattery_C::SetupDummyProjectile(class AFortPawn* PlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.SetupDummyProjectile");

	AB_Placement_Preview_Pack_MissleBattery_C_SetupDummyProjectile_Params params;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Placement_Preview_Pack_MissleBattery_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.UserConstructionScript");

	AB_Placement_Preview_Pack_MissleBattery_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.OnUpdateVisuals
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSafeToPlace                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Placement_Preview_Pack_MissleBattery_C::OnUpdateVisuals(float* DeltaSeconds, bool* bSafeToPlace)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.OnUpdateVisuals");

	AB_Placement_Preview_Pack_MissleBattery_C_OnUpdateVisuals_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.bSafeToPlace = bSafeToPlace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.PawnSetHere
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               FortPawn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Placement_Preview_Pack_MissleBattery_C::PawnSetHere(class AFortPawn* FortPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.PawnSetHere");

	AB_Placement_Preview_Pack_MissleBattery_C_PawnSetHere_Params params;
	params.FortPawn = FortPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Placement_Preview_Pack_MissleBattery_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.ReceiveEndPlay");

	AB_Placement_Preview_Pack_MissleBattery_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.ExecuteUbergraph_B_Placement_Preview_Pack_MissleBattery
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Placement_Preview_Pack_MissleBattery_C::ExecuteUbergraph_B_Placement_Preview_Pack_MissleBattery(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.ExecuteUbergraph_B_Placement_Preview_Pack_MissleBattery");

	AB_Placement_Preview_Pack_MissleBattery_C_ExecuteUbergraph_B_Placement_Preview_Pack_MissleBattery_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
