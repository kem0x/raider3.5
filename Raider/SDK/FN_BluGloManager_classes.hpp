#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BluGloManager.BluGloManager_C
// 0x0060 (0x0418 - 0x03B8)
class ABluGloManager_C : public AFortBluGloManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B8(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class ATiered_BluGlo_Parent_C*>             PossibleSpawnLocationsArray;                              // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ATiered_BluGlo_Parent_C*>             OccupiedNodes;                                            // 0x03D8(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                AmountOfBluGloToSpawn;                                    // 0x03E8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03EC(0x0004) MISSED OFFSET
	class AActor*                                      QueryActor;                                               // 0x03F0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               _1stRequestArraySet;                                      // 0x03F8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03F9(0x0003) MISSED OFFSET
	float                                              BluGloNavigablePointRadius;                               // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Reward_Start_Sound;                                       // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Reward_Appear_Sound;                                      // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LocationLength;                                           // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BluGloSpawnAnimationTime;                                 // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BluGloManager.BluGloManager_C");
		return ptr;
	}


	void PrintDebugInfoForBluGloToSpawn(TArray<class ATiered_BluGlo_Parent_C*>* TargetArray);
	void IssueBluGloRequestForMission(class AFortMission* Mission, class AActor* ActorToSpawnBluGloFrom);
	void StartSpawnFXAndAudio(const struct FVector& SpawnCenter, class UParticleSystemComponent** SpawnFXEmitter);
	void SpawnBluGloGroup(class AActor* ActorToSpawnFrom, const struct FVector& LocationToSpawnFromIfActorInvalid, TEnumAsByte<EEnvQueryStatus> QueryStatus, class UEnvQueryInstanceBlueprintWrapper* QueryInstance, int NumBluGloToSpawn);
	void ChooseSpawnCenter(class AActor* ActorToSpawnFrom, const struct FVector& LocationToSpawnFrom, struct FVector* SpawnCenter);
	void BuildSpawnLocationsRandomly(const struct FVector& LocationToSpawnFrom, int NumBluGloToSpawn, TArray<struct FVector>* LocationsForSpawningBluGlo);
	void BuildSpawnLocationsFromQueryLocations(int NumBluGloToSpawn, TArray<struct FVector>* QueryResultLocations, TArray<struct FVector>* LocationsForSpawningBluGlo);
	void BuildSpawnLocations(TEnumAsByte<EEnvQueryStatus> QueryStatus, class UEnvQueryInstanceBlueprintWrapper* QueryInstance, int NumBluGloToSpawn, const struct FVector& SpawnCenter, TArray<struct FVector>* LocationsForSpawningBluGlo);
	void IssueBluGloRequest(int NumBluGloToSpawn, class AActor* ActorToSpawnFrom, const struct FVector& LocationToSpawnFromIfActorInvalid);
	void SpawnBluGlo(const struct FVector& SpawnLocation, const struct FVector& SpawnFromLocation);
	void RemoveOccupiedNodes();
	void RequestedBluGo(class AFortMission* Mission, const struct FVector& EQS_Start_Location, class AActor* Actor);
	void UserConstructionScript();
	void HandleMissionEvent_RequestBluGloSpawnUseEQS(const struct FGuid& InMissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void StopSpawnFX(bool off);
	void HandleMissionEvent_RequestBluGloSpawnUseActor(const struct FGuid& InMissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void OnBluGloQueryFinished(class AActor* ActorToSpawnFrom, const struct FVector& LocationToSpawnFromIfActorInvalid, TEnumAsByte<EEnvQueryStatus> QueryStatus, class UEnvQueryInstanceBlueprintWrapper* QueryInstance, int NumBluGloToSpawn);
	void SpawnFXComplete(class UParticleSystemComponent* PSystem);
	void SpawnBluGloGroupEvent(const struct FVector& SpawnCenter);
	void AddMoreBluGloInWorld(class AFortMission* Mission);
	void ExecuteUbergraph_BluGloManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
