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

// Function HelpListItem.HelpListItem_C.SetupExpansion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Expanded                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHelpListItem_C::SetupExpansion(bool Expanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpListItem.HelpListItem_C.SetupExpansion");

	UHelpListItem_C_SetupExpansion_Params params;
	params.Expanded = Expanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HelpListItem.HelpListItem_C.InitializeItem
// (Public, BlueprintCallable, BlueprintEvent)

void UHelpListItem_C::InitializeItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpListItem.HelpListItem_C.InitializeItem");

	UHelpListItem_C_InitializeItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HelpListItem.HelpListItem_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject**                ListItemObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHelpListItem_C::OnListItemObjectSet(class UObject** ListItemObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpListItem.HelpListItem_C.OnListItemObjectSet");

	UHelpListItem_C_OnListItemObjectSet_Params params;
	params.ListItemObject = ListItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HelpListItem.HelpListItem_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bIsExpanded                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHelpListItem_C::BP_OnItemExpansionChanged(bool* bIsExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpListItem.HelpListItem_C.BP_OnItemExpansionChanged");

	UHelpListItem_C_BP_OnItemExpansionChanged_Params params;
	params.bIsExpanded = bIsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HelpListItem.HelpListItem_C.ExecuteUbergraph_HelpListItem
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHelpListItem_C::ExecuteUbergraph_HelpListItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpListItem.HelpListItem_C.ExecuteUbergraph_HelpListItem");

	UHelpListItem_C_ExecuteUbergraph_HelpListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HelpListItem.HelpListItem_C.InviteJoinChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UHelpListItem_C::InviteJoinChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpListItem.HelpListItem_C.InviteJoinChanged__DelegateSignature");

	UHelpListItem_C_InviteJoinChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
