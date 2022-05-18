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

// BlueprintGeneratedClass GA_Athena_SmokeGrenade_WithTrajectory.GA_Athena_SmokeGrenade_WithTrajectory_C
// 0x0000 (0x0D54 - 0x0D54)
class UGA_Athena_SmokeGrenade_WithTrajectory_C : public UGA_Athena_Grenade_WithTrajectory_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_SmokeGrenade_WithTrajectory.GA_Athena_SmokeGrenade_WithTrajectory_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
