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

// Function ReportablePlayerReasonEntry.ReportablePlayerReasonEntry_C.SetSelectionState
struct UReportablePlayerReasonEntry_C_SetSelectionState_Params
{
	bool*                                              bIsSelected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAnimateOnSelect;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReportablePlayerReasonEntry.ReportablePlayerReasonEntry_C.ExecuteUbergraph_ReportablePlayerReasonEntry
struct UReportablePlayerReasonEntry_C_ExecuteUbergraph_ReportablePlayerReasonEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
