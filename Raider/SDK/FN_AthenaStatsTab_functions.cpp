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

// Function AthenaStatsTab.AthenaStatsTab_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaStatsTab_C::HandleBack(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaStatsTab.AthenaStatsTab_C.HandleBack");

	UAthenaStatsTab_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function AthenaStatsTab.AthenaStatsTab_C.CanShowStats
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCanShowStats                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaStatsTab_C::CanShowStats(bool* bCanShowStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaStatsTab.AthenaStatsTab_C.CanShowStats");

	UAthenaStatsTab_C_CanShowStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCanShowStats != nullptr)
		*bCanShowStats = params.bCanShowStats;
}


// Function AthenaStatsTab.AthenaStatsTab_C.UpdateLastUpdatedTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaStatsTab_C::UpdateLastUpdatedTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaStatsTab.AthenaStatsTab_C.UpdateLastUpdatedTime");

	UAthenaStatsTab_C_UpdateLastUpdatedTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaStatsTab.AthenaStatsTab_C.UpdateStats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaStatsTab_C::UpdateStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaStatsTab.AthenaStatsTab_C.UpdateStats");

	UAthenaStatsTab_C_UpdateStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaStatsTab.AthenaStatsTab_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaStatsTab_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaStatsTab.AthenaStatsTab_C.OnActivated");

	UAthenaStatsTab_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaStatsTab.AthenaStatsTab_C.OnQueryFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bWasSuccessful                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaStatsTab_C::OnQueryFinished(bool* bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaStatsTab.AthenaStatsTab_C.OnQueryFinished");

	UAthenaStatsTab_C_OnQueryFinished_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaStatsTab.AthenaStatsTab_C.BndEvt__StatsTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaStatsTab_C::BndEvt__StatsTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature(const struct FName& TabId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaStatsTab.AthenaStatsTab_C.BndEvt__StatsTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature");

	UAthenaStatsTab_C_BndEvt__StatsTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature_Params params;
	params.TabId = TabId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaStatsTab.AthenaStatsTab_C.OnQueryStarted
// (Event, Public, BlueprintEvent)

void UAthenaStatsTab_C::OnQueryStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaStatsTab.AthenaStatsTab_C.OnQueryStarted");

	UAthenaStatsTab_C_OnQueryStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaStatsTab.AthenaStatsTab_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAthenaStatsTab_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaStatsTab.AthenaStatsTab_C.OnDeactivated");

	UAthenaStatsTab_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaStatsTab.AthenaStatsTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaStatsTab_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaStatsTab.AthenaStatsTab_C.Construct");

	UAthenaStatsTab_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaStatsTab.AthenaStatsTab_C.BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaStatsTab_C::BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaStatsTab.AthenaStatsTab_C.BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature");

	UAthenaStatsTab_C_BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaStatsTab.AthenaStatsTab_C.BndEvt__BacchusClose2Button_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaStatsTab_C::BndEvt__BacchusClose2Button_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaStatsTab.AthenaStatsTab_C.BndEvt__BacchusClose2Button_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	UAthenaStatsTab_C_BndEvt__BacchusClose2Button_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaStatsTab.AthenaStatsTab_C.BndEvt__BacchusClose3Button_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaStatsTab_C::BndEvt__BacchusClose3Button_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaStatsTab.AthenaStatsTab_C.BndEvt__BacchusClose3Button_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature");

	UAthenaStatsTab_C_BndEvt__BacchusClose3Button_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaStatsTab.AthenaStatsTab_C.ExecuteUbergraph_AthenaStatsTab
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaStatsTab_C::ExecuteUbergraph_AthenaStatsTab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaStatsTab.AthenaStatsTab_C.ExecuteUbergraph_AthenaStatsTab");

	UAthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
