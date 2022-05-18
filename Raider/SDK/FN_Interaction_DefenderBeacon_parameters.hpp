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

// Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.CheckAmmoValid
struct UInteraction_DefenderBeacon_C_CheckAmmoValid_Params
{
	bool                                               AmmoValid;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.DisplayWeaponType
struct UInteraction_DefenderBeacon_C_DisplayWeaponType_Params
{
};

// Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.Construct
struct UInteraction_DefenderBeacon_C_Construct_Params
{
};

// Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.UpdateDefenderBeaconWidget
struct UInteraction_DefenderBeacon_C_UpdateDefenderBeaconWidget_Params
{
};

// Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.Destruct
struct UInteraction_DefenderBeacon_C_Destruct_Params
{
};

// Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.OnDefenderEquippedWeapon
struct UInteraction_DefenderBeacon_C_OnDefenderEquippedWeapon_Params
{
	class AFortWeapon*                                 NewWeapon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortWeapon*                                 OldWeapon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.ExecuteUbergraph_Interaction_DefenderBeacon
struct UInteraction_DefenderBeacon_C_ExecuteUbergraph_Interaction_DefenderBeacon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
