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

// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.Refresh Tab Button Bangs
// (Public, BlueprintCallable, BlueprintEvent)

void UItemTransformKeyScreen_C::Refresh_Tab_Button_Bangs()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.Refresh Tab Button Bangs");

	UItemTransformKeyScreen_C_Refresh_Tab_Button_Bangs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.Determine Tab List Title
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   TabNameID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)

void UItemTransformKeyScreen_C::Determine_Tab_List_Title(const struct FName& TabNameID, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.Determine Tab List Title");

	UItemTransformKeyScreen_C_Determine_Tab_List_Title_Params params;
	params.TabNameID = TabNameID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.Determine Key Types to See
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TabNameID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EConversionControlKeyRequest   RequestType                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemTransformKeyScreen_C::Determine_Key_Types_to_See(const struct FName& TabNameID, EConversionControlKeyRequest* RequestType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.Determine Key Types to See");

	UItemTransformKeyScreen_C_Determine_Key_Types_to_See_Params params;
	params.TabNameID = TabNameID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RequestType != nullptr)
		*RequestType = params.RequestType;
}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.NavigateToFirstItem
// (Public, BlueprintCallable, BlueprintEvent)

void UItemTransformKeyScreen_C::NavigateToFirstItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.NavigateToFirstItem");

	UItemTransformKeyScreen_C_NavigateToFirstItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.NavigateToSelectedItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               InItem                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemTransformKeyScreen_C::NavigateToSelectedItem(class UFortItem* InItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.NavigateToSelectedItem");

	UItemTransformKeyScreen_C_NavigateToSelectedItem_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.Get Selected Item
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               SelectedKey                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemTransformKeyScreen_C::Get_Selected_Item(class UFortItem** SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.Get Selected Item");

	UItemTransformKeyScreen_C_Get_Selected_Item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedKey != nullptr)
		*SelectedKey = params.SelectedKey;
}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.ResetScreen
// (Public, BlueprintCallable, BlueprintEvent)

void UItemTransformKeyScreen_C::ResetScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.ResetScreen");

	UItemTransformKeyScreen_C_ResetScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.HandleItemSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemTransformKeyScreen_C::HandleItemSelected(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.HandleItemSelected");

	UItemTransformKeyScreen_C_HandleItemSelected_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.SetupKeyList
// (Public, BlueprintCallable, BlueprintEvent)

void UItemTransformKeyScreen_C::SetupKeyList()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.SetupKeyList");

	UItemTransformKeyScreen_C_SetupKeyList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.RebuildKeyList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EConversionControlKeyRequest   RequestType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemTransformKeyScreen_C::RebuildKeyList(EConversionControlKeyRequest RequestType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.RebuildKeyList");

	UItemTransformKeyScreen_C_RebuildKeyList_Params params;
	params.RequestType = RequestType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemTransformKeyScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.Construct");

	UItemTransformKeyScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_189_OnItemSelectionEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortItem*               SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemTransformKeyScreen_C::BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_189_OnItemSelectionEvent__DelegateSignature(class UFortItem* SelectedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_189_OnItemSelectionEvent__DelegateSignature");

	UItemTransformKeyScreen_C_BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_189_OnItemSelectionEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_17_OnTabSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemTransformKeyScreen_C::BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_17_OnTabSelected__DelegateSignature(const struct FName& TabId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_17_OnTabSelected__DelegateSignature");

	UItemTransformKeyScreen_C_BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_17_OnTabSelected__DelegateSignature_Params params;
	params.TabId = TabId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.HandleHomebaseInventoryChanged
// (BlueprintCallable, BlueprintEvent)

void UItemTransformKeyScreen_C::HandleHomebaseInventoryChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.HandleHomebaseInventoryChanged");

	UItemTransformKeyScreen_C_HandleHomebaseInventoryChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_40_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButton*           TabButton                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemTransformKeyScreen_C::BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_40_OnTabButtonCreated__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_40_OnTabButtonCreated__DelegateSignature");

	UItemTransformKeyScreen_C_BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_40_OnTabButtonCreated__DelegateSignature_Params params;
	params.TabId = TabId;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_77_OnItemSelectionEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortItem*               SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemTransformKeyScreen_C::BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_77_OnItemSelectionEvent__DelegateSignature(class UFortItem* SelectedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_77_OnItemSelectionEvent__DelegateSignature");

	UItemTransformKeyScreen_C_BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_77_OnItemSelectionEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_116_OnItemSelectionEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortItem*               SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemTransformKeyScreen_C::BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_116_OnItemSelectionEvent__DelegateSignature(class UFortItem* SelectedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_116_OnItemSelectionEvent__DelegateSignature");

	UItemTransformKeyScreen_C_BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_116_OnItemSelectionEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.HACK
// (BlueprintCallable, BlueprintEvent)

void UItemTransformKeyScreen_C::HACK()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.HACK");

	UItemTransformKeyScreen_C_HACK_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.ExecuteUbergraph_ItemTransformKeyScreen
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemTransformKeyScreen_C::ExecuteUbergraph_ItemTransformKeyScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.ExecuteUbergraph_ItemTransformKeyScreen");

	UItemTransformKeyScreen_C_ExecuteUbergraph_ItemTransformKeyScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.OnKeyConfirmed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UItemTransformKeyScreen_C::OnKeyConfirmed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.OnKeyConfirmed__DelegateSignature");

	UItemTransformKeyScreen_C_OnKeyConfirmed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.OnKeySelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemTransformKeyScreen_C::OnKeySelected__DelegateSignature(class UFortItem* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.OnKeySelected__DelegateSignature");

	UItemTransformKeyScreen_C_OnKeySelected__DelegateSignature_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
