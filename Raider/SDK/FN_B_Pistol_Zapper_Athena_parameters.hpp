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

// Function B_Pistol_Zapper_Athena.B_Pistol_Zapper_Athena_C.DisableAllVisuals
struct AB_Pistol_Zapper_Athena_C_DisableAllVisuals_Params
{
};

// Function B_Pistol_Zapper_Athena.B_Pistol_Zapper_Athena_C.StopAndResetTimeline
struct AB_Pistol_Zapper_Athena_C_StopAndResetTimeline_Params
{
};

// Function B_Pistol_Zapper_Athena.B_Pistol_Zapper_Athena_C.UpdateVisuals
struct AB_Pistol_Zapper_Athena_C_UpdateVisuals_Params
{
	bool                                               Ammo_Check;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Pistol_Zapper_Athena.B_Pistol_Zapper_Athena_C.UserConstructionScript
struct AB_Pistol_Zapper_Athena_C_UserConstructionScript_Params
{
};

// Function B_Pistol_Zapper_Athena.B_Pistol_Zapper_Athena_C.Scale Glow Up__FinishedFunc
struct AB_Pistol_Zapper_Athena_C_Scale_Glow_Up__FinishedFunc_Params
{
};

// Function B_Pistol_Zapper_Athena.B_Pistol_Zapper_Athena_C.Scale Glow Up__UpdateFunc
struct AB_Pistol_Zapper_Athena_C_Scale_Glow_Up__UpdateFunc_Params
{
};

// Function B_Pistol_Zapper_Athena.B_Pistol_Zapper_Athena_C.Scale Glow Up__Event__EventFunc
struct AB_Pistol_Zapper_Athena_C_Scale_Glow_Up__Event__EventFunc_Params
{
};

// Function B_Pistol_Zapper_Athena.B_Pistol_Zapper_Athena_C.OnPlayWeaponFireFX
struct AB_Pistol_Zapper_Athena_C_OnPlayWeaponFireFX_Params
{
	bool*                                              bPersistentFire;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSecondaryFire;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Pistol_Zapper_Athena.B_Pistol_Zapper_Athena_C.ReceiveBeginPlay
struct AB_Pistol_Zapper_Athena_C_ReceiveBeginPlay_Params
{
};

// Function B_Pistol_Zapper_Athena.B_Pistol_Zapper_Athena_C.Muzzle Play Reload FX
struct AB_Pistol_Zapper_Athena_C_Muzzle_Play_Reload_FX_Params
{
	TEnumAsByte<EFortReloadFXState>*                   Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Pistol_Zapper_Athena.B_Pistol_Zapper_Athena_C.OnAmmoCountChanged
struct AB_Pistol_Zapper_Athena_C_OnAmmoCountChanged_Params
{
};

// Function B_Pistol_Zapper_Athena.B_Pistol_Zapper_Athena_C.ExecuteUbergraph_B_Pistol_Zapper_Athena
struct AB_Pistol_Zapper_Athena_C_ExecuteUbergraph_B_Pistol_Zapper_Athena_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
