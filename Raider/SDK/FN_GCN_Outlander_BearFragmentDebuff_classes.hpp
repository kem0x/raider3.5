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

// BlueprintGeneratedClass GCN_Outlander_BearFragmentDebuff.GCN_Outlander_BearFragmentDebuff_C
// 0x0000 (0x0440 - 0x0440)
class AGCN_Outlander_BearFragmentDebuff_C : public AFortGameplayCueNotify_Looping
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Outlander_BearFragmentDebuff.GCN_Outlander_BearFragmentDebuff_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
