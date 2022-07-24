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

// BlueprintGeneratedClass HuskPawn_Mimic.HuskPawn_Mimic_C
// 0x0080 (0x20F0 - 0x2070)
class AHuskPawn_Mimic_C : public AHuskPawn_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2070(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SM_Quad;                                                  // 0x2078(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Mimic_Trail_Right;                                      // 0x2080(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Mimic_Trail_Left;                                       // 0x2088(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Troll_Fleeing_Loop;                                       // 0x2090(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortMiniMapComponent*                       FortMiniMap1;                                             // 0x2098(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ChestTop;                                                 // 0x20A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x20A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ChestBottom;                                              // 0x20B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsBecomingChest;                                          // 0x20B8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x20B9(0x0007) MISSED OFFSET
	class AFortPlayerPawn*                             ActivatingPlayerPawn;                                     // 0x20C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeInSecondsBeforeReturningToSpawn;                      // 0x20C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x20CC(0x0004) MISSED OFFSET
	struct FName                                       ShouldBecomeChestBBKey;                                   // 0x20D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SpawnRotationKey;                                         // 0x20D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SpawnLocationKey;                                         // 0x20E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGen_Interact_UnregisterFocus_C*             UnregisterFocusParams_Kill;                               // 0x20E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HuskPawn_Mimic.HuskPawn_Mimic_C");
		return ptr;
	}


	void KillPawnOnceTransformedToChest();
	void BecomeChest();
	void BecomeChestIfConditionsSatisfied();
	void InitMimic();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void TryToBecomeChest();
	void Event_LastTimeDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void ReturnToSpawnAndBecomeChest();
	void ResetTimerForBecomingChest();
	void ReceivePossessed(class AController** NewController);
	void DisableRibbons();
	void EnableRibbons();
	void ExecuteUbergraph_HuskPawn_Mimic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
