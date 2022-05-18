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

// BlueprintGeneratedClass GCL_Constructor_Firewall_Cooldown.GCL_Constructor_Firewall_Cooldown_C
// 0x0000 (0x0440 - 0x0440)
class AGCL_Constructor_Firewall_Cooldown_C : public AFortGameplayCueNotify_Looping
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCL_Constructor_Firewall_Cooldown.GCL_Constructor_Firewall_Cooldown_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
