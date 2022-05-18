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

// Function RewardsListWidget.RewardsListWidget_C.PresentAllRewards
struct URewardsListWidget_C_PresentAllRewards_Params
{
};

// Function RewardsListWidget.RewardsListWidget_C.CreateRewardWrapper
struct URewardsListWidget_C_CreateRewardWrapper_Params
{
	class UHomeScreenQuestRewardItem_C*                Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       DisplayName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UFrontEndRewardWrapperWidget_C*              OutputPin;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function RewardsListWidget.RewardsListWidget_C.CreateReward
struct URewardsListWidget_C_CreateReward_Params
{
	struct FFortItemInstanceQuantityPair               FortItemInstanceQuantityPair;                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Selectable;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RewardsListWidget.RewardsListWidget_C.PresentNextReward
struct URewardsListWidget_C_PresentNextReward_Params
{
};

// Function RewardsListWidget.RewardsListWidget_C.PopulateRewards
struct URewardsListWidget_C_PopulateRewards_Params
{
	TArray<struct FFortItemInstanceQuantityPair>       Rewards;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FFortItemInstanceQuantityPair>       SelectableRewards;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
