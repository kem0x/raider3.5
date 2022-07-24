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

// BlueprintGeneratedClass GA_Generic_BotTurretShoot.GA_Generic_BotTurretShoot_C
// 0x0018 (0x0928 - 0x0910)
class UGA_Generic_BotTurretShoot_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0910(0x0008) (Transient, DuplicateTransient)
	struct FGameplayTag                                T_None;                                                   // 0x0918(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                T_RangeUpgrade1;                                          // 0x0920(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Generic_BotTurretShoot.GA_Generic_BotTurretShoot_C");
		return ptr;
	}


	void GetRangeTag(struct FGameplayTag* TargetTag);
	struct FTransform GetCustomAbilitySourceTransform();
	void Cancelled_A37C36084B41A1B49DD946A52CACDE45(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_A37C36084B41A1B49DD946A52CACDE45(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Generic_BotTurretShoot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
