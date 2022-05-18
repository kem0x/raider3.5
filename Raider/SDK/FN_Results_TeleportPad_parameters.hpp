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

// Function Results_TeleportPad.Results_TeleportPad_C.Should Hide Exit Timer
struct UResults_TeleportPad_C_Should_Hide_Exit_Timer_Params
{
	bool                                               bHideExitTimer;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Results_TeleportPad.Results_TeleportPad_C.Enable
struct UResults_TeleportPad_C_Enable_Params
{
};

// Function Results_TeleportPad.Results_TeleportPad_C.Disable
struct UResults_TeleportPad_C_Disable_Params
{
};

// Function Results_TeleportPad.Results_TeleportPad_C.Focus
struct UResults_TeleportPad_C_Focus_Params
{
};

// Function Results_TeleportPad.Results_TeleportPad_C.Initialize
struct UResults_TeleportPad_C_Initialize_Params
{
	class UFortUIScoreReport*                          InScoreReport;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortCompletionResult                              CompletionResult;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_TeleportPad.Results_TeleportPad_C.Team Score Screen Intro
struct UResults_TeleportPad_C_Team_Score_Screen_Intro_Params
{
};

// Function Results_TeleportPad.Results_TeleportPad_C.Team Score Screen Outro
struct UResults_TeleportPad_C_Team_Score_Screen_Outro_Params
{
};

// Function Results_TeleportPad.Results_TeleportPad_C.Teleport Pad Screen Intro
struct UResults_TeleportPad_C_Teleport_Pad_Screen_Intro_Params
{
};

// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad1_K2Node_ComponentBoundEvent_1_OnMissionStatsClicked__DelegateSignature
struct UResults_TeleportPad_C_BndEvt__TeleportPad1_K2Node_ComponentBoundEvent_1_OnMissionStatsClicked__DelegateSignature_Params
{
};

// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad2_K2Node_ComponentBoundEvent_2_OnMissionStatsClicked__DelegateSignature
struct UResults_TeleportPad_C_BndEvt__TeleportPad2_K2Node_ComponentBoundEvent_2_OnMissionStatsClicked__DelegateSignature_Params
{
};

// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad3_K2Node_ComponentBoundEvent_3_OnMissionStatsClicked__DelegateSignature
struct UResults_TeleportPad_C_BndEvt__TeleportPad3_K2Node_ComponentBoundEvent_3_OnMissionStatsClicked__DelegateSignature_Params
{
};

// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad4_K2Node_ComponentBoundEvent_4_OnMissionStatsClicked__DelegateSignature
struct UResults_TeleportPad_C_BndEvt__TeleportPad4_K2Node_ComponentBoundEvent_4_OnMissionStatsClicked__DelegateSignature_Params
{
};

// Function Results_TeleportPad.Results_TeleportPad_C.ExitButtonShown
struct UResults_TeleportPad_C_ExitButtonShown_Params
{
};

// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__Anim_ExitButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_TeleportPad_C_BndEvt__Anim_ExitButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__Anim_ExitEnabled_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_TeleportPad_C_BndEvt__Anim_ExitEnabled_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function Results_TeleportPad.Results_TeleportPad_C.OnExitTimerFinished
struct UResults_TeleportPad_C_OnExitTimerFinished_Params
{
};

// Function Results_TeleportPad.Results_TeleportPad_C.OnExitTimeRemainingUpdated
struct UResults_TeleportPad_C_OnExitTimeRemainingUpdated_Params
{
	int*                                               TimeRemainingSeconds;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_TeleportPad.Results_TeleportPad_C.OnExitTimePercentagePassedUpdated
struct UResults_TeleportPad_C_OnExitTimePercentagePassedUpdated_Params
{
	float*                                             Percent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad1_K2Node_ComponentBoundEvent_35_OnAddFriendClicked__DelegateSignature
struct UResults_TeleportPad_C_BndEvt__TeleportPad1_K2Node_ComponentBoundEvent_35_OnAddFriendClicked__DelegateSignature_Params
{
	struct FUniqueNetIdRepl                            TargetId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     TargetName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad2_K2Node_ComponentBoundEvent_0_OnAddFriendClicked__DelegateSignature
struct UResults_TeleportPad_C_BndEvt__TeleportPad2_K2Node_ComponentBoundEvent_0_OnAddFriendClicked__DelegateSignature_Params
{
	struct FUniqueNetIdRepl                            TargetId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     TargetName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad3_K2Node_ComponentBoundEvent_1_OnAddFriendClicked__DelegateSignature
struct UResults_TeleportPad_C_BndEvt__TeleportPad3_K2Node_ComponentBoundEvent_1_OnAddFriendClicked__DelegateSignature_Params
{
	struct FUniqueNetIdRepl                            TargetId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     TargetName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad4_K2Node_ComponentBoundEvent_2_OnAddFriendClicked__DelegateSignature
struct UResults_TeleportPad_C_BndEvt__TeleportPad4_K2Node_ComponentBoundEvent_2_OnAddFriendClicked__DelegateSignature_Params
{
	struct FUniqueNetIdRepl                            TargetId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     TargetName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad1_K2Node_ComponentBoundEvent_3_OnUpVoteClicked__DelegateSignature
struct UResults_TeleportPad_C_BndEvt__TeleportPad1_K2Node_ComponentBoundEvent_3_OnUpVoteClicked__DelegateSignature_Params
{
	struct FUniqueNetIdRepl                            TargetId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     TargetName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad2_K2Node_ComponentBoundEvent_4_OnUpVoteClicked__DelegateSignature
struct UResults_TeleportPad_C_BndEvt__TeleportPad2_K2Node_ComponentBoundEvent_4_OnUpVoteClicked__DelegateSignature_Params
{
	struct FUniqueNetIdRepl                            TargetId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     TargetName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad3_K2Node_ComponentBoundEvent_5_OnUpVoteClicked__DelegateSignature
struct UResults_TeleportPad_C_BndEvt__TeleportPad3_K2Node_ComponentBoundEvent_5_OnUpVoteClicked__DelegateSignature_Params
{
	struct FUniqueNetIdRepl                            TargetId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     TargetName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad4_K2Node_ComponentBoundEvent_6_OnUpVoteClicked__DelegateSignature
struct UResults_TeleportPad_C_BndEvt__TeleportPad4_K2Node_ComponentBoundEvent_6_OnUpVoteClicked__DelegateSignature_Params
{
	struct FUniqueNetIdRepl                            TargetId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     TargetName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__ButtonReturnHome_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
struct UResults_TeleportPad_C_BndEvt__ButtonReturnHome_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__Pad1_K2Node_ComponentBoundEvent_4_OnTeleportPadIntroFinished__DelegateSignature
struct UResults_TeleportPad_C_BndEvt__Pad1_K2Node_ComponentBoundEvent_4_OnTeleportPadIntroFinished__DelegateSignature_Params
{
	class UResults_TeleportPadPlayer_C*                TeleportPadPlayer;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__Pad2_K2Node_ComponentBoundEvent_5_OnTeleportPadIntroFinished__DelegateSignature
struct UResults_TeleportPad_C_BndEvt__Pad2_K2Node_ComponentBoundEvent_5_OnTeleportPadIntroFinished__DelegateSignature_Params
{
	class UResults_TeleportPadPlayer_C*                TeleportPadPlayer;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__Pad3_K2Node_ComponentBoundEvent_6_OnTeleportPadIntroFinished__DelegateSignature
struct UResults_TeleportPad_C_BndEvt__Pad3_K2Node_ComponentBoundEvent_6_OnTeleportPadIntroFinished__DelegateSignature_Params
{
	class UResults_TeleportPadPlayer_C*                TeleportPadPlayer;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__Pad4_K2Node_ComponentBoundEvent_7_OnTeleportPadIntroFinished__DelegateSignature
struct UResults_TeleportPad_C_BndEvt__Pad4_K2Node_ComponentBoundEvent_7_OnTeleportPadIntroFinished__DelegateSignature_Params
{
	class UResults_TeleportPadPlayer_C*                TeleportPadPlayer;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Results_TeleportPad.Results_TeleportPad_C.ExecuteUbergraph_Results_TeleportPad
struct UResults_TeleportPad_C_ExecuteUbergraph_Results_TeleportPad_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_TeleportPad.Results_TeleportPad_C.OnUpVoteClicked__DelegateSignature
struct UResults_TeleportPad_C_OnUpVoteClicked__DelegateSignature_Params
{
	struct FUniqueNetIdRepl                            TargetId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     TargetName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Results_TeleportPad.Results_TeleportPad_C.OnAddFriendClicked__DelegateSignature
struct UResults_TeleportPad_C_OnAddFriendClicked__DelegateSignature_Params
{
	struct FUniqueNetIdRepl                            TargetId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     TargetName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Results_TeleportPad.Results_TeleportPad_C.OnExitClicked__DelegateSignature
struct UResults_TeleportPad_C_OnExitClicked__DelegateSignature_Params
{
};

// Function Results_TeleportPad.Results_TeleportPad_C.OnMissionStatsClicked__DelegateSignature
struct UResults_TeleportPad_C_OnMissionStatsClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
