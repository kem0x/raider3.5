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

// BlueprintGeneratedClass GAB_SmasherSpawnRoar.GAB_SmasherSpawnRoar_C
// 0x0000 (0x0AF8 - 0x0AF8)
class UGAB_SmasherSpawnRoar_C : public UGAB_SmasherRoar_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_SmasherSpawnRoar.GAB_SmasherSpawnRoar_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
