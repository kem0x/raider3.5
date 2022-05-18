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

// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandlePickerHideAni
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroSquadManagementScreen_C::HandlePickerHideAni()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandlePickerHideAni");

	UHeroSquadManagementScreen_C_HandlePickerHideAni_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandleHideSlotInfoAni
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroSquadManagementScreen_C::HandleHideSlotInfoAni()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandleHideSlotInfoAni");

	UHeroSquadManagementScreen_C_HandleHideSlotInfoAni_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandlePickerShowAni
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroSquadManagementScreen_C::HandlePickerShowAni()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandlePickerShowAni");

	UHeroSquadManagementScreen_C_HandlePickerShowAni_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandleShowSlotInfoAni
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroSquadManagementScreen_C::HandleShowSlotInfoAni()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandleShowSlotInfoAni");

	UHeroSquadManagementScreen_C_HandleShowSlotInfoAni_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.UpdateSquadSlotInfoPanel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SquadSlotIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeroSquadManagementScreen_C::UpdateSquadSlotInfoPanel(int SquadSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.UpdateSquadSlotInfoPanel");

	UHeroSquadManagementScreen_C_UpdateSquadSlotInfoPanel_Params params;
	params.SquadSlotIndex = SquadSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.Update Hero Squad Bonus Highlight State
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroSquadManagementScreen_C::Update_Hero_Squad_Bonus_Highlight_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.Update Hero Squad Bonus Highlight State");

	UHeroSquadManagementScreen_C_Update_Hero_Squad_Bonus_Highlight_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.Update Hero Squad Bonus Tiles SubIcon Glow State
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroSquadManagementScreen_C::Update_Hero_Squad_Bonus_Tiles_SubIcon_Glow_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.Update Hero Squad Bonus Tiles SubIcon Glow State");

	UHeroSquadManagementScreen_C_Update_Hero_Squad_Bonus_Tiles_SubIcon_Glow_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HideSlotInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroSquadManagementScreen_C::HideSlotInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HideSlotInfo");

	UHeroSquadManagementScreen_C_HideSlotInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.ShowSlotInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   HeaderText                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   BodyText                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UHeroSquadManagementScreen_C::ShowSlotInfo(const struct FText& HeaderText, const struct FText& BodyText)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.ShowSlotInfo");

	UHeroSquadManagementScreen_C_ShowSlotInfo_Params params;
	params.HeaderText = HeaderText;
	params.BodyText = BodyText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandleClosePicker
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHeroSquadManagementScreen_C::HandleClosePicker(bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandleClosePicker");

	UHeroSquadManagementScreen_C_HandleClosePicker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.GetInZoneVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UHeroSquadManagementScreen_C::GetInZoneVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.GetInZoneVisibility");

	UHeroSquadManagementScreen_C_GetInZoneVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UHeroSquadManagementScreen_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.OnActivated");

	UHeroSquadManagementScreen_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHeroSquadManagementScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.Construct");

	UHeroSquadManagementScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.SetDefaultScroll
// (BlueprintCallable, BlueprintEvent)

void UHeroSquadManagementScreen_C::SetDefaultScroll()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.SetDefaultScroll");

	UHeroSquadManagementScreen_C_SetDefaultScroll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UHeroSquadManagementScreen_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.OnDeactivated");

	UHeroSquadManagementScreen_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandleSquadSlotPickerShown
// (Event, Protected, BlueprintEvent)

void UHeroSquadManagementScreen_C::HandleSquadSlotPickerShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandleSquadSlotPickerShown");

	UHeroSquadManagementScreen_C_HandleSquadSlotPickerShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandleSquadSlotPickerHidden
// (Event, Protected, BlueprintEvent)

void UHeroSquadManagementScreen_C::HandleSquadSlotPickerHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandleSquadSlotPickerHidden");

	UHeroSquadManagementScreen_C_HandleSquadSlotPickerHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.BndEvt__SquadSlotsView_K2Node_ComponentBoundEvent_2_OnDifferentSquadSlotSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            SquadSlotIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeroSquadManagementScreen_C::BndEvt__SquadSlotsView_K2Node_ComponentBoundEvent_2_OnDifferentSquadSlotSelected__DelegateSignature(int SquadSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.BndEvt__SquadSlotsView_K2Node_ComponentBoundEvent_2_OnDifferentSquadSlotSelected__DelegateSignature");

	UHeroSquadManagementScreen_C_BndEvt__SquadSlotsView_K2Node_ComponentBoundEvent_2_OnDifferentSquadSlotSelected__DelegateSignature_Params params;
	params.SquadSlotIndex = SquadSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.ExecuteUbergraph_HeroSquadManagementScreen
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeroSquadManagementScreen_C::ExecuteUbergraph_HeroSquadManagementScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.ExecuteUbergraph_HeroSquadManagementScreen");

	UHeroSquadManagementScreen_C_ExecuteUbergraph_HeroSquadManagementScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
