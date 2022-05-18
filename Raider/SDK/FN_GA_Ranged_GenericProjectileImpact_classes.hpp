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

// BlueprintGeneratedClass GA_Ranged_GenericProjectileImpact.GA_Ranged_GenericProjectileImpact_C
// 0x0000 (0x0B38 - 0x0B38)
class UGA_Ranged_GenericProjectileImpact_C : public UGA_Ranged_GenericDamage_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Ranged_GenericProjectileImpact.GA_Ranged_GenericProjectileImpact_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
