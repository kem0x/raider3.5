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

// BlueprintGeneratedClass PlayerTrapReloadTimeModCalculation.PlayerTrapReloadTimeModCalculation_C
// 0x0000 (0x0068 - 0x0068)
class UPlayerTrapReloadTimeModCalculation_C : public UPlayerTrapBonusModMagnitudeCalculation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerTrapReloadTimeModCalculation.PlayerTrapReloadTimeModCalculation_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
