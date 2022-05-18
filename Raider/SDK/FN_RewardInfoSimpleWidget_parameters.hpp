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

// Function RewardInfoSimpleWidget.RewardInfoSimpleWidget_C.GetDisplayName
struct URewardInfoSimpleWidget_C_GetDisplayName_Params
{
	struct FText                                       DisplayName;                                              // (Parm, OutParm)
};

// Function RewardInfoSimpleWidget.RewardInfoSimpleWidget_C.HandleDifferentItemOrQuantitySetBP
struct URewardInfoSimpleWidget_C_HandleDifferentItemOrQuantitySetBP_Params
{
};

// Function RewardInfoSimpleWidget.RewardInfoSimpleWidget_C.ExecuteUbergraph_RewardInfoSimpleWidget
struct URewardInfoSimpleWidget_C_ExecuteUbergraph_RewardInfoSimpleWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
