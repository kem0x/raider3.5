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

// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.GetWarningText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<EItemRecyclingWarning>  Warnings                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           HasAnimateItem                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   WarningText                    (Parm, OutParm)

void UItemManagementItemTilePopupMenu_C::GetWarningText(bool HasAnimateItem, TArray<EItemRecyclingWarning>* Warnings, struct FText* WarningText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.GetWarningText");

	UItemManagementItemTilePopupMenu_C_GetWarningText_Params params;
	params.HasAnimateItem = HasAnimateItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Warnings != nullptr)
		*Warnings = params.Warnings;
	if (WarningText != nullptr)
		*WarningText = params.WarningText;
}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.UpdateCollectionBookButtonVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UItemManagementItemTilePopupMenu_C::UpdateCollectionBookButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.UpdateCollectionBookButtonVisibility");

	UItemManagementItemTilePopupMenu_C_UpdateCollectionBookButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.UpdateRecycleButtonVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UItemManagementItemTilePopupMenu_C::UpdateRecycleButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.UpdateRecycleButtonVisibility");

	UItemManagementItemTilePopupMenu_C_UpdateRecycleButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.UpdateFavoriteFlag
// (Public, BlueprintCallable, BlueprintEvent)

void UItemManagementItemTilePopupMenu_C::UpdateFavoriteFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.UpdateFavoriteFlag");

	UItemManagementItemTilePopupMenu_C_UpdateFavoriteFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.SetupRecycleRetireText
// (Public, BlueprintCallable, BlueprintEvent)

void UItemManagementItemTilePopupMenu_C::SetupRecycleRetireText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.SetupRecycleRetireText");

	UItemManagementItemTilePopupMenu_C_SetupRecycleRetireText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.OnSlotItemInCollectionBookComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAccountItem*        AccountItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SlotId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementItemTilePopupMenu_C::OnSlotItemInCollectionBookComplete(class UFortAccountItem* AccountItem, const struct FName& SlotId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.OnSlotItemInCollectionBookComplete");

	UItemManagementItemTilePopupMenu_C_OnSlotItemInCollectionBookComplete_Params params;
	params.AccountItem = AccountItem;
	params.SlotId = SlotId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.CacheCollectionBookStatus
// (Public, BlueprintCallable, BlueprintEvent)

void UItemManagementItemTilePopupMenu_C::CacheCollectionBookStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.CacheCollectionBookStatus");

	UItemManagementItemTilePopupMenu_C_CacheCollectionBookStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.DialogResult_AA710CD8400475561228C78BEBCE1FFB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWaitingForLatentActionCompletion (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortDialogExternalLatentActionHandle WaitingDialogHandle            (BlueprintVisible, BlueprintReadOnly, Parm)

void UItemManagementItemTilePopupMenu_C::DialogResult_AA710CD8400475561228C78BEBCE1FFB(EFortDialogResult Result, const struct FName& ResultName, bool bWaitingForLatentActionCompletion, const struct FFortDialogExternalLatentActionHandle& WaitingDialogHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.DialogResult_AA710CD8400475561228C78BEBCE1FFB");

	UItemManagementItemTilePopupMenu_C_DialogResult_AA710CD8400475561228C78BEBCE1FFB_Params params;
	params.Result = Result;
	params.ResultName = ResultName;
	params.bWaitingForLatentActionCompletion = bWaitingForLatentActionCompletion;
	params.WaitingDialogHandle = WaitingDialogHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UItemManagementItemTilePopupMenu_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.OnActivated");

	UItemManagementItemTilePopupMenu_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.HandleItemChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bItemChanged                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAmmoChanged                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIngredientsChanged            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementItemTilePopupMenu_C::HandleItemChanged(bool* bItemChanged, bool* bAmmoChanged, bool* bIngredientsChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.HandleItemChanged");

	UItemManagementItemTilePopupMenu_C_HandleItemChanged_Params params;
	params.bItemChanged = bItemChanged;
	params.bAmmoChanged = bAmmoChanged;
	params.bIngredientsChanged = bIngredientsChanged;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.BndEvt__BatchRecycleButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemManagementItemTilePopupMenu_C::BndEvt__BatchRecycleButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.BndEvt__BatchRecycleButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature");

	UItemManagementItemTilePopupMenu_C_BndEvt__BatchRecycleButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemManagementItemTilePopupMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.Construct");

	UItemManagementItemTilePopupMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.BndEvt__ButtonAddToCB_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemManagementItemTilePopupMenu_C::BndEvt__ButtonAddToCB_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.BndEvt__ButtonAddToCB_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature");

	UItemManagementItemTilePopupMenu_C_BndEvt__ButtonAddToCB_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.HandlePostDifferentContextProviderSet
// (Event, Protected, BlueprintEvent)

void UItemManagementItemTilePopupMenu_C::HandlePostDifferentContextProviderSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.HandlePostDifferentContextProviderSet");

	UItemManagementItemTilePopupMenu_C_HandlePostDifferentContextProviderSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.OnBeginOutro
// (Event, Public, BlueprintEvent)

void UItemManagementItemTilePopupMenu_C::OnBeginOutro()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.OnBeginOutro");

	UItemManagementItemTilePopupMenu_C_OnBeginOutro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.OnBeginIntro
// (Event, Public, BlueprintEvent)

void UItemManagementItemTilePopupMenu_C::OnBeginIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.OnBeginIntro");

	UItemManagementItemTilePopupMenu_C_OnBeginIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UItemManagementItemTilePopupMenu_C::BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UItemManagementItemTilePopupMenu_C_BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.BndEvt__ToggleFavoriteButton_K2Node_ComponentBoundEvent_210_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemManagementItemTilePopupMenu_C::BndEvt__ToggleFavoriteButton_K2Node_ComponentBoundEvent_210_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.BndEvt__ToggleFavoriteButton_K2Node_ComponentBoundEvent_210_CommonButtonClicked__DelegateSignature");

	UItemManagementItemTilePopupMenu_C_BndEvt__ToggleFavoriteButton_K2Node_ComponentBoundEvent_210_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.BndEvt__AddToCollectionButton_K2Node_ComponentBoundEvent_230_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemManagementItemTilePopupMenu_C::BndEvt__AddToCollectionButton_K2Node_ComponentBoundEvent_230_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.BndEvt__AddToCollectionButton_K2Node_ComponentBoundEvent_230_CommonButtonClicked__DelegateSignature");

	UItemManagementItemTilePopupMenu_C_BndEvt__AddToCollectionButton_K2Node_ComponentBoundEvent_230_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_273_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemManagementItemTilePopupMenu_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_273_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_273_CommonButtonClicked__DelegateSignature");

	UItemManagementItemTilePopupMenu_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_273_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.BndEvt__CompareButton_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemManagementItemTilePopupMenu_C::BndEvt__CompareButton_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.BndEvt__CompareButton_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature");

	UItemManagementItemTilePopupMenu_C_BndEvt__CompareButton_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UItemManagementItemTilePopupMenu_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.OnDeactivated");

	UItemManagementItemTilePopupMenu_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementItemTilePopupMenu_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.Tick");

	UItemManagementItemTilePopupMenu_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.ResetGate
// (BlueprintCallable, BlueprintEvent)

void UItemManagementItemTilePopupMenu_C::ResetGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.ResetGate");

	UItemManagementItemTilePopupMenu_C_ResetGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.ExecuteUbergraph_ItemManagementItemTilePopupMenu
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementItemTilePopupMenu_C::ExecuteUbergraph_ItemManagementItemTilePopupMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.ExecuteUbergraph_ItemManagementItemTilePopupMenu");

	UItemManagementItemTilePopupMenu_C_ExecuteUbergraph_ItemManagementItemTilePopupMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
