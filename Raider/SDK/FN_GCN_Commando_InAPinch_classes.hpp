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

// BlueprintGeneratedClass GCN_Commando_InAPinch.GCN_Commando_InAPinch_C
// 0x0010 (0x0430 - 0x0420)
class AGCN_Commando_InAPinch_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Bullet_Ambient;                                           // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Commando_InAPinch.GCN_Commando_InAPinch_C");
		return ptr;
	}


	void UserConstructionScript();
	void K2_HandleGameplayCue(class AActor** MyTarget, TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters);
	void ExecuteUbergraph_GCN_Commando_InAPinch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
