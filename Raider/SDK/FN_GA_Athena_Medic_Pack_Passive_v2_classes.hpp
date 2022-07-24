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

// BlueprintGeneratedClass GA_Athena_Medic_Pack_Passive_v2.GA_Athena_Medic_Pack_Passive_v2_C
// 0x002E (0x0A08 - 0x09DA)
class UGA_Athena_Medic_Pack_Passive_v2_C : public UGAT_GenericTriggeredAbility_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x09DA(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09E0(0x0008) (Transient, DuplicateTransient)
	class AFortPlayerPawnAthena*                       PlayerPawn;                                               // 0x09E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                TargetTimer;                                              // 0x09F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_MedicPack_HealTarget_C*                  TargetIndicator;                                          // 0x09F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_MedicPack_HealNozzle_C*                  TargetingNozzle;                                          // 0x0A00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_Medic_Pack_Passive_v2.GA_Athena_Medic_Pack_Passive_v2_C");
		return ptr;
	}


	void Cancelled_3447DE8E44C8D05AAE0A5B9A9A166E72(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_3447DE8E44C8D05AAE0A5B9A9A166E72(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool* bWasCancelled);
	void GetTarget();
	void ClientUpdate(const struct FGameplayAbilityTargetDataHandle& TargetData);
	void UpdateBoth(const struct FGameplayAbilityTargetDataHandle& TargetData);
	void ExecuteUbergraph_GA_Athena_Medic_Pack_Passive_v2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
