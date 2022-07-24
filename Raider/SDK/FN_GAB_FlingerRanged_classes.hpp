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

// BlueprintGeneratedClass GAB_FlingerRanged.GAB_FlingerRanged_C
// 0x0030 (0x0968 - 0x0938)
class UGAB_FlingerRanged_C : public UGAB_AIBaseRanged_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0938(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ThrowFX;                                                  // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             ThrowFXTemplate;                                          // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      FlingerMesh;                                              // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FGameplayTag                                GC_NPCRangedGrab;                                         // 0x0958(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                GC_NPCRangedThrow;                                        // 0x0960(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_FlingerRanged.GAB_FlingerRanged_C");
		return ptr;
	}


	void K2_ActivateAbility();
	void SpawnFX();
	void StopFX();
	void K2_OnEndAbility(bool* bWasCancelled);
	void ExecuteUbergraph_GAB_FlingerRanged(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
