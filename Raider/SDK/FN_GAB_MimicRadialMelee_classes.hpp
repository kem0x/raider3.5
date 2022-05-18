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

// BlueprintGeneratedClass GAB_MimicRadialMelee.GAB_MimicRadialMelee_C
// 0x0000 (0x0B20 - 0x0B20)
class UGAB_MimicRadialMelee_C : public UGAB_HuskBaseRadialMelee_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_MimicRadialMelee.GAB_MimicRadialMelee_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
