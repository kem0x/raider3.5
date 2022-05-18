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

// Function InteractionIndicator.InteractionIndicator_C.UpdateKeybinds
// (Public, BlueprintCallable, BlueprintEvent)

void UInteractionIndicator_C::UpdateKeybinds()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionIndicator.InteractionIndicator_C.UpdateKeybinds");

	UInteractionIndicator_C_UpdateKeybinds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractionIndicator.InteractionIndicator_C.ShowDefenderBeaconWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingTrapDefender*   BuildingTrap                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInteractionIndicator_C::ShowDefenderBeaconWidget(class ABuildingTrapDefender* BuildingTrap)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionIndicator.InteractionIndicator_C.ShowDefenderBeaconWidget");

	UInteractionIndicator_C_ShowDefenderBeaconWidget_Params params;
	params.BuildingTrap = BuildingTrap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractionIndicator.InteractionIndicator_C.HandleInteractionUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortInteractContextInfo* Interaction                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInteractionIndicator_C::HandleInteractionUpdated(class UFortInteractContextInfo* Interaction)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionIndicator.InteractionIndicator_C.HandleInteractionUpdated");

	UInteractionIndicator_C_HandleInteractionUpdated_Params params;
	params.Interaction = Interaction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractionIndicator.InteractionIndicator_C.ShowBasicInteractionWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UInteractionIndicator_C::ShowBasicInteractionWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionIndicator.InteractionIndicator_C.ShowBasicInteractionWidget");

	UInteractionIndicator_C_ShowBasicInteractionWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractionIndicator.InteractionIndicator_C.ShowPickupWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPickup*             Pickup                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInteractionIndicator_C::ShowPickupWidget(class AFortPickup* Pickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionIndicator.InteractionIndicator_C.ShowPickupWidget");

	UInteractionIndicator_C_ShowPickupWidget_Params params;
	params.Pickup = Pickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractionIndicator.InteractionIndicator_C.HandleInteractionChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortInteractContextInfo* Interaction                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInteractionIndicator_C::HandleInteractionChanged(class UFortInteractContextInfo* Interaction)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionIndicator.InteractionIndicator_C.HandleInteractionChanged");

	UInteractionIndicator_C_HandleInteractionChanged_Params params;
	params.Interaction = Interaction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractionIndicator.InteractionIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInteractionIndicator_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionIndicator.InteractionIndicator_C.Construct");

	UInteractionIndicator_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractionIndicator.InteractionIndicator_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInteractionIndicator_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionIndicator.InteractionIndicator_C.Destruct");

	UInteractionIndicator_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractionIndicator.InteractionIndicator_C.ExecuteUbergraph_InteractionIndicator
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInteractionIndicator_C::ExecuteUbergraph_InteractionIndicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionIndicator.InteractionIndicator_C.ExecuteUbergraph_InteractionIndicator");

	UInteractionIndicator_C_ExecuteUbergraph_InteractionIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
