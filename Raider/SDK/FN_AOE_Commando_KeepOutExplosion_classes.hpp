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

// BlueprintGeneratedClass AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C
// 0x02E0 (0x0848 - 0x0568)
class AAOE_Commando_KeepOutExplosion_C : public AFortAreaOfEffectCloud
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0568(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             AOE_Audio_Effect;                                         // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Grenade_Linger;                                         // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            DamageArea;                                               // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Radius;                                                   // 0x0590(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0594(0x0004) MISSED OFFSET
	struct FSoundAttenuationSettings                   AOE_Sound_Attenuation_Based_On_Radius;                    // 0x0598(0x02A8) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                                  AOE_Electric_Sound;                                       // 0x0840(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C");
		return ptr;
	}


	void OnRep_Radius();
	void UserConstructionScript();
	void Send_Info(float Radius);
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_AOE_Commando_KeepOutExplosion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
