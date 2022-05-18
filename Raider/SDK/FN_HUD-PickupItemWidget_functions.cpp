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

// Function HUD-PickupItemWidget.HUD-PickupItemWidget_C.SetPickup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPickup*             NewPickup                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_PickupItemWidget_C::SetPickup(class AFortPickup* NewPickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD-PickupItemWidget.HUD-PickupItemWidget_C.SetPickup");

	UHUD_PickupItemWidget_C_SetPickup_Params params;
	params.NewPickup = NewPickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD-PickupItemWidget.HUD-PickupItemWidget_C.InitializeInteractionFailureText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHUD_PickupItemWidget_C::InitializeInteractionFailureText()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD-PickupItemWidget.HUD-PickupItemWidget_C.InitializeInteractionFailureText");

	UHUD_PickupItemWidget_C_InitializeInteractionFailureText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD-PickupItemWidget.HUD-PickupItemWidget_C.InitializeItemData
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_PickupItemWidget_C::InitializeItemData()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD-PickupItemWidget.HUD-PickupItemWidget_C.InitializeItemData");

	UHUD_PickupItemWidget_C_InitializeItemData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD-PickupItemWidget.HUD-PickupItemWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_PickupItemWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD-PickupItemWidget.HUD-PickupItemWidget_C.Construct");

	UHUD_PickupItemWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD-PickupItemWidget.HUD-PickupItemWidget_C.ExecuteUbergraph_HUD-PickupItemWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_PickupItemWidget_C::ExecuteUbergraph_HUD_PickupItemWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD-PickupItemWidget.HUD-PickupItemWidget_C.ExecuteUbergraph_HUD-PickupItemWidget");

	UHUD_PickupItemWidget_C_ExecuteUbergraph_HUD_PickupItemWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
