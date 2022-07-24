#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DA_EyeOfTheStormTracker.DA_EyeOfTheStormTracker_C.IsOnGround
struct ADA_EyeOfTheStormTracker_C_IsOnGround_Params
{
	bool                                               bOnGround;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DA_EyeOfTheStormTracker.DA_EyeOfTheStormTracker_C.RaiseUsageError
struct ADA_EyeOfTheStormTracker_C_RaiseUsageError_Params
{
	struct FGameplayTagContainer                       FailedReason;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function DA_EyeOfTheStormTracker.DA_EyeOfTheStormTracker_C.UserConstructionScript
struct ADA_EyeOfTheStormTracker_C_UserConstructionScript_Params
{
};

// Function DA_EyeOfTheStormTracker.DA_EyeOfTheStormTracker_C.BPPressTrigger
struct ADA_EyeOfTheStormTracker_C_BPPressTrigger_Params
{
	class AFortDecoHelper**                            FortDecoHelper;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DA_EyeOfTheStormTracker.DA_EyeOfTheStormTracker_C.ExecuteUbergraph_DA_EyeOfTheStormTracker
struct ADA_EyeOfTheStormTracker_C_ExecuteUbergraph_DA_EyeOfTheStormTracker_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
