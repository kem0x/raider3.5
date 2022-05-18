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

// BlueprintGeneratedClass B_Prj_Athena_SmokeGrenade.B_Prj_Athena_SmokeGrenade_C
// 0x0014 (0x08C8 - 0x08B4)
class AB_Prj_Athena_SmokeGrenade_C : public AB_Prj_Athena_Grenade_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x08B4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08B8(0x0008) (Transient, DuplicateTransient)
	class UParticleSystem*                             P_SmokeGrenadeExplosion;                                  // 0x08C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Athena_SmokeGrenade.B_Prj_Athena_SmokeGrenade_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnBounce(struct FHitResult* Hit);
	void OnExploded(TArray<class AActor*>* HitActors, TArray<struct FHitResult>* HitResults);
	void BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void FuseEnded();
	void ExecuteUbergraph_B_Prj_Athena_SmokeGrenade(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
