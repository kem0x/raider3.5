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

// BlueprintGeneratedClass GAB_SurvivorApplyKnockback.GAB_SurvivorApplyKnockback_C
// 0x0000 (0x0BD0 - 0x0BD0)
class UGAB_SurvivorApplyKnockback_C : public UGAB_GenericApplyKnockback_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_SurvivorApplyKnockback.GAB_SurvivorApplyKnockback_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
