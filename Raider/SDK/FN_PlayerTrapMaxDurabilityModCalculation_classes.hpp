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

// BlueprintGeneratedClass PlayerTrapMaxDurabilityModCalculation.PlayerTrapMaxDurabilityModCalculation_C
// 0x0000 (0x0068 - 0x0068)
class UPlayerTrapMaxDurabilityModCalculation_C : public UPlayerTrapBonusModMagnitudeCalculation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerTrapMaxDurabilityModCalculation.PlayerTrapMaxDurabilityModCalculation_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
