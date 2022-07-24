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

// Function MessageCenterListItem.MessageCenterListItem_C.GetListItemObject
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UMessageCenterListItem_C::GetListItemObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterListItem.MessageCenterListItem_C.GetListItemObject");

	UMessageCenterListItem_C_GetListItemObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MessageCenterListItem.MessageCenterListItem_C.ShowText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UCommonTextBlock*        TextBlock                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMessageCenterListItem_C::ShowText(const struct FText& Text, class UCommonTextBlock* TextBlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterListItem.MessageCenterListItem_C.ShowText");

	UMessageCenterListItem_C_ShowText_Params params;
	params.Text = Text;
	params.TextBlock = TextBlock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageCenterListItem.MessageCenterListItem_C.SetMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINotification*     MESSAGE                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMessageCenterListItem_C::SetMessage(class UFortUINotification* MESSAGE)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterListItem.MessageCenterListItem_C.SetMessage");

	UMessageCenterListItem_C_SetMessage_Params params;
	params.MESSAGE = MESSAGE;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageCenterListItem.MessageCenterListItem_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UMessageCenterListItem_C::BP_OnEntryReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterListItem.MessageCenterListItem_C.BP_OnEntryReleased");

	UMessageCenterListItem_C_BP_OnEntryReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageCenterListItem.MessageCenterListItem_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsExpanded                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMessageCenterListItem_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterListItem.MessageCenterListItem_C.BP_OnItemExpansionChanged");

	UMessageCenterListItem_C_BP_OnItemExpansionChanged_Params params;
	params.bIsExpanded = bIsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageCenterListItem.MessageCenterListItem_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                 ListItemObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMessageCenterListItem_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterListItem.MessageCenterListItem_C.OnListItemObjectSet");

	UMessageCenterListItem_C_OnListItemObjectSet_Params params;
	params.ListItemObject = ListItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageCenterListItem.MessageCenterListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMessageCenterListItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterListItem.MessageCenterListItem_C.Construct");

	UMessageCenterListItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageCenterListItem.MessageCenterListItem_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMessageCenterListItem_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterListItem.MessageCenterListItem_C.BP_OnItemSelectionChanged");

	UMessageCenterListItem_C_BP_OnItemSelectionChanged_Params params;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageCenterListItem.MessageCenterListItem_C.ExecuteUbergraph_MessageCenterListItem
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMessageCenterListItem_C::ExecuteUbergraph_MessageCenterListItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterListItem.MessageCenterListItem_C.ExecuteUbergraph_MessageCenterListItem");

	UMessageCenterListItem_C_ExecuteUbergraph_MessageCenterListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
