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

// Function CurrentReportStackingEntry.CurrentReportStackingEntry_C.SetDisplayTextFields
struct UCurrentReportStackingEntry_C_SetDisplayTextFields_Params
{
};

// Function CurrentReportStackingEntry.CurrentReportStackingEntry_C.Construct
struct UCurrentReportStackingEntry_C_Construct_Params
{
};

// Function CurrentReportStackingEntry.CurrentReportStackingEntry_C.InitStackingEntryFields
struct UCurrentReportStackingEntry_C_InitStackingEntryFields_Params
{
	EPlayerReportingStep                               DisplayedReportingStep;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayText;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CurrentReportStackingEntry.CurrentReportStackingEntry_C.ExecuteUbergraph_CurrentReportStackingEntry
struct UCurrentReportStackingEntry_C_ExecuteUbergraph_CurrentReportStackingEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
