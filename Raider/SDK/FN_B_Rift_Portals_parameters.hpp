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

// Function B_Rift_Portals.B_Rift_Portals_C.UserConstructionScript
struct AB_Rift_Portals_C_UserConstructionScript_Params
{
};

// Function B_Rift_Portals.B_Rift_Portals_C.BoostLight__FinishedFunc
struct AB_Rift_Portals_C_BoostLight__FinishedFunc_Params
{
};

// Function B_Rift_Portals.B_Rift_Portals_C.BoostLight__UpdateFunc
struct AB_Rift_Portals_C_BoostLight__UpdateFunc_Params
{
};

// Function B_Rift_Portals.B_Rift_Portals_C.ScaleLightOnOff__FinishedFunc
struct AB_Rift_Portals_C_ScaleLightOnOff__FinishedFunc_Params
{
};

// Function B_Rift_Portals.B_Rift_Portals_C.ScaleLightOnOff__UpdateFunc
struct AB_Rift_Portals_C_ScaleLightOnOff__UpdateFunc_Params
{
};

// Function B_Rift_Portals.B_Rift_Portals_C.OnPlaced
struct AB_Rift_Portals_C_OnPlaced_Params
{
};

// Function B_Rift_Portals.B_Rift_Portals_C.OnRemoved
struct AB_Rift_Portals_C_OnRemoved_Params
{
};

// Function B_Rift_Portals.B_Rift_Portals_C.OnSpawnAI
struct AB_Rift_Portals_C_OnSpawnAI_Params
{
};

// Function B_Rift_Portals.B_Rift_Portals_C.Lightning Impact Event
struct AB_Rift_Portals_C_Lightning_Impact_Event_Params
{
};

// Function B_Rift_Portals.B_Rift_Portals_C.OnActivated
struct AB_Rift_Portals_C_OnActivated_Params
{
};

// Function B_Rift_Portals.B_Rift_Portals_C.ReceiveEndPlay
struct AB_Rift_Portals_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Rift_Portals.B_Rift_Portals_C.ReceiveBeginPlay
struct AB_Rift_Portals_C_ReceiveBeginPlay_Params
{
};

// Function B_Rift_Portals.B_Rift_Portals_C.FadeLightIn
struct AB_Rift_Portals_C_FadeLightIn_Params
{
};

// Function B_Rift_Portals.B_Rift_Portals_C.FadeLightOut
struct AB_Rift_Portals_C_FadeLightOut_Params
{
};

// Function B_Rift_Portals.B_Rift_Portals_C.ManuallyActivateRift
struct AB_Rift_Portals_C_ManuallyActivateRift_Params
{
};

// Function B_Rift_Portals.B_Rift_Portals_C.ManuallyDeactivateRift
struct AB_Rift_Portals_C_ManuallyDeactivateRift_Params
{
};

// Function B_Rift_Portals.B_Rift_Portals_C.PatrolEnemySuckIn
struct AB_Rift_Portals_C_PatrolEnemySuckIn_Params
{
	float                                              Delay;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RiftLightningDuration;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnImpactParticles;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Rift_Portals.B_Rift_Portals_C.OnDeactivated
struct AB_Rift_Portals_C_OnDeactivated_Params
{
};

// Function B_Rift_Portals.B_Rift_Portals_C.ResetGate
struct AB_Rift_Portals_C_ResetGate_Params
{
};

// Function B_Rift_Portals.B_Rift_Portals_C.ExecuteUbergraph_B_Rift_Portals
struct AB_Rift_Portals_C_ExecuteUbergraph_B_Rift_Portals_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
