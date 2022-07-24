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

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.GetRemainingTime
struct UMissionVotingDetailsPanel_C_GetRemainingTime_Params
{
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.CanStartObjective
struct UMissionVotingDetailsPanel_C_CanStartObjective_Params
{
	bool                                               CanStart;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.GetAvailableBluGloCount
struct UMissionVotingDetailsPanel_C_GetAvailableBluGloCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.UpdateObjectiveReadyTime
struct UMissionVotingDetailsPanel_C_UpdateObjectiveReadyTime_Params
{
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.UpdateVoteButton
struct UMissionVotingDetailsPanel_C_UpdateVoteButton_Params
{
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.UpdateVoteInstigatorInfo
struct UMissionVotingDetailsPanel_C_UpdateVoteInstigatorInfo_Params
{
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.IsInstigatorOfCurrentVote
struct UMissionVotingDetailsPanel_C_IsInstigatorOfCurrentVote_Params
{
	bool                                               IsInstigator;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.IsCurrentVoteActive
struct UMissionVotingDetailsPanel_C_IsCurrentVoteActive_Params
{
	bool                                               IsActive;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.UpdateRemainingVoteTime
struct UMissionVotingDetailsPanel_C_UpdateRemainingVoteTime_Params
{
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.RefreshPanel
struct UMissionVotingDetailsPanel_C_RefreshPanel_Params
{
	TArray<struct FVoter>                              Voters;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.HandleVotesUpdated
struct UMissionVotingDetailsPanel_C_HandleVotesUpdated_Params
{
	EFortVoteType                                      VoteType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortVoteStatus                                    VoteStatus;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                VoteResult;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVoter>                              Voters;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.InitializePanel
struct UMissionVotingDetailsPanel_C_InitializePanel_Params
{
	EFortVoteType                                      InVoteType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.BndEvt__StartVoteButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature
struct UMissionVotingDetailsPanel_C_BndEvt__StartVoteButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.Construct
struct UMissionVotingDetailsPanel_C_Construct_Params
{
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.Destruct
struct UMissionVotingDetailsPanel_C_Destruct_Params
{
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.BndEvt__YesVoteButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UMissionVotingDetailsPanel_C_BndEvt__YesVoteButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.BndEvt__NoVoteButton_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature
struct UMissionVotingDetailsPanel_C_BndEvt__NoVoteButton_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.ShowVoteResult
struct UMissionVotingDetailsPanel_C_ShowVoteResult_Params
{
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.HandleBeginLockout
struct UMissionVotingDetailsPanel_C_HandleBeginLockout_Params
{
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.ExecuteUbergraph_MissionVotingDetailsPanel
struct UMissionVotingDetailsPanel_C_ExecuteUbergraph_MissionVotingDetailsPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.OnVoteLockedOut__DelegateSignature
struct UMissionVotingDetailsPanel_C_OnVoteLockedOut__DelegateSignature_Params
{
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.OnRecepientVoted__DelegateSignature
struct UMissionVotingDetailsPanel_C_OnRecepientVoted__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
