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

// BlueprintGeneratedClass GCL_Carmine_Jump_Dive.GCL_Carmine_Jump_Dive_C
// 0x0018 (0x0438 - 0x0420)
class AGCL_Carmine_Jump_Dive_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (Transient, DuplicateTransient)
	TEnumAsByte<ETimelineDirection>                    DiveTrailUpdate__Direction_B66364034F77F774B1B73FA0DCEE7236;// 0x0428(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0429(0x0007) MISSED OFFSET
	class UTimelineComponent*                          DiveTrailUpdate;                                          // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCL_Carmine_Jump_Dive.GCL_Carmine_Jump_Dive_C");
		return ptr;
	}


	bool OnRemove(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
	void OnStopParticleSystemSpawned(class UParticleSystemComponent** SpawnedParticleSysComponent, struct FGameplayCueParameters* Parameters);
	void OnWhileActiveParticleSystemActivate(class UParticleSystemComponent** WhileActiveParticleSysComponent, struct FGameplayCueParameters* Parameters);
	void UserConstructionScript();
	void DiveTrailUpdate__FinishedFunc();
	void DiveTrailUpdate__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void K2_HandleGameplayCue(class AActor** MyTarget, TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters);
	void ExecuteUbergraph_GCL_Carmine_Jump_Dive(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
