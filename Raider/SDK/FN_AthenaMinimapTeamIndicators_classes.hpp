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

// BlueprintGeneratedClass AthenaMinimapTeamIndicators.AthenaMinimapTeamIndicators_C
// 0x0000 (0x0530 - 0x0530)
class UAthenaMinimapTeamIndicators_C : public UFortMiniMapTeamIndicators
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AthenaMinimapTeamIndicators.AthenaMinimapTeamIndicators_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
