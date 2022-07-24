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

// Function B_DualPistol_Athena.B_DualPistol_Athena_C.UserConstructionScript
struct AB_DualPistol_Athena_C_UserConstructionScript_Params
{
};

// Function B_DualPistol_Athena.B_DualPistol_Athena_C.OnPlayWeaponFireFX
struct AB_DualPistol_Athena_C_OnPlayWeaponFireFX_Params
{
	bool*                                              bPersistentFire;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSecondaryFire;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_DualPistol_Athena.B_DualPistol_Athena_C.ExecuteUbergraph_B_DualPistol_Athena
struct AB_DualPistol_Athena_C_ExecuteUbergraph_B_DualPistol_Athena_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
