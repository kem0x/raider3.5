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

// BlueprintGeneratedClass Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C
// 0x0050 (0x0D18 - 0x0CC8)
class ATrap_Floor_Hoverboard_Speed_C : public ABuildingTrapFloor_Hoverboard
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0CC8(0x0008) (Transient, DuplicateTransient)
	class UDecalComponent*                             Decal;                                                    // 0x0CD0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_SpeedBoost_Idle;                                        // 0x0CD8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Trigger;                                                  // 0x0CE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene1;                                                   // 0x0CE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundCue*                                   Trap_Placed_Sound;                                        // 0x0CF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Ready_Sound;                                         // 0x0CF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Fire_Sound;                                          // 0x0D00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Reload_Sound;                                        // 0x0D08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Explode_Sound;                                       // 0x0D10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C");
		return ptr;
	}


	bool BP_ShouldTrigger(TArray<class AActor*>* TouchingActors);
	void UserConstructionScript();
	void OnPlaced();
	void OnOutOfDurability();
	void OnFinishedBuilding();
	void OnWorldReady();
	void ExecuteUbergraph_Trap_Floor_Hoverboard_Speed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
