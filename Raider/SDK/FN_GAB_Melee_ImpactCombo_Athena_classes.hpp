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

// BlueprintGeneratedClass GAB_Melee_ImpactCombo_Athena.GAB_Melee_ImpactCombo_Athena_C
// 0x0000 (0x0B14 - 0x0B14)
class UGAB_Melee_ImpactCombo_Athena_C : public UGAB_Melee_GenericCombo_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_Melee_ImpactCombo_Athena.GAB_Melee_ImpactCombo_Athena_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
