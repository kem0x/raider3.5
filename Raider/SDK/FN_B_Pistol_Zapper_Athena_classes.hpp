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

// BlueprintGeneratedClass B_Pistol_Zapper_Athena.B_Pistol_Zapper_Athena_C
// 0x0078 (0x0EC4 - 0x0E4C)
class AB_Pistol_Zapper_Athena_C : public AB_Pistol_Generic_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0E4C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E50(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_ZapZap_CoreReloadArcs_01;                               // 0x0E58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_ZapZap_CoreReload_01;                                   // 0x0E60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_ZapZap_Core_01;                                         // 0x0E68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Scale_Glow_Up_Size_296E288E48C0EAEDC7AF2EB049AA2ED0;      // 0x0E70(0x000C) (IsPlainOldData)
	float                                              Scale_Glow_Up_LERP_Particle_296E288E48C0EAEDC7AF2EB049AA2ED0;// 0x0E7C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Scale_Glow_Up_LERP_Color_296E288E48C0EAEDC7AF2EB049AA2ED0;// 0x0E80(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Scale_Glow_Up__Direction_296E288E48C0EAEDC7AF2EB049AA2ED0;// 0x0E84(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0E85(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Scale_Glow_Up;                                            // 0x0E88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    WeaponMesh_MID;                                           // 0x0E90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                GlowColor_Charged;                                        // 0x0E98(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               AmmoCountChangedBeUsed_;                                  // 0x0EA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0EA9(0x0003) MISSED OFFSET
	float                                              GetTimeToNextFire;                                        // 0x0EAC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              bAmmoCountDelay;                                          // 0x0EB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Core_Reload_Start_Speed;                                  // 0x0EB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Core_Reload_End_Speed;                                    // 0x0EB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Core_Reload_Start_Spawn_Rate;                             // 0x0EBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Core_Reload_End_Spawn_Rate;                               // 0x0EC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Pistol_Zapper_Athena.B_Pistol_Zapper_Athena_C");
		return ptr;
	}


	void DisableAllVisuals();
	void StopAndResetTimeline();
	void UpdateVisuals(bool Ammo_Check);
	void UserConstructionScript();
	void Scale_Glow_Up__FinishedFunc();
	void Scale_Glow_Up__UpdateFunc();
	void Scale_Glow_Up__Event__EventFunc();
	void OnPlayWeaponFireFX(bool* bPersistentFire, bool* bSecondaryFire);
	void ReceiveBeginPlay();
	void Muzzle_Play_Reload_FX(TEnumAsByte<EFortReloadFXState>* Selection);
	void OnAmmoCountChanged();
	void ExecuteUbergraph_B_Pistol_Zapper_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
