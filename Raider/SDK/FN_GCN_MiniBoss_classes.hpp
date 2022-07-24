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

// BlueprintGeneratedClass GCN_MiniBoss.GCN_MiniBoss_C
// 0x0160 (0x0580 - 0x0420)
class AGCN_MiniBoss_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (Transient, DuplicateTransient)
	class UFortMiniMapComponent*                       MiniMapCrosshair;                                         // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTagContainer                       TC_NPCCharacterTypeMiniBoss1P;                            // 0x0430(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_NPCCharacterTypeMiniBoss4P;                            // 0x0450(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                                _4P_Color;                                                // 0x0470(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                _1P_Color;                                                // 0x0480(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FName, struct FLinearColor>            VectorParameters;                                         // 0x0490(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FName, float>                          ScalarParameters;                                         // 0x04E0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, class UParticleSystem*>       ElementalParticlesMap;                                    // 0x0530(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_MiniBoss.GCN_MiniBoss_C");
		return ptr;
	}


	void OverwriteElementalParticles(class AEnemyPawn_Parent_C* Enemy_Pawn_Parent);
	bool OnActive(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
	bool OnRemove(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
	void HideMiniBossGCN();
	void SetMiniBossGCNColors();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_GCN_MiniBoss(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
