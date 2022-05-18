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

// BlueprintGeneratedClass GAB_SmasherTurnTransition.GAB_SmasherTurnTransition_C
// 0x0010 (0x0B40 - 0x0B30)
class UGAB_SmasherTurnTransition_C : public UFortGameplayAbility_AITurnTransition
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B30(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      GE_SmasherMeleeFailure;                                   // 0x0B38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_SmasherTurnTransition.GAB_SmasherTurnTransition_C");
		return ptr;
	}


	void OnCancelled_74AB7DD04E752966F0F2FB849BD5B81D();
	void OnInterrupted_74AB7DD04E752966F0F2FB849BD5B81D();
	void OnBlendOut_74AB7DD04E752966F0F2FB849BD5B81D();
	void OnCompleted_74AB7DD04E752966F0F2FB849BD5B81D();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_SmasherTurnTransition(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
