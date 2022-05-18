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

// Function GAB_FlingerRanged.GAB_FlingerRanged_C.K2_ActivateAbility
struct UGAB_FlingerRanged_C_K2_ActivateAbility_Params
{
};

// Function GAB_FlingerRanged.GAB_FlingerRanged_C.SpawnFX
struct UGAB_FlingerRanged_C_SpawnFX_Params
{
};

// Function GAB_FlingerRanged.GAB_FlingerRanged_C.StopFX
struct UGAB_FlingerRanged_C_StopFX_Params
{
};

// Function GAB_FlingerRanged.GAB_FlingerRanged_C.K2_OnEndAbility
struct UGAB_FlingerRanged_C_K2_OnEndAbility_Params
{
	bool*                                              bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_FlingerRanged.GAB_FlingerRanged_C.ExecuteUbergraph_GAB_FlingerRanged
struct UGAB_FlingerRanged_C_ExecuteUbergraph_GAB_FlingerRanged_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
