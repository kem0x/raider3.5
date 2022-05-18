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

// Function Results_CommanderXP.Results_CommanderXP_C.Focus
struct UResults_CommanderXP_C_Focus_Params
{
};

// Function Results_CommanderXP.Results_CommanderXP_C.PlayAnimationCommon
struct UResults_CommanderXP_C_PlayAnimationCommon_Params
{
	class UWidgetAnimation*                            Animation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Results_CommanderXP.Results_CommanderXP_C.SetSkippingToEnd
struct UResults_CommanderXP_C_SetSkippingToEnd_Params
{
};

// Function Results_CommanderXP.Results_CommanderXP_C.SkipToFinalState
struct UResults_CommanderXP_C_SkipToFinalState_Params
{
};

// Function Results_CommanderXP.Results_CommanderXP_C.UpdatePointsText
struct UResults_CommanderXP_C_UpdatePointsText_Params
{
};

// Function Results_CommanderXP.Results_CommanderXP_C.UpdatePointsForLevel
struct UResults_CommanderXP_C_UpdatePointsForLevel_Params
{
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_CommanderXP.Results_CommanderXP_C.Initialize
struct UResults_CommanderXP_C_Initialize_Params
{
	class UFortUIScoreReport*                          InScoreReport;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UResults_TeamTotalScore_C*                   TeamTotalScore;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__Results_CommanderXPBar_K2Node_ComponentBoundEvent_1_LeveledUp__DelegateSignature
struct UResults_CommanderXP_C_BndEvt__Results_CommanderXPBar_K2Node_ComponentBoundEvent_1_LeveledUp__DelegateSignature_Params
{
	int                                                NewLevel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__Anim_SkillPointIncrementIntro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_CommanderXP_C_BndEvt__Anim_SkillPointIncrementIntro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function Results_CommanderXP.Results_CommanderXP_C.Intro Sequence
struct UResults_CommanderXP_C_Intro_Sequence_Params
{
};

// Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__ResultsXPBar_K2Node_ComponentBoundEvent_1_IntroFinished__DelegateSignature
struct UResults_CommanderXP_C_BndEvt__ResultsXPBar_K2Node_ComponentBoundEvent_1_IntroFinished__DelegateSignature_Params
{
};

// Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_CommanderXP_C_BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function Results_CommanderXP.Results_CommanderXP_C.Count Sequence
struct UResults_CommanderXP_C_Count_Sequence_Params
{
};

// Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__ResultsXPBar_K2Node_ComponentBoundEvent_3_CountFinished__DelegateSignature
struct UResults_CommanderXP_C_BndEvt__ResultsXPBar_K2Node_ComponentBoundEvent_3_CountFinished__DelegateSignature_Params
{
};

// Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__Anim_ContinueButtonOutro_K2Node_ComponentBoundEvent_5_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_CommanderXP_C_BndEvt__Anim_ContinueButtonOutro_K2Node_ComponentBoundEvent_5_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__Anim_SkillPointIncrement2_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_CommanderXP_C_BndEvt__Anim_SkillPointIncrement2_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function Results_CommanderXP.Results_CommanderXP_C.GateSkillPointAnimation1
struct UResults_CommanderXP_C_GateSkillPointAnimation1_Params
{
};

// Function Results_CommanderXP.Results_CommanderXP_C.GateSkillPointAnimation2
struct UResults_CommanderXP_C_GateSkillPointAnimation2_Params
{
};

// Function Results_CommanderXP.Results_CommanderXP_C.ResetGateSkillPointAnimation2
struct UResults_CommanderXP_C_ResetGateSkillPointAnimation2_Params
{
};

// Function Results_CommanderXP.Results_CommanderXP_C.ResetGateSkillPointAnimation1
struct UResults_CommanderXP_C_ResetGateSkillPointAnimation1_Params
{
};

// Function Results_CommanderXP.Results_CommanderXP_C.Skip To End Sequence
struct UResults_CommanderXP_C_Skip_To_End_Sequence_Params
{
};

// Function Results_CommanderXP.Results_CommanderXP_C.Skip
struct UResults_CommanderXP_C_Skip_Params
{
};

// Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UResults_CommanderXP_C_BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_CommanderXP_C_BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function Results_CommanderXP.Results_CommanderXP_C.ExecuteUbergraph_Results_CommanderXP
struct UResults_CommanderXP_C_ExecuteUbergraph_Results_CommanderXP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_CommanderXP.Results_CommanderXP_C.Finished__DelegateSignature
struct UResults_CommanderXP_C_Finished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
