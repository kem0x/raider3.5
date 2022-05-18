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

// Function B_SpacePistol.B_SpacePistol_C.SetReloadVariables
struct AB_SpacePistol_C_SetReloadVariables_Params
{
};

// Function B_SpacePistol.B_SpacePistol_C.SetAmmoBarVariables
struct AB_SpacePistol_C_SetAmmoBarVariables_Params
{
};

// Function B_SpacePistol.B_SpacePistol_C.UserConstructionScript
struct AB_SpacePistol_C_UserConstructionScript_Params
{
};

// Function B_SpacePistol.B_SpacePistol_C.ScaleBarBetweenClipCounts__FinishedFunc
struct AB_SpacePistol_C_ScaleBarBetweenClipCounts__FinishedFunc_Params
{
};

// Function B_SpacePistol.B_SpacePistol_C.ScaleBarBetweenClipCounts__UpdateFunc
struct AB_SpacePistol_C_ScaleBarBetweenClipCounts__UpdateFunc_Params
{
};

// Function B_SpacePistol.B_SpacePistol_C.ReloadLERPstate__FinishedFunc
struct AB_SpacePistol_C_ReloadLERPstate__FinishedFunc_Params
{
};

// Function B_SpacePistol.B_SpacePistol_C.ReloadLERPstate__UpdateFunc
struct AB_SpacePistol_C_ReloadLERPstate__UpdateFunc_Params
{
};

// Function B_SpacePistol.B_SpacePistol_C.EmptyLERPstate__FinishedFunc
struct AB_SpacePistol_C_EmptyLERPstate__FinishedFunc_Params
{
};

// Function B_SpacePistol.B_SpacePistol_C.EmptyLERPstate__UpdateFunc
struct AB_SpacePistol_C_EmptyLERPstate__UpdateFunc_Params
{
};

// Function B_SpacePistol.B_SpacePistol_C.ScaleBarReload__FinishedFunc
struct AB_SpacePistol_C_ScaleBarReload__FinishedFunc_Params
{
};

// Function B_SpacePistol.B_SpacePistol_C.ScaleBarReload__UpdateFunc
struct AB_SpacePistol_C_ScaleBarReload__UpdateFunc_Params
{
};

// Function B_SpacePistol.B_SpacePistol_C.OnPlayWeaponFireFX
struct AB_SpacePistol_C_OnPlayWeaponFireFX_Params
{
	bool*                                              bPersistentFire;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSecondaryFire;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_SpacePistol.B_SpacePistol_C.ReceiveBeginPlay
struct AB_SpacePistol_C_ReceiveBeginPlay_Params
{
};

// Function B_SpacePistol.B_SpacePistol_C.OnPlayReloadFX
struct AB_SpacePistol_C_OnPlayReloadFX_Params
{
	TEnumAsByte<EFortReloadFXState>*                   ReloadStage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_SpacePistol.B_SpacePistol_C.OnAmmoCountChanged
struct AB_SpacePistol_C_OnAmmoCountChanged_Params
{
};

// Function B_SpacePistol.B_SpacePistol_C.ClearEmptyLERP
struct AB_SpacePistol_C_ClearEmptyLERP_Params
{
};

// Function B_SpacePistol.B_SpacePistol_C.OnPlayImpactFX
struct AB_SpacePistol_C_OnPlayImpactFX_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>*                     ImpactPhysicalSurface;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent**                   SpawnedPSC;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function B_SpacePistol.B_SpacePistol_C.ExecuteUbergraph_B_SpacePistol
struct AB_SpacePistol_C_ExecuteUbergraph_B_SpacePistol_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
