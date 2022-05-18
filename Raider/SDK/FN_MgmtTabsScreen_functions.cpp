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

// Function MgmtTabsScreen.MgmtTabsScreen_C.HandleMgmtMenuTabChangeRequested
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TabName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMgmtTabsScreen_C::HandleMgmtMenuTabChangeRequested(const struct FName& TabName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MgmtTabsScreen.MgmtTabsScreen_C.HandleMgmtMenuTabChangeRequested");

	UMgmtTabsScreen_C_HandleMgmtMenuTabChangeRequested_Params params;
	params.TabName = TabName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MgmtTabsScreen.MgmtTabsScreen_C.HandleDamageReceived
// (Public, BlueprintCallable, BlueprintEvent)

void UMgmtTabsScreen_C::HandleDamageReceived()
{
	static auto fn = UObject::FindObject<UFunction>("Function MgmtTabsScreen.MgmtTabsScreen_C.HandleDamageReceived");

	UMgmtTabsScreen_C_HandleDamageReceived_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MgmtTabsScreen.MgmtTabsScreen_C.HandleCursorModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ActionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             CursorModeContentCustomWidget  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMgmtTabsScreen_C::HandleCursorModeChanged(bool IsEnabled, const struct FName& ActionName, class UUserWidget* CursorModeContentCustomWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MgmtTabsScreen.MgmtTabsScreen_C.HandleCursorModeChanged");

	UMgmtTabsScreen_C_HandleCursorModeChanged_Params params;
	params.IsEnabled = IsEnabled;
	params.ActionName = ActionName;
	params.CursorModeContentCustomWidget = CursorModeContentCustomWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MgmtTabsScreen.MgmtTabsScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UMgmtTabsScreen_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function MgmtTabsScreen.MgmtTabsScreen_C.OnActivated");

	UMgmtTabsScreen_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MgmtTabsScreen.MgmtTabsScreen_C.BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButton*           TabButton                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMgmtTabsScreen_C::BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function MgmtTabsScreen.MgmtTabsScreen_C.BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature");

	UMgmtTabsScreen_C_BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature_Params params;
	params.TabId = TabId;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MgmtTabsScreen.MgmtTabsScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMgmtTabsScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MgmtTabsScreen.MgmtTabsScreen_C.Construct");

	UMgmtTabsScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MgmtTabsScreen.MgmtTabsScreen_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMgmtTabsScreen_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MgmtTabsScreen.MgmtTabsScreen_C.Destruct");

	UMgmtTabsScreen_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MgmtTabsScreen.MgmtTabsScreen_C.HandleShowQuests
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortUIFeature                 ChangedFeature                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortUIFeatureState            NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortUIFeatureStateReason      StateReason                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMgmtTabsScreen_C::HandleShowQuests(EFortUIFeature ChangedFeature, EFortUIFeatureState NewState, EFortUIFeatureStateReason StateReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function MgmtTabsScreen.MgmtTabsScreen_C.HandleShowQuests");

	UMgmtTabsScreen_C_HandleShowQuests_Params params;
	params.ChangedFeature = ChangedFeature;
	params.NewState = NewState;
	params.StateReason = StateReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MgmtTabsScreen.MgmtTabsScreen_C.HandleShowObjectives
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortUIFeature                 ChangedFeature                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortUIFeatureState            NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortUIFeatureStateReason      StateReason                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMgmtTabsScreen_C::HandleShowObjectives(EFortUIFeature ChangedFeature, EFortUIFeatureState NewState, EFortUIFeatureStateReason StateReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function MgmtTabsScreen.MgmtTabsScreen_C.HandleShowObjectives");

	UMgmtTabsScreen_C_HandleShowObjectives_Params params;
	params.ChangedFeature = ChangedFeature;
	params.NewState = NewState;
	params.StateReason = StateReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MgmtTabsScreen.MgmtTabsScreen_C.ExecuteUbergraph_MgmtTabsScreen
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMgmtTabsScreen_C::ExecuteUbergraph_MgmtTabsScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MgmtTabsScreen.MgmtTabsScreen_C.ExecuteUbergraph_MgmtTabsScreen");

	UMgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
