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

// BlueprintGeneratedClass GAB_SurvivorLand.GAB_SurvivorLand_C
// 0x0010 (0x0B00 - 0x0AF0)
class UGAB_SurvivorLand_C : public UFortGameplayAbility_Land
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AF0(0x0008) (Transient, DuplicateTransient)
	struct FName                                       SectionName;                                              // 0x0AF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_SurvivorLand.GAB_SurvivorLand_C");
		return ptr;
	}


	void OnCancelled_7174BD024E3A05F4D5E859B97A1D076C();
	void OnInterrupted_7174BD024E3A05F4D5E859B97A1D076C();
	void OnBlendOut_7174BD024E3A05F4D5E859B97A1D076C();
	void OnCompleted_7174BD024E3A05F4D5E859B97A1D076C();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_SurvivorLand(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
