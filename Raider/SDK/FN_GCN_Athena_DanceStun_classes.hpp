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

// BlueprintGeneratedClass GCN_Athena_DanceStun.GCN_Athena_DanceStun_C
// 0x004C (0x046C - 0x0420)
class AGCN_Athena_DanceStun_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             AnimPivot;                                                // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              OutroAnim_Scale_1822DA5D44681175D96B369D2350B5A1;         // 0x0438(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    OutroAnim__Direction_1822DA5D44681175D96B369D2350B5A1;    // 0x043C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x043D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          OutroAnim;                                                // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              IntroAnim_BallScale_B22BD0D945C252484DAB94BD6D5DC469;     // 0x0448(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    IntroAnim__Direction_B22BD0D945C252484DAB94BD6D5DC469;    // 0x044C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x044D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          IntroAnim;                                                // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AFortPlayerPawnAthena*                       PlayerPawn;                                               // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BallOffset;                                               // 0x0460(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Athena_DanceStun.GCN_Athena_DanceStun_C");
		return ptr;
	}


	bool OnRemove(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
	bool OnActive(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
	void UserConstructionScript();
	void IntroAnim__FinishedFunc();
	void IntroAnim__UpdateFunc();
	void OutroAnim__FinishedFunc();
	void OutroAnim__UpdateFunc();
	void ReceiveTick(float* DeltaSeconds);
	void AnimateIn();
	void AnimateOut();
	void ExecuteUbergraph_GCN_Athena_DanceStun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
