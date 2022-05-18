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

// BlueprintGeneratedClass GC_HitEmWhileTheyReDown_Burst.GC_HitEmWhileTheyReDown_Burst_C
// 0x0000 (0x00B0 - 0x00B0)
class UGC_HitEmWhileTheyReDown_Burst_C : public UFortGameplayCueNotify_Simple
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GC_HitEmWhileTheyReDown_Burst.GC_HitEmWhileTheyReDown_Burst_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
