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

// Function Results_CommanderXP.Results_CommanderXP_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_CommanderXP_C::Focus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP.Results_CommanderXP_C.Focus");

	UResults_CommanderXP_C_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP.Results_CommanderXP_C.PlayAnimationCommon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UResults_CommanderXP_C::PlayAnimationCommon(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP.Results_CommanderXP_C.PlayAnimationCommon");

	UResults_CommanderXP_C_PlayAnimationCommon_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP.Results_CommanderXP_C.SetSkippingToEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_CommanderXP_C::SetSkippingToEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP.Results_CommanderXP_C.SetSkippingToEnd");

	UResults_CommanderXP_C_SetSkippingToEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP.Results_CommanderXP_C.SkipToFinalState
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_CommanderXP_C::SkipToFinalState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP.Results_CommanderXP_C.SkipToFinalState");

	UResults_CommanderXP_C_SkipToFinalState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP.Results_CommanderXP_C.UpdatePointsText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UResults_CommanderXP_C::UpdatePointsText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP.Results_CommanderXP_C.UpdatePointsText");

	UResults_CommanderXP_C_UpdatePointsText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP.Results_CommanderXP_C.UpdatePointsForLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_CommanderXP_C::UpdatePointsForLevel(int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP.Results_CommanderXP_C.UpdatePointsForLevel");

	UResults_CommanderXP_C_UpdatePointsForLevel_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP.Results_CommanderXP_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIScoreReport*      InScoreReport                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UResults_TeamTotalScore_C* TeamTotalScore                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UResults_CommanderXP_C::Initialize(class UFortUIScoreReport* InScoreReport, class UResults_TeamTotalScore_C* TeamTotalScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP.Results_CommanderXP_C.Initialize");

	UResults_CommanderXP_C_Initialize_Params params;
	params.InScoreReport = InScoreReport;
	params.TeamTotalScore = TeamTotalScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__Results_CommanderXPBar_K2Node_ComponentBoundEvent_1_LeveledUp__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            NewLevel                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_CommanderXP_C::BndEvt__Results_CommanderXPBar_K2Node_ComponentBoundEvent_1_LeveledUp__DelegateSignature(int NewLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__Results_CommanderXPBar_K2Node_ComponentBoundEvent_1_LeveledUp__DelegateSignature");

	UResults_CommanderXP_C_BndEvt__Results_CommanderXPBar_K2Node_ComponentBoundEvent_1_LeveledUp__DelegateSignature_Params params;
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__Anim_SkillPointIncrementIntro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UResults_CommanderXP_C::BndEvt__Anim_SkillPointIncrementIntro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__Anim_SkillPointIncrementIntro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UResults_CommanderXP_C_BndEvt__Anim_SkillPointIncrementIntro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP.Results_CommanderXP_C.Intro Sequence
// (BlueprintCallable, BlueprintEvent)

void UResults_CommanderXP_C::Intro_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP.Results_CommanderXP_C.Intro Sequence");

	UResults_CommanderXP_C_Intro_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__ResultsXPBar_K2Node_ComponentBoundEvent_1_IntroFinished__DelegateSignature
// (BlueprintEvent)

void UResults_CommanderXP_C::BndEvt__ResultsXPBar_K2Node_ComponentBoundEvent_1_IntroFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__ResultsXPBar_K2Node_ComponentBoundEvent_1_IntroFinished__DelegateSignature");

	UResults_CommanderXP_C_BndEvt__ResultsXPBar_K2Node_ComponentBoundEvent_1_IntroFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UResults_CommanderXP_C::BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UResults_CommanderXP_C_BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP.Results_CommanderXP_C.Count Sequence
// (BlueprintCallable, BlueprintEvent)

void UResults_CommanderXP_C::Count_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP.Results_CommanderXP_C.Count Sequence");

	UResults_CommanderXP_C_Count_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__ResultsXPBar_K2Node_ComponentBoundEvent_3_CountFinished__DelegateSignature
// (BlueprintEvent)

void UResults_CommanderXP_C::BndEvt__ResultsXPBar_K2Node_ComponentBoundEvent_3_CountFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__ResultsXPBar_K2Node_ComponentBoundEvent_3_CountFinished__DelegateSignature");

	UResults_CommanderXP_C_BndEvt__ResultsXPBar_K2Node_ComponentBoundEvent_3_CountFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__Anim_ContinueButtonOutro_K2Node_ComponentBoundEvent_5_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UResults_CommanderXP_C::BndEvt__Anim_ContinueButtonOutro_K2Node_ComponentBoundEvent_5_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__Anim_ContinueButtonOutro_K2Node_ComponentBoundEvent_5_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UResults_CommanderXP_C_BndEvt__Anim_ContinueButtonOutro_K2Node_ComponentBoundEvent_5_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__Anim_SkillPointIncrement2_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UResults_CommanderXP_C::BndEvt__Anim_SkillPointIncrement2_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__Anim_SkillPointIncrement2_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UResults_CommanderXP_C_BndEvt__Anim_SkillPointIncrement2_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP.Results_CommanderXP_C.GateSkillPointAnimation1
// (BlueprintCallable, BlueprintEvent)

void UResults_CommanderXP_C::GateSkillPointAnimation1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP.Results_CommanderXP_C.GateSkillPointAnimation1");

	UResults_CommanderXP_C_GateSkillPointAnimation1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP.Results_CommanderXP_C.GateSkillPointAnimation2
// (BlueprintCallable, BlueprintEvent)

void UResults_CommanderXP_C::GateSkillPointAnimation2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP.Results_CommanderXP_C.GateSkillPointAnimation2");

	UResults_CommanderXP_C_GateSkillPointAnimation2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP.Results_CommanderXP_C.ResetGateSkillPointAnimation2
// (BlueprintCallable, BlueprintEvent)

void UResults_CommanderXP_C::ResetGateSkillPointAnimation2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP.Results_CommanderXP_C.ResetGateSkillPointAnimation2");

	UResults_CommanderXP_C_ResetGateSkillPointAnimation2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP.Results_CommanderXP_C.ResetGateSkillPointAnimation1
// (BlueprintCallable, BlueprintEvent)

void UResults_CommanderXP_C::ResetGateSkillPointAnimation1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP.Results_CommanderXP_C.ResetGateSkillPointAnimation1");

	UResults_CommanderXP_C_ResetGateSkillPointAnimation1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP.Results_CommanderXP_C.Skip To End Sequence
// (BlueprintCallable, BlueprintEvent)

void UResults_CommanderXP_C::Skip_To_End_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP.Results_CommanderXP_C.Skip To End Sequence");

	UResults_CommanderXP_C_Skip_To_End_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP.Results_CommanderXP_C.Skip
// (BlueprintCallable, BlueprintEvent)

void UResults_CommanderXP_C::Skip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP.Results_CommanderXP_C.Skip");

	UResults_CommanderXP_C_Skip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UResults_CommanderXP_C::BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	UResults_CommanderXP_C_BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UResults_CommanderXP_C::BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UResults_CommanderXP_C_BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP.Results_CommanderXP_C.ExecuteUbergraph_Results_CommanderXP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_CommanderXP_C::ExecuteUbergraph_Results_CommanderXP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP.Results_CommanderXP_C.ExecuteUbergraph_Results_CommanderXP");

	UResults_CommanderXP_C_ExecuteUbergraph_Results_CommanderXP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP.Results_CommanderXP_C.Finished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UResults_CommanderXP_C::Finished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP.Results_CommanderXP_C.Finished__DelegateSignature");

	UResults_CommanderXP_C_Finished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
