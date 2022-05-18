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

// Function AthenaCustomizationTab.AthenaCustomizationTab_C.HandleFavorite
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaCustomizationTab_C::HandleFavorite(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.HandleFavorite");

	UAthenaCustomizationTab_C_HandleFavorite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.RegisterFavorite
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaCustomizationTab_C::RegisterFavorite()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.RegisterFavorite");

	UAthenaCustomizationTab_C_RegisterFavorite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.SetItemDetailsToDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   HeaderText                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   DescriptionText                (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaCustomizationTab_C::SetItemDetailsToDisplay(class UFortItem* InputPin, const struct FText& HeaderText, const struct FText& DescriptionText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.SetItemDetailsToDisplay");

	UAthenaCustomizationTab_C_SetItemDetailsToDisplay_Params params;
	params.InputPin = InputPin;
	params.HeaderText = HeaderText;
	params.DescriptionText = DescriptionText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.SetHeaderToBanner
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaCustomizationTab_C::SetHeaderToBanner()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.SetHeaderToBanner");

	UAthenaCustomizationTab_C_SetHeaderToBanner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.SetupBanner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaCustomizationTab_C::SetupBanner()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.SetupBanner");

	UAthenaCustomizationTab_C_SetupBanner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.ShowVaultItemByCategory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAthenaCustomizationCategory   CustomizationType              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SubslotIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanShowEmpty                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCustomizationTab_C::ShowVaultItemByCategory(EAthenaCustomizationCategory CustomizationType, int SubslotIndex, bool CanShowEmpty)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.ShowVaultItemByCategory");

	UAthenaCustomizationTab_C_ShowVaultItemByCategory_Params params;
	params.CustomizationType = CustomizationType;
	params.SubslotIndex = SubslotIndex;
	params.CanShowEmpty = CanShowEmpty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.HandleSlotHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAthenaCustomizationCategory   Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   HeaderText                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   DescriptionText                (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            SubslotIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCustomizationTab_C::HandleSlotHovered(EAthenaCustomizationCategory Type, const struct FText& HeaderText, const struct FText& DescriptionText, int SubslotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.HandleSlotHovered");

	UAthenaCustomizationTab_C_HandleSlotHovered_Params params;
	params.Type = Type;
	params.HeaderText = HeaderText;
	params.DescriptionText = DescriptionText;
	params.SubslotIndex = SubslotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.SelectFirstWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaCustomizationTab_C::SelectFirstWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.SelectFirstWidget");

	UAthenaCustomizationTab_C_SelectFirstWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.ShowSavingModal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaCustomizationTab_C::ShowSavingModal()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.ShowSavingModal");

	UAthenaCustomizationTab_C_ShowSavingModal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.RefreshInputActions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaCustomizationTab_C::RefreshInputActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.RefreshInputActions");

	UAthenaCustomizationTab_C_RefreshInputActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.SelectInitialWidgetForGamepad
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaCustomizationTab_C::SelectInitialWidgetForGamepad()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.SelectInitialWidgetForGamepad");

	UAthenaCustomizationTab_C_SelectInitialWidgetForGamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.EndPickingCustomization
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           RestoreFocus                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCustomizationTab_C::EndPickingCustomization(bool RestoreFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.EndPickingCustomization");

	UAthenaCustomizationTab_C_EndPickingCustomization_Params params;
	params.RestoreFocus = RestoreFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BeginPickingCustomization
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAthenaCustomizationCategory   Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButton*           WidgetToReturnFocusTo          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FText                   HeaderText                     (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Subslot_Index                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCustomizationTab_C::BeginPickingCustomization(EAthenaCustomizationCategory Category, class UCommonButton* WidgetToReturnFocusTo, const struct FText& HeaderText, int Subslot_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.BeginPickingCustomization");

	UAthenaCustomizationTab_C_BeginPickingCustomization_Params params;
	params.Category = Category;
	params.WidgetToReturnFocusTo = WidgetToReturnFocusTo;
	params.HeaderText = HeaderText;
	params.Subslot_Index = Subslot_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.RegisterInputActions
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaCustomizationTab_C::RegisterInputActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.RegisterInputActions");

	UAthenaCustomizationTab_C_RegisterInputActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.RegisterCancel
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaCustomizationTab_C::RegisterCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.RegisterCancel");

	UAthenaCustomizationTab_C_RegisterCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.HandleCancel
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaCustomizationTab_C::HandleCancel(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.HandleCancel");

	UAthenaCustomizationTab_C_HandleCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCustomizationTab_C::OnInputModeChanged(bool* bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.OnInputModeChanged");

	UAthenaCustomizationTab_C_OnInputModeChanged_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaCustomizationTab_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.OnActivated");

	UAthenaCustomizationTab_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAthenaCustomizationTab_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.OnDeactivated");

	UAthenaCustomizationTab_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaCustomizationTab_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.Construct");

	UAthenaCustomizationTab_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_12_OnCosmeticChangeSaveEvent__DelegateSignature
// (BlueprintEvent)

void UAthenaCustomizationTab_C::BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_12_OnCosmeticChangeSaveEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_12_OnCosmeticChangeSaveEvent__DelegateSignature");

	UAthenaCustomizationTab_C_BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_12_OnCosmeticChangeSaveEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_30_OnCosmeticChangeSaveEvent__DelegateSignature
// (BlueprintEvent)

void UAthenaCustomizationTab_C::BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_30_OnCosmeticChangeSaveEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_30_OnCosmeticChangeSaveEvent__DelegateSignature");

	UAthenaCustomizationTab_C_BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_30_OnCosmeticChangeSaveEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__AthenaCustomizationBannerButton_490_K2Node_ComponentBoundEvent_205_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaCustomizationTab_C::BndEvt__AthenaCustomizationBannerButton_490_K2Node_ComponentBoundEvent_205_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__AthenaCustomizationBannerButton_490_K2Node_ComponentBoundEvent_205_CommonButtonClicked__DelegateSignature");

	UAthenaCustomizationTab_C_BndEvt__AthenaCustomizationBannerButton_490_K2Node_ComponentBoundEvent_205_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaCustomizationTab_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.Destruct");

	UAthenaCustomizationTab_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__BannerSlot_K2Node_ComponentBoundEvent_547_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaCustomizationTab_C::BndEvt__BannerSlot_K2Node_ComponentBoundEvent_547_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__BannerSlot_K2Node_ComponentBoundEvent_547_CommonButtonClicked__DelegateSignature");

	UAthenaCustomizationTab_C_BndEvt__BannerSlot_K2Node_ComponentBoundEvent_547_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_594_OnItemSelectionEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortItem*               SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCustomizationTab_C::BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_594_OnItemSelectionEvent__DelegateSignature(class UFortItem* SelectedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_594_OnItemSelectionEvent__DelegateSignature");

	UAthenaCustomizationTab_C_BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_594_OnItemSelectionEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__ButtonOk_K2Node_ComponentBoundEvent_148_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaCustomizationTab_C::BndEvt__ButtonOk_K2Node_ComponentBoundEvent_148_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__ButtonOk_K2Node_ComponentBoundEvent_148_CommonButtonClicked__DelegateSignature");

	UAthenaCustomizationTab_C_BndEvt__ButtonOk_K2Node_ComponentBoundEvent_148_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_165_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaCustomizationTab_C::BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_165_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_165_CommonButtonClicked__DelegateSignature");

	UAthenaCustomizationTab_C_BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_165_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__ButtonConfirm_K2Node_ComponentBoundEvent_30_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaCustomizationTab_C::BndEvt__ButtonConfirm_K2Node_ComponentBoundEvent_30_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__ButtonConfirm_K2Node_ComponentBoundEvent_30_CommonButtonClicked__DelegateSignature");

	UAthenaCustomizationTab_C_BndEvt__ButtonConfirm_K2Node_ComponentBoundEvent_30_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.ExecuteUbergraph_AthenaCustomizationTab
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCustomizationTab_C::ExecuteUbergraph_AthenaCustomizationTab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.ExecuteUbergraph_AthenaCustomizationTab");

	UAthenaCustomizationTab_C_ExecuteUbergraph_AthenaCustomizationTab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
