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

// Function GA_Trap_WallElectric.GA_Trap_WallElectric_C.Cancelled_CEF58A2B40484B3CF27922840D6C4E82
struct UGA_Trap_WallElectric_C_Cancelled_CEF58A2B40484B3CF27922840D6C4E82_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Trap_WallElectric.GA_Trap_WallElectric_C.Targeted_CEF58A2B40484B3CF27922840D6C4E82
struct UGA_Trap_WallElectric_C_Targeted_CEF58A2B40484B3CF27922840D6C4E82_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Trap_WallElectric.GA_Trap_WallElectric_C.K2_ActivateAbility
struct UGA_Trap_WallElectric_C_K2_ActivateAbility_Params
{
};

// Function GA_Trap_WallElectric.GA_Trap_WallElectric_C.ExecuteUbergraph_GA_Trap_WallElectric
struct UGA_Trap_WallElectric_C_ExecuteUbergraph_GA_Trap_WallElectric_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
