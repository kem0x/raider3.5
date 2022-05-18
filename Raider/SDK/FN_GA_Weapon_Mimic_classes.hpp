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

// BlueprintGeneratedClass GA_Weapon_Mimic.GA_Weapon_Mimic_C
// 0x0218 (0x0D08 - 0x0AF0)
class UGA_Weapon_Mimic_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AF0(0x0008) (Transient, DuplicateTransient)
	float                                              Default_Duration;                                         // 0x0AF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Pulse_Duration;                                           // 0x0AFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayEventData                          EventData;                                                // 0x0B00(0x00A8) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawn*                             FortPlayerPawn;                                           // 0x0BA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_AutomatedDefenses;                                     // 0x0BB0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      B_Prj_Mimic_Chest;                                        // 0x0BD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Prj_BR_HolderSpeed;                                       // 0x0BD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Prj_BR_Holder_Gravity;                                    // 0x0BDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                EventActivation;                                          // 0x0BE0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventComplete;                                            // 0x0BE8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EC_BottleRocket_Explode;                                  // 0x0BF0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                                M_ThrowDown;                                              // 0x0BF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IFFCoding;                                                // 0x0C00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0C01(0x0003) MISSED OFFSET
	float                                              LifeTime;                                                 // 0x0C04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                EC_BottleRocketHolder_Explode;                            // 0x0C08(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayEffectContextHandle                NewVar;                                                   // 0x0C10(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystem*                             P_MuzzleFlash;                                            // 0x0C28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                GC_Muzzle;                                                // 0x0C30(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayEffectContextHandle                NewVar0;                                                  // 0x0C38(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayCueParameters                      NewVar1;                                                  // 0x0C50(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Weapon_Mimic.GA_Weapon_Mimic_C");
		return ptr;
	}


	void SetupBottleRocket(struct FVector* Spawn_Location, struct FRotator* Spawn_Rotation, struct FFortGameplayEffectContainerSpec* Holder_Explosion, struct FFortGameplayEffectContainerSpec* BottleRocket_Explosion);
	void Destroyed_B3D1CBD84767EEBE300B609957138606(const struct FProjectileEventData& ProjectileData);
	void Exploded_B3D1CBD84767EEBE300B609957138606(const struct FProjectileEventData& ProjectileData);
	void Stopped_B3D1CBD84767EEBE300B609957138606(const struct FProjectileEventData& ProjectileData);
	void Bounced_B3D1CBD84767EEBE300B609957138606(const struct FProjectileEventData& ProjectileData);
	void Touched_B3D1CBD84767EEBE300B609957138606(const struct FProjectileEventData& ProjectileData);
	void Created_B3D1CBD84767EEBE300B609957138606(const struct FProjectileEventData& ProjectileData);
	void Completed_43984B0A46B0D598E56025AEA6D640D0(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_43984B0A46B0D598E56025AEA6D640D0(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_43984B0A46B0D598E56025AEA6D640D0(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Weapon_Mimic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
