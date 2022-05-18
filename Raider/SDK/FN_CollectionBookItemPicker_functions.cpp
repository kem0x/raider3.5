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

// Function CollectionBookItemPicker.CollectionBookItemPicker_C.Get Type Text
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Type                           (Parm, OutParm)

void UCollectionBookItemPicker_C::Get_Type_Text(class UFortItem* Item, struct FText* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookItemPicker.CollectionBookItemPicker_C.Get Type Text");

	UCollectionBookItemPicker_C_Get_Type_Text_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function CollectionBookItemPicker.CollectionBookItemPicker_C.HandleCommitAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCollectionBookItemPicker_C::HandleCommitAction(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookItemPicker.CollectionBookItemPicker_C.HandleCommitAction");

	UCollectionBookItemPicker_C_HandleCommitAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function CollectionBookItemPicker.CollectionBookItemPicker_C.HandleItemSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 ItemSelected                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCollectionBookItemPicker_C::HandleItemSelected(class UObject* ItemSelected, bool IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookItemPicker.CollectionBookItemPicker_C.HandleItemSelected");

	UCollectionBookItemPicker_C_HandleItemSelected_Params params;
	params.ItemSelected = ItemSelected;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookItemPicker.CollectionBookItemPicker_C.DialogResult_C897FB8741239C9DAE2430AD3D91A030
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWaitingForLatentActionCompletion (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortDialogExternalLatentActionHandle WaitingDialogHandle            (BlueprintVisible, BlueprintReadOnly, Parm)

void UCollectionBookItemPicker_C::DialogResult_C897FB8741239C9DAE2430AD3D91A030(EFortDialogResult Result, const struct FName& ResultName, bool bWaitingForLatentActionCompletion, const struct FFortDialogExternalLatentActionHandle& WaitingDialogHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookItemPicker.CollectionBookItemPicker_C.DialogResult_C897FB8741239C9DAE2430AD3D91A030");

	UCollectionBookItemPicker_C_DialogResult_C897FB8741239C9DAE2430AD3D91A030_Params params;
	params.Result = Result;
	params.ResultName = ResultName;
	params.bWaitingForLatentActionCompletion = bWaitingForLatentActionCompletion;
	params.WaitingDialogHandle = WaitingDialogHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookItemPicker.CollectionBookItemPicker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCollectionBookItemPicker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookItemPicker.CollectionBookItemPicker_C.Construct");

	UCollectionBookItemPicker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookItemPicker.CollectionBookItemPicker_C.ShowSlotItemConfirmation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCollectionBookItemPicker_C::ShowSlotItemConfirmation(class UFortItem* SelectedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookItemPicker.CollectionBookItemPicker_C.ShowSlotItemConfirmation");

	UCollectionBookItemPicker_C_ShowSlotItemConfirmation_Params params;
	params.SelectedItem = SelectedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookItemPicker.CollectionBookItemPicker_C.ExecuteUbergraph_CollectionBookItemPicker
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCollectionBookItemPicker_C::ExecuteUbergraph_CollectionBookItemPicker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookItemPicker.CollectionBookItemPicker_C.ExecuteUbergraph_CollectionBookItemPicker");

	UCollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
