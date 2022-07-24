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

// BlueprintGeneratedClass B_Prj_Athena_DanceGrenade.B_Prj_Athena_DanceGrenade_C
// 0x002C (0x0780 - 0x0754)
class AB_Prj_Athena_DanceGrenade_C : public AB_Prj_Athena_Grenade_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0754(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0758(0x0008) (Transient, DuplicateTransient)
	struct FGameplayTagContainer                       StunAbility;                                              // 0x0760(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Athena_DanceGrenade.B_Prj_Athena_DanceGrenade_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnExploded(TArray<class AActor*>* HitActors, TArray<struct FHitResult>* HitResults);
	void OnBounce(struct FHitResult* Hit);
	void FuseEnded();
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_B_Prj_Athena_DanceGrenade(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
