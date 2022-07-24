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

// Function DA_Resource_Pack_Vacuum.DA_Resource_Pack_Vacuum_C.IsOnGround
struct ADA_Resource_Pack_Vacuum_C_IsOnGround_Params
{
	bool                                               bOnGround;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DA_Resource_Pack_Vacuum.DA_Resource_Pack_Vacuum_C.RaiseUsageError
struct ADA_Resource_Pack_Vacuum_C_RaiseUsageError_Params
{
	struct FGameplayTagContainer                       FailedReason;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function DA_Resource_Pack_Vacuum.DA_Resource_Pack_Vacuum_C.UserConstructionScript
struct ADA_Resource_Pack_Vacuum_C_UserConstructionScript_Params
{
};

// Function DA_Resource_Pack_Vacuum.DA_Resource_Pack_Vacuum_C.BPPressTrigger
struct ADA_Resource_Pack_Vacuum_C_BPPressTrigger_Params
{
	class AFortDecoHelper**                            FortDecoHelper;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DA_Resource_Pack_Vacuum.DA_Resource_Pack_Vacuum_C.BPReleaseTrigger
struct ADA_Resource_Pack_Vacuum_C_BPReleaseTrigger_Params
{
	class AFortDecoHelper**                            FortDecoHelper;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DA_Resource_Pack_Vacuum.DA_Resource_Pack_Vacuum_C.ExecuteUbergraph_DA_Resource_Pack_Vacuum
struct ADA_Resource_Pack_Vacuum_C_ExecuteUbergraph_DA_Resource_Pack_Vacuum_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
