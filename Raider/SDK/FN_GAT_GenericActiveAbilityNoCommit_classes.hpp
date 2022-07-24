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

// BlueprintGeneratedClass GAT_GenericActiveAbilityNoCommit.GAT_GenericActiveAbilityNoCommit_C
// 0x00BA (0x09F2 - 0x0938)
class UGAT_GenericActiveAbilityNoCommit_C : public UGAT_ActiveAbility_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0938(0x0008) (Transient, DuplicateTransient)
	struct FGameplayEventData                          EventData;                                                // 0x0940(0x00A8) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawn*                             FortPlayerPawn;                                           // 0x09E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               isAutoCommitted;                                          // 0x09F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isStaminaLockedOut;                                       // 0x09F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAT_GenericActiveAbilityNoCommit.GAT_GenericActiveAbilityNoCommit_C");
		return ptr;
	}


	void K2_ActivateAbility();
	void ExecuteUbergraph_GAT_GenericActiveAbilityNoCommit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
