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

// BlueprintGeneratedClass B_Melee_Edged_Scythe.B_Melee_Edged_Scythe_C
// 0x0000 (0x0B70 - 0x0B70)
class AB_Melee_Edged_Scythe_C : public AB_Melee_Edged_Generic_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Melee_Edged_Scythe.B_Melee_Edged_Scythe_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
