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

// BlueprintGeneratedClass BP_Med_Pack_OverlapVolume.BP_Med_Pack_OverlapVolume_C
// 0x0018 (0x0340 - 0x0328)
class ABP_Med_Pack_OverlapVolume_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                      // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Med_Pack_OverlapVolume.BP_Med_Pack_OverlapVolume_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveActorBeginOverlap(class AActor** OtherActor);
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_Med_Pack_OverlapVolume(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
