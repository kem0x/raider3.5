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

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.HasPinnedQuest
struct ABP_Hex_PARENT_C_HasPinnedQuest_Params
{
	bool                                               Pinned;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.HandleUpdatingBannerMesh
struct ABP_Hex_PARENT_C_HandleUpdatingBannerMesh_Params
{
	class USceneComponent*                             Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortQuestItemDefinition*                    CompletedQuest;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Material_Instance_Dynamic;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.HandleMissionAlert
struct ABP_Hex_PARENT_C_HandleMissionAlert_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.GroundSliceSettings
struct ABP_Hex_PARENT_C_GroundSliceSettings_Params
{
	class UMaterialInstanceDynamic*                    SourceMaterial;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  TileTypeA;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  TileTypeB;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TileIsSameRegionA;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TileIsSameRegionB;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TileIsHiddenA;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TileIsHiddenB;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TileExistsA;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TileExistsB;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.UserConstructionScript
struct ABP_Hex_PARENT_C_UserConstructionScript_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_11__FinishedFunc
struct ABP_Hex_PARENT_C_Timeline_11__FinishedFunc_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_11__UpdateFunc
struct ABP_Hex_PARENT_C_Timeline_11__UpdateFunc_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_12__FinishedFunc
struct ABP_Hex_PARENT_C_Timeline_12__FinishedFunc_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_12__UpdateFunc
struct ABP_Hex_PARENT_C_Timeline_12__UpdateFunc_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnLoaded_192496DB41CC2100CC1C729DB594CEF8
struct ABP_Hex_PARENT_C_OnLoaded_192496DB41CC2100CC1C729DB594CEF8_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.CheckFocus
struct ABP_Hex_PARENT_C_CheckFocus_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.FireLightningA
struct ABP_Hex_PARENT_C_FireLightningA_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.ForceDefocus
struct ABP_Hex_PARENT_C_ForceDefocus_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnMissionDataUpdated
struct ABP_Hex_PARENT_C_OnMissionDataUpdated_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnDefocus
struct ABP_Hex_PARENT_C_OnDefocus_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnFocus
struct ABP_Hex_PARENT_C_OnFocus_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnHostDeselect
struct ABP_Hex_PARENT_C_OnHostDeselect_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnHostSelect
struct ABP_Hex_PARENT_C_OnHostSelect_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnClientDeselect
struct ABP_Hex_PARENT_C_OnClientDeselect_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnClientSelect
struct ABP_Hex_PARENT_C_OnClientSelect_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.HandleTeamPowerChanged
struct ABP_Hex_PARENT_C_HandleTeamPowerChanged_Params
{
	int                                                TeamPower;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PersonalPower;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnInitializeTile
struct ABP_Hex_PARENT_C_OnInitializeTile_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.HandleFrontendCameraChanged
struct ABP_Hex_PARENT_C_HandleFrontendCameraChanged_Params
{
	EFrontEndCamera                                    NewCamera;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFrontEndCamera                                    OldCamera;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnMarkedQuestChanged
struct ABP_Hex_PARENT_C_OnMarkedQuestChanged_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.CheckIfQuestShouldBePinned
struct ABP_Hex_PARENT_C_CheckIfQuestShouldBePinned_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.CheckForPinnedInLevel
struct ABP_Hex_PARENT_C_CheckForPinnedInLevel_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.RetryTileInitialized
struct ABP_Hex_PARENT_C_RetryTileInitialized_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.SetMissionPowerLevelDependencies
struct ABP_Hex_PARENT_C_SetMissionPowerLevelDependencies_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.ReceiveBeginPlay
struct ABP_Hex_PARENT_C_ReceiveBeginPlay_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.MissionLightning
struct ABP_Hex_PARENT_C_MissionLightning_Params
{
	struct FName                                       EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmitterTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.MissionLightningOff
struct ABP_Hex_PARENT_C_MissionLightningOff_Params
{
	struct FName                                       EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmitterTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ParticleTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Unpause Updates
struct ABP_Hex_PARENT_C_Unpause_Updates_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.AsyncUpdateBanner
struct ABP_Hex_PARENT_C_AsyncUpdateBanner_Params
{
	class UMaterialInstanceDynamic*                    Material_Instance_Dynamic;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            Unique_Net_Id;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.ExecuteUbergraph_BP_Hex_PARENT
struct ABP_Hex_PARENT_C_ExecuteUbergraph_BP_Hex_PARENT_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
