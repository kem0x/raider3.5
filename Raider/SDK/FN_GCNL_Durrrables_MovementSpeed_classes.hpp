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

// BlueprintGeneratedClass GCNL_Durrrables_MovementSpeed.GCNL_Durrrables_MovementSpeed_C
// 0x0038 (0x0458 - 0x0420)
class AGCNL_Durrrables_MovementSpeed_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (Transient, DuplicateTransient)
	struct FName                                       LeftFootAttachName;                                       // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RightFootAttachName;                                      // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             MovementSpeedParticleSystem;                              // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    PickupFX;                                                 // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             EarSteamParticleSystem;                                   // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCNL_Durrrables_MovementSpeed.GCNL_Durrrables_MovementSpeed_C");
		return ptr;
	}


	bool OnRemove(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
	bool WhileActive(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_GCNL_Durrrables_MovementSpeed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
