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

// Function Results_BadgeLoot.Results_BadgeLoot_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_BadgeLoot_C::Focus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLoot.Results_BadgeLoot_C.Focus");

	UResults_BadgeLoot_C_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLoot.Results_BadgeLoot_C.ShouldBadgeBeShown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Badge                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShownBadgeBeShown              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UResults_BadgeLoot_C::ShouldBadgeBeShown(class UFortItem* Badge, bool* ShownBadgeBeShown)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLoot.Results_BadgeLoot_C.ShouldBadgeBeShown");

	UResults_BadgeLoot_C_ShouldBadgeBeShown_Params params;
	params.Badge = Badge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShownBadgeBeShown != nullptr)
		*ShownBadgeBeShown = params.ShownBadgeBeShown;
}


// Function Results_BadgeLoot.Results_BadgeLoot_C.SkipToFinalState
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_BadgeLoot_C::SkipToFinalState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLoot.Results_BadgeLoot_C.SkipToFinalState");

	UResults_BadgeLoot_C_SkipToFinalState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLoot.Results_BadgeLoot_C.SetSkippingToEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_BadgeLoot_C::SetSkippingToEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLoot.Results_BadgeLoot_C.SetSkippingToEnd");

	UResults_BadgeLoot_C_SetSkippingToEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLoot.Results_BadgeLoot_C.InitializeDelays
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_BadgeLoot_C::InitializeDelays()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLoot.Results_BadgeLoot_C.InitializeDelays");

	UResults_BadgeLoot_C_InitializeDelays_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLoot.Results_BadgeLoot_C.PlayAnimationCommon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UResults_BadgeLoot_C::PlayAnimationCommon(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLoot.Results_BadgeLoot_C.PlayAnimationCommon");

	UResults_BadgeLoot_C_PlayAnimationCommon_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLoot.Results_BadgeLoot_C.StepBadgeQueues
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_BadgeLoot_C::StepBadgeQueues()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLoot.Results_BadgeLoot_C.StepBadgeQueues");

	UResults_BadgeLoot_C_StepBadgeQueues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLoot.Results_BadgeLoot_C.HasMoreBadgesToShow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bMoreBadgesToShow              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UResults_BadgeLoot_C::HasMoreBadgesToShow(bool* bMoreBadgesToShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLoot.Results_BadgeLoot_C.HasMoreBadgesToShow");

	UResults_BadgeLoot_C_HasMoreBadgesToShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bMoreBadgesToShow != nullptr)
		*bMoreBadgesToShow = params.bMoreBadgesToShow;
}


// Function Results_BadgeLoot.Results_BadgeLoot_C.PopulateNextBadge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UResults_Badge_C*        Badge                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UResults_BadgeLoot_C::PopulateNextBadge(class UResults_Badge_C* Badge)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLoot.Results_BadgeLoot_C.PopulateNextBadge");

	UResults_BadgeLoot_C_PopulateNextBadge_Params params;
	params.Badge = Badge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLoot.Results_BadgeLoot_C.Initialize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortItem*>       RewardItems                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UResults_BadgeLoot_C::Initialize(TArray<class UFortItem*>* RewardItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLoot.Results_BadgeLoot_C.Initialize");

	UResults_BadgeLoot_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RewardItems != nullptr)
		*RewardItems = params.RewardItems;
}


// Function Results_BadgeLoot.Results_BadgeLoot_C.Intro Sequence
// (BlueprintCallable, BlueprintEvent)

void UResults_BadgeLoot_C::Intro_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLoot.Results_BadgeLoot_C.Intro Sequence");

	UResults_BadgeLoot_C_Intro_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLoot.Results_BadgeLoot_C.BndEvt__Results_RewardPackage_K2Node_ComponentBoundEvent_9_IntroComplete__DelegateSignature
// (BlueprintEvent)

void UResults_BadgeLoot_C::BndEvt__Results_RewardPackage_K2Node_ComponentBoundEvent_9_IntroComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLoot.Results_BadgeLoot_C.BndEvt__Results_RewardPackage_K2Node_ComponentBoundEvent_9_IntroComplete__DelegateSignature");

	UResults_BadgeLoot_C_BndEvt__Results_RewardPackage_K2Node_ComponentBoundEvent_9_IntroComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLoot.Results_BadgeLoot_C.Add Badges Sequence
// (BlueprintCallable, BlueprintEvent)

void UResults_BadgeLoot_C::Add_Badges_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLoot.Results_BadgeLoot_C.Add Badges Sequence");

	UResults_BadgeLoot_C_Add_Badges_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLoot.Results_BadgeLoot_C.Add Next Badge
// (BlueprintCallable, BlueprintEvent)

void UResults_BadgeLoot_C::Add_Next_Badge()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLoot.Results_BadgeLoot_C.Add Next Badge");

	UResults_BadgeLoot_C_Add_Next_Badge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLoot.Results_BadgeLoot_C.OnConvertFinished
// (BlueprintCallable, BlueprintEvent)

void UResults_BadgeLoot_C::OnConvertFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLoot.Results_BadgeLoot_C.OnConvertFinished");

	UResults_BadgeLoot_C_OnConvertFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLoot.Results_BadgeLoot_C.FinishedAddingBadges
// (BlueprintCallable, BlueprintEvent)

void UResults_BadgeLoot_C::FinishedAddingBadges()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLoot.Results_BadgeLoot_C.FinishedAddingBadges");

	UResults_BadgeLoot_C_FinishedAddingBadges_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLoot.Results_BadgeLoot_C.BndEvt__Anim_Outro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UResults_BadgeLoot_C::BndEvt__Anim_Outro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLoot.Results_BadgeLoot_C.BndEvt__Anim_Outro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UResults_BadgeLoot_C_BndEvt__Anim_Outro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLoot.Results_BadgeLoot_C.BndEvt__ResultsBar_K2Node_ComponentBoundEvent_3_FinishedAddingBadgePoints__DelegateSignature
// (BlueprintEvent)

void UResults_BadgeLoot_C::BndEvt__ResultsBar_K2Node_ComponentBoundEvent_3_FinishedAddingBadgePoints__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLoot.Results_BadgeLoot_C.BndEvt__ResultsBar_K2Node_ComponentBoundEvent_3_FinishedAddingBadgePoints__DelegateSignature");

	UResults_BadgeLoot_C_BndEvt__ResultsBar_K2Node_ComponentBoundEvent_3_FinishedAddingBadgePoints__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLoot.Results_BadgeLoot_C.BndEvt__ResultsBadgeLootBar_K2Node_ComponentBoundEvent_5_LeveledUp__DelegateSignature
// (BlueprintEvent)

void UResults_BadgeLoot_C::BndEvt__ResultsBadgeLootBar_K2Node_ComponentBoundEvent_5_LeveledUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLoot.Results_BadgeLoot_C.BndEvt__ResultsBadgeLootBar_K2Node_ComponentBoundEvent_5_LeveledUp__DelegateSignature");

	UResults_BadgeLoot_C_BndEvt__ResultsBadgeLootBar_K2Node_ComponentBoundEvent_5_LeveledUp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLoot.Results_BadgeLoot_C.BndEvt__Anim_Outro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UResults_BadgeLoot_C::BndEvt__Anim_Outro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLoot.Results_BadgeLoot_C.BndEvt__Anim_Outro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UResults_BadgeLoot_C_BndEvt__Anim_Outro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLoot.Results_BadgeLoot_C.Zoom In Sequence
// (BlueprintCallable, BlueprintEvent)

void UResults_BadgeLoot_C::Zoom_In_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLoot.Results_BadgeLoot_C.Zoom In Sequence");

	UResults_BadgeLoot_C_Zoom_In_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLoot.Results_BadgeLoot_C.Skip To End Sequence
// (BlueprintCallable, BlueprintEvent)

void UResults_BadgeLoot_C::Skip_To_End_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLoot.Results_BadgeLoot_C.Skip To End Sequence");

	UResults_BadgeLoot_C_Skip_To_End_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLoot.Results_BadgeLoot_C.HandleClientEvent_ChestIntroDone
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UResults_BadgeLoot_C::HandleClientEvent_ChestIntroDone(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLoot.Results_BadgeLoot_C.HandleClientEvent_ChestIntroDone");

	UResults_BadgeLoot_C_HandleClientEvent_ChestIntroDone_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLoot.Results_BadgeLoot_C.HandleClientEvent_ChestProgressionDone
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UResults_BadgeLoot_C::HandleClientEvent_ChestProgressionDone(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLoot.Results_BadgeLoot_C.HandleClientEvent_ChestProgressionDone");

	UResults_BadgeLoot_C_HandleClientEvent_ChestProgressionDone_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLoot.Results_BadgeLoot_C.HandleClientEvent_ChestResultFocusDone
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UResults_BadgeLoot_C::HandleClientEvent_ChestResultFocusDone(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLoot.Results_BadgeLoot_C.HandleClientEvent_ChestResultFocusDone");

	UResults_BadgeLoot_C_HandleClientEvent_ChestResultFocusDone_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLoot.Results_BadgeLoot_C.HandleClientEvent_ChestOutroDone
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UResults_BadgeLoot_C::HandleClientEvent_ChestOutroDone(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLoot.Results_BadgeLoot_C.HandleClientEvent_ChestOutroDone");

	UResults_BadgeLoot_C_HandleClientEvent_ChestOutroDone_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLoot.Results_BadgeLoot_C.Skip
// (BlueprintCallable, BlueprintEvent)

void UResults_BadgeLoot_C::Skip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLoot.Results_BadgeLoot_C.Skip");

	UResults_BadgeLoot_C_Skip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLoot.Results_BadgeLoot_C.BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_279_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UResults_BadgeLoot_C::BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_279_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLoot.Results_BadgeLoot_C.BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_279_CommonButtonClicked__DelegateSignature");

	UResults_BadgeLoot_C_BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_279_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLoot.Results_BadgeLoot_C.BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UResults_BadgeLoot_C::BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLoot.Results_BadgeLoot_C.BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UResults_BadgeLoot_C_BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLoot.Results_BadgeLoot_C.ExecuteUbergraph_Results_BadgeLoot
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_BadgeLoot_C::ExecuteUbergraph_Results_BadgeLoot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLoot.Results_BadgeLoot_C.ExecuteUbergraph_Results_BadgeLoot");

	UResults_BadgeLoot_C_ExecuteUbergraph_Results_BadgeLoot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLoot.Results_BadgeLoot_C.Finished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UResults_BadgeLoot_C::Finished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLoot.Results_BadgeLoot_C.Finished__DelegateSignature");

	UResults_BadgeLoot_C_Finished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
