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

// Function DA_MedicPack_v2.DA_MedicPack_v2_C.IsOnGround
struct ADA_MedicPack_v2_C_IsOnGround_Params
{
	bool                                               bOnGround;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DA_MedicPack_v2.DA_MedicPack_v2_C.RaiseUsageError
struct ADA_MedicPack_v2_C_RaiseUsageError_Params
{
	struct FGameplayTagContainer                       FailedReason;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function DA_MedicPack_v2.DA_MedicPack_v2_C.UserConstructionScript
struct ADA_MedicPack_v2_C_UserConstructionScript_Params
{
};

// Function DA_MedicPack_v2.DA_MedicPack_v2_C.MinHeldTimeCheck
struct ADA_MedicPack_v2_C_MinHeldTimeCheck_Params
{
};

// Function DA_MedicPack_v2.DA_MedicPack_v2_C.BPPressTrigger
struct ADA_MedicPack_v2_C_BPPressTrigger_Params
{
	class AFortDecoHelper**                            FortDecoHelper;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DA_MedicPack_v2.DA_MedicPack_v2_C.BPReleaseTrigger
struct ADA_MedicPack_v2_C_BPReleaseTrigger_Params
{
	class AFortDecoHelper**                            FortDecoHelper;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DA_MedicPack_v2.DA_MedicPack_v2_C.ExecuteUbergraph_DA_MedicPack_v2
struct ADA_MedicPack_v2_C_ExecuteUbergraph_DA_MedicPack_v2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
