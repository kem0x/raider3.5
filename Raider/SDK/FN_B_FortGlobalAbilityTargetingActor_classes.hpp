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

// BlueprintGeneratedClass B_FortGlobalAbilityTargetingActor.B_FortGlobalAbilityTargetingActor_C
// 0x0000 (0x0318 - 0x0318)
class AB_FortGlobalAbilityTargetingActor_C : public AFortGlobalAbilityTargetingActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_FortGlobalAbilityTargetingActor.B_FortGlobalAbilityTargetingActor_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
