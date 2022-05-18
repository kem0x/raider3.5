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

// BlueprintGeneratedClass GE_Constructor_BullRushDamage.GE_Constructor_BullRushDamage_C
// 0x0000 (0x0670 - 0x0670)
class UGE_Constructor_BullRushDamage_C : public UGET_DirectBluntDamage_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GE_Constructor_BullRushDamage.GE_Constructor_BullRushDamage_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
