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

// BlueprintGeneratedClass GCL_Carmine_Jump_Charge.GCL_Carmine_Jump_Charge_C
// 0x0010 (0x0430 - 0x0420)
class AGCL_Carmine_Jump_Charge_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (Transient, DuplicateTransient)
	class AFortPlayerPawnAthena*                       TargetPlayer;                                             // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCL_Carmine_Jump_Charge.GCL_Carmine_Jump_Charge_C");
		return ptr;
	}


	bool WhileActive(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
	bool OnRemove(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
	void OnWhileActiveParticleSystemDeactivate(class UParticleSystemComponent** WhileActiveParticleSysComponent, struct FGameplayCueParameters* Parameters);
	void OnStartParticleSystemSpawned(class UParticleSystemComponent** SpawnedParticleSysComponent, struct FGameplayCueParameters* Parameters);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ChargeDelay(bool Stop);
	void ExecuteUbergraph_GCL_Carmine_Jump_Charge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
