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

// BlueprintGeneratedClass RelevancyZoneIndicator.RelevancyZoneIndicator_C
// 0x0000 (0x0478 - 0x0478)
class ARelevancyZoneIndicator_C : public AFortRelevancyZoneIndicator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RelevancyZoneIndicator.RelevancyZoneIndicator_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
