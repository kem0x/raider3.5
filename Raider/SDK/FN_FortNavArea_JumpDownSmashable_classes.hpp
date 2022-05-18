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

// BlueprintGeneratedClass FortNavArea_JumpDownSmashable.FortNavArea_JumpDownSmashable_C
// 0x0000 (0x0050 - 0x0050)
class UFortNavArea_JumpDownSmashable_C : public UFortNavArea_SmashableJump
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FortNavArea_JumpDownSmashable.FortNavArea_JumpDownSmashable_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
