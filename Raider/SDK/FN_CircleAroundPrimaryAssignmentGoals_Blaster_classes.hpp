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

// BlueprintGeneratedClass CircleAroundPrimaryAssignmentGoals_Blaster.CircleAroundPrimaryAssignmentGoals_Blaster_C
// 0x0000 (0x00D8 - 0x00D8)
class UCircleAroundPrimaryAssignmentGoals_Blaster_C : public UFortAIGoalProvider_EnvQuery
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CircleAroundPrimaryAssignmentGoals_Blaster.CircleAroundPrimaryAssignmentGoals_Blaster_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
