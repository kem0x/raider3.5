#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.HideLockoutState
struct UMissionStartObjectivePanel_C_HideLockoutState_Params
{
};

// Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.HandleDifficultyEnded
struct UMissionStartObjectivePanel_C_HandleDifficultyEnded_Params
{
	TArray<struct FVoter>                              Voters;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.UpdateLockoutTimer
struct UMissionStartObjectivePanel_C_UpdateLockoutTimer_Params
{
};

// Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.ShowLockoutState
struct UMissionStartObjectivePanel_C_ShowLockoutState_Params
{
};

// Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.Reward-IntroReset
struct UMissionStartObjectivePanel_C_Reward_IntroReset_Params
{
};

// Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.Reward-IntroRewind
struct UMissionStartObjectivePanel_C_Reward_IntroRewind_Params
{
};

// Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.Reward-ListAnim
struct UMissionStartObjectivePanel_C_Reward_ListAnim_Params
{
};

// Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.Leave-Anim
struct UMissionStartObjectivePanel_C_Leave_Anim_Params
{
};

// Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.Hover-Anim
struct UMissionStartObjectivePanel_C_Hover_Anim_Params
{
};

// Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.UpdateDifficultyRating
struct UMissionStartObjectivePanel_C_UpdateDifficultyRating_Params
{
};

// Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.HandleIncreaseDifficultyVote
struct UMissionStartObjectivePanel_C_HandleIncreaseDifficultyVote_Params
{
	EFortVoteType                                      VoteType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortVoteStatus                                    VoteStatus;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                VoteResult;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVoter>                              Voters;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.UpdateRewards
struct UMissionStartObjectivePanel_C_UpdateRewards_Params
{
};

// Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.Construct
struct UMissionStartObjectivePanel_C_Construct_Params
{
};

// Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.ShowPanel
struct UMissionStartObjectivePanel_C_ShowPanel_Params
{
	bool                                               ForceFinalState;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.HidePanel
struct UMissionStartObjectivePanel_C_HidePanel_Params
{
};

// Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.Destruct
struct UMissionStartObjectivePanel_C_Destruct_Params
{
};

// Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.InfoObjectUpdated
struct UMissionStartObjectivePanel_C_InfoObjectUpdated_Params
{
};

// Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.RewardAnimTrigger
struct UMissionStartObjectivePanel_C_RewardAnimTrigger_Params
{
};

// Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.ExecuteUbergraph_MissionStartObjectivePanel
struct UMissionStartObjectivePanel_C_ExecuteUbergraph_MissionStartObjectivePanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.LockoutEndedAnimFinished__DelegateSignature
struct UMissionStartObjectivePanel_C_LockoutEndedAnimFinished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
