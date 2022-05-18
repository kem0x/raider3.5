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

// BlueprintGeneratedClass GAT_Athena_c4_Detonate.GAT_Athena_c4_Detonate_C
// 0x0089 (0x0B89 - 0x0B00)
class UGAT_Athena_c4_Detonate_C : public UGAT_TriggeredAbility_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B00(0x0008) (Transient, DuplicateTransient)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0B08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayForChainExplode;                                     // 0x0B10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayBetweenExplodes;                                     // 0x0B14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                TrackGroupTag;                                            // 0x0B18(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortGameplayAbilityMontageInfo             MontageNoAmmo;                                            // 0x0B20(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UFortWorldItemDefinition*                    C4ItemDef;                                                // 0x0B80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasTargetC4ToExplode;                                     // 0x0B88(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAT_Athena_c4_Detonate.GAT_Athena_c4_Detonate_C");
		return ptr;
	}


	void OnRep_NumberOfBombsOut();
	void Completed_1CF0B54948FD6A9E1DB2B5BC49A0C635(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_1CF0B54948FD6A9E1DB2B5BC49A0C635(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_1CF0B54948FD6A9E1DB2B5BC49A0C635(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAT_Athena_c4_Detonate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
