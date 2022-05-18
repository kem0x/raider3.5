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

// Function Results_BadgeLoot.Results_BadgeLoot_C.Focus
struct UResults_BadgeLoot_C_Focus_Params
{
};

// Function Results_BadgeLoot.Results_BadgeLoot_C.ShouldBadgeBeShown
struct UResults_BadgeLoot_C_ShouldBadgeBeShown_Params
{
	class UFortItem*                                   Badge;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShownBadgeBeShown;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Results_BadgeLoot.Results_BadgeLoot_C.SkipToFinalState
struct UResults_BadgeLoot_C_SkipToFinalState_Params
{
};

// Function Results_BadgeLoot.Results_BadgeLoot_C.SetSkippingToEnd
struct UResults_BadgeLoot_C_SetSkippingToEnd_Params
{
};

// Function Results_BadgeLoot.Results_BadgeLoot_C.InitializeDelays
struct UResults_BadgeLoot_C_InitializeDelays_Params
{
};

// Function Results_BadgeLoot.Results_BadgeLoot_C.PlayAnimationCommon
struct UResults_BadgeLoot_C_PlayAnimationCommon_Params
{
	class UWidgetAnimation*                            Animation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Results_BadgeLoot.Results_BadgeLoot_C.StepBadgeQueues
struct UResults_BadgeLoot_C_StepBadgeQueues_Params
{
};

// Function Results_BadgeLoot.Results_BadgeLoot_C.HasMoreBadgesToShow
struct UResults_BadgeLoot_C_HasMoreBadgesToShow_Params
{
	bool                                               bMoreBadgesToShow;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Results_BadgeLoot.Results_BadgeLoot_C.PopulateNextBadge
struct UResults_BadgeLoot_C_PopulateNextBadge_Params
{
	class UResults_Badge_C*                            Badge;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Results_BadgeLoot.Results_BadgeLoot_C.Initialize
struct UResults_BadgeLoot_C_Initialize_Params
{
	TArray<class UFortItem*>                           RewardItems;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Results_BadgeLoot.Results_BadgeLoot_C.Intro Sequence
struct UResults_BadgeLoot_C_Intro_Sequence_Params
{
};

// Function Results_BadgeLoot.Results_BadgeLoot_C.BndEvt__Results_RewardPackage_K2Node_ComponentBoundEvent_9_IntroComplete__DelegateSignature
struct UResults_BadgeLoot_C_BndEvt__Results_RewardPackage_K2Node_ComponentBoundEvent_9_IntroComplete__DelegateSignature_Params
{
};

// Function Results_BadgeLoot.Results_BadgeLoot_C.Add Badges Sequence
struct UResults_BadgeLoot_C_Add_Badges_Sequence_Params
{
};

// Function Results_BadgeLoot.Results_BadgeLoot_C.Add Next Badge
struct UResults_BadgeLoot_C_Add_Next_Badge_Params
{
};

// Function Results_BadgeLoot.Results_BadgeLoot_C.OnConvertFinished
struct UResults_BadgeLoot_C_OnConvertFinished_Params
{
};

// Function Results_BadgeLoot.Results_BadgeLoot_C.FinishedAddingBadges
struct UResults_BadgeLoot_C_FinishedAddingBadges_Params
{
};

// Function Results_BadgeLoot.Results_BadgeLoot_C.BndEvt__Anim_Outro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_BadgeLoot_C_BndEvt__Anim_Outro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function Results_BadgeLoot.Results_BadgeLoot_C.BndEvt__ResultsBar_K2Node_ComponentBoundEvent_3_FinishedAddingBadgePoints__DelegateSignature
struct UResults_BadgeLoot_C_BndEvt__ResultsBar_K2Node_ComponentBoundEvent_3_FinishedAddingBadgePoints__DelegateSignature_Params
{
};

// Function Results_BadgeLoot.Results_BadgeLoot_C.BndEvt__ResultsBadgeLootBar_K2Node_ComponentBoundEvent_5_LeveledUp__DelegateSignature
struct UResults_BadgeLoot_C_BndEvt__ResultsBadgeLootBar_K2Node_ComponentBoundEvent_5_LeveledUp__DelegateSignature_Params
{
};

// Function Results_BadgeLoot.Results_BadgeLoot_C.BndEvt__Anim_Outro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_BadgeLoot_C_BndEvt__Anim_Outro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function Results_BadgeLoot.Results_BadgeLoot_C.Zoom In Sequence
struct UResults_BadgeLoot_C_Zoom_In_Sequence_Params
{
};

// Function Results_BadgeLoot.Results_BadgeLoot_C.Skip To End Sequence
struct UResults_BadgeLoot_C_Skip_To_End_Sequence_Params
{
};

// Function Results_BadgeLoot.Results_BadgeLoot_C.HandleClientEvent_ChestIntroDone
struct UResults_BadgeLoot_C_HandleClientEvent_ChestIntroDone_Params
{
	class UObject*                                     EventSource;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FFortClientEvent                            ClientEvent;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Results_BadgeLoot.Results_BadgeLoot_C.HandleClientEvent_ChestProgressionDone
struct UResults_BadgeLoot_C_HandleClientEvent_ChestProgressionDone_Params
{
	class UObject*                                     EventSource;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FFortClientEvent                            ClientEvent;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Results_BadgeLoot.Results_BadgeLoot_C.HandleClientEvent_ChestResultFocusDone
struct UResults_BadgeLoot_C_HandleClientEvent_ChestResultFocusDone_Params
{
	class UObject*                                     EventSource;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FFortClientEvent                            ClientEvent;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Results_BadgeLoot.Results_BadgeLoot_C.HandleClientEvent_ChestOutroDone
struct UResults_BadgeLoot_C_HandleClientEvent_ChestOutroDone_Params
{
	class UObject*                                     EventSource;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FFortClientEvent                            ClientEvent;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Results_BadgeLoot.Results_BadgeLoot_C.Skip
struct UResults_BadgeLoot_C_Skip_Params
{
};

// Function Results_BadgeLoot.Results_BadgeLoot_C.BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_279_CommonButtonClicked__DelegateSignature
struct UResults_BadgeLoot_C_BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_279_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Results_BadgeLoot.Results_BadgeLoot_C.BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_BadgeLoot_C_BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function Results_BadgeLoot.Results_BadgeLoot_C.ExecuteUbergraph_Results_BadgeLoot
struct UResults_BadgeLoot_C_ExecuteUbergraph_Results_BadgeLoot_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_BadgeLoot.Results_BadgeLoot_C.Finished__DelegateSignature
struct UResults_BadgeLoot_C_Finished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
