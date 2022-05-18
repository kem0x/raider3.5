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

// Function AthenaAerialFeedback.AthenaAerialFeedback_C.Update
struct UAthenaAerialFeedback_C_Update_Params
{
};

// Function AthenaAerialFeedback.AthenaAerialFeedback_C.Tick
struct UAthenaAerialFeedback_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAerialFeedback.AthenaAerialFeedback_C.Construct
struct UAthenaAerialFeedback_C_Construct_Params
{
};

// Function AthenaAerialFeedback.AthenaAerialFeedback_C.CustomEvent_1_2
struct UAthenaAerialFeedback_C_CustomEvent_1_2_Params
{
};

// Function AthenaAerialFeedback.AthenaAerialFeedback_C.CustomEvent_2_3
struct UAthenaAerialFeedback_C_CustomEvent_2_3_Params
{
	EAthenaGamePhaseStep                               GamePhaseStep;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAerialFeedback.AthenaAerialFeedback_C.ExecuteUbergraph_AthenaAerialFeedback
struct UAthenaAerialFeedback_C_ExecuteUbergraph_AthenaAerialFeedback_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
