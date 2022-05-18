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

// BlueprintGeneratedClass GAB_MimicCeilingMelee.GAB_MimicCeilingMelee_C
// 0x0000 (0x0B28 - 0x0B28)
class UGAB_MimicCeilingMelee_C : public UGAB_HuskCeilingMelee_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_MimicCeilingMelee.GAB_MimicCeilingMelee_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
