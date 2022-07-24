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

// BlueprintGeneratedClass GAB_AIBaseMelee.GAB_AIBaseMelee_C
// 0x0010 (0x0920 - 0x0910)
class UGAB_AIBaseMelee_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0910(0x0008) (Transient, DuplicateTransient)
	bool                                               Debug;                                                    // 0x0918(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseMoveForwardAction;                                     // 0x0919(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MoveGate;                                                 // 0x091A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseRotationRateModification;                              // 0x091B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MeleeRotationRate;                                        // 0x091C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_AIBaseMelee.GAB_AIBaseMelee_C");
		return ptr;
	}


	void Completed_8CCC8A6B41B7B728038BDE887BD23BCC(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_8CCC8A6B41B7B728038BDE887BD23BCC(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_8CCC8A6B41B7B728038BDE887BD23BCC(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_AIBaseMelee(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
