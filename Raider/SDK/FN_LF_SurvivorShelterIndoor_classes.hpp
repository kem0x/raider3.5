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

// BlueprintGeneratedClass LF_SurvivorShelterIndoor.LF_SurvivorShelterIndoor_C
// 0x0000 (0x0F00 - 0x0F00)
class ALF_SurvivorShelterIndoor_C : public ABuildingFoundation5x5
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LF_SurvivorShelterIndoor.LF_SurvivorShelterIndoor_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
