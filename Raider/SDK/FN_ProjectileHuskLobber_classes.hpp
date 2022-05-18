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

// BlueprintGeneratedClass ProjectileHuskLobber.ProjectileHuskLobber_C
// 0x00C9 (0x08E9 - 0x0820)
class AProjectileHuskLobber_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0820(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             LobberProjLoopingSound;                                   // 0x0828(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ProjectileParticleSystem;                                 // 0x0830(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             Effect_Explosion;                                         // 0x0838(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Pushed_Off_Location;                                      // 0x0840(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x084C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    ProjectileShot;                                           // 0x0850(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FHitResult                                  HitResult;                                                // 0x0860(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               Exploded;                                                 // 0x08E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjectileHuskLobber.ProjectileHuskLobber_C");
		return ptr;
	}


	void ImpactOnHit(const struct FVector& HitLocation);
	void UserConstructionScript();
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void ProjectileShot_Event(const struct FVector& Location);
	void OnShot(struct FHitResult* Hit);
	void ExecuteUbergraph_ProjectileHuskLobber(int EntryPoint);
	void ProjectileShot__DelegateSignature(const struct FVector& Location);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
