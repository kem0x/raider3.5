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

// Function MessageCenterListItem.MessageCenterListItem_C.DoesItemHaveChildren
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMessageCenterListItem_C::DoesItemHaveChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterListItem.MessageCenterListItem_C.DoesItemHaveChildren");

	UMessageCenterListItem_C_DoesItemHaveChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MessageCenterListItem.MessageCenterListItem_C.GetIndentLevel
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMessageCenterListItem_C::GetIndentLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterListItem.MessageCenterListItem_C.GetIndentLevel");

	UMessageCenterListItem_C_GetIndentLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MessageCenterListItem.MessageCenterListItem_C.IsItemExpanded
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMessageCenterListItem_C::IsItemExpanded()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterListItem.MessageCenterListItem_C.IsItemExpanded");

	UMessageCenterListItem_C_IsItemExpanded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MessageCenterListItem.MessageCenterListItem_C.GetData
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UMessageCenterListItem_C::GetData()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterListItem.MessageCenterListItem_C.GetData");

	UMessageCenterListItem_C_GetData_Params params;

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


// Function MessageCenterListItem.MessageCenterListItem_C.OnAcquireFromPool
// (Event, Protected, BlueprintEvent)

void UMessageCenterListItem_C::OnAcquireFromPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterListItem.MessageCenterListItem_C.OnAcquireFromPool");

	UMessageCenterListItem_C_OnAcquireFromPool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageCenterListItem.MessageCenterListItem_C.OnReleaseToPool
// (Event, Protected, BlueprintEvent)

void UMessageCenterListItem_C::OnReleaseToPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterListItem.MessageCenterListItem_C.OnReleaseToPool");

	UMessageCenterListItem_C_OnReleaseToPool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageCenterListItem.MessageCenterListItem_C.Private_OnExpanderArrowShiftClicked
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMessageCenterListItem_C::Private_OnExpanderArrowShiftClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterListItem.MessageCenterListItem_C.Private_OnExpanderArrowShiftClicked");

	UMessageCenterListItem_C_Private_OnExpanderArrowShiftClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageCenterListItem.MessageCenterListItem_C.RegisterOnClicked
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Callback                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMessageCenterListItem_C::RegisterOnClicked(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterListItem.MessageCenterListItem_C.RegisterOnClicked");

	UMessageCenterListItem_C_RegisterOnClicked_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageCenterListItem.MessageCenterListItem_C.SetExpanded
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bExpanded                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMessageCenterListItem_C::SetExpanded(bool bExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterListItem.MessageCenterListItem_C.SetExpanded");

	UMessageCenterListItem_C_SetExpanded_Params params;
	params.bExpanded = bExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageCenterListItem.MessageCenterListItem_C.SetIndexInList
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InIndexInList                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMessageCenterListItem_C::SetIndexInList(int InIndexInList)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterListItem.MessageCenterListItem_C.SetIndexInList");

	UMessageCenterListItem_C_SetIndexInList_Params params;
	params.InIndexInList = InIndexInList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageCenterListItem.MessageCenterListItem_C.ToggleExpansion
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMessageCenterListItem_C::ToggleExpansion()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterListItem.MessageCenterListItem_C.ToggleExpansion");

	UMessageCenterListItem_C_ToggleExpansion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageCenterListItem.MessageCenterListItem_C.Reset
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMessageCenterListItem_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterListItem.MessageCenterListItem_C.Reset");

	UMessageCenterListItem_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageCenterListItem.MessageCenterListItem_C.SetData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 InData                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommonListView*         OwningList                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMessageCenterListItem_C::SetData(class UObject* InData, class UCommonListView* OwningList)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterListItem.MessageCenterListItem_C.SetData");

	UMessageCenterListItem_C_SetData_Params params;
	params.InData = InData;
	params.OwningList = OwningList;

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


// Function MessageCenterListItem.MessageCenterListItem_C.SetSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMessageCenterListItem_C::SetSelected(bool bSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterListItem.MessageCenterListItem_C.SetSelected");

	UMessageCenterListItem_C_SetSelected_Params params;
	params.bSelected = bSelected;

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
