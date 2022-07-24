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

// Function AthenaGamePhaseWidget.AthenaGamePhaseWidget_C.OnGamePhaseStepChanged
struct UAthenaGamePhaseWidget_C_OnGamePhaseStepChanged_Params
{
	EAthenaGamePhaseStep*                              GamePhaseStep;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaGamePhaseWidget.AthenaGamePhaseWidget_C.ExecuteUbergraph_AthenaGamePhaseWidget
struct UAthenaGamePhaseWidget_C_ExecuteUbergraph_AthenaGamePhaseWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
