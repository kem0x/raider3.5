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

// BlueprintGeneratedClass B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C
// 0x0020 (0x07D8 - 0x07B8)
class AB_Prj_Bullet_Sniper_C : public AFortProjectileAthena
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07B8(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_Sniper_Bullet_Trail;                                    // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundBase*                                  Sniper_Rifle_SurfaceImpactSound;                          // 0x07C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sniper_Rifle_PlayerImpactSound;                           // 0x07D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnTouched(class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FHitResult* HitResult, bool* bIsOverlap);
	void ExecuteUbergraph_B_Prj_Bullet_Sniper(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
