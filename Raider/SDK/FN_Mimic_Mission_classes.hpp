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

// BlueprintGeneratedClass Mimic_Mission.Mimic_Mission_C
// 0x0151 (0x07F1 - 0x06A0)
class AMimic_Mission_C : public AFortMission
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06A0(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AHuskPawn_Mimic_C*                           MimicPawn;                                                // 0x06B0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              SavedMimicHealth;                                         // 0x06B8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x06BC(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       KillMimicObjectiveHandle;                                 // 0x06C0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       DefeatMimicText;                                          // 0x06E0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       ChestInteractObjectiveHandle;                             // 0x06F8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AMimic_Chest_C*                              MimicChest;                                               // 0x0718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       FindMimicText;                                            // 0x0720(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortMissionWeightedReward                  ChosenReward;                                             // 0x0738(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       MimicHealthBarText;                                       // 0x07D0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UFortAIEncounterInfo*                        Encounter;                                                // 0x07E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EFortObjectiveStatus                               ObjectiveStatus;                                          // 0x07F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mimic_Mission.Mimic_Mission_C");
		return ptr;
	}


	void OnMimicSpawned(class AHuskPawn_Mimic_C* MimicPawn);
	void OnChestInteract();
	void HideFoundMimicText();
	void InitializeMimicChest(class AMimic_Chest_C* MimicChest, bool bWakeOnDamage);
	void TryGiveRewards();
	void RestartDormantChest();
	void InitMission();
	void UserConstructionScript();
	void HandleMissionEvent_MissionSucceeded(const struct FGuid& InMissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void HandleMissionEvent_ObjectiveSucceeded(const struct FGuid& InMissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void HandleMissionEvent_LocateSecondary(const struct FGuid& InMissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void OnMimicDied_Event(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void OnEncounterEnemySpawned(class UFortAIEncounterInfo* Encounter, class AFortAIPawn* SpawnedEnemy);
	void OnInteractingPlayerDied_Event(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void OnMimicChestDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void BlueprintOnActivated();
	void Event_OnMimicDestroyed(class AActor* DestroyedActor);
	void ExecuteUbergraph_Mimic_Mission(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
