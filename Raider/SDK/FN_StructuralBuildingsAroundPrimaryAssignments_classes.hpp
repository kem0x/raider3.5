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

// BlueprintGeneratedClass StructuralBuildingsAroundPrimaryAssignments.StructuralBuildingsAroundPrimaryAssignments_C
// 0x0000 (0x00D8 - 0x00D8)
class UStructuralBuildingsAroundPrimaryAssignments_C : public UFortAIGoalProvider_EnvQuery
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructuralBuildingsAroundPrimaryAssignments.StructuralBuildingsAroundPrimaryAssignments_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
