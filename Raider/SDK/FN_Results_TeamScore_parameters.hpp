#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Results_TeamScore.Results_TeamScore_C.Focus
struct UResults_TeamScore_C_Focus_Params
{
};

// Function Results_TeamScore.Results_TeamScore_C.InitializeDelays
struct UResults_TeamScore_C_InitializeDelays_Params
{
};

// Function Results_TeamScore.Results_TeamScore_C.SkipToFinalState
struct UResults_TeamScore_C_SkipToFinalState_Params
{
};

// Function Results_TeamScore.Results_TeamScore_C.Initialize
struct UResults_TeamScore_C_Initialize_Params
{
	class UFortUIScoreReport*                          ScoreReport;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UResults_TeamTotalScore_C*                   TeamTotalScore;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Results_TeamScore.Results_TeamScore_C.Intro Sequence
struct UResults_TeamScore_C_Intro_Sequence_Params
{
};

// Function Results_TeamScore.Results_TeamScore_C.Count Total Score Sequence
struct UResults_TeamScore_C_Count_Total_Score_Sequence_Params
{
};

// Function Results_TeamScore.Results_TeamScore_C.Count Team Scores Sequence
struct UResults_TeamScore_C_Count_Team_Scores_Sequence_Params
{
};

// Function Results_TeamScore.Results_TeamScore_C.BndEvt__Anim_ContinueButtonOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_TeamScore_C_BndEvt__Anim_ContinueButtonOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function Results_TeamScore.Results_TeamScore_C.BndEvt__ScoreRowUtility_K2Node_ComponentBoundEvent_1_CountUpFinished__DelegateSignature
struct UResults_TeamScore_C_BndEvt__ScoreRowUtility_K2Node_ComponentBoundEvent_1_CountUpFinished__DelegateSignature_Params
{
};

// Function Results_TeamScore.Results_TeamScore_C.Skip To End  Sequence
struct UResults_TeamScore_C_Skip_To_End__Sequence_Params
{
};

// Function Results_TeamScore.Results_TeamScore_C.On Count Score Finished
struct UResults_TeamScore_C_On_Count_Score_Finished_Params
{
};

// Function Results_TeamScore.Results_TeamScore_C.BndEvt__ScoreRowUtility_K2Node_ComponentBoundEvent_0_CountDownFinished__DelegateSignature
struct UResults_TeamScore_C_BndEvt__ScoreRowUtility_K2Node_ComponentBoundEvent_0_CountDownFinished__DelegateSignature_Params
{
};

// Function Results_TeamScore.Results_TeamScore_C.Skip
struct UResults_TeamScore_C_Skip_Params
{
};

// Function Results_TeamScore.Results_TeamScore_C.BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UResults_TeamScore_C_BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Results_TeamScore.Results_TeamScore_C.BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_TeamScore_C_BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function Results_TeamScore.Results_TeamScore_C.ExecuteUbergraph_Results_TeamScore
struct UResults_TeamScore_C_ExecuteUbergraph_Results_TeamScore_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_TeamScore.Results_TeamScore_C.Finished__DelegateSignature
struct UResults_TeamScore_C_Finished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
