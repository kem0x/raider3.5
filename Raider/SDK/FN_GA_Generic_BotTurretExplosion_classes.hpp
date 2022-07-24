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

// BlueprintGeneratedClass GA_Generic_BotTurretExplosion.GA_Generic_BotTurretExplosion_C
// 0x0010 (0x0920 - 0x0910)
class UGA_Generic_BotTurretExplosion_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0910(0x0008) (Transient, DuplicateTransient)
	struct FGameplayTag                                EC_Explosion;                                             // 0x0918(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Generic_BotTurretExplosion.GA_Generic_BotTurretExplosion_C");
		return ptr;
	}


	void Cancelled_0AE6B0594940799A0AB506A647527DAE(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_0AE6B0594940799A0AB506A647527DAE(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void ExecuteUbergraph_GA_Generic_BotTurretExplosion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
