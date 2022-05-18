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

// BlueprintGeneratedClass GA_Weapon_M80.GA_Weapon_M80_C
// 0x02A0 (0x0D90 - 0x0AF0)
class UGA_Weapon_M80_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AF0(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      Prj_M80;                                                  // 0x0AF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPawn*                                   PlayerPawn;                                               // 0x0B00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TransformOffsetA1;                                        // 0x0B08(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TransformOffsetB1;                                        // 0x0B14(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              NegHorizontalSpread1;                                     // 0x0B20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PosHorizontalSpread1;                                     // 0x0B24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StartLocation;                                            // 0x0B28(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              InitialSpeed;                                             // 0x0B34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              M80Gravity;                                               // 0x0B38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    StartRotation;                                            // 0x0B3C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                EventComplete;                                            // 0x0B48(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventActivation;                                          // 0x0B50(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortAbilityTargetSelection                 T_Explosion;                                              // 0x0B58(0x00F8) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                                  ActivationSound;                                          // 0x0C50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayEventData                          EventData;                                                // 0x0C58(0x00A8) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Vertical_Throw;                                           // 0x0D00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Anm_PlayRate;                                             // 0x0D04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFortGameplayEffectContainerSpec            EC_Explode_Return;                                        // 0x0D08(0x0080) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EC_Explode;                                               // 0x0D88(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Weapon_M80.GA_Weapon_M80_C");
		return ptr;
	}


	void ThrowM80(struct FVector* NewParam, struct FRotator* Rotation);
	void Completed_3828B846413BDD657BD4F9BDEC856444(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_3828B846413BDD657BD4F9BDEC856444(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_3828B846413BDD657BD4F9BDEC856444(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Destroyed_4DCEF0C249251A8D551D83AC1D03811D(const struct FProjectileEventData& ProjectileData);
	void Exploded_4DCEF0C249251A8D551D83AC1D03811D(const struct FProjectileEventData& ProjectileData);
	void Stopped_4DCEF0C249251A8D551D83AC1D03811D(const struct FProjectileEventData& ProjectileData);
	void Bounced_4DCEF0C249251A8D551D83AC1D03811D(const struct FProjectileEventData& ProjectileData);
	void Touched_4DCEF0C249251A8D551D83AC1D03811D(const struct FProjectileEventData& ProjectileData);
	void Created_4DCEF0C249251A8D551D83AC1D03811D(const struct FProjectileEventData& ProjectileData);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Weapon_M80(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
