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

// BlueprintGeneratedClass GA_Trap_CeilingFalling.GA_Trap_CeilingFalling_C
// 0x0000 (0x0B30 - 0x0B30)
class UGA_Trap_CeilingFalling_C : public UFortGameplayAbility_CeilingFallingTrap
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Trap_CeilingFalling.GA_Trap_CeilingFalling_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
