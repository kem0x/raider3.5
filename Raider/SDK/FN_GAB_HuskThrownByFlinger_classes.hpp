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

// BlueprintGeneratedClass GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C
// 0x0060 (0x0970 - 0x0910)
class UGAB_HuskThrownByFlinger_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0910(0x0008) (Transient, DuplicateTransient)
	class AHuskPawn_C*                                 HuskPawn;                                                 // 0x0918(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortPawn*                                   FlingerPawn;                                              // 0x0920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              ZVelocityWhenShot;                                        // 0x0928(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              XYVelocityMaintainedWhenShot;                             // 0x092C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       HuskPawnCapsuleDefaultCollisionProfileName;               // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HuskPawnCapsuleCollisionProfileNameWhenHeldByFlinger;     // 0x0938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FireLocation;                                             // 0x0940(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x094C(0x0004) MISSED OFFSET
	struct FName                                       MontageSectionFlyingLoop;                                 // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HuskPawnOriginalGravityScale;                             // 0x0958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x095C(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<ECollisionResponse>>            StoredCollisionResponses;                                 // 0x0960(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C");
		return ptr;
	}


	void RestoreCollisionSettings(class AHuskPawn_C* Pawn);
	void SaveCollisionSettings(class AHuskPawn_C* Pawn);
	void Completed_405AED2944EC7B63E07F8CBC114C4467(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_405AED2944EC7B63E07F8CBC114C4467(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_405AED2944EC7B63E07F8CBC114C4467(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_E287620540AA42D086331C807CAC562F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_E287620540AA42D086331C807CAC562F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_E287620540AA42D086331C807CAC562F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void HuskDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void K2_OnEndAbility(bool* bWasCancelled);
	void BindHuskDamaged();
	void HuskLanded(const struct FHitResult& Hit);
	void HuskHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void UnBindHuskDamaged();
	void BindHuskLanded();
	void UnBindHuskLanded();
	void RotationCheck();
	void HuskFaceForwardON();
	void HuskFaceForwardOFF();
	void ResetGravityScale();
	void ExecuteUbergraph_GAB_HuskThrownByFlinger(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
