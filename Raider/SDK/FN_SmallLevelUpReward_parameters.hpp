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

// Function SmallLevelUpReward.SmallLevelUpReward_C.SetupReward
struct USmallLevelUpReward_C_SetupReward_Params
{
	bool                                               HasReward;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FFortItemInstanceQuantityPair               RewardItem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                LevelRewarded;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
