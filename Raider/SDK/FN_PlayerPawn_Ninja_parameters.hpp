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

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.SetupShadowMeshAssetsAndMaterials
struct APlayerPawn_Ninja_C_SetupShadowMeshAssetsAndMaterials_Params
{
	TEnumAsByte<EFortCustomPartType>                   PartType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Shadow_Mesh_Component;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	TArray<class UMaterialInterface*>                  Character_Body_Part_MID_Array;                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UMaterialInstanceDynamic*>            Empty_Translucent_Shadow_Stance_Output_MID_Array;         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Set;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.CreateAndAttachDuplicateEffectSkeletalMeshes
struct APlayerPawn_Ninja_C_CreateAndAttachDuplicateEffectSkeletalMeshes_Params
{
	TEnumAsByte<EFortCustomPartType>                   BodyType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      DuplicatedSkeletalMeshComponent;                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class UMaterialInterface*                          Material_to_Apply;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Empty_MID_Array;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                TranslucentSortPriority;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.UserConstructionScript
struct APlayerPawn_Ninja_C_UserConstructionScript_Params
{
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.Animate Ninja ShadowStance Dissolve__FinishedFunc
struct APlayerPawn_Ninja_C_Animate_Ninja_ShadowStance_Dissolve__FinishedFunc_Params
{
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.Animate Ninja ShadowStance Dissolve__UpdateFunc
struct APlayerPawn_Ninja_C_Animate_Ninja_ShadowStance_Dissolve__UpdateFunc_Params
{
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Abilities.Activation.Ninja.ShadowStance
struct APlayerPawn_Ninja_C_GameplayCue_Abilities_Activation_Ninja_ShadowStance_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Ninja.DimMak.ActiveFX
struct APlayerPawn_Ninja_C_GameplayCue_Ninja_DimMak_ActiveFX_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.OnWeaponEquipped
struct APlayerPawn_Ninja_C_OnWeaponEquipped_Params
{
	class AFortWeapon**                                NewWeapon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortWeapon**                                PrevWeapon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.UpdateWeaponShadowStance
struct APlayerPawn_Ninja_C_UpdateWeaponShadowStance_Params
{
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.DragonSlashActivatedOrDeactivated
struct APlayerPawn_Ninja_C_DragonSlashActivatedOrDeactivated_Params
{
	bool                                               Active_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.ReceiveBeginPlay
struct APlayerPawn_Ninja_C_ReceiveBeginPlay_Params
{
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.Toggle Shadow Stance
struct APlayerPawn_Ninja_C_Toggle_Shadow_Stance_Params
{
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.OnCharacterPartsReinitialized
struct APlayerPawn_Ninja_C_OnCharacterPartsReinitialized_Params
{
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
struct APlayerPawn_Ninja_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1_Params
{
	TEnumAsByte<EGameplayCueEvent>*                    EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
struct APlayerPawn_Ninja_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2_Params
{
	TEnumAsByte<EGameplayCueEvent>*                    EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.SetMenuScreenClassName
struct APlayerPawn_Ninja_C_SetMenuScreenClassName_Params
{
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.NinjaStarTrails_On
struct APlayerPawn_Ninja_C_NinjaStarTrails_On_Params
{
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.NinjaStarTrails_Off
struct APlayerPawn_Ninja_C_NinjaStarTrails_Off_Params
{
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.SetPiercingForFX
struct APlayerPawn_Ninja_C_SetPiercingForFX_Params
{
	bool                                               NewPierceValue;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.OnLanded
struct APlayerPawn_Ninja_C_OnLanded_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.StopEmittingNewSplines
struct APlayerPawn_Ninja_C_StopEmittingNewSplines_Params
{
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.OnTeleportedClient
struct APlayerPawn_Ninja_C_OnTeleportedClient_Params
{
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.TailOfDragonEnd
struct APlayerPawn_Ninja_C_TailOfDragonEnd_Params
{
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.TailOfDragonStart
struct APlayerPawn_Ninja_C_TailOfDragonStart_Params
{
	float                                              AoeCloudTimeToLive;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MontageLength;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.ExecuteUbergraph_PlayerPawn_Ninja
struct APlayerPawn_Ninja_C_ExecuteUbergraph_PlayerPawn_Ninja_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
