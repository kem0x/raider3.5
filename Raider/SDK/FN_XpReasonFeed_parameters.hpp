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

// Function XpReasonFeed.XpReasonFeed_C.ShowAllXpRewards
struct UXpReasonFeed_C_ShowAllXpRewards_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function XpReasonFeed.XpReasonFeed_C.SetXpRewards
struct UXpReasonFeed_C_SetXpRewards_Params
{
	TArray<struct FAthenaMatchXpReward>                XpRewards;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function XpReasonFeed.XpReasonFeed_C.IsReadyForNextXpReward
struct UXpReasonFeed_C_IsReadyForNextXpReward_Params
{
	bool                                               Ready;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function XpReasonFeed.XpReasonFeed_C.Play Xp Reward
struct UXpReasonFeed_C_Play_Xp_Reward_Params
{
	struct FAthenaMatchXpReward                        Reward;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function XpReasonFeed.XpReasonFeed_C.Reset Feed
struct UXpReasonFeed_C_Reset_Feed_Params
{
};

// Function XpReasonFeed.XpReasonFeed_C.Destruct
struct UXpReasonFeed_C_Destruct_Params
{
};

// Function XpReasonFeed.XpReasonFeed_C.ExecuteUbergraph_XpReasonFeed
struct UXpReasonFeed_C_ExecuteUbergraph_XpReasonFeed_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
