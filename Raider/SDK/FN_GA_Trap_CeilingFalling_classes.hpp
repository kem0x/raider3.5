#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GA_Trap_CeilingFalling.GA_Trap_CeilingFalling_C
// 0x0000 (0x0958 - 0x0958)
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
