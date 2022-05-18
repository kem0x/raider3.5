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

// Function B_SoundIndicator_01.B_SoundIndicator_01_C.CalculateFiringAngle
struct AB_SoundIndicator_01_C_CalculateFiringAngle_Params
{
	float                                              DotResult;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_SoundIndicator_01.B_SoundIndicator_01_C.GetWeaponCurve
struct AB_SoundIndicator_01_C_GetWeaponCurve_Params
{
	struct FRuntimeFloatCurve                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function B_SoundIndicator_01.B_SoundIndicator_01_C.UpdateEmitterStates
struct AB_SoundIndicator_01_C_UpdateEmitterStates_Params
{
};

// Function B_SoundIndicator_01.B_SoundIndicator_01_C.UserConstructionScript
struct AB_SoundIndicator_01_C_UserConstructionScript_Params
{
};

// Function B_SoundIndicator_01.B_SoundIndicator_01_C.OnEffectActivated
struct AB_SoundIndicator_01_C_OnEffectActivated_Params
{
};

// Function B_SoundIndicator_01.B_SoundIndicator_01_C.ReceiveBeginPlay
struct AB_SoundIndicator_01_C_ReceiveBeginPlay_Params
{
};

// Function B_SoundIndicator_01.B_SoundIndicator_01_C.ExecuteUbergraph_B_SoundIndicator_01
struct AB_SoundIndicator_01_C_ExecuteUbergraph_B_SoundIndicator_01_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
