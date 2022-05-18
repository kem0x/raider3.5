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

// BlueprintGeneratedClass GAB_SurvivorDBNO.GAB_SurvivorDBNO_C
// 0x0030 (0x0B20 - 0x0AF0)
class UGAB_SurvivorDBNO_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AF0(0x0008) (Transient, DuplicateTransient)
	float                                              PlaySpeechLoopingTime;                                    // 0x0AF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AFC(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       GameplayStatusAfflicted;                                  // 0x0B00(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_SurvivorDBNO.GAB_SurvivorDBNO_C");
		return ptr;
	}


	void OnCancelled_30185FB0432AA030CE779FBAA5AE1A56();
	void OnInterrupted_30185FB0432AA030CE779FBAA5AE1A56();
	void OnBlendOut_30185FB0432AA030CE779FBAA5AE1A56();
	void OnCompleted_30185FB0432AA030CE779FBAA5AE1A56();
	void K2_OnEndAbility(bool* bWasCancelled);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void PlayDownedSpeech();
	void ExecuteUbergraph_GAB_SurvivorDBNO(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
