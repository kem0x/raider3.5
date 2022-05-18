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

// BlueprintGeneratedClass GAB_HuskMelee.GAB_HuskMelee_C
// 0x0028 (0x0B28 - 0x0B00)
class UGAB_HuskMelee_C : public UGAB_AIBaseMelee_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B00(0x0008) (Transient, DuplicateTransient)
	class UFortAbilityTask_MoveAI*                     HuskMove;                                                 // 0x0B08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              HitActors;                                                // 0x0B10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UClass*                                      GE_AIBaseMeleeFrustration_Reset;                          // 0x0B20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_HuskMelee.GAB_HuskMelee_C");
		return ptr;
	}


	void Completed_39FC57D848D381E3A3C7E798E995ED9A(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_39FC57D848D381E3A3C7E798E995ED9A(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_39FC57D848D381E3A3C7E798E995ED9A(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnMoveFinished_3012237E40D07AA69417C79DC2677F69(TEnumAsByte<EPathFollowingResult> Result, class AAIController* AIController);
	void OnRequestFailed_3012237E40D07AA69417C79DC2677F69();
	void OnCancelled_3012237E40D07AA69417C79DC2677F69();
	void OnInterrupted_3012237E40D07AA69417C79DC2677F69();
	void OnComplete_3012237E40D07AA69417C79DC2677F69();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool* bWasCancelled);
	void ContinuousMoveTowardsTarget();
	void GameplayEffectContainerApplied(const struct FGameplayAbilityTargetDataHandle& Target_Data);
	void ExecuteUbergraph_GAB_HuskMelee(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
