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

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.SetPostProcessParams
struct AB_Ranged_Dual_Generic_Athena_C_SetPostProcessParams_Params
{
	float                                              InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.SetActiveAlterationIdleParticles
struct AB_Ranged_Dual_Generic_Athena_C_SetActiveAlterationIdleParticles_Params
{
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Reset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.ShowReticle
struct AB_Ranged_Dual_Generic_Athena_C_ShowReticle_Params
{
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.HideReticle
struct AB_Ranged_Dual_Generic_Athena_C_HideReticle_Params
{
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.ActivateOrDeactivateWindParticle
struct AB_Ranged_Dual_Generic_Athena_C_ActivateOrDeactivateWindParticle_Params
{
	bool                                               bNewActive;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.DeactivateMuzzleFX
struct AB_Ranged_Dual_Generic_Athena_C_DeactivateMuzzleFX_Params
{
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.DeactivateReloadSmokeFX
struct AB_Ranged_Dual_Generic_Athena_C_DeactivateReloadSmokeFX_Params
{
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.ActivateReloadSmokeFX
struct AB_Ranged_Dual_Generic_Athena_C_ActivateReloadSmokeFX_Params
{
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.ActivateShellsFX
struct AB_Ranged_Dual_Generic_Athena_C_ActivateShellsFX_Params
{
	bool                                               Bool;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OffHand;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.DeactivateShellsFX
struct AB_Ranged_Dual_Generic_Athena_C_DeactivateShellsFX_Params
{
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.SetupShellFX
struct AB_Ranged_Dual_Generic_Athena_C_SetupShellFX_Params
{
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.UpdateShellEmittersFX
struct AB_Ranged_Dual_Generic_Athena_C_UpdateShellEmittersFX_Params
{
	class UParticleSystemComponent*                    PS;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.Muzzle Play Reload FX
struct AB_Ranged_Dual_Generic_Athena_C_Muzzle_Play_Reload_FX_Params
{
	TEnumAsByte<EFortReloadFXState>                    Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.Muzzle Flash FX
struct AB_Ranged_Dual_Generic_Athena_C_Muzzle_Flash_FX_Params
{
	bool                                               Persistent_Fire;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OffHand;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.SetWpnRarity
struct AB_Ranged_Dual_Generic_Athena_C_SetWpnRarity_Params
{
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.AddRandomScale
struct AB_Ranged_Dual_Generic_Athena_C_AddRandomScale_Params
{
	bool                                               OffHand;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.UserConstructionScript
struct AB_Ranged_Dual_Generic_Athena_C_UserConstructionScript_Params
{
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.AnimateScopePostProcess__FinishedFunc
struct AB_Ranged_Dual_Generic_Athena_C_AnimateScopePostProcess__FinishedFunc_Params
{
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.AnimateScopePostProcess__UpdateFunc
struct AB_Ranged_Dual_Generic_Athena_C_AnimateScopePostProcess__UpdateFunc_Params
{
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnLoaded_468C8A744AA43D411B8A218EDC703167
struct AB_Ranged_Dual_Generic_Athena_C_OnLoaded_468C8A744AA43D411B8A218EDC703167_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnLoaded_A20154E74163905534EAA7A226A4D20B
struct AB_Ranged_Dual_Generic_Athena_C_OnLoaded_A20154E74163905534EAA7A226A4D20B_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnLoaded_3B6C2F134D7C48D715B2EB8E0CE9B045
struct AB_Ranged_Dual_Generic_Athena_C_OnLoaded_3B6C2F134D7C48D715B2EB8E0CE9B045_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnLoaded_DB8A0F544A576B8684A07E865C728884
struct AB_Ranged_Dual_Generic_Athena_C_OnLoaded_DB8A0F544A576B8684A07E865C728884_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnPlayWeaponFireFX
struct AB_Ranged_Dual_Generic_Athena_C_OnPlayWeaponFireFX_Params
{
	bool*                                              bPersistentFire;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSecondaryFire;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnStopWeaponFireFX
struct AB_Ranged_Dual_Generic_Athena_C_OnStopWeaponFireFX_Params
{
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnPlayReloadFX
struct AB_Ranged_Dual_Generic_Athena_C_OnPlayReloadFX_Params
{
	TEnumAsByte<EFortReloadFXState>*                   ReloadStage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnSetTargeting
struct AB_Ranged_Dual_Generic_Athena_C_OnSetTargeting_Params
{
	bool*                                              bNewIsTargeting;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.K2_OnUnEquip
struct AB_Ranged_Dual_Generic_Athena_C_K2_OnUnEquip_Params
{
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.InitializeScopeVariables
struct AB_Ranged_Dual_Generic_Athena_C_InitializeScopeVariables_Params
{
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.Update Enemy Custom Depths
struct AB_Ranged_Dual_Generic_Athena_C_Update_Enemy_Custom_Depths_Params
{
	bool                                               Enable_Or_Disable;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                StencilBufferValue;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnWeaponAttached
struct AB_Ranged_Dual_Generic_Athena_C_OnWeaponAttached_Params
{
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnInitAlteration
struct AB_Ranged_Dual_Generic_Athena_C_OnInitAlteration_Params
{
	class UFortAlterationItemDefinition**              NewAlteration;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnInitCosmeticAlterations
struct AB_Ranged_Dual_Generic_Athena_C_OnInitCosmeticAlterations_Params
{
	struct FFortCosmeticModification*                  CosmeticMod;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UMaterialInstanceDynamic**                   DynamicMaterialInstance;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.ShellsON_(onPump)
struct AB_Ranged_Dual_Generic_Athena_C_ShellsON__onPump__Params
{
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnEquippedWeaponDestory
struct AB_Ranged_Dual_Generic_Athena_C_OnEquippedWeaponDestory_Params
{
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.SetWeaponPierceThrough
struct AB_Ranged_Dual_Generic_Athena_C_SetWeaponPierceThrough_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TargetLimit;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.SetWeaponPierceThrough_ClientRep
struct AB_Ranged_Dual_Generic_Athena_C_SetWeaponPierceThrough_ClientRep_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TargetLimit;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.ReceiveBeginPlay
struct AB_Ranged_Dual_Generic_Athena_C_ReceiveBeginPlay_Params
{
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnWeaponVisibilityChanged
struct AB_Ranged_Dual_Generic_Athena_C_OnWeaponVisibilityChanged_Params
{
	bool*                                              bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.HideWeaponMesh
struct AB_Ranged_Dual_Generic_Athena_C_HideWeaponMesh_Params
{
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.ShowWeaponMesh
struct AB_Ranged_Dual_Generic_Athena_C_ShowWeaponMesh_Params
{
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.HideWeapon
struct AB_Ranged_Dual_Generic_Athena_C_HideWeapon_Params
{
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.ShowWeapon
struct AB_Ranged_Dual_Generic_Athena_C_ShowWeapon_Params
{
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.ReverseScopePP
struct AB_Ranged_Dual_Generic_Athena_C_ReverseScopePP_Params
{
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.ResetDoonceScopeSound
struct AB_Ranged_Dual_Generic_Athena_C_ResetDoonceScopeSound_Params
{
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.UnhideThirdPersonStuff
struct AB_Ranged_Dual_Generic_Athena_C_UnhideThirdPersonStuff_Params
{
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.PlayScopePP
struct AB_Ranged_Dual_Generic_Athena_C_PlayScopePP_Params
{
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.HideFirstPersonStuff
struct AB_Ranged_Dual_Generic_Athena_C_HideFirstPersonStuff_Params
{
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.AbortScopeFX
struct AB_Ranged_Dual_Generic_Athena_C_AbortScopeFX_Params
{
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.HideThirdPersonStuff
struct AB_Ranged_Dual_Generic_Athena_C_HideThirdPersonStuff_Params
{
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.UnhideFirstPersonStuffPart2
struct AB_Ranged_Dual_Generic_Athena_C_UnhideFirstPersonStuffPart2_Params
{
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.UnhideFirstPersonStuffPart1
struct AB_Ranged_Dual_Generic_Athena_C_UnhideFirstPersonStuffPart1_Params
{
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.ForceScopeFX
struct AB_Ranged_Dual_Generic_Athena_C_ForceScopeFX_Params
{
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.SetupScopePostProcess
struct AB_Ranged_Dual_Generic_Athena_C_SetupScopePostProcess_Params
{
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.HandFired
struct AB_Ranged_Dual_Generic_Athena_C_HandFired_Params
{
	EDualWeaponHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPersistantFire;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.BindOnHandFired
struct AB_Ranged_Dual_Generic_Athena_C_BindOnHandFired_Params
{
};

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.ExecuteUbergraph_B_Ranged_Dual_Generic_Athena
struct AB_Ranged_Dual_Generic_Athena_C_ExecuteUbergraph_B_Ranged_Dual_Generic_Athena_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
