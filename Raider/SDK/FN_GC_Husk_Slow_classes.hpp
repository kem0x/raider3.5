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

// BlueprintGeneratedClass GC_Husk_Slow.GC_Husk_Slow_C
// 0x0078 (0x04B8 - 0x0440)
class AGC_Husk_Slow_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Chains;                                                   // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Cuff_r;                                                   // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Cuff_l;                                                   // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              CuffLock_Lock_Control_756030714F08FF79667CC399F84C6DB9;   // 0x0460(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CuffLock_Rotation_Control_756030714F08FF79667CC399F84C6DB9;// 0x0464(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CuffLock__Direction_756030714F08FF79667CC399F84C6DB9;     // 0x0468(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0469(0x0007) MISSED OFFSET
	class UTimelineComponent*                          CuffLock;                                                 // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      My_Target;                                                // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Cuff_L_MID;                                               // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Cuff_R_MID;                                               // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Activate_Time_Scale;                                      // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0494(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Chains_MID;                                               // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Shackle_Scale;                                            // 0x04A0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04AC(0x0004) MISSED OFFSET
	class USkeletalMeshComponent*                      Mesh_from_Pawn;                                           // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GC_Husk_Slow.GC_Husk_Slow_C");
		return ptr;
	}


	void UserConstructionScript();
	void CuffLock__FinishedFunc();
	void CuffLock__UpdateFunc();
	void CuffLock__Open_Event__EventFunc();
	void CuffLock__Close_Event__EventFunc();
	void K2_HandleGameplayCue(class AActor** MyTarget, TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters);
	void ReceiveTick(float* DeltaSeconds);
	void CuffLinkLock();
	void Cuff_Locked(TEnumAsByte<ETimelineDirection> TimelineDirection);
	void CuffRemoved();
	void Cuff_Unlocked(TEnumAsByte<ETimelineDirection> TimelineDirection);
	void ExecuteUbergraph_GC_Husk_Slow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
