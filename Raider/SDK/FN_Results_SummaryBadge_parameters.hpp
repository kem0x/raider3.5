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

// Function Results_SummaryBadge.Results_SummaryBadge_C.Initialize
struct UResults_SummaryBadge_C_Initialize_Params
{
	class UFortItem*                                   BadgeItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_SummaryBadge.Results_SummaryBadge_C.PreConstruct
struct UResults_SummaryBadge_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_SummaryBadge.Results_SummaryBadge_C.Manual Pre Construct
struct UResults_SummaryBadge_C_Manual_Pre_Construct_Params
{
};

// Function Results_SummaryBadge.Results_SummaryBadge_C.ExecuteUbergraph_Results_SummaryBadge
struct UResults_SummaryBadge_C_ExecuteUbergraph_Results_SummaryBadge_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
