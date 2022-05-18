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

// Function ShielderSpringArm.ShielderSpringArm_C.UserConstructionScript
struct AShielderSpringArm_C_UserConstructionScript_Params
{
};

// Function ShielderSpringArm.ShielderSpringArm_C.ReceiveTick
struct AShielderSpringArm_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShielderSpringArm.ShielderSpringArm_C.HitFlashFX
struct AShielderSpringArm_C_HitFlashFX_Params
{
};

// Function ShielderSpringArm.ShielderSpringArm_C.ReceiveDestroyed
struct AShielderSpringArm_C_ReceiveDestroyed_Params
{
};

// Function ShielderSpringArm.ShielderSpringArm_C.Beam_Removal
struct AShielderSpringArm_C_Beam_Removal_Params
{
};

// Function ShielderSpringArm.ShielderSpringArm_C.Beam_Spawn
struct AShielderSpringArm_C_Beam_Spawn_Params
{
	class AActor*                                      Origin;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShielderSpringArm.ShielderSpringArm_C.ExecuteUbergraph_ShielderSpringArm
struct AShielderSpringArm_C_ExecuteUbergraph_ShielderSpringArm_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
