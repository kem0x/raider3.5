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

// BlueprintGeneratedClass CinematicCamera_MatineeTransition.CinematicCamera_MatineeTransition_C
// 0x0000 (0x0050 - 0x0050)
class UCinematicCamera_MatineeTransition_C : public UFortCinematicCamera
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CinematicCamera_MatineeTransition.CinematicCamera_MatineeTransition_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
