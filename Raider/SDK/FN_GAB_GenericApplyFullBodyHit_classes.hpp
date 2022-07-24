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

// BlueprintGeneratedClass GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C
// 0x0058 (0x0968 - 0x0910)
class UGAB_GenericApplyFullBodyHit_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0910(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      GE_TransferFullBodyHit;                                   // 0x0918(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_FullBodyHitActiveEffect;                               // 0x0920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                FullBodyHitMontage;                                       // 0x0928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FullBodyHitMontageSection;                                // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HitImpulse;                                               // 0x0938(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0944(0x0004) MISSED OFFSET
	class UClass*                                      GE_RestoreControlResistance;                              // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 ActiveImpactImmunity;                                     // 0x0950(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_ImpactImmunity;                                        // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 ActiveFullBodyHit;                                        // 0x0960(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C");
		return ptr;
	}


	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayTagContainer* RelevantTags);
	void OnCancelled_25E5E66442E815EB40A6DB8205FE0D98();
	void OnInterrupted_25E5E66442E815EB40A6DB8205FE0D98();
	void OnBlendOut_25E5E66442E815EB40A6DB8205FE0D98();
	void OnCompleted_25E5E66442E815EB40A6DB8205FE0D98();
	void K2_OnEndAbility(bool* bWasCancelled);
	void OnHitPawn(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void PickFullBodyHitMontageSection();
	void ExecuteUbergraph_GAB_GenericApplyFullBodyHit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
