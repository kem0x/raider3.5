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

// Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.SetupReward
struct UPlayerEmblemAndXp_C_SetupReward_Params
{
	class UWidget*                                     Container;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  RewardText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortMultiSizeItemCard*                      RewardItemCard;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      RewardImageWidget;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            RewardCountTextBlock;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               HasReward;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FFortItemInstanceQuantityPair               RewardItem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                LevelRewarded;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.Refresh
struct UPlayerEmblemAndXp_C_Refresh_Params
{
	struct FFortPublicAccountInfo                      FortPublicAccountInfo;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.Construct
struct UPlayerEmblemAndXp_C_Construct_Params
{
};

// Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.OnAccountInfoChanged
struct UPlayerEmblemAndXp_C_OnAccountInfoChanged_Params
{
	struct FFortPublicAccountInfo*                     Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.ExecuteUbergraph_PlayerEmblemAndXp
struct UPlayerEmblemAndXp_C_ExecuteUbergraph_PlayerEmblemAndXp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
