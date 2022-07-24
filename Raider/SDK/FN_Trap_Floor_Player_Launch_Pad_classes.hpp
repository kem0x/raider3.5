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

// BlueprintGeneratedClass Trap_Floor_Player_Launch_Pad.Trap_Floor_Player_Launch_Pad_C
// 0x0050 (0x0D60 - 0x0D10)
class ATrap_Floor_Player_Launch_Pad_C : public AFortLauncherAthena
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D10(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_Athena_LaunchPad_temp;                                  // 0x0D18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             PlacementSoundLocation;                                   // 0x0D20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_Athena_Launchpad_Collision;                             // 0x0D28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene1;                                                   // 0x0D30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundCue*                                   Trap_Placed_Sound;                                        // 0x0D38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Active_Sound;                                        // 0x0D40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Fire_Sound;                                          // 0x0D48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Reload_Sound;                                        // 0x0D50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Explode_Sound;                                       // 0x0D58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trap_Floor_Player_Launch_Pad.Trap_Floor_Player_Launch_Pad_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnReloadEnd();
	void OnPlaced();
	void OnFinishedBuilding();
	void GameplayCue_Abilities_Activation_Traps_ReloadBegin(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Traps_ActivateTrap(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void OnOutOfDurability();
	void TriggerLaunchEffects(class AFortPlayerPawnAthena** Pawn);
	void ExecuteUbergraph_Trap_Floor_Player_Launch_Pad(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
