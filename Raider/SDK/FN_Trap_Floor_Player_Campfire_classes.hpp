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

// BlueprintGeneratedClass Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C
// 0x0098 (0x0D38 - 0x0CA0)
class ATrap_Floor_Player_Campfire_C : public ABuildingTrapFloor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0CA0(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_Athena_Campfire_Doused;                                 // 0x0CA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Audio;                                                    // 0x0CB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Athena_Campfire;                                        // 0x0CB8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             PlacementSoundLocation;                                   // 0x0CC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ProximityTraceOrigin;                                     // 0x0CC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundCue*                                   Trap_Placed_Sound;                                        // 0x0CD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Active_Sound;                                        // 0x0CD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Fire_Sound;                                          // 0x0CE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Reload_Sound;                                        // 0x0CE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Explode_Sound;                                       // 0x0CF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsActive;                                                 // 0x0CF8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0CF9(0x0003) MISSED OFFSET
	int                                                NumTicks;                                                 // 0x0CFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxTicks;                                                 // 0x0D00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AOE_Radius;                                               // 0x0D04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              OverlapObjectTypes;                                       // 0x0D08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     AOE_BoxExtents;                                           // 0x0D18(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     AOE_FireDamageBoxExtents;                                 // 0x0D24(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  CampfireDousedSound;                                      // 0x0D30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C");
		return ptr;
	}


	void InitCampfireEffects();
	void HealTicks();
	void OnRep_IsActive();
	void UserConstructionScript();
	void OnReloadEnd();
	void OnPlaced();
	void OnFinishedBuilding();
	void GameplayCue_Abilities_Activation_Traps_ReloadBegin(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Traps_ActivateTrap(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void OnOutOfDurability();
	void TriggerLaunchEffects(class AFortPlayerPawnAthena* Pawn);
	void ExecuteUbergraph_Trap_Floor_Player_Campfire(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
