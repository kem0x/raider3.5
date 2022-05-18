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

// BlueprintGeneratedClass B_SpacePistol.B_SpacePistol_C
// 0x00B0 (0x0EFC - 0x0E4C)
class AB_SpacePistol_C : public AB_Ranged_Generic_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0E4C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E50(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleScreenLight;                                      // 0x0E58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ScaleBarReload_LERP_612F07E847F4C3FDBA6909B00CBC221E;     // 0x0E60(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ScaleBarReload__Direction_612F07E847F4C3FDBA6909B00CBC221E;// 0x0E64(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0E65(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ScaleBarReload;                                           // 0x0E68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              EmptyLERPstate_LERP_3582F24D4732165472C05D875D493CB2;     // 0x0E70(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    EmptyLERPstate__Direction_3582F24D4732165472C05D875D493CB2;// 0x0E74(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0E75(0x0003) MISSED OFFSET
	class UTimelineComponent*                          EmptyLERPstate;                                           // 0x0E78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReloadLERPstate_LERP_B77803F349E7B91DBA427FBDF293E307;    // 0x0E80(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ReloadLERPstate__Direction_B77803F349E7B91DBA427FBDF293E307;// 0x0E84(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0E85(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ReloadLERPstate;                                          // 0x0E88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ScaleBarBetweenClipCounts_Bolt_Flash_230D3A92479C25873AABFAA2040107DD;// 0x0E90(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ScaleBarBetweenClipCounts_LERP_Ammo_Count_230D3A92479C25873AABFAA2040107DD;// 0x0E94(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ScaleBarBetweenClipCounts__Direction_230D3A92479C25873AABFAA2040107DD;// 0x0E98(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0E99(0x0007) MISSED OFFSET
	class UTimelineComponent*                          ScaleBarBetweenClipCounts;                                // 0x0EA0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ScreenMat;                                                // 0x0EA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Screen_Empty_Color__Light_;                               // 0x0EB0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Screen_Reload_Color__Light_;                              // 0x0EC0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Screen_Full_Color__Light_;                                // 0x0ED0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                CurrentClipCount;                                         // 0x0EE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PreviousClipCount;                                        // 0x0EE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScaleBarStart;                                            // 0x0EE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScaleBarEnd;                                              // 0x0EEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsEmpty_;                                                 // 0x0EF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               JustReloaded_;                                            // 0x0EF1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0EF2(0x0002) MISSED OFFSET
	float                                              Reload_Start;                                             // 0x0EF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Reload_End;                                               // 0x0EF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_SpacePistol.B_SpacePistol_C");
		return ptr;
	}


	void SetReloadVariables();
	void SetAmmoBarVariables();
	void UserConstructionScript();
	void ScaleBarBetweenClipCounts__FinishedFunc();
	void ScaleBarBetweenClipCounts__UpdateFunc();
	void ReloadLERPstate__FinishedFunc();
	void ReloadLERPstate__UpdateFunc();
	void EmptyLERPstate__FinishedFunc();
	void EmptyLERPstate__UpdateFunc();
	void ScaleBarReload__FinishedFunc();
	void ScaleBarReload__UpdateFunc();
	void OnPlayWeaponFireFX(bool* bPersistentFire, bool* bSecondaryFire);
	void ReceiveBeginPlay();
	void OnPlayReloadFX(TEnumAsByte<EFortReloadFXState>* ReloadStage);
	void OnAmmoCountChanged();
	void ClearEmptyLERP();
	void OnPlayImpactFX(struct FHitResult* HitResult, TEnumAsByte<EPhysicalSurface>* ImpactPhysicalSurface, class UParticleSystemComponent** SpawnedPSC);
	void ExecuteUbergraph_B_SpacePistol(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
