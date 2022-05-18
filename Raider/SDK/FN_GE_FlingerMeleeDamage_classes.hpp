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

// BlueprintGeneratedClass GE_FlingerMeleeDamage.GE_FlingerMeleeDamage_C
// 0x0000 (0x0670 - 0x0670)
class UGE_FlingerMeleeDamage_C : public UGE_DirectCreatureDamage_DoNotDamageObjectives_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GE_FlingerMeleeDamage.GE_FlingerMeleeDamage_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
