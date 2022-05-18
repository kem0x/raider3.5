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

// BlueprintGeneratedClass SetBonus_ShieldRegen_Low.SetBonus_ShieldRegen_Low_C
// 0x0000 (0x0670 - 0x0670)
class USetBonus_ShieldRegen_Low_C : public UGameplayEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SetBonus_ShieldRegen_Low.SetBonus_ShieldRegen_Low_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
