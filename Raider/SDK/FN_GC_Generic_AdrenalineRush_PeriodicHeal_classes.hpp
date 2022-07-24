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

// BlueprintGeneratedClass GC_Generic_AdrenalineRush_PeriodicHeal.GC_Generic_AdrenalineRush_PeriodicHeal_C
// 0x0038 (0x03D0 - 0x0398)
class AGC_Generic_AdrenalineRush_PeriodicHeal_C : public AGameplayCueNotify_Actor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0398(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    HealVFX;                                                  // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Health_Sweep_SafetyOpacity_3240057E4D088EF0898241BE4DC90C25;// 0x03B0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Health_Sweep_Sweep_3240057E4D088EF0898241BE4DC90C25;      // 0x03B4(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Health_Sweep__Direction_3240057E4D088EF0898241BE4DC90C25; // 0x03B8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03B9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Health_Sweep;                                             // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class APlayerPawn_Generic_C*                       GC_Target_Pawn;                                           // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GC_Generic_AdrenalineRush_PeriodicHeal.GC_Generic_AdrenalineRush_PeriodicHeal_C");
		return ptr;
	}


	void HealthCheck(bool* Check_Return);
	void UserConstructionScript();
	void Health_Sweep__FinishedFunc();
	void Health_Sweep__UpdateFunc();
	void K2_HandleGameplayCue(class AActor** MyTarget, TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters);
	void ExecuteUbergraph_GC_Generic_AdrenalineRush_PeriodicHeal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
