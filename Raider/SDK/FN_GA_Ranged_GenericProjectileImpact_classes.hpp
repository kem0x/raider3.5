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

// BlueprintGeneratedClass GA_Ranged_GenericProjectileImpact.GA_Ranged_GenericProjectileImpact_C
// 0x0000 (0x0950 - 0x0950)
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
