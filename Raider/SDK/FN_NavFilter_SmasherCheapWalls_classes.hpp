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

// BlueprintGeneratedClass NavFilter_SmasherCheapWalls.NavFilter_SmasherCheapWalls_C
// 0x0000 (0x0048 - 0x0048)
class UNavFilter_SmasherCheapWalls_C : public UNavigationQueryFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NavFilter_SmasherCheapWalls.NavFilter_SmasherCheapWalls_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
