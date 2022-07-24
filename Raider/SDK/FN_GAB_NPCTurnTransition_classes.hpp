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

// BlueprintGeneratedClass GAB_NPCTurnTransition.GAB_NPCTurnTransition_C
// 0x0010 (0x0968 - 0x0958)
class UGAB_NPCTurnTransition_C : public UFortGameplayAbility_AITurnTransition
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0958(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      GE_AIBaseMeleeFrustration_Build;                          // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_NPCTurnTransition.GAB_NPCTurnTransition_C");
		return ptr;
	}


	void OnCancelled_940C59954AFE32346A40E49BFAFD2A0B();
	void OnInterrupted_940C59954AFE32346A40E49BFAFD2A0B();
	void OnBlendOut_940C59954AFE32346A40E49BFAFD2A0B();
	void OnCompleted_940C59954AFE32346A40E49BFAFD2A0B();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_NPCTurnTransition(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
