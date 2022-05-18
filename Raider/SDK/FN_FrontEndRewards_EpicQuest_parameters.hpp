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

// Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.MarkQuestAsSeen
struct UFrontEndRewards_EpicQuest_C_MarkQuestAsSeen_Params
{
};

// Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.HandleTransitionInComplete
struct UFrontEndRewards_EpicQuest_C_HandleTransitionInComplete_Params
{
};

// Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.HandleContinueAction
struct UFrontEndRewards_EpicQuest_C_HandleContinueAction_Params
{
	bool                                               Committed;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.PopulateFromQuest
struct UFrontEndRewards_EpicQuest_C_PopulateFromQuest_Params
{
	class UFortQuestItem*                              InQuest;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.TransitionInBegin
struct UFrontEndRewards_EpicQuest_C_TransitionInBegin_Params
{
};

// Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.TransitionOutBegin
struct UFrontEndRewards_EpicQuest_C_TransitionOutBegin_Params
{
};

// Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.Construct
struct UFrontEndRewards_EpicQuest_C_Construct_Params
{
};

// Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.OnPrimaryAction
struct UFrontEndRewards_EpicQuest_C_OnPrimaryAction_Params
{
};

// Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.ExecuteUbergraph_FrontEndRewards_EpicQuest
struct UFrontEndRewards_EpicQuest_C_ExecuteUbergraph_FrontEndRewards_EpicQuest_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
