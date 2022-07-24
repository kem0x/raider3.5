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

// BlueprintGeneratedClass GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C
// 0x0008 (0x0428 - 0x0420)
class AGC_Abilities_Activation_Ninja_ShadowStance_C : public AFortGameplayCueNotify_Looping
{
public:
	class APlayerPawn_Ninja_C*                         MyTarget;                                                 // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C");
		return ptr;
	}


	void OnWhileActiveParticleSystemDeactivate(class UParticleSystemComponent** WhileActiveParticleSysComponent, struct FGameplayCueParameters* Parameters);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
