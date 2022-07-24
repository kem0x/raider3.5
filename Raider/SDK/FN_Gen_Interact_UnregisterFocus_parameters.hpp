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

// Function Gen_Interact_UnregisterFocus.Gen_Interact_UnregisterFocus_C.BreakParams
struct UGen_Interact_UnregisterFocus_C_BreakParams_Params
{
	class AActor*                                      ActorToUnregisterRegister;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gen_Interact_UnregisterFocus.Gen_Interact_UnregisterFocus_C.SetParams
struct UGen_Interact_UnregisterFocus_C_SetParams_Params
{
	class AActor*                                      ActorToUnregister;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGen_Interact_UnregisterFocus_C*             ThisObject;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
