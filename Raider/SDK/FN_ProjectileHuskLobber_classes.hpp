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

// BlueprintGeneratedClass ProjectileHuskLobber.ProjectileHuskLobber_C
// 0x00C9 (0x0791 - 0x06C8)
class AProjectileHuskLobber_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06C8(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             LobberProjLoopingSound;                                   // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ProjectileParticleSystem;                                 // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             Effect_Explosion;                                         // 0x06E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Pushed_Off_Location;                                      // 0x06E8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x06F4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    ProjectileShot;                                           // 0x06F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FHitResult                                  HitResult;                                                // 0x0708(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               Exploded;                                                 // 0x0790(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

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
