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

// BlueprintGeneratedClass Smasher_Death.Smasher_Death_C
// 0x0000 (0x0028 - 0x0028)
class USmasher_Death_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Smasher_Death.Smasher_Death_C");
		return ptr;
	}


	void Trigger_Death_Effect();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
