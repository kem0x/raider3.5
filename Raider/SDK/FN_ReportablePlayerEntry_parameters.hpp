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

// Function ReportablePlayerEntry.ReportablePlayerEntry_C.SetSelectionState
struct UReportablePlayerEntry_C_SetSelectionState_Params
{
	bool*                                              bIsSelected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAnimateOnSelect;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReportablePlayerEntry.ReportablePlayerEntry_C.ExecuteUbergraph_ReportablePlayerEntry
struct UReportablePlayerEntry_C_ExecuteUbergraph_ReportablePlayerEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
