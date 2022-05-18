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

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.OnRep_SavedBase
struct APlayerPawn_Constructor_C_OnRep_SavedBase_Params
{
};

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.SetIFFMeshesEnabled
struct APlayerPawn_Constructor_C_SetIFFMeshesEnabled_Params
{
	bool                                               IsEnabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.UserConstructionScript
struct APlayerPawn_Constructor_C_UserConstructionScript_Params
{
};

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.TakeDamageTimeline__FinishedFunc
struct APlayerPawn_Constructor_C_TakeDamageTimeline__FinishedFunc_Params
{
};

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.TakeDamageTimeline__UpdateFunc
struct APlayerPawn_Constructor_C_TakeDamageTimeline__UpdateFunc_Params
{
};

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.GameplayCue.Damage
struct APlayerPawn_Constructor_C_GameplayCue_Damage_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.GameplayCue.Constructor.ToInfinityAndBeyond.ActiveFX
struct APlayerPawn_Constructor_C_GameplayCue_Constructor_ToInfinityAndBeyond_ActiveFX_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.GameplayCue.Constructor.KineticOverload.ActiveFX
struct APlayerPawn_Constructor_C_GameplayCue_Constructor_KineticOverload_ActiveFX_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.GameplayCue.Constructor.PlasmaPulse.IFFCoding
struct APlayerPawn_Constructor_C_GameplayCue_Constructor_PlasmaPulse_IFFCoding_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.ReceiveBeginPlay
struct APlayerPawn_Constructor_C_ReceiveBeginPlay_Params
{
};

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.testIFF
struct APlayerPawn_Constructor_C_testIFF_Params
{
};

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.OnCharacterPartsReinitialized
struct APlayerPawn_Constructor_C_OnCharacterPartsReinitialized_Params
{
};

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
struct APlayerPawn_Constructor_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1_Params
{
	TEnumAsByte<EGameplayCueEvent>*                    EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
struct APlayerPawn_Constructor_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2_Params
{
	TEnumAsByte<EGameplayCueEvent>*                    EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.PlayArm
struct APlayerPawn_Constructor_C_PlayArm_Params
{
};

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.testEndIFF
struct APlayerPawn_Constructor_C_testEndIFF_Params
{
};

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.SetMenuScreenClassName
struct APlayerPawn_Constructor_C_SetMenuScreenClassName_Params
{
};

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.MultiToggleShield
struct APlayerPawn_Constructor_C_MultiToggleShield_Params
{
	bool                                               Toggle;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.ToggleShield
struct APlayerPawn_Constructor_C_ToggleShield_Params
{
	bool                                               Toggle;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.SetBase
struct APlayerPawn_Constructor_C_SetBase_Params
{
	class AB_Constructor_BASE_C*                       SavedBase;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.ExecuteUbergraph_PlayerPawn_Constructor
struct APlayerPawn_Constructor_C_ExecuteUbergraph_PlayerPawn_Constructor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.PlayArmAnim__DelegateSignature
struct APlayerPawn_Constructor_C_PlayArmAnim__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
