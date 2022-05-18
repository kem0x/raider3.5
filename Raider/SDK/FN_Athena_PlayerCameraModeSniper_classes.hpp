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

// BlueprintGeneratedClass Athena_PlayerCameraModeSniper.Athena_PlayerCameraModeSniper_C
// 0x0000 (0x0118 - 0x0118)
class UAthena_PlayerCameraModeSniper_C : public UAthena_PlayerCameraModeRanged_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Athena_PlayerCameraModeSniper.Athena_PlayerCameraModeSniper_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
