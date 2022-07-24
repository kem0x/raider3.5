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

// BlueprintGeneratedClass GCN_Tunneler_TeleportNPC_TunnelSegment.GCN_Tunneler_TeleportNPC_TunnelSegment_C
// 0x0010 (0x03A8 - 0x0398)
class AGCN_Tunneler_TeleportNPC_TunnelSegment_C : public AGameplayCueNotify_Actor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0398(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Tunneler_TeleportNPC_TunnelSegment.GCN_Tunneler_TeleportNPC_TunnelSegment_C");
		return ptr;
	}


	void UserConstructionScript();
	void K2_HandleGameplayCue(class AActor** MyTarget, TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters);
	void ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
