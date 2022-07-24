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

// BlueprintGeneratedClass GCN_Hoverboard_Strait.GCN_Hoverboard_Strait_C
// 0x0070 (0x0408 - 0x0398)
class AGCN_Hoverboard_Strait_C : public AGameplayCueNotify_Actor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0398(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class APlayerPawn_Generic_C*                       ActivatingPlayer;                                         // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             SND_HoverboardLoop;                                       // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             SND_HoverboardSound_Accelerate;                           // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             SND_HoverboardStart;                                      // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SK_HoverboardComponent;                                   // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    IdleFX;                                                   // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    BoostFX;                                                  // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    LSmokeTrail;                                              // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    RSmokeTrail;                                              // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ATrap_Floor_Hoverboard_Speed_C*              ActivatedTrap;                                            // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Trigger_LensEffectEmitterClass;                           // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  TrapFireSoundAttached;                                    // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Hoverboard_Strait.GCN_Hoverboard_Strait_C");
		return ptr;
	}


	bool OnActive(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
	void UserConstructionScript();
	void OnActivate();
	void ExecuteUbergraph_GCN_Hoverboard_Strait(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
