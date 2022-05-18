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

// Function XpBoosts.XpBoosts_C.Activate
struct UXpBoosts_C_Activate_Params
{
};

// Function XpBoosts.XpBoosts_C.Update Total Boosts
struct UXpBoosts_C_Update_Total_Boosts_Params
{
};

// Function XpBoosts.XpBoosts_C.Update Total Boost Amounts
struct UXpBoosts_C_Update_Total_Boost_Amounts_Params
{
};

// Function XpBoosts.XpBoosts_C.HandleRemotePlayerRemoved
struct UXpBoosts_C_HandleRemotePlayerRemoved_Params
{
	int                                                RemovedIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function XpBoosts.XpBoosts_C.Construct
struct UXpBoosts_C_Construct_Params
{
};

// Function XpBoosts.XpBoosts_C.Party Member Boost Amount Changed
struct UXpBoosts_C_Party_Member_Boost_Amount_Changed_Params
{
};

// Function XpBoosts.XpBoosts_C.Rest Xp Changed
struct UXpBoosts_C_Rest_Xp_Changed_Params
{
};

// Function XpBoosts.XpBoosts_C.ExecuteUbergraph_XpBoosts
struct UXpBoosts_C_ExecuteUbergraph_XpBoosts_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
