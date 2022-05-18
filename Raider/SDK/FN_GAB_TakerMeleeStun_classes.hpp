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

// BlueprintGeneratedClass GAB_TakerMeleeStun.GAB_TakerMeleeStun_C
// 0x0038 (0x0B28 - 0x0AF0)
class UGAB_TakerMeleeStun_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AF0(0x0008) (Transient, DuplicateTransient)
	float                                              MoveStopRadius;                                           // 0x0AF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationRateWhenAttacking;                                // 0x0AFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ATakerPawn_C*                                TakerPawn;                                                // 0x0B00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EFortMovementUrgency>                  DefaultMovementUrgency;                                   // 0x0B08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EFortMovementUrgency>                  MovementUrgencyWhenAttacking;                             // 0x0B09(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               OnlyHitOnce;                                              // 0x0B0A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OnlyHitAbilityTarget;                                     // 0x0B0B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0B0C(0x0004) MISSED OFFSET
	TArray<class AActor*>                              HitActors;                                                // 0x0B10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UFortAbilityTask_MoveAI*                     MoveWhileAttacking;                                       // 0x0B20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_TakerMeleeStun.GAB_TakerMeleeStun_C");
		return ptr;
	}


	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayTagContainer* RelevantTags);
	void OnMoveFinished_513D85AB446CCC17A8F8AAA9835468D1(TEnumAsByte<EPathFollowingResult> Result, class AAIController* AIController);
	void OnRequestFailed_513D85AB446CCC17A8F8AAA9835468D1();
	void OnCancelled_513D85AB446CCC17A8F8AAA9835468D1();
	void OnInterrupted_513D85AB446CCC17A8F8AAA9835468D1();
	void OnComplete_513D85AB446CCC17A8F8AAA9835468D1();
	void Completed_CD3FAA114BAC3C495E2C9A8E0E5E4042(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_CD3FAA114BAC3C495E2C9A8E0E5E4042(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_CD3FAA114BAC3C495E2C9A8E0E5E4042(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void MoveTimerComplete();
	void ResetDoOnce();
	void K2_OnEndAbility(bool* bWasCancelled);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_TakerMeleeStun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
