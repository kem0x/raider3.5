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

// BlueprintGeneratedClass AthenaSupplyDrop.AthenaSupplyDrop_C
// 0x0178 (0x08C0 - 0x0748)
class AAthenaSupplyDrop_C : public AFortAthenaSupplyDrop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0748(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             FallingAudio;                                             // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ReticlePSC;                                               // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               CrateCollision;                                           // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        ChildActor;                                               // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             FlareAudio;                                               // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    FlarePSC;                                                 // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             ReticleAudio;                                             // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CrateStaticMesh;                                          // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProjectileMovementComponent*                ProjectileMovement;                                       // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              FallAudioTimeline_FallCrossfadeAudioCurve_1AF179D042BD7BF71F475F84F8AB1369;// 0x0798(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FallAudioTimeline__Direction_1AF179D042BD7BF71F475F84F8AB1369;// 0x079C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x079D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FallAudioTimeline;                                        // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AFortPawn*                                   MyInteractingPawn;                                        // 0x07A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LootTableName;                                            // 0x07B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LootSpawnOffset;                                          // 0x07B8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x07C4(0x0004) MISSED OFFSET
	class USoundBase*                                  Sound_Looted;                                             // 0x07C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Destroyed;                                          // 0x07D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Landing;                                            // 0x07D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Opened;                                                   // 0x07E0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BalloonPopped;                                            // 0x07E1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x07E2(0x0006) MISSED OFFSET
	class UParticleSystem*                             LandingFX;                                                // 0x07E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             DestroyedFX;                                              // 0x07F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             LootedFX;                                                 // 0x07F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallSpeed;                                                // 0x0800(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReticleUpdateInterval;                                    // 0x0804(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InitialFallDelay;                                         // 0x0808(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x080C(0x0004) MISSED OFFSET
	struct FCurveTableRowHandle                        CurveTable_FallTime;                                      // 0x0810(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystem*                             FallTrailFX;                                              // 0x0820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Appear;                                             // 0x0828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_ReticleAppear;                                      // 0x0830(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_AlmostLanded;                                       // 0x0838(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LandingLocation;                                          // 0x0840(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	bool                                               AutoOpen;                                                 // 0x084C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x084D(0x0003) MISSED OFFSET
	struct FCurveTableRowHandle                        MinSpeed;                                                 // 0x0850(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCurveTableRowHandle                        MaxSpeed;                                                 // 0x0860(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              FallHeight;                                               // 0x0870(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DescentOffsetMin;                                         // 0x0874(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DescentOffsetMax;                                         // 0x0878(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FallDirection;                                            // 0x087C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     GroundLocation;                                           // 0x0888(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              DescentYOffsetMin;                                        // 0x0894(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DescentYOffsetMax;                                        // 0x0898(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bGroundLocationInitialized;                               // 0x089C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x089D(0x0003) MISSED OFFSET
	class USoundCue*                                   StartedNewWaveSound;                                      // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOverrideRotation;                                        // 0x08A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x08A9(0x0003) MISSED OFFSET
	struct FRotator                                    OverrideRotation;                                         // 0x08AC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                NewVar_1;                                                 // 0x08B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AthenaSupplyDrop.AthenaSupplyDrop_C");
		return ptr;
	}


	void OnSetCustomDepthStencilValue(TArray<class UPrimitiveComponent*>* PrimComponents, bool* bUseCustomDepth, int* StencilValue, bool* bOutConsume);
	void HandleProjectileMovementStop(const struct FHitResult& ImpactResult);
	void StartNewWaveSound();
	void ForceSetLocationOnLanding();
	void OnRep_LandingLocation();
	void AlmostLanded();
	void DisableFlare();
	void InitFallHeightAndSpeed();
	void PlayLandingFX();
	void InitFall();
	void OnRep_BalloonPopped();
	void BalloonDestroyed();
	void UpdateReticleLocation();
	void OpenSupplyDrop();
	void OnRep_Opened();
	void Setup_Bind_To_Building_Actor(class UObject* Object);
	struct FText BlueprintGetInteractionString(class AFortPawn** InteractingPawn);
	void GetLootSpawnLocation(struct FVector* LootSpawnLocation);
	void SpawnLoot();
	bool BlueprintCanInteract(class AFortPawn** InteractingPawn);
	void UserConstructionScript();
	void FallAudioTimeline__FinishedFunc();
	void FallAudioTimeline__UpdateFunc();
	void ReceiveBeginPlay();
	void OnLandingLocationChanged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void Multicast_ApplyGravityForFall();
	void BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult);
	void OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void BlueprintOnInteract(class AFortPawn** InteractingPawn);
	void OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void BeginFallAudioTimeline();
	void StopFallAudioTimeline();
	void OnFirstSupplyDropOfWaveSpawned();
	void ExecuteUbergraph_AthenaSupplyDrop(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
