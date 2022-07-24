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

// BlueprintGeneratedClass GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C
// 0x0030 (0x0940 - 0x0910)
class UGAB_HuskAttachedToShield_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0910(0x0008) (Transient, DuplicateTransient)
	class UGA_Constructor_BullRush_C*                  BullRush;                                                 // 0x0918(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                HuskShield;                                               // 0x0920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                Timer;                                                    // 0x0928(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Time;                                                     // 0x0930(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumAbilityTime;                                       // 0x0934(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                DefaultShield;                                            // 0x0938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C");
		return ptr;
	}


	void RandomAttachAnimation(struct FName* AnimName);
	void Completed_D35D9F8942008716C246249F1CAEFA6B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_D35D9F8942008716C246249F1CAEFA6B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_D35D9F8942008716C246249F1CAEFA6B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_78AC59B04D2A0FC3F2FAAE96D1D2DB13(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_78AC59B04D2A0FC3F2FAAE96D1D2DB13(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_78AC59B04D2A0FC3F2FAAE96D1D2DB13(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void EndAbilityFromTimer();
	void K2_OnEndAbility(bool* bWasCancelled);
	void ExecuteUbergraph_GAB_HuskAttachedToShield(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
