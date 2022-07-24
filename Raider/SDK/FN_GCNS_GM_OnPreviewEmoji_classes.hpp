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

// BlueprintGeneratedClass GCNS_GM_OnPreviewEmoji.GCNS_GM_OnPreviewEmoji_C
// 0x0018 (0x0098 - 0x0080)
class UGCNS_GM_OnPreviewEmoji_C : public UFortGameplayCueNotify_Simple
{
public:
	struct FVector                                     InitialVelocity;                                          // 0x0080(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Offset;                                                   // 0x008C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCNS_GM_OnPreviewEmoji.GCNS_GM_OnPreviewEmoji_C");
		return ptr;
	}


	void OnStartParticleSystemSpawned(class UParticleSystemComponent** SpawnedParticleSysComponent, struct FGameplayCueParameters* Parameters);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
