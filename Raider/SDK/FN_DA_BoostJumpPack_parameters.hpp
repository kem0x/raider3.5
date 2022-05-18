#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DA_BoostJumpPack.DA_BoostJumpPack_C.IsOnGround
struct ADA_BoostJumpPack_C_IsOnGround_Params
{
	bool                                               bOnGround;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DA_BoostJumpPack.DA_BoostJumpPack_C.RaiseUsageError
struct ADA_BoostJumpPack_C_RaiseUsageError_Params
{
	struct FGameplayTagContainer                       FailedReason;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function DA_BoostJumpPack.DA_BoostJumpPack_C.UserConstructionScript
struct ADA_BoostJumpPack_C_UserConstructionScript_Params
{
};

// Function DA_BoostJumpPack.DA_BoostJumpPack_C.BPPressTrigger
struct ADA_BoostJumpPack_C_BPPressTrigger_Params
{
	class AFortDecoHelper**                            FortDecoHelper;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DA_BoostJumpPack.DA_BoostJumpPack_C.ExecuteUbergraph_DA_BoostJumpPack
struct ADA_BoostJumpPack_C_ExecuteUbergraph_DA_BoostJumpPack_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
