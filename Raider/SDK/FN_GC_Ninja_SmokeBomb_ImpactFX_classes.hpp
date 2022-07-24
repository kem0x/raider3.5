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

// BlueprintGeneratedClass GC_Ninja_SmokeBomb_ImpactFX.GC_Ninja_SmokeBomb_ImpactFX_C
// 0x0010 (0x0090 - 0x0080)
class UGC_Ninja_SmokeBomb_ImpactFX_C : public UFortGameplayCueNotify_Simple
{
public:
	class UForceFeedbackEffect*                        SmokeBombForceFeedbackNear;                               // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        SmokeBombForceFeedbackFar;                                // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GC_Ninja_SmokeBomb_ImpactFX.GC_Ninja_SmokeBomb_ImpactFX_C");
		return ptr;
	}


	bool OnExecute(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
