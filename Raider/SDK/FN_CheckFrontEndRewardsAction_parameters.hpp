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

// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateNewGiftBoxes
struct ACheckFrontEndRewardsAction_C_PopulateNewGiftBoxes_Params
{
};

// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateDifficultyIncreaseRewards
struct ACheckFrontEndRewardsAction_C_PopulateDifficultyIncreaseRewards_Params
{
};

// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.HandleRewardsIgnored
struct ACheckFrontEndRewardsAction_C_HandleRewardsIgnored_Params
{
	class UFrontEndRewards_Widget_C*                   RewardsWidget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.CanShowFrontendRewards
struct ACheckFrontEndRewardsAction_C_CanShowFrontendRewards_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.Is FrontEndRewards Running
struct ACheckFrontEndRewardsAction_C_Is_FrontEndRewards_Running_Params
{
	bool                                               bRunning;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateMissionAlertRewards
struct ACheckFrontEndRewardsAction_C_PopulateMissionAlertRewards_Params
{
};

// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.HandleRewardsClaimError
struct ACheckFrontEndRewardsAction_C_HandleRewardsClaimError_Params
{
	class UFrontEndRewards_Widget_C*                   RewardsWidget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.Clear
struct ACheckFrontEndRewardsAction_C_Clear_Params
{
};

// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.HandleRewardsClaimed
struct ACheckFrontEndRewardsAction_C_HandleRewardsClaimed_Params
{
	class UFrontEndRewards_Widget_C*                   RewardsWidget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateCollectionBookRewards
struct ACheckFrontEndRewardsAction_C_PopulateCollectionBookRewards_Params
{
};

// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateRewards
struct ACheckFrontEndRewardsAction_C_PopulateRewards_Params
{
};

// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.OpenFrontEndRewards
struct ACheckFrontEndRewardsAction_C_OpenFrontEndRewards_Params
{
};

// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateUnseenQuests
struct ACheckFrontEndRewardsAction_C_PopulateUnseenQuests_Params
{
	EFortQuestType                                     QuestType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.GetCompletedQuests
struct ACheckFrontEndRewardsAction_C_GetCompletedQuests_Params
{
	TArray<class UFortQuestItem*>                      Completed_Quests;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateNewQuests
struct ACheckFrontEndRewardsAction_C_PopulateNewQuests_Params
{
};

// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateQuestRewards
struct ACheckFrontEndRewardsAction_C_PopulateQuestRewards_Params
{
};

// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateMissionRewards
struct ACheckFrontEndRewardsAction_C_PopulateMissionRewards_Params
{
};

// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.CompleteRewardsAction
struct ACheckFrontEndRewardsAction_C_CompleteRewardsAction_Params
{
};

// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.UserConstructionScript
struct ACheckFrontEndRewardsAction_C_UserConstructionScript_Params
{
};

// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.Execute
struct ACheckFrontEndRewardsAction_C_Execute_Params
{
	struct FFortScriptedActionParams*                  Params;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.ExecuteUbergraph_CheckFrontEndRewardsAction
struct ACheckFrontEndRewardsAction_C_ExecuteUbergraph_CheckFrontEndRewardsAction_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
