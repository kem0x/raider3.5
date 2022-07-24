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

// BlueprintGeneratedClass AthenaSupplyDropBalloon.AthenaSupplyDropBalloon_C
// 0x0038 (0x0B98 - 0x0B60)
class AAthenaSupplyDropBalloon_C : public ABuildingSMActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B60(0x0008) (Transient, DuplicateTransient)
	class UFortHealthBarComponent*                     FortHealthBar;                                            // 0x0B68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               CrateDestroyed;                                           // 0x0B70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0B71(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBalloonDestroyed;                                       // 0x0B78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class USoundBase*                                  BalloonPopSound;                                          // 0x0B88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             BalloonPopFX;                                             // 0x0B90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AthenaSupplyDropBalloon.AthenaSupplyDropBalloon_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnDamageServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void ReceiveBeginPlay();
	void OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void ExecuteUbergraph_AthenaSupplyDropBalloon(int EntryPoint);
	void OnBalloonDestroyed__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
