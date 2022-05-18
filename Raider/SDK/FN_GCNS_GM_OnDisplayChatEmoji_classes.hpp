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

// BlueprintGeneratedClass GCNS_GM_OnDisplayChatEmoji.GCNS_GM_OnDisplayChatEmoji_C
// 0x000C (0x00BC - 0x00B0)
class UGCNS_GM_OnDisplayChatEmoji_C : public UFortGameplayCueNotify_Simple
{
public:
	struct FVector                                     ParticleRelativeOffset;                                   // 0x00B0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCNS_GM_OnDisplayChatEmoji.GCNS_GM_OnDisplayChatEmoji_C");
		return ptr;
	}


	void OnStartParticleSystemSpawned(class UParticleSystemComponent** SpawnedParticleSysComponent, struct FGameplayCueParameters* Parameters);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
