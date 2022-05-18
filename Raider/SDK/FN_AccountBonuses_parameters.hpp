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

// Function AccountBonuses.AccountBonuses_C.Update Badges
struct UAccountBonuses_C_Update_Badges_Params
{
};

// Function AccountBonuses.AccountBonuses_C.Has VIP Badge
struct UAccountBonuses_C_Has_VIP_Badge_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AccountBonuses.AccountBonuses_C.Has Founder Badge
struct UAccountBonuses_C_Has_Founder_Badge_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AccountBonuses.AccountBonuses_C.Construct
struct UAccountBonuses_C_Construct_Params
{
};

// Function AccountBonuses.AccountBonuses_C.Founder Changed
struct UAccountBonuses_C_Founder_Changed_Params
{
};

// Function AccountBonuses.AccountBonuses_C.ExecuteUbergraph_AccountBonuses
struct UAccountBonuses_C_ExecuteUbergraph_AccountBonuses_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
