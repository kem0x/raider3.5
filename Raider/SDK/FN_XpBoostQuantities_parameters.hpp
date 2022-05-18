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

// Function XpBoostQuantities.XpBoostQuantities_C.ScaledRestBalance
struct UXpBoostQuantities_C_ScaledRestBalance_Params
{
	int                                                AmountToLevel;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function XpBoostQuantities.XpBoostQuantities_C.ScaledBoostBalance
struct UXpBoostQuantities_C_ScaledBoostBalance_Params
{
	int                                                AmountToLevel;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function XpBoostQuantities.XpBoostQuantities_C.UpdateXPQuantitiesInfo
struct UXpBoostQuantities_C_UpdateXPQuantitiesInfo_Params
{
};

// Function XpBoostQuantities.XpBoostQuantities_C.Construct
struct UXpBoostQuantities_C_Construct_Params
{
};

// Function XpBoostQuantities.XpBoostQuantities_C.HandleAccountUpdate
struct UXpBoostQuantities_C_HandleAccountUpdate_Params
{
	struct FFortPublicAccountInfo                      NewInfo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function XpBoostQuantities.XpBoostQuantities_C.Xp Boost Changed
struct UXpBoostQuantities_C_Xp_Boost_Changed_Params
{
	int                                                BoostAmount;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function XpBoostQuantities.XpBoostQuantities_C.ExecuteUbergraph_XpBoostQuantities
struct UXpBoostQuantities_C_ExecuteUbergraph_XpBoostQuantities_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
