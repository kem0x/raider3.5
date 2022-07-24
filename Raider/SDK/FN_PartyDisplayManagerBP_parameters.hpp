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

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.RestoreTeleportMIDsInProgress
struct APartyDisplayManagerBP_C_RestoreTeleportMIDsInProgress_Params
{
	class AFortPlayerPawn*                             Pawn;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.HandlePartyMemberInProgressDisplayChanges
struct APartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges_Params
{
	class AFortPlayerPawn*                             Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.PartyMemberInProgressCheck
struct APartyDisplayManagerBP_C_PartyMemberInProgressCheck_Params
{
	class AFortPlayerPawn*                             Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetPrefabActorForCurrentDisplayedItem
struct APartyDisplayManagerBP_C_GetPrefabActorForCurrentDisplayedItem_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.PostSetupPrefabVisuals
struct APartyDisplayManagerBP_C_PostSetupPrefabVisuals_Params
{
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ResetTeslaHackParticles
struct APartyDisplayManagerBP_C_ResetTeslaHackParticles_Params
{
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetMeshForCurrentDisplayedItem
struct APartyDisplayManagerBP_C_GetMeshForCurrentDisplayedItem_Params
{
	class UMeshComponent*                              OutDisplayedMesh;                                         // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetItemDefinitionToShow
struct APartyDisplayManagerBP_C_GetItemDefinitionToShow_Params
{
	class UFortItemDefinition*                         ItemDefinition;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetUIOverrideVisuals
struct APartyDisplayManagerBP_C_SetUIOverrideVisuals_Params
{
	class UTexture2D*                                  Large_Texture;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortItemDefinition*                         Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortRarity                                        Rarity;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetWeaponPlacementTransform
struct APartyDisplayManagerBP_C_GetWeaponPlacementTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.UpdatePreviewMeshTransforms
struct APartyDisplayManagerBP_C_UpdatePreviewMeshTransforms_Params
{
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetItemPreviewOffset
struct APartyDisplayManagerBP_C_GetItemPreviewOffset_Params
{
	class UFortItemDefinition*                         ItemDefinition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetPreviewMeshWorldTransform
struct APartyDisplayManagerBP_C_GetPreviewMeshWorldTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetupStaticMeshVisuals
struct APartyDisplayManagerBP_C_SetupStaticMeshVisuals_Params
{
	class UStaticMesh*                                 NewMesh;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetupSkeletalMeshVisuals
struct APartyDisplayManagerBP_C_SetupSkeletalMeshVisuals_Params
{
	class USkeletalMesh*                               NewMesh;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ResetVisuals
struct APartyDisplayManagerBP_C_ResetVisuals_Params
{
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.UserConstructionScript
struct APartyDisplayManagerBP_C_UserConstructionScript_Params
{
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimLevel__FinishedFunc
struct APartyDisplayManagerBP_C_ScaleAnimLevel__FinishedFunc_Params
{
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimLevel__UpdateFunc
struct APartyDisplayManagerBP_C_ScaleAnimLevel__UpdateFunc_Params
{
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimEvolve__FinishedFunc
struct APartyDisplayManagerBP_C_ScaleAnimEvolve__FinishedFunc_Params
{
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimEvolve__UpdateFunc
struct APartyDisplayManagerBP_C_ScaleAnimEvolve__UpdateFunc_Params
{
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.HoloMatColorPulse__FinishedFunc
struct APartyDisplayManagerBP_C_HoloMatColorPulse__FinishedFunc_Params
{
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.HoloMatColorPulse__UpdateFunc
struct APartyDisplayManagerBP_C_HoloMatColorPulse__UpdateFunc_Params
{
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.Completed_01D864884864692DBB7035B0996A5437
struct APartyDisplayManagerBP_C_Completed_01D864884864692DBB7035B0996A5437_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       RequestId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ShowLoading
struct APartyDisplayManagerBP_C_ShowLoading_Params
{
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.HideLoading
struct APartyDisplayManagerBP_C_HideLoading_Params
{
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ShowItem
struct APartyDisplayManagerBP_C_ShowItem_Params
{
	class UFortItem**                                  ItemToView;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid*                                      RequestId;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.PlayLevelUpEffect
struct APartyDisplayManagerBP_C_PlayLevelUpEffect_Params
{
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.PlayEvolutionEffect
struct APartyDisplayManagerBP_C_PlayEvolutionEffect_Params
{
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.CelebrateWithFX
struct APartyDisplayManagerBP_C_CelebrateWithFX_Params
{
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.PerformScaleMeshFX
struct APartyDisplayManagerBP_C_PerformScaleMeshFX_Params
{
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.HandleLoadingAssetsForItemCompleted
struct APartyDisplayManagerBP_C_HandleLoadingAssetsForItemCompleted_Params
{
	class UFortItem**                                  ItemWhoseAssetsWereLoaded;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>*                            LoadedAssets;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FGuid*                                      RequestId;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ReceiveTick
struct APartyDisplayManagerBP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.Set Character Parts Visibility
struct APartyDisplayManagerBP_C_Set_Character_Parts_Visibility_Params
{
	bool                                               NewVisible;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.CharacterCustomizationFinished
struct APartyDisplayManagerBP_C_CharacterCustomizationFinished_Params
{
	class AFortPlayerPawn**                            Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ReceiveBeginPlay
struct APartyDisplayManagerBP_C_ReceiveBeginPlay_Params
{
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.OnPlayerPawnAddedToLobby
struct APartyDisplayManagerBP_C_OnPlayerPawnAddedToLobby_Params
{
	class AFortPlayerPawn**                            Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ResOutPawnFromLobby
struct APartyDisplayManagerBP_C_ResOutPawnFromLobby_Params
{
	class AFortPlayerPawn**                            Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PartyIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetupPrefabVisuals
struct APartyDisplayManagerBP_C_SetupPrefabVisuals_Params
{
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ExecuteUbergraph_PartyDisplayManagerBP
struct APartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
