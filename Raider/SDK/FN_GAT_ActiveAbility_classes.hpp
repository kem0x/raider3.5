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

// BlueprintGeneratedClass GAT_ActiveAbility.GAT_ActiveAbility_C
// 0x0028 (0x0938 - 0x0910)
class UGAT_ActiveAbility_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0910(0x0008) (Transient, DuplicateTransient)
	struct FGameplayTag                                TC_AbilitiesGenericActiveAbilityActivate;                 // 0x0918(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       N_SavedCollisionChannel;                                  // 0x0920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_KnockBackImmunity;                                     // 0x0928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 GEH_KnockBackImmunity;                                    // 0x0930(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAT_ActiveAbility.GAT_ActiveAbility_C");
		return ptr;
	}


	void SetKnockbackImmunity(bool ImmunityOn);
	void SetPawnCollision(class AFortPawn* FortPawn, bool CollisionOn);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAT_ActiveAbility(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
