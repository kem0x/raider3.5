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

// Function BluGloManager.BluGloManager_C.PrintDebugInfoForBluGloToSpawn
struct ABluGloManager_C_PrintDebugInfoForBluGloToSpawn_Params
{
	TArray<class ATiered_BluGlo_Parent_C*>             TargetArray;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BluGloManager.BluGloManager_C.IssueBluGloRequestForMission
struct ABluGloManager_C_IssueBluGloRequestForMission_Params
{
	class AFortMission*                                Mission;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorToSpawnBluGloFrom;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BluGloManager.BluGloManager_C.StartSpawnFXAndAudio
struct ABluGloManager_C_StartSpawnFXAndAudio_Params
{
	struct FVector                                     SpawnCenter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UParticleSystemComponent*                    SpawnFXEmitter;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BluGloManager.BluGloManager_C.SpawnBluGloGroup
struct ABluGloManager_C_SpawnBluGloGroup_Params
{
	class AActor*                                      ActorToSpawnFrom;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationToSpawnFromIfActorInvalid;                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	TEnumAsByte<EEnvQueryStatus>                       QueryStatus;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumBluGloToSpawn;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BluGloManager.BluGloManager_C.ChooseSpawnCenter
struct ABluGloManager_C_ChooseSpawnCenter_Params
{
	class AActor*                                      ActorToSpawnFrom;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationToSpawnFrom;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     SpawnCenter;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function BluGloManager.BluGloManager_C.BuildSpawnLocationsRandomly
struct ABluGloManager_C_BuildSpawnLocationsRandomly_Params
{
	struct FVector                                     LocationToSpawnFrom;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	int                                                NumBluGloToSpawn;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             LocationsForSpawningBluGlo;                               // (Parm, OutParm, ZeroConstructor)
};

// Function BluGloManager.BluGloManager_C.BuildSpawnLocationsFromQueryLocations
struct ABluGloManager_C_BuildSpawnLocationsFromQueryLocations_Params
{
	int                                                NumBluGloToSpawn;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             QueryResultLocations;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                             LocationsForSpawningBluGlo;                               // (Parm, OutParm, ZeroConstructor)
};

// Function BluGloManager.BluGloManager_C.BuildSpawnLocations
struct ABluGloManager_C_BuildSpawnLocations_Params
{
	TEnumAsByte<EEnvQueryStatus>                       QueryStatus;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumBluGloToSpawn;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawnCenter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	TArray<struct FVector>                             LocationsForSpawningBluGlo;                               // (Parm, OutParm, ZeroConstructor)
};

// Function BluGloManager.BluGloManager_C.IssueBluGloRequest
struct ABluGloManager_C_IssueBluGloRequest_Params
{
	int                                                NumBluGloToSpawn;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorToSpawnFrom;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationToSpawnFromIfActorInvalid;                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BluGloManager.BluGloManager_C.SpawnBluGlo
struct ABluGloManager_C_SpawnBluGlo_Params
{
	struct FVector                                     SpawnLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     SpawnFromLocation;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BluGloManager.BluGloManager_C.RemoveOccupiedNodes
struct ABluGloManager_C_RemoveOccupiedNodes_Params
{
};

// Function BluGloManager.BluGloManager_C.RequestedBluGo
struct ABluGloManager_C_RequestedBluGo_Params
{
	class AFortMission*                                Mission;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EQS_Start_Location;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BluGloManager.BluGloManager_C.UserConstructionScript
struct ABluGloManager_C_UserConstructionScript_Params
{
};

// Function BluGloManager.BluGloManager_C.HandleMissionEvent_RequestBluGloSpawnUseEQS
struct ABluGloManager_C_HandleMissionEvent_RequestBluGloSpawnUseEQS_Params
{
	struct FGuid                                       InMissionGuid;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UFortMissionEventParams*                     Params;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BluGloManager.BluGloManager_C.StopSpawnFX
struct ABluGloManager_C_StopSpawnFX_Params
{
	bool                                               off;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BluGloManager.BluGloManager_C.HandleMissionEvent_RequestBluGloSpawnUseActor
struct ABluGloManager_C_HandleMissionEvent_RequestBluGloSpawnUseActor_Params
{
	struct FGuid                                       InMissionGuid;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UFortMissionEventParams*                     Params;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BluGloManager.BluGloManager_C.OnBluGloQueryFinished
struct ABluGloManager_C_OnBluGloQueryFinished_Params
{
	class AActor*                                      ActorToSpawnFrom;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationToSpawnFromIfActorInvalid;                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	TEnumAsByte<EEnvQueryStatus>                       QueryStatus;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumBluGloToSpawn;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BluGloManager.BluGloManager_C.SpawnFXComplete
struct ABluGloManager_C_SpawnFXComplete_Params
{
	class UParticleSystemComponent*                    PSystem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BluGloManager.BluGloManager_C.SpawnBluGloGroupEvent
struct ABluGloManager_C_SpawnBluGloGroupEvent_Params
{
	struct FVector                                     SpawnCenter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BluGloManager.BluGloManager_C.AddMoreBluGloInWorld
struct ABluGloManager_C_AddMoreBluGloInWorld_Params
{
	class AFortMission*                                Mission;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BluGloManager.BluGloManager_C.ExecuteUbergraph_BluGloManager
struct ABluGloManager_C_ExecuteUbergraph_BluGloManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
