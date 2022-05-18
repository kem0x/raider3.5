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

// Function DailyRewards.DailyRewards_C.Handle Collect
struct UDailyRewards_C_Handle_Collect_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DailyRewards.DailyRewards_C.Handle Close
struct UDailyRewards_C_Handle_Close_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DailyRewards.DailyRewards_C.Set Input Action Handlers
struct UDailyRewards_C_Set_Input_Action_Handlers_Params
{
};

// Function DailyRewards.DailyRewards_C.PopPanelWhileInGame
struct UDailyRewards_C_PopPanelWhileInGame_Params
{
};

// Function DailyRewards.DailyRewards_C.Setup Daily Rewards
struct UDailyRewards_C_Setup_Daily_Rewards_Params
{
};

// Function DailyRewards.DailyRewards_C.Construct
struct UDailyRewards_C_Construct_Params
{
};

// Function DailyRewards.DailyRewards_C.OnActivated
struct UDailyRewards_C_OnActivated_Params
{
};

// Function DailyRewards.DailyRewards_C.PreConstruct
struct UDailyRewards_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DailyRewards.DailyRewards_C.ClaimResultReceived
struct UDailyRewards_C_ClaimResultReceived_Params
{
	TArray<struct FFortItemInstanceQuantityPair>*      Loot;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DailyRewards.DailyRewards_C.OnDeactivated
struct UDailyRewards_C_OnDeactivated_Params
{
};

// Function DailyRewards.DailyRewards_C.Destruct
struct UDailyRewards_C_Destruct_Params
{
};

// Function DailyRewards.DailyRewards_C.ExecuteUbergraph_DailyRewards
struct UDailyRewards_C_ExecuteUbergraph_DailyRewards_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DailyRewards.DailyRewards_C.OnDailyRewardsComplete__DelegateSignature
struct UDailyRewards_C_OnDailyRewardsComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
