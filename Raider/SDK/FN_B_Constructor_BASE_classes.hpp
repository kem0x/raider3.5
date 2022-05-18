#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass B_Constructor_BASE.B_Constructor_BASE_C
// 0x0561 (0x1701 - 0x11A0)
class AB_Constructor_BASE_C : public AFortConstructorBASE
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x11A0(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             BaseEnergyComponentC;                                     // 0x11A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             BaseEnergyComponentB;                                     // 0x11B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             BaseEnergyComponentA;                                     // 0x11B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_FeeltheBase_Chargup;                                    // 0x11C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             FeelTheBaseTraceLocation;                                 // 0x11C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x11D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           Capsule;                                                  // 0x11D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Sphere_Collision_For_Anim;                                // 0x11E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SK_Base_Device;                                           // 0x11E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortMiniMapComponent*                       FortMiniMap1;                                             // 0x11F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Workbench_Ticking;                                        // 0x11F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x1200(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTagContainer                       TC_BigBrother;                                            // 0x1208(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                BigBrotherAdditionalNodes;                                // 0x1228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x122C(0x0004) MISSED OFFSET
	class UTexture2D*                                  MiniMapIcon;                                              // 0x1230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Minimap_View_Distance;                                    // 0x1238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x123C(0x0004) MISSED OFFSET
	class UClass*                                      GE_ElectrifiedFloors;                                     // 0x1240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_Hyperthreading;                                        // 0x1248(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_SubroutineOptimization;                                // 0x1268(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_SubroutineOptimization;                                // 0x1288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_Recycling;                                             // 0x1290(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                ConnectedWood;                                            // 0x12B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ConnectedStone;                                           // 0x12B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ConnectedMetal;                                           // 0x12B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x12BC(0x0004) MISSED OFFSET
	class UFortWorldItemDefinition*                    Wood;                                                     // 0x12C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortWorldItemDefinition*                    Stone;                                                    // 0x12C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortWorldItemDefinition*                    Metal;                                                    // 0x12D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecyclingMultiplier;                                      // 0x12D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SpawnWood;                                                // 0x12DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SpawnStone;                                               // 0x12DD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SpawnMetal;                                               // 0x12DE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x12DF(0x0001) MISSED OFFSET
	int                                                SpawnMax;                                                 // 0x12E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HyperThreadingMultiplier;                                 // 0x12E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_DefensiveIntegration;                                  // 0x12E8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_DefensiveIntegration;                                  // 0x1308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_AutomatedDefenses;                                     // 0x1310(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                AutomatedDefenses_Additional_Nodes;                       // 0x1330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x1334(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       TC_TotalIntegration;                                      // 0x1338(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_PowerModulation;                                       // 0x1358(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_PowerModulation;                                       // 0x1378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DefensiveIntegrationLevel;                                // 0x1380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x1384(0x0004) MISSED OFFSET
	class UClass*                                      GE_LoftyArchitecture;                                     // 0x1388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_LoftyArchitecture;                                     // 0x1390(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_SafetyProtocols;                                       // 0x13B0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_SafetyProtocols;                                       // 0x13D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BaseIsPlaced;                                             // 0x13D8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x13D9(0x0003) MISSED OFFSET
	int                                                NumPlayersNearBase;                                       // 0x13DC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BasePowerLevel;                                           // 0x13E0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TotalResourcesSpawned;                                    // 0x13E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ResourceLimit;                                            // 0x13E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x13EC(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       TC_Overclocking;                                          // 0x13F0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_UpgradedPowerModulation;                               // 0x1410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_ElectrifiedFloors;                                     // 0x1418(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_SlowUnit;                                              // 0x1438(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_SlowUnit;                                              // 0x1458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_ContainmentUnit;                                       // 0x1460(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_Grant_TriggerReflectDamage_FromBASEWall;               // 0x1480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_StrongerExit;                                          // 0x1488(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_StrongerExit;                                          // 0x14A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_CardioFeedbackLoop;                                    // 0x14B0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_ShieldCapacitor;                                       // 0x14D0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_ShieldCapacitor;                                       // 0x14F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FStructRecyclingResource                    StoredWood;                                               // 0x14F8(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	struct FStructRecyclingResource                    StoredStone;                                              // 0x1508(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	struct FStructRecyclingResource                    StoredMetal;                                              // 0x1518(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	int                                                HyperthreadingResourceLimit;                              // 0x1528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MegaBASEAdditionalNodes;                                  // 0x152C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_NeuroFeedbackLoop;                                     // 0x1530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAbilitySystemComponent*                     ConstructorAbilitySystemComponent;                        // 0x1538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UClass*                                      GE_OutgoingHealAmp;                                       // 0x1540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_FullyContained;                                        // 0x1548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        Effect_Mesh_Comp;                                         // 0x1550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class UMaterialInterface*>                  Inner_MIDs_Friendly;                                      // 0x1558(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Transition_Start_Delay;                                   // 0x1568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x156C(0x0004) MISSED OFFSET
	TArray<class UMaterialInterface*>                  Outer_MIDs_Friendly;                                      // 0x1570(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_MegaBASE;                                              // 0x1580(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_NeuroFeedbackLoop;                                     // 0x15A0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_CardioFeedbackLoop;                                    // 0x15C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_FullyContained;                                        // 0x15C8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               InitialStaticMeshAnimationIsComplete;                     // 0x15E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x15E9(0x0007) MISSED OFFSET
	class USoundBase*                                  SoundResourcesCreated;                                    // 0x15F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundResourcesCollected;                                  // 0x15F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UStaticMeshComponent*>                EffectMeshArray;                                          // 0x1600(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class ABuildingSMActor*>                    BuildingActorArray;                                       // 0x1610(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              DelayBeforeShowingMeshes;                                 // 0x1620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DelayDisabled;                                            // 0x1624(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x1625(0x0003) MISSED OFFSET
	struct FTimerHandle                                DelayedMeshedTimer;                                       // 0x1628(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_TrapDamage;                                            // 0x1630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_TrapDamage;                                            // 0x1638(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_TrapReloadRate;                                        // 0x1658(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_TrapReloadRate;                                        // 0x1678(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_Constructor_BASEOutgoingDamageMod;                     // 0x1680(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                T1Amount;                                                 // 0x1688(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                T2Amount;                                                 // 0x168C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                T3Amount;                                                 // 0x1690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecyclingTimer;                                           // 0x1694(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_FeelTheBase;                                           // 0x1698(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_FeelTheBase;                                           // 0x16B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APlayerPawn_Constructor_C*                   ConstructorPawn;                                          // 0x16C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    FeelTheBasePowerLevel1;                                   // 0x16C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    FeelTheBasePowerLevel2;                                   // 0x16D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    FeelTheBasePowerLevel3;                                   // 0x16D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  EnergyBuildASound;                                        // 0x16E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  EnergyBuildBSound;                                        // 0x16E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  EnergyBuildCSound;                                        // 0x16F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  EnergyStageTransitionSound;                               // 0x16F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsPlayingLoopA;                                          // 0x1700(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Constructor_BASE.B_Constructor_BASE_C");
		return ptr;
	}


	void UpdateAudioCrossfade(class USoundBase* Sound);
	void GetFeelTheBaseTraceLocation(struct FTransform* TraceLocation);
	void SpawnResourceWithAmount(class UFortWorldItemDefinition* ItemDefinition, int AmountToSpawn, TEnumAsByte<EFortResourceType> ResourceType);
	void SetHealingMultiplier();
	void SetupTrapEffects(class UAbilitySystemComponent* AbilityComponent);
	void GetTrapGEFromTag(const struct FGameplayTagContainer& InTag, class UClass** OutGE);
	void OnRep_InitialStaticMeshAnimationIsComplete();
	void BaseSelfApplyGameplaySpec(const struct FGameplayEffectSpecHandle& GE_Spec);
	void SetBaseVisualGlow(class UAbilitySystemComponent* AbilitySystemComponent);
	void SetDamageMultiplier();
	void OnRep_CollectResources();
	struct FText BlueprintGetInteractionString(class AFortPawn** InteractingPawn);
	void AddResourceToStack(const struct FStructRecyclingResource& RecyclingResource, class UFortWorldItemDefinition* Stored_Resource, int AmountToSpawn, struct FStructRecyclingResource* SetValue);
	void SpawnResourceForRecycling(class UFortWorldItemDefinition* ItemDefinition, int AmountToSpawn, TEnumAsByte<EFortResourceType> ResourceType);
	bool BlueprintCanInteract(class AFortPawn** InteractingPawn);
	void OnRep_BaseIsPlaced();
	void RecycleResources();
	void SetupHostileEffects(class UAbilitySystemComponent* AbilitySystemComponent, TArray<struct FBASEGameplayEffect>* HostileEffects);
	void SetupFriendlyEffects(class UAbilitySystemComponent* AbilitySystemComponent, TArray<struct FBASEGameplayEffect>* FriendlyEffects);
	void SetupBuildingEffects(class UAbilitySystemComponent* AbilitySystemComponent, TArray<struct FBASEGameplayEffect>* BuildingEffects);
	void Setup_Base_Effect_Array(class UAbilitySystemComponent* Instigator_Ability_System, TArray<struct FBASEGameplayEffect>* BASEBuildingEffects, TArray<struct FBASEGameplayEffect>* BASEFriendlyEffects, TArray<struct FBASEGameplayEffect>* BASEHostileEffects);
	void SetupBaseDefaultValues(class UAbilitySystemComponent* Ability_System_Component, int* NodesToAffect);
	void UserConstructionScript();
	void OnPlaced(class UAbilitySystemComponent** InstigatorAbilitySystemComponent);
	void Recycling();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_267_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void AnimateLegs(bool LegsUp);
	void StartBuildingActorVisuals(class ABuildingSMActor** BuildingActor, class UStaticMeshComponent** EffectMeshComp);
	void StopBuildingActorVisuals(class ABuildingSMActor** BuildingActor, class UStaticMeshComponent** EffectMeshComp);
	void BlueprintOnInteract(class AFortPawn** InteractingPawn);
	void GetDamageAmp();
	void ResourcesCreated();
	void ResourcesCollected();
	void BaseIsReadyToAnimate();
	void ShowHiddenMeshes();
	void ApplyTrapEffects();
	void SaveOwner(class APlayerPawn_Constructor_C* ConstructorPawn);
	void FeelTheBaseGlow(bool Stack1, bool Stack2, bool Stack3);
	void ResetFeelTheBaseGlow();
	void BndEvt__P_FeeltheBase_Chargup_K2Node_ComponentBoundEvent_0_ParticleBurstSignature__DelegateSignature(const struct FName& EventName, float EmitterTime, int ParticleCount);
	void ExecuteUbergraph_B_Constructor_BASE(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
