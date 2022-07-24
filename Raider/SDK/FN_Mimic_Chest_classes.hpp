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

// BlueprintGeneratedClass Mimic_Chest.Mimic_Chest_C
// 0x0060 (0x0BC0 - 0x0B60)
class AMimic_Chest_C : public ABuildingSMActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B60(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        S_Chest_SmokeSheet;                                       // 0x0B68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           Capsule;                                                  // 0x0B70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0B78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortMiniMapComponent*                       FortMiniMap;                                              // 0x0B80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             ChestAudio;                                               // 0x0B88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Twitch_Scale_CE105FFA4C580F811CE19C91346CC37D;            // 0x0B90(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Twitch__Direction_CE105FFA4C580F811CE19C91346CC37D;       // 0x0B94(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0B95(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TWITCH;                                                   // 0x0B98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AFortPlayerPawn*                             InteractingPawn;                                          // 0x0BA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBlockedByStairs_;                                        // 0x0BA8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0BA9(0x0007) MISSED OFFSET
	class USoundBase*                                  Mimic_Chest_Shake_Sound;                                  // 0x0BB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Mimic_Chest_Break_Sound;                                  // 0x0BB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mimic_Chest.Mimic_Chest_C");
		return ptr;
	}


	struct FText BlueprintGetInteractionString(class AFortPawn** InteractingPawn);
	void OnRep_bBlockedByStairs_();
	bool BlueprintCanInteract(class AFortPawn** InteractingPawn);
	void UserConstructionScript();
	void Twitch__FinishedFunc();
	void Twitch__UpdateFunc();
	void OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void BlueprintOnBeginInteract();
	void ReceiveBeginPlay();
	void BlueprintOnInteract(class AFortPawn** InteractingPawn);
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_18_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_Mimic_Chest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
