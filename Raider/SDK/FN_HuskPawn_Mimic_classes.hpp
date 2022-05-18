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

// BlueprintGeneratedClass HuskPawn_Mimic.HuskPawn_Mimic_C
// 0x0080 (0x2200 - 0x2180)
class AHuskPawn_Mimic_C : public AHuskPawn_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2180(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SM_Quad;                                                  // 0x2188(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Mimic_Trail_Right;                                      // 0x2190(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Mimic_Trail_Left;                                       // 0x2198(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Troll_Fleeing_Loop;                                       // 0x21A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortMiniMapComponent*                       FortMiniMap1;                                             // 0x21A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ChestTop;                                                 // 0x21B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x21B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ChestBottom;                                              // 0x21C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsBecomingChest;                                          // 0x21C8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x21C9(0x0007) MISSED OFFSET
	class AFortPlayerPawn*                             ActivatingPlayerPawn;                                     // 0x21D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeInSecondsBeforeReturningToSpawn;                      // 0x21D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x21DC(0x0004) MISSED OFFSET
	struct FName                                       ShouldBecomeChestBBKey;                                   // 0x21E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SpawnRotationKey;                                         // 0x21E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SpawnLocationKey;                                         // 0x21F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGen_Interact_UnregisterFocus_C*             UnregisterFocusParams_Kill;                               // 0x21F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

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
