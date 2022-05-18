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

// Function HelpPanel.HelpPanel_C.UnbindDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void UHelpPanel_C::UnbindDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpPanel.HelpPanel_C.UnbindDelegates");

	UHelpPanel_C_UnbindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HelpPanel.HelpPanel_C.HelpTreeView_GetChildrenForCategory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UObject*>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UObject*> UHelpPanel_C::HelpTreeView_GetChildrenForCategory(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpPanel.HelpPanel_C.HelpTreeView_GetChildrenForCategory");

	UHelpPanel_C_HelpTreeView_GetChildrenForCategory_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HelpPanel.HelpPanel_C.UpdateDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortHelpItem*           SelectedHelpItem               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHelpPanel_C::UpdateDetails(class UFortHelpItem* SelectedHelpItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpPanel.HelpPanel_C.UpdateDetails");

	UHelpPanel_C_UpdateDetails_Params params;
	params.SelectedHelpItem = SelectedHelpItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HelpPanel.HelpPanel_C.HandleTopHelpListChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortHelpItem*>   InHelpItems                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bExpandAll                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHelpPanel_C::HandleTopHelpListChanged(bool bExpandAll, TArray<class UFortHelpItem*>* InHelpItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpPanel.HelpPanel_C.HandleTopHelpListChanged");

	UHelpPanel_C_HandleTopHelpListChanged_Params params;
	params.bExpandAll = bExpandAll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InHelpItems != nullptr)
		*InHelpItems = params.InHelpItems;
}


// Function HelpPanel.HelpPanel_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void UHelpPanel_C::BindDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpPanel.HelpPanel_C.BindDelegates");

	UHelpPanel_C_BindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HelpPanel.HelpPanel_C.BndEvt__IconTextButton_1_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHelpPanel_C::BndEvt__IconTextButton_1_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpPanel.HelpPanel_C.BndEvt__IconTextButton_1_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature");

	UHelpPanel_C_BndEvt__IconTextButton_1_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HelpPanel.HelpPanel_C.BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_256_OnListViewItemSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHelpPanel_C::BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_256_OnListViewItemSelected__DelegateSignature(class UObject* Item, bool bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpPanel.HelpPanel_C.BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_256_OnListViewItemSelected__DelegateSignature");

	UHelpPanel_C_BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_256_OnListViewItemSelected__DelegateSignature_Params params;
	params.Item = Item;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HelpPanel.HelpPanel_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UHelpPanel_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpPanel.HelpPanel_C.OnActivated");

	UHelpPanel_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HelpPanel.HelpPanel_C.BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemWidgetCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHelpPanel_C::BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpPanel.HelpPanel_C.BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemWidgetCreated__DelegateSignature");

	UHelpPanel_C_BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemWidgetCreated__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HelpPanel.HelpPanel_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHelpPanel_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpPanel.HelpPanel_C.Destruct");

	UHelpPanel_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HelpPanel.HelpPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHelpPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpPanel.HelpPanel_C.Construct");

	UHelpPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HelpPanel.HelpPanel_C.OnContextHelpChanged
// (BlueprintCallable, BlueprintEvent)

void UHelpPanel_C::OnContextHelpChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpPanel.HelpPanel_C.OnContextHelpChanged");

	UHelpPanel_C_OnContextHelpChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HelpPanel.HelpPanel_C.ExecuteUbergraph_HelpPanel
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHelpPanel_C::ExecuteUbergraph_HelpPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpPanel.HelpPanel_C.ExecuteUbergraph_HelpPanel");

	UHelpPanel_C_ExecuteUbergraph_HelpPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
