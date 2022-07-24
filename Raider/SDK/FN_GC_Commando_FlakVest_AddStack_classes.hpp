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

// BlueprintGeneratedClass GC_Commando_FlakVest_AddStack.GC_Commando_FlakVest_AddStack_C
// 0x0018 (0x0098 - 0x0080)
class UGC_Commando_FlakVest_AddStack_C : public UFortGameplayCueNotify_Simple
{
public:
	float                                              F_MaxStacks;                                              // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	class UParticleSystem*                             PS_Stacks;                                                // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             PS_MaxStacks;                                             // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GC_Commando_FlakVest_AddStack.GC_Commando_FlakVest_AddStack_C");
		return ptr;
	}


	void K2_HandleGameplayCue(class AActor** MyTarget, TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
