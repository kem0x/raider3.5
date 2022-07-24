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

// Function PieChartStatWidget.PieChartStatWidget_C.AddStat
struct UPieChartStatWidget_C_AddStat_Params
{
	struct FStatGroupData                              StatGroupData;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PieChartStatWidget.PieChartStatWidget_C.OnStatChanged
struct UPieChartStatWidget_C_OnStatChanged_Params
{
};

// Function PieChartStatWidget.PieChartStatWidget_C.ExecuteUbergraph_PieChartStatWidget
struct UPieChartStatWidget_C_ExecuteUbergraph_PieChartStatWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
