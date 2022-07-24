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

// BlueprintGeneratedClass BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C
// 0x0030 (0x0B90 - 0x0B60)
class ABP_DamageBalloon_Athena_C : public ABuildingSMActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B60(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ExplosionParticle;                                        // 0x0B68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortHealthBarComponent*                     FortHealthBar;                                            // 0x0B70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               DestroyBalloon;                                           // 0x0B78(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DontPlayDestroyAudio;                                     // 0x0B79(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0B7A(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBalloonDestroyed;                                       // 0x0B80(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C");
		return ptr;
	}


	void OnRep_DestroyBalloon();
	bool ShouldDie(float* Damage, class AController** EventInstigator, class AActor** DamageCauser);
	void UserConstructionScript();
	void OnDamageServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void CrateIsGone();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_DamageBalloon_Athena(int EntryPoint);
	void OnBalloonDestroyed__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
