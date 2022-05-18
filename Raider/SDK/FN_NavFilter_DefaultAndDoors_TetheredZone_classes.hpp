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

// BlueprintGeneratedClass NavFilter_DefaultAndDoors_TetheredZone.NavFilter_DefaultAndDoors_TetheredZone_C
// 0x0000 (0x0048 - 0x0048)
class UNavFilter_DefaultAndDoors_TetheredZone_C : public UFortNavigationFilter_TetherZone
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NavFilter_DefaultAndDoors_TetheredZone.NavFilter_DefaultAndDoors_TetheredZone_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
