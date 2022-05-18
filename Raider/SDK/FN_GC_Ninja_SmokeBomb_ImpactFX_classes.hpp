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

// BlueprintGeneratedClass GC_Ninja_SmokeBomb_ImpactFX.GC_Ninja_SmokeBomb_ImpactFX_C
// 0x0010 (0x00C0 - 0x00B0)
class UGC_Ninja_SmokeBomb_ImpactFX_C : public UFortGameplayCueNotify_Simple
{
public:
	class UForceFeedbackEffect*                        SmokeBombForceFeedbackNear;                               // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        SmokeBombForceFeedbackFar;                                // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

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
