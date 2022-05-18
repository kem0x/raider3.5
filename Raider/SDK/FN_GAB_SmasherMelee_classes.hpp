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

// BlueprintGeneratedClass GAB_SmasherMelee.GAB_SmasherMelee_C
// 0x0088 (0x0B88 - 0x0B00)
class UGAB_SmasherMelee_C : public UGAB_AIBaseMelee_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B00(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      GE_SmasherMeleeSuccess;                                   // 0x0B08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      GE_SmasherMeleeFailure;                                   // 0x0B10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              AllHitActors;                                             // 0x0B18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_NPCBehaviorProhibitsAbilityAttackMeleeBump;            // 0x0B28(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_NPCBehaviorProhibitsAbilityAttackAny;                  // 0x0B48(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                              AllHitActorsAfterRemovingInvalidTargets;                  // 0x0B68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UFortAbilityTask_MoveAI*                     SmasherMove;                                              // 0x0B78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                TC_ConstructorBullrushing;                                // 0x0B80(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_SmasherMelee.GAB_SmasherMelee_C");
		return ptr;
	}


	void Completed_D4EB604A4AFDAD65E3461A86287A3EFE(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_D4EB604A4AFDAD65E3461A86287A3EFE(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_D4EB604A4AFDAD65E3461A86287A3EFE(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnMoveFinished_6E0FFA2F4367D5F26D5F5CB20E78DEFC(TEnumAsByte<EPathFollowingResult> Result, class AAIController* AIController);
	void OnRequestFailed_6E0FFA2F4367D5F26D5F5CB20E78DEFC();
	void OnCancelled_6E0FFA2F4367D5F26D5F5CB20E78DEFC();
	void OnInterrupted_6E0FFA2F4367D5F26D5F5CB20E78DEFC();
	void OnComplete_6E0FFA2F4367D5F26D5F5CB20E78DEFC();
	void K2_ActivateAbility();
	void MoveToLoop();
	void K2_OnEndAbility(bool* bWasCancelled);
	void ExecuteUbergraph_GAB_SmasherMelee(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
