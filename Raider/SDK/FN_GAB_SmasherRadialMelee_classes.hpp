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

// BlueprintGeneratedClass GAB_SmasherRadialMelee.GAB_SmasherRadialMelee_C
// 0x0020 (0x0940 - 0x0920)
class UGAB_SmasherRadialMelee_C : public UGAB_AIBaseMelee_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0920(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      GE_SmasherMeleeSuccess;                                   // 0x0928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SmasherRotationRate;                                      // 0x0930(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0934(0x0004) MISSED OFFSET
	class UFortAbilityTask_MoveAI*                     Move;                                                     // 0x0938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_SmasherRadialMelee.GAB_SmasherRadialMelee_C");
		return ptr;
	}


	void Completed_2EFEB45748E11A8A846C14AD7ADF164D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_2EFEB45748E11A8A846C14AD7ADF164D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_2EFEB45748E11A8A846C14AD7ADF164D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnMoveFinished_1C768C2A4BDB2902BA3FDD92DD5F3C46(TEnumAsByte<EPathFollowingResult> Result, class AAIController* AIController);
	void OnRequestFailed_1C768C2A4BDB2902BA3FDD92DD5F3C46();
	void OnCancelled_1C768C2A4BDB2902BA3FDD92DD5F3C46();
	void OnInterrupted_1C768C2A4BDB2902BA3FDD92DD5F3C46();
	void OnComplete_1C768C2A4BDB2902BA3FDD92DD5F3C46();
	void K2_ActivateAbility();
	void MoveToLoop();
	void K2_OnEndAbility(bool* bWasCancelled);
	void ExecuteUbergraph_GAB_SmasherRadialMelee(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
