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

// BlueprintGeneratedClass GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C
// 0x0090 (0x09A0 - 0x0910)
class UGAB_TakerSwoopMelee_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0910(0x0008) (Transient, DuplicateTransient)
	bool                                               Debug;                                                    // 0x0918(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0919(0x0007) MISSED OFFSET
	class ATakerPawn_C*                                Taker;                                                    // 0x0920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              RotationRateWhenSwooping;                                 // 0x0928(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x092C(0x0004) MISSED OFFSET
	struct FGameplayTag                                TC_NPCAbilityAttackMeleeSwoop;                            // 0x0930(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                                SwoopTransitionMontage;                                   // 0x0938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SwoopAttackEndMontage;                                    // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwoopTimeout;                                             // 0x0948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SwoopMoveAcceptRadius;                                    // 0x094C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsHitThisTargetSelection;                             // 0x0950(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               AbilityEnded;                                             // 0x0960(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0961(0x0007) MISSED OFFSET
	TArray<class AActor*>                              ActorsHitThisSwoop;                                       // 0x0968(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                              ActorsHitThisTargetSelectionFiltered;                     // 0x0978(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               MovingSlowly;                                             // 0x0988(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0989(0x0007) MISSED OFFSET
	class UFortAbilityTask_MoveAI*                     SwoopMove;                                                // 0x0990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MeleeInProgress;                                          // 0x0998(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0999(0x0003) MISSED OFFSET
	float                                              DebugSwoopAttackTime;                                     // 0x099C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C");
		return ptr;
	}


	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayTagContainer* RelevantTags);
	void OnMoveFinished_A8D9EDC44514CE30149C4C924AB5FB2A(TEnumAsByte<EPathFollowingResult> Result, class AAIController* AIController);
	void OnRequestFailed_A8D9EDC44514CE30149C4C924AB5FB2A();
	void OnCancelled_A8D9EDC44514CE30149C4C924AB5FB2A();
	void OnInterrupted_A8D9EDC44514CE30149C4C924AB5FB2A();
	void OnComplete_A8D9EDC44514CE30149C4C924AB5FB2A();
	void Completed_90CCC07C4CF88E3BB6C7268A426DBA5F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_90CCC07C4CF88E3BB6C7268A426DBA5F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_90CCC07C4CF88E3BB6C7268A426DBA5F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_DE47BE5C495BECAF17E854B5C7774E8D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_DE47BE5C495BECAF17E854B5C7774E8D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnCancelled_A05A301D40A4F2A62FAD9A94D3EB7A15();
	void OnInterrupted_A05A301D40A4F2A62FAD9A94D3EB7A15();
	void OnBlendOut_A05A301D40A4F2A62FAD9A94D3EB7A15();
	void OnCompleted_A05A301D40A4F2A62FAD9A94D3EB7A15();
	void K2_ActivateAbility();
	void Taker_Overlapped_An_Actor(class AActor* OverlappedActor, class AActor* OtherActor);
	void BeginOutroDeceleration();
	void SwoopTimeoutComplete();
	void K2_OnEndAbility(bool* bWasCancelled);
	void SlowSpeedCancel();
	void ExecuteUbergraph_GAB_TakerSwoopMelee(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
