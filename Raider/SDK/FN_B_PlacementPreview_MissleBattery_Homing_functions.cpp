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

// Function B_PlacementPreview_MissleBattery_Homing.B_PlacementPreview_MissleBattery_Homing_C.GetAimLocFromPlacementPreview
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 AimLocation                    (Parm, OutParm, IsPlainOldData)

void AB_PlacementPreview_MissleBattery_Homing_C::GetAimLocFromPlacementPreview(struct FVector* AimLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_PlacementPreview_MissleBattery_Homing.B_PlacementPreview_MissleBattery_Homing_C.GetAimLocFromPlacementPreview");

	AB_PlacementPreview_MissleBattery_Homing_C_GetAimLocFromPlacementPreview_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AimLocation != nullptr)
		*AimLocation = params.AimLocation;
}


// Function B_PlacementPreview_MissleBattery_Homing.B_PlacementPreview_MissleBattery_Homing_C.UpdateAim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_PlacementPreview_MissleBattery_Homing_C::UpdateAim()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_PlacementPreview_MissleBattery_Homing.B_PlacementPreview_MissleBattery_Homing_C.UpdateAim");

	AB_PlacementPreview_MissleBattery_Homing_C_UpdateAim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_PlacementPreview_MissleBattery_Homing.B_PlacementPreview_MissleBattery_Homing_C.GetPlayerController
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPlayerControllerZone* Controller                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_PlacementPreview_MissleBattery_Homing_C::GetPlayerController(class AFortPlayerControllerZone** Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_PlacementPreview_MissleBattery_Homing.B_PlacementPreview_MissleBattery_Homing_C.GetPlayerController");

	AB_PlacementPreview_MissleBattery_Homing_C_GetPlayerController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Controller != nullptr)
		*Controller = params.Controller;
}


// Function B_PlacementPreview_MissleBattery_Homing.B_PlacementPreview_MissleBattery_Homing_C.GetGadgetItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UFortItem*               Gadget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_PlacementPreview_MissleBattery_Homing_C::GetGadgetItem(class UFortItem** Gadget)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_PlacementPreview_MissleBattery_Homing.B_PlacementPreview_MissleBattery_Homing_C.GetGadgetItem");

	AB_PlacementPreview_MissleBattery_Homing_C_GetGadgetItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Gadget != nullptr)
		*Gadget = params.Gadget;
}


// Function B_PlacementPreview_MissleBattery_Homing.B_PlacementPreview_MissleBattery_Homing_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_PlacementPreview_MissleBattery_Homing_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_PlacementPreview_MissleBattery_Homing.B_PlacementPreview_MissleBattery_Homing_C.UserConstructionScript");

	AB_PlacementPreview_MissleBattery_Homing_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_PlacementPreview_MissleBattery_Homing.B_PlacementPreview_MissleBattery_Homing_C.PawnSetHere
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               FortPawn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_PlacementPreview_MissleBattery_Homing_C::PawnSetHere(class AFortPawn* FortPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_PlacementPreview_MissleBattery_Homing.B_PlacementPreview_MissleBattery_Homing_C.PawnSetHere");

	AB_PlacementPreview_MissleBattery_Homing_C_PawnSetHere_Params params;
	params.FortPawn = FortPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_PlacementPreview_MissleBattery_Homing.B_PlacementPreview_MissleBattery_Homing_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_PlacementPreview_MissleBattery_Homing_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_PlacementPreview_MissleBattery_Homing.B_PlacementPreview_MissleBattery_Homing_C.ReceiveEndPlay");

	AB_PlacementPreview_MissleBattery_Homing_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_PlacementPreview_MissleBattery_Homing.B_PlacementPreview_MissleBattery_Homing_C.OnUpdateVisuals
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSafeToPlace                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_PlacementPreview_MissleBattery_Homing_C::OnUpdateVisuals(float* DeltaSeconds, bool* bSafeToPlace)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_PlacementPreview_MissleBattery_Homing.B_PlacementPreview_MissleBattery_Homing_C.OnUpdateVisuals");

	AB_PlacementPreview_MissleBattery_Homing_C_OnUpdateVisuals_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.bSafeToPlace = bSafeToPlace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_PlacementPreview_MissleBattery_Homing.B_PlacementPreview_MissleBattery_Homing_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_PlacementPreview_MissleBattery_Homing_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_PlacementPreview_MissleBattery_Homing.B_PlacementPreview_MissleBattery_Homing_C.ReceiveTick");

	AB_PlacementPreview_MissleBattery_Homing_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_PlacementPreview_MissleBattery_Homing.B_PlacementPreview_MissleBattery_Homing_C.ExecuteUbergraph_B_PlacementPreview_MissleBattery_Homing
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_PlacementPreview_MissleBattery_Homing_C::ExecuteUbergraph_B_PlacementPreview_MissleBattery_Homing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_PlacementPreview_MissleBattery_Homing.B_PlacementPreview_MissleBattery_Homing_C.ExecuteUbergraph_B_PlacementPreview_MissleBattery_Homing");

	AB_PlacementPreview_MissleBattery_Homing_C_ExecuteUbergraph_B_PlacementPreview_MissleBattery_Homing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
