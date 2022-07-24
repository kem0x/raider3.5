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

// BlueprintGeneratedClass GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C
// 0x0010 (0x0920 - 0x0910)
class UGA_BoostJumpPack_Equip_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0910(0x0008) (Transient, DuplicateTransient)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0918(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C");
		return ptr;
	}


	class UFortItem* GetGadgetItem(class AFortPlayerPawn* Pawn);
	void GetPlayerController(class AFortPlayerPawn* Pawn, class AFortPlayerControllerZone** AsFort_Player_Controller_Zone);
	void IsAuthority(bool* bAuthority);
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayTagContainer* RelevantTags);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_BoostJumpPack_Equip(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
