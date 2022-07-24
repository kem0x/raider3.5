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

// Function DailyRewardsCurrent.DailyRewardsCurrent_C.InitializeRewardView
struct UDailyRewardsCurrent_C_InitializeRewardView_Params
{
};

// Function DailyRewardsCurrent.DailyRewardsCurrent_C.Set Item Flare
struct UDailyRewardsCurrent_C_Set_Item_Flare_Params
{
};

// Function DailyRewardsCurrent.DailyRewardsCurrent_C.Set Item
struct UDailyRewardsCurrent_C_Set_Item_Params
{
	class UFortItem*                                   Item_To_Represent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DailyRewardsCurrent.DailyRewardsCurrent_C.Construct
struct UDailyRewardsCurrent_C_Construct_Params
{
};

// Function DailyRewardsCurrent.DailyRewardsCurrent_C.ExecuteUbergraph_DailyRewardsCurrent
struct UDailyRewardsCurrent_C_ExecuteUbergraph_DailyRewardsCurrent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
