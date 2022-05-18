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

// Function AthenaChallengesTab.AthenaChallengesTab_C.SelectFirstBundle
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaChallengesTab_C::SelectFirstBundle()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengesTab.AthenaChallengesTab_C.SelectFirstBundle");

	UAthenaChallengesTab_C_SelectFirstBundle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaChallengesTab.AthenaChallengesTab_C.TreeViewGetChildrenForCategory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UObject*>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UObject*> UAthenaChallengesTab_C::TreeViewGetChildrenForCategory(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengesTab.AthenaChallengesTab_C.TreeViewGetChildrenForCategory");

	UAthenaChallengesTab_C_TreeViewGetChildrenForCategory_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaChallengesTab.AthenaChallengesTab_C.SetupViewedItemData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaChallengesTab_C::SetupViewedItemData(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengesTab.AthenaChallengesTab_C.SetupViewedItemData");

	UAthenaChallengesTab_C_SetupViewedItemData_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaChallengesTab.AthenaChallengesTab_C.UpdateChallengeViews
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaChallengesTab_C::UpdateChallengeViews()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengesTab.AthenaChallengesTab_C.UpdateChallengeViews");

	UAthenaChallengesTab_C_UpdateChallengeViews_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaChallengesTab.AthenaChallengesTab_C.HandleChallengesChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaChallengesTab_C::HandleChallengesChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengesTab.AthenaChallengesTab_C.HandleChallengesChanged");

	UAthenaChallengesTab_C_HandleChallengesChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaChallengesTab.AthenaChallengesTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaChallengesTab_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengesTab.AthenaChallengesTab_C.Construct");

	UAthenaChallengesTab_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaChallengesTab.AthenaChallengesTab_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaChallengesTab_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengesTab.AthenaChallengesTab_C.OnActivated");

	UAthenaChallengesTab_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaChallengesTab.AthenaChallengesTab_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAthenaChallengesTab_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengesTab.AthenaChallengesTab_C.OnDeactivated");

	UAthenaChallengesTab_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaChallengesTab.AthenaChallengesTab_C.BndEvt__ChallangeTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaChallengesTab_C::BndEvt__ChallangeTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemClicked__DelegateSignature(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengesTab.AthenaChallengesTab_C.BndEvt__ChallangeTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemClicked__DelegateSignature");

	UAthenaChallengesTab_C_BndEvt__ChallangeTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemClicked__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaChallengesTab.AthenaChallengesTab_C.OnChallengesChanged
// (Event, Protected, BlueprintEvent)

void UAthenaChallengesTab_C::OnChallengesChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengesTab.AthenaChallengesTab_C.OnChallengesChanged");

	UAthenaChallengesTab_C_OnChallengesChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaChallengesTab.AthenaChallengesTab_C.ExecuteUbergraph_AthenaChallengesTab
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaChallengesTab_C::ExecuteUbergraph_AthenaChallengesTab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengesTab.AthenaChallengesTab_C.ExecuteUbergraph_AthenaChallengesTab");

	UAthenaChallengesTab_C_ExecuteUbergraph_AthenaChallengesTab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
