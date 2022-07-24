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

// BlueprintGeneratedClass B_Prj_Arrow_Crossbow_Athena.B_Prj_Arrow_Crossbow_Athena_C
// 0x0018 (0x07D0 - 0x07B8)
class AB_Prj_Arrow_Crossbow_Athena_C : public AFortProjectileAthena
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07B8(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_Crossbow_Projectile;                                    // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             HitPlayerEffect;                                          // 0x07C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Arrow_Crossbow_Athena.B_Prj_Arrow_Crossbow_Athena_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnTouched(class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FHitResult* HitResult, bool* bIsOverlap);
	void ExecuteUbergraph_B_Prj_Arrow_Crossbow_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
