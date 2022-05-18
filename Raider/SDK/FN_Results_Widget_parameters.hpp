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

// Function Results_Widget.Results_Widget_C.UseVideos
struct UResults_Widget_C_UseVideos_Params
{
	bool                                               bVideos;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Results_Widget.Results_Widget_C.Focus
struct UResults_Widget_C_Focus_Params
{
};

// Function Results_Widget.Results_Widget_C.InitializeInput
struct UResults_Widget_C_InitializeInput_Params
{
};

// Function Results_Widget.Results_Widget_C.OnInputSkip
struct UResults_Widget_C_OnInputSkip_Params
{
	bool                                               bCommited;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Results_Widget.Results_Widget_C.LogAnalytics
struct UResults_Widget_C_LogAnalytics_Params
{
	struct FString                                     ScreenName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bSkipped;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_Widget.Results_Widget_C.PlayMissionResultSound
struct UResults_Widget_C_PlayMissionResultSound_Params
{
};

// Function Results_Widget.Results_Widget_C.Toggle Top Level Tab Controls
struct UResults_Widget_C_Toggle_Top_Level_Tab_Controls_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_Widget.Results_Widget_C.SpawnResultsMusic
struct UResults_Widget_C_SpawnResultsMusic_Params
{
};

// Function Results_Widget.Results_Widget_C.Toggle Chat
struct UResults_Widget_C_Toggle_Chat_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_Widget.Results_Widget_C.Initialize Video
struct UResults_Widget_C_Initialize_Video_Params
{
};

// Function Results_Widget.Results_Widget_C.Initialize
struct UResults_Widget_C_Initialize_Params
{
};

// Function Results_Widget.Results_Widget_C.BndEvt__ResultsSummary_K2Node_ComponentBoundEvent_1_OnReturnClicked__DelegateSignature
struct UResults_Widget_C_BndEvt__ResultsSummary_K2Node_ComponentBoundEvent_1_OnReturnClicked__DelegateSignature_Params
{
};

// Function Results_Widget.Results_Widget_C.Teleport Scene Sequence
struct UResults_Widget_C_Teleport_Scene_Sequence_Params
{
};

// Function Results_Widget.Results_Widget_C.BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_7_OnAddFriendClicked__DelegateSignature
struct UResults_Widget_C_BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_7_OnAddFriendClicked__DelegateSignature_Params
{
	struct FUniqueNetIdRepl                            TargetId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     TargetName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Results_Widget.Results_Widget_C.BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_8_OnUpVoteClicked__DelegateSignature
struct UResults_Widget_C_BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_8_OnUpVoteClicked__DelegateSignature_Params
{
	struct FUniqueNetIdRepl                            TargetId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     TargetName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Results_Widget.Results_Widget_C.BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_5_OnMissionStatsClicked__DelegateSignature
struct UResults_Widget_C_BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_5_OnMissionStatsClicked__DelegateSignature_Params
{
};

// Function Results_Widget.Results_Widget_C.BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_1_OnExitClicked__DelegateSignature
struct UResults_Widget_C_BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_1_OnExitClicked__DelegateSignature_Params
{
};

// Function Results_Widget.Results_Widget_C.Badge Loot Sequence
struct UResults_Widget_C_Badge_Loot_Sequence_Params
{
};

// Function Results_Widget.Results_Widget_C.BndEvt__ResultsBadgeLoot_K2Node_ComponentBoundEvent_0_Finished__DelegateSignature
struct UResults_Widget_C_BndEvt__ResultsBadgeLoot_K2Node_ComponentBoundEvent_0_Finished__DelegateSignature_Params
{
};

// Function Results_Widget.Results_Widget_C.Commander XP Sequence
struct UResults_Widget_C_Commander_XP_Sequence_Params
{
};

// Function Results_Widget.Results_Widget_C.BndEvt__ResultsCommanderXP_K2Node_ComponentBoundEvent_6_Finished__DelegateSignature
struct UResults_Widget_C_BndEvt__ResultsCommanderXP_K2Node_ComponentBoundEvent_6_Finished__DelegateSignature_Params
{
};

// Function Results_Widget.Results_Widget_C.BndEvt__Anim_CommanderXPIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_Widget_C_BndEvt__Anim_CommanderXPIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function Results_Widget.Results_Widget_C.BndEvt__Anim_CommanderXPOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_Widget_C_BndEvt__Anim_CommanderXPOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function Results_Widget.Results_Widget_C.BndEvt__Results_ScoreAndXP_K2Node_ComponentBoundEvent_3_Finished__DelegateSignature
struct UResults_Widget_C_BndEvt__Results_ScoreAndXP_K2Node_ComponentBoundEvent_3_Finished__DelegateSignature_Params
{
};

// Function Results_Widget.Results_Widget_C.Team Score Sequence
struct UResults_Widget_C_Team_Score_Sequence_Params
{
};

// Function Results_Widget.Results_Widget_C.BndEvt__TopPanel_K2Node_ComponentBoundEvent_1_IntroComplete__DelegateSignature
struct UResults_Widget_C_BndEvt__TopPanel_K2Node_ComponentBoundEvent_1_IntroComplete__DelegateSignature_Params
{
};

// Function Results_Widget.Results_Widget_C.PreResults Sequence
struct UResults_Widget_C_PreResults_Sequence_Params
{
};

// Function Results_Widget.Results_Widget_C.BndEvt__Anim_ZoneCompletionIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_Widget_C_BndEvt__Anim_ZoneCompletionIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function Results_Widget.Results_Widget_C.VideoSequenceStart
struct UResults_Widget_C_VideoSequenceStart_Params
{
};

// Function Results_Widget.Results_Widget_C.OnVideoEndReached
struct UResults_Widget_C_OnVideoEndReached_Params
{
};

// Function Results_Widget.Results_Widget_C.BndEvt__Anim_VideoOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_Widget_C_BndEvt__Anim_VideoOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function Results_Widget.Results_Widget_C.SkipVideo
struct UResults_Widget_C_SkipVideo_Params
{
};

// Function Results_Widget.Results_Widget_C.OnMediaOpened
struct UResults_Widget_C_OnMediaOpened_Params
{
};

// Function Results_Widget.Results_Widget_C.Construct
struct UResults_Widget_C_Construct_Params
{
};

// Function Results_Widget.Results_Widget_C.HandleClientEvent_PlayerLeftEvent
struct UResults_Widget_C_HandleClientEvent_PlayerLeftEvent_Params
{
	class UObject*                                     EventSource;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FFortClientEvent                            ClientEvent;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Results_Widget.Results_Widget_C.Wait for Replication
struct UResults_Widget_C_Wait_for_Replication_Params
{
};

// Function Results_Widget.Results_Widget_C.Destruct
struct UResults_Widget_C_Destruct_Params
{
};

// Function Results_Widget.Results_Widget_C.OnActivated
struct UResults_Widget_C_OnActivated_Params
{
};

// Function Results_Widget.Results_Widget_C.ExecuteUbergraph_Results_Widget
struct UResults_Widget_C_ExecuteUbergraph_Results_Widget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
