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

// Function GA_AthenaInVehicle.GA_AthenaInVehicle_C.K2_OnEndAbility
struct UGA_AthenaInVehicle_C_K2_OnEndAbility_Params
{
	bool*                                              bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_AthenaInVehicle.GA_AthenaInVehicle_C.K2_ActivateAbility
struct UGA_AthenaInVehicle_C_K2_ActivateAbility_Params
{
};

// Function GA_AthenaInVehicle.GA_AthenaInVehicle_C.ExecuteUbergraph_GA_AthenaInVehicle
struct UGA_AthenaInVehicle_C_ExecuteUbergraph_GA_AthenaInVehicle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
