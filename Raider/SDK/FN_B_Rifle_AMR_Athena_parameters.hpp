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

// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.VFX_SetChargedParams
struct AB_Rifle_AMR_Athena_C_VFX_SetChargedParams_Params
{
};

// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.VFX_SetUnchargedParams
struct AB_Rifle_AMR_Athena_C_VFX_SetUnchargedParams_Params
{
};

// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.UserConstructionScript
struct AB_Rifle_AMR_Athena_C_UserConstructionScript_Params
{
};

// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.ScaleDownParticles__FinishedFunc
struct AB_Rifle_AMR_Athena_C_ScaleDownParticles__FinishedFunc_Params
{
};

// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.ScaleDownParticles__UpdateFunc
struct AB_Rifle_AMR_Athena_C_ScaleDownParticles__UpdateFunc_Params
{
};

// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.Reload_PItchChange__FinishedFunc
struct AB_Rifle_AMR_Athena_C_Reload_PItchChange__FinishedFunc_Params
{
};

// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.Reload_PItchChange__UpdateFunc
struct AB_Rifle_AMR_Athena_C_Reload_PItchChange__UpdateFunc_Params
{
};

// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.ScaleUpParticles__FinishedFunc
struct AB_Rifle_AMR_Athena_C_ScaleUpParticles__FinishedFunc_Params
{
};

// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.ScaleUpParticles__UpdateFunc
struct AB_Rifle_AMR_Athena_C_ScaleUpParticles__UpdateFunc_Params
{
};

// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.springVal__FinishedFunc
struct AB_Rifle_AMR_Athena_C_springVal__FinishedFunc_Params
{
};

// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.springVal__UpdateFunc
struct AB_Rifle_AMR_Athena_C_springVal__UpdateFunc_Params
{
};

// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.SlowdownTimeline__FinishedFunc
struct AB_Rifle_AMR_Athena_C_SlowdownTimeline__FinishedFunc_Params
{
};

// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.SlowdownTimeline__UpdateFunc
struct AB_Rifle_AMR_Athena_C_SlowdownTimeline__UpdateFunc_Params
{
};

// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.OnPlayWeaponFireFX
struct AB_Rifle_AMR_Athena_C_OnPlayWeaponFireFX_Params
{
	bool*                                              bPersistentFire;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSecondaryFire;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.OnStartCharge
struct AB_Rifle_AMR_Athena_C_OnStartCharge_Params
{
};

// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.OnReachedMinCharge
struct AB_Rifle_AMR_Athena_C_OnReachedMinCharge_Params
{
};

// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.Muzzle Play Reload FX
struct AB_Rifle_AMR_Athena_C_Muzzle_Play_Reload_FX_Params
{
	TEnumAsByte<EFortReloadFXState>*                   Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.OnPlayReloadFX
struct AB_Rifle_AMR_Athena_C_OnPlayReloadFX_Params
{
	TEnumAsByte<EFortReloadFXState>*                   ReloadStage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.EndOfCharge
struct AB_Rifle_AMR_Athena_C_EndOfCharge_Params
{
};

// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.OnWeaponAttached
struct AB_Rifle_AMR_Athena_C_OnWeaponAttached_Params
{
};

// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.ReceiveBeginPlay
struct AB_Rifle_AMR_Athena_C_ReceiveBeginPlay_Params
{
};

// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.K2_OnUnEquip
struct AB_Rifle_AMR_Athena_C_K2_OnUnEquip_Params
{
};

// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.OnAmmoCountChanged
struct AB_Rifle_AMR_Athena_C_OnAmmoCountChanged_Params
{
};

// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.CameraShakeLoop
struct AB_Rifle_AMR_Athena_C_CameraShakeLoop_Params
{
};

// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.OnChargeDown
struct AB_Rifle_AMR_Athena_C_OnChargeDown_Params
{
};

// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.OnReachedMaxCharge
struct AB_Rifle_AMR_Athena_C_OnReachedMaxCharge_Params
{
};

// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.ReceiveTick
struct AB_Rifle_AMR_Athena_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.ExecuteUbergraph_B_Rifle_AMR_Athena
struct AB_Rifle_AMR_Athena_C_ExecuteUbergraph_B_Rifle_AMR_Athena_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
