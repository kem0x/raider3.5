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

// Function AthenaFPS.AthenaFPS_C.ShowFPSChanged
struct UAthenaFPS_C_ShowFPSChanged_Params
{
	bool                                               bShowFPS;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaFPS.AthenaFPS_C.Construct
struct UAthenaFPS_C_Construct_Params
{
};

// Function AthenaFPS.AthenaFPS_C.Tick
struct UAthenaFPS_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaFPS.AthenaFPS_C.ExecuteUbergraph_AthenaFPS
struct UAthenaFPS_C_ExecuteUbergraph_AthenaFPS_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
