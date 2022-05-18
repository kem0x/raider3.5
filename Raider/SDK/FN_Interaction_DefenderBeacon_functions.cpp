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

// Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.CheckAmmoValid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AmmoValid                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInteraction_DefenderBeacon_C::CheckAmmoValid(bool* AmmoValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.CheckAmmoValid");

	UInteraction_DefenderBeacon_C_CheckAmmoValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AmmoValid != nullptr)
		*AmmoValid = params.AmmoValid;
}


// Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.DisplayWeaponType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UInteraction_DefenderBeacon_C::DisplayWeaponType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.DisplayWeaponType");

	UInteraction_DefenderBeacon_C_DisplayWeaponType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInteraction_DefenderBeacon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.Construct");

	UInteraction_DefenderBeacon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.UpdateDefenderBeaconWidget
// (BlueprintCallable, BlueprintEvent)

void UInteraction_DefenderBeacon_C::UpdateDefenderBeaconWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.UpdateDefenderBeaconWidget");

	UInteraction_DefenderBeacon_C_UpdateDefenderBeaconWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInteraction_DefenderBeacon_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.Destruct");

	UInteraction_DefenderBeacon_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.OnDefenderEquippedWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortWeapon*             NewWeapon                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortWeapon*             OldWeapon                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInteraction_DefenderBeacon_C::OnDefenderEquippedWeapon(class AFortWeapon* NewWeapon, class AFortWeapon* OldWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.OnDefenderEquippedWeapon");

	UInteraction_DefenderBeacon_C_OnDefenderEquippedWeapon_Params params;
	params.NewWeapon = NewWeapon;
	params.OldWeapon = OldWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.ExecuteUbergraph_Interaction_DefenderBeacon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInteraction_DefenderBeacon_C::ExecuteUbergraph_Interaction_DefenderBeacon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.ExecuteUbergraph_Interaction_DefenderBeacon");

	UInteraction_DefenderBeacon_C_ExecuteUbergraph_Interaction_DefenderBeacon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
