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

// BlueprintGeneratedClass Targeting3PCamera_MidRange.Targeting3PCamera_MidRange_C
// 0x0000 (0x0128 - 0x0128)
class UTargeting3PCamera_MidRange_C : public UFort3PCam_Targeting
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Targeting3PCamera_MidRange.Targeting3PCamera_MidRange_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
