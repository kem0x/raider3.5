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

// BlueprintGeneratedClass GCN_BluGloPylon_Shield_Activate.GCN_BluGloPylon_Shield_Activate_C
// 0x0008 (0x0428 - 0x0420)
class AGCN_BluGloPylon_Shield_Activate_C : public AFortGameplayCueNotify_Looping
{
public:
	class UTexture*                                    IconTexture;                                              // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_BluGloPylon_Shield_Activate.GCN_BluGloPylon_Shield_Activate_C");
		return ptr;
	}


	void OnStartParticleSystemSpawned(class UParticleSystemComponent** SpawnedParticleSysComponent, struct FGameplayCueParameters* Parameters);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
