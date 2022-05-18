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

// Function B_Shotgun_Break_Athena.B_Shotgun_Break_Athena_C.UserConstructionScript
struct AB_Shotgun_Break_Athena_C_UserConstructionScript_Params
{
};

// Function B_Shotgun_Break_Athena.B_Shotgun_Break_Athena_C.OnPlayWeaponFireFX
struct AB_Shotgun_Break_Athena_C_OnPlayWeaponFireFX_Params
{
	bool*                                              bPersistentFire;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSecondaryFire;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Shotgun_Break_Athena.B_Shotgun_Break_Athena_C.ExecuteUbergraph_B_Shotgun_Break_Athena
struct AB_Shotgun_Break_Athena_C_ExecuteUbergraph_B_Shotgun_Break_Athena_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
