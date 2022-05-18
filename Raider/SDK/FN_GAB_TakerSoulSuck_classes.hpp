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

// BlueprintGeneratedClass GAB_TakerSoulSuck.GAB_TakerSoulSuck_C
// 0x00C8 (0x0BB8 - 0x0AF0)
class UGAB_TakerSoulSuck_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AF0(0x0008) (Transient, DuplicateTransient)
	bool                                               Debug;                                                    // 0x0AF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0AF9(0x0007) MISSED OFFSET
	class AFortPawn*                                   GoalPawn;                                                 // 0x0B00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ATakerPawn_C*                                TakerPawn;                                                // 0x0B08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AController*                                 TakerController;                                          // 0x0B10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              SoulSuckTickTime;                                         // 0x0B18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SoulSuckLowDamagePeriod;                                  // 0x0B1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SoulSuckDamageBeganAtThisTime;                            // 0x0B20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SoulSuckLastDamageTime;                                   // 0x0B24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SoulSuckMontageSection;                                   // 0x0B28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SoulSuckCurrentMontageSection;                            // 0x0B30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SoulSuckGoalActorNormalizedHealth;                        // 0x0B38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SoulSuckHitNothingTimeoutDuration;                        // 0x0B3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  KnockTakerAwaySound;                                      // 0x0B40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KnockTakerAwayMomentum;                                   // 0x0B48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0B4C(0x0004) MISSED OFFSET
	class UClass*                                      GE_TakerSoulSuckAttack;                                   // 0x0B50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_TakerDirectDamageSoulSuckHeavy;                        // 0x0B58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_TakerSoulSuckHeal;                                     // 0x0B60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       TC_NPCAbilityAttackMeleeSoulSuck;                         // 0x0B68(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_TakerSoulSuckRelease;                                  // 0x0B88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_TakerMeleeStunCooldown;                                // 0x0B90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_TakerSwoopCooldown;                                    // 0x0B98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              HitActors;                                                // 0x0BA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FGameplayTag                                TC_NPCEnemyTypeBASE;                                      // 0x0BB0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_TakerSoulSuck.GAB_TakerSoulSuck_C");
		return ptr;
	}


	void OnInterrupted_7817BC4E41E9CF270861B28630504E0D();
	void OnComplete_7817BC4E41E9CF270861B28630504E0D();
	void OnInterrupted_7817BC4E41E9CF270861B2865D46D1D6();
	void OnComplete_7817BC4E41E9CF270861B2865D46D1D6();
	void OnInterrupted_7817BC4E41E9CF270861B286146C2D8C();
	void OnComplete_7817BC4E41E9CF270861B286146C2D8C();
	void OnInterrupted_7817BC4E41E9CF270861B28685B20041();
	void OnComplete_7817BC4E41E9CF270861B28685B20041();
	void Completed_A9A1CE59416C7C1D5AF25DADAE0C61C2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_A9A1CE59416C7C1D5AF25DADAE0C61C2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_A9A1CE59416C7C1D5AF25DADAE0C61C2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnInterrupted_7817BC4E41E9CF270861B28664B32580();
	void OnComplete_7817BC4E41E9CF270861B28664B32580();
	void Cancelled_4C2B63DE432CB715866443AE4D6362FD(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_4C2B63DE432CB715866443AE4D6362FD(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void Goal_Pawn_Died(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void HitNothingTimeout();
	void Taker_Damaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void SoulSuck();
	void Taker_Destroyed(class AActor* DestroyedActor);
	void Taker_Died(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void UnbindAllEvents();
	void K2_OnEndAbility(bool* bWasCancelled);
	void Goal_Pawn_Damaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void ExecuteUbergraph_GAB_TakerSoulSuck(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
