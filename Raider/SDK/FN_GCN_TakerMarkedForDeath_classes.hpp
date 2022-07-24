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

// BlueprintGeneratedClass GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C
// 0x0049 (0x0469 - 0x0420)
class AGCN_TakerMarkedForDeath_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    OverHeadEffect;                                           // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortMiniMapComponent*                       MiniMapCrosshair;                                         // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortMiniMapComponent*                       MiniMapIconBackground;                                    // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FFortFeedbackHandle                         TakerFeedbackEvent;                                       // 0x0440(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              TakerFeedbackRepeatDelay;                                 // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TakerFeedbackInitialDelay;                                // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                TC_GameplayStatusStun;                                    // 0x0460(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               PlayerIsStunned;                                          // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SoulSuckCheck();
	void ExecuteUbergraph_GCN_TakerMarkedForDeath(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
