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

// Function AthenaAerialFeedback.AthenaAerialFeedback_C.Update
struct UAthenaAerialFeedback_C_Update_Params
{
};

// Function AthenaAerialFeedback.AthenaAerialFeedback_C.OnLocalPlayerBeginSkydiving_Bind
struct UAthenaAerialFeedback_C_OnLocalPlayerBeginSkydiving_Bind_Params
{
};

// Function AthenaAerialFeedback.AthenaAerialFeedback_C.GamePhaseStepChanged
struct UAthenaAerialFeedback_C_GamePhaseStepChanged_Params
{
	EAthenaGamePhaseStep                               GamePhaseStep;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaAerialFeedback.AthenaAerialFeedback_C.OnKeybindsChanged_Bind
struct UAthenaAerialFeedback_C_OnKeybindsChanged_Bind_Params
{
};

// Function AthenaAerialFeedback.AthenaAerialFeedback_C.Construct
struct UAthenaAerialFeedback_C_Construct_Params
{
};

// Function AthenaAerialFeedback.AthenaAerialFeedback_C.Tick
struct UAthenaAerialFeedback_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
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
