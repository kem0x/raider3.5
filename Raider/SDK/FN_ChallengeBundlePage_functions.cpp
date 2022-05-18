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

// Function ChallengeBundlePage.ChallengeBundlePage_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UChallengeBundlePage_C::HandleBack(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundlePage.ChallengeBundlePage_C.HandleBack");

	UChallengeBundlePage_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function ChallengeBundlePage.ChallengeBundlePage_C.CreateQuestWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*          Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortQuestItemDefinition* QuestDefinition                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeBundlePage_C::CreateQuestWidget(class UFortQuestItem* Quest, class UFortQuestItemDefinition* QuestDefinition)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundlePage.ChallengeBundlePage_C.CreateQuestWidget");

	UChallengeBundlePage_C_CreateQuestWidget_Params params;
	params.Quest = Quest;
	params.QuestDefinition = QuestDefinition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeBundlePage.ChallengeBundlePage_C.RegisterEventListeners
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UChallengeBundlePage_C::RegisterEventListeners()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundlePage.ChallengeBundlePage_C.RegisterEventListeners");

	UChallengeBundlePage_C_RegisterEventListeners_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeBundlePage.ChallengeBundlePage_C.ClaimNextQuestReward
// (Public, BlueprintCallable, BlueprintEvent)

void UChallengeBundlePage_C::ClaimNextQuestReward()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundlePage.ChallengeBundlePage_C.ClaimNextQuestReward");

	UChallengeBundlePage_C_ClaimNextQuestReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeBundlePage.ChallengeBundlePage_C.UpdateQuests
// (Public, BlueprintCallable, BlueprintEvent)

void UChallengeBundlePage_C::UpdateQuests()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundlePage.ChallengeBundlePage_C.UpdateQuests");

	UChallengeBundlePage_C_UpdateQuests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeBundlePage.ChallengeBundlePage_C.UpdateBundle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UChallengeBundlePage_C::UpdateBundle()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundlePage.ChallengeBundlePage_C.UpdateBundle");

	UChallengeBundlePage_C_UpdateBundle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeBundlePage.ChallengeBundlePage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChallengeBundlePage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundlePage.ChallengeBundlePage_C.Construct");

	UChallengeBundlePage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeBundlePage.ChallengeBundlePage_C.OnBundleUpdated
// (Event, Protected, BlueprintEvent)

void UChallengeBundlePage_C::OnBundleUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundlePage.ChallengeBundlePage_C.OnBundleUpdated");

	UChallengeBundlePage_C_OnBundleUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeBundlePage.ChallengeBundlePage_C.BndEvt__PagePreviousButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UChallengeBundlePage_C::BndEvt__PagePreviousButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundlePage.ChallengeBundlePage_C.BndEvt__PagePreviousButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	UChallengeBundlePage_C_BndEvt__PagePreviousButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeBundlePage.ChallengeBundlePage_C.BndEvt__PageNextButton_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UChallengeBundlePage_C::BndEvt__PageNextButton_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundlePage.ChallengeBundlePage_C.BndEvt__PageNextButton_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature");

	UChallengeBundlePage_C_BndEvt__PageNextButton_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeBundlePage.ChallengeBundlePage_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UChallengeBundlePage_C::BndEvt__PanelButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundlePage.ChallengeBundlePage_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature");

	UChallengeBundlePage_C_BndEvt__PanelButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeBundlePage.ChallengeBundlePage_C.BndEvt__SwipePanel_K2Node_ComponentBoundEvent_11_OnFortSwipeEvent__DelegateSignature
// (BlueprintEvent)

void UChallengeBundlePage_C::BndEvt__SwipePanel_K2Node_ComponentBoundEvent_11_OnFortSwipeEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundlePage.ChallengeBundlePage_C.BndEvt__SwipePanel_K2Node_ComponentBoundEvent_11_OnFortSwipeEvent__DelegateSignature");

	UChallengeBundlePage_C_BndEvt__SwipePanel_K2Node_ComponentBoundEvent_11_OnFortSwipeEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeBundlePage.ChallengeBundlePage_C.BndEvt__SwipePanel_K2Node_ComponentBoundEvent_26_OnFortSwipeEvent__DelegateSignature
// (BlueprintEvent)

void UChallengeBundlePage_C::BndEvt__SwipePanel_K2Node_ComponentBoundEvent_26_OnFortSwipeEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundlePage.ChallengeBundlePage_C.BndEvt__SwipePanel_K2Node_ComponentBoundEvent_26_OnFortSwipeEvent__DelegateSignature");

	UChallengeBundlePage_C_BndEvt__SwipePanel_K2Node_ComponentBoundEvent_26_OnFortSwipeEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeBundlePage.ChallengeBundlePage_C.ExecuteUbergraph_ChallengeBundlePage
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeBundlePage_C::ExecuteUbergraph_ChallengeBundlePage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundlePage.ChallengeBundlePage_C.ExecuteUbergraph_ChallengeBundlePage");

	UChallengeBundlePage_C_ExecuteUbergraph_ChallengeBundlePage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
