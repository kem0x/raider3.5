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

// Function B_Melee_Generic.B_Melee_Generic_C.Melee_Effect_Color
struct AB_Melee_Generic_C_Melee_Effect_Color_Params
{
	struct FVector                                     Melee_Color_Set;                                          // (Parm, OutParm, IsPlainOldData)
};

// Function B_Melee_Generic.B_Melee_Generic_C.SetActiveAlterationIdleParticles
struct AB_Melee_Generic_C_SetActiveAlterationIdleParticles_Params
{
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Reset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Melee_Generic.B_Melee_Generic_C.SetWpnRarity
struct AB_Melee_Generic_C_SetWpnRarity_Params
{
};

// Function B_Melee_Generic.B_Melee_Generic_C.UserConstructionScript
struct AB_Melee_Generic_C_UserConstructionScript_Params
{
};

// Function B_Melee_Generic.B_Melee_Generic_C.OnLoaded_CB594210420542B302428F8181D85E48
struct AB_Melee_Generic_C_OnLoaded_CB594210420542B302428F8181D85E48_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Melee_Generic.B_Melee_Generic_C.MeleeSwingRight
struct AB_Melee_Generic_C_MeleeSwingRight_Params
{
};

// Function B_Melee_Generic.B_Melee_Generic_C.MeleeSwingLeft
struct AB_Melee_Generic_C_MeleeSwingLeft_Params
{
};

// Function B_Melee_Generic.B_Melee_Generic_C.FootStepLeft
struct AB_Melee_Generic_C_FootStepLeft_Params
{
};

// Function B_Melee_Generic.B_Melee_Generic_C.FootStepRight
struct AB_Melee_Generic_C_FootStepRight_Params
{
};

// Function B_Melee_Generic.B_Melee_Generic_C.ReceiveBeginPlay
struct AB_Melee_Generic_C_ReceiveBeginPlay_Params
{
};

// Function B_Melee_Generic.B_Melee_Generic_C.OnPlayWeaponFireFX
struct AB_Melee_Generic_C_OnPlayWeaponFireFX_Params
{
	bool*                                              bPersistentFire;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSecondaryFire;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Melee_Generic.B_Melee_Generic_C.PlayRClickImpacts
struct AB_Melee_Generic_C_PlayRClickImpacts_Params
{
};

// Function B_Melee_Generic.B_Melee_Generic_C.OnPlayImpactFX
struct AB_Melee_Generic_C_OnPlayImpactFX_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>*                     ImpactPhysicalSurface;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent**                   SpawnedPSC;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function B_Melee_Generic.B_Melee_Generic_C.OnEquippedWeaponDestory
struct AB_Melee_Generic_C_OnEquippedWeaponDestory_Params
{
};

// Function B_Melee_Generic.B_Melee_Generic_C.OnWeaponAttached
struct AB_Melee_Generic_C_OnWeaponAttached_Params
{
};

// Function B_Melee_Generic.B_Melee_Generic_C.OnInitCosmeticAlterations
struct AB_Melee_Generic_C_OnInitCosmeticAlterations_Params
{
	struct FFortCosmeticModification*                  CosmeticMod;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UMaterialInstanceDynamic**                   DynamicMaterialInstance;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Melee_Generic.B_Melee_Generic_C.OnWeaponVisibilityChanged
struct AB_Melee_Generic_C_OnWeaponVisibilityChanged_Params
{
	bool*                                              bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Melee_Generic.B_Melee_Generic_C.OnWeaponDetached
struct AB_Melee_Generic_C_OnWeaponDetached_Params
{
};

// Function B_Melee_Generic.B_Melee_Generic_C.ExecuteUbergraph_B_Melee_Generic
struct AB_Melee_Generic_C_ExecuteUbergraph_B_Melee_Generic_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
