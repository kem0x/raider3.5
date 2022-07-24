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

// Function SurvivorRescuedCounter.SurvivorRescuedCounter_C.UpdateSurvivorsRescued
struct USurvivorRescuedCounter_C_UpdateSurvivorsRescued_Params
{
	int                                                SurvivorsRescued;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SurvivorRescuedCounter.SurvivorRescuedCounter_C.Construct
struct USurvivorRescuedCounter_C_Construct_Params
{
};

// Function SurvivorRescuedCounter.SurvivorRescuedCounter_C.ExecuteUbergraph_SurvivorRescuedCounter
struct USurvivorRescuedCounter_C_ExecuteUbergraph_SurvivorRescuedCounter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
