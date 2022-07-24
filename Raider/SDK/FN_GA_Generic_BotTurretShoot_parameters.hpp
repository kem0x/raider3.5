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

// Function GA_Generic_BotTurretShoot.GA_Generic_BotTurretShoot_C.GetRangeTag
struct UGA_Generic_BotTurretShoot_C_GetRangeTag_Params
{
	struct FGameplayTag                                TargetTag;                                                // (Parm, OutParm)
};

// Function GA_Generic_BotTurretShoot.GA_Generic_BotTurretShoot_C.GetCustomAbilitySourceTransform
struct UGA_Generic_BotTurretShoot_C_GetCustomAbilitySourceTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GA_Generic_BotTurretShoot.GA_Generic_BotTurretShoot_C.Cancelled_A37C36084B41A1B49DD946A52CACDE45
struct UGA_Generic_BotTurretShoot_C_Cancelled_A37C36084B41A1B49DD946A52CACDE45_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Generic_BotTurretShoot.GA_Generic_BotTurretShoot_C.Targeted_A37C36084B41A1B49DD946A52CACDE45
struct UGA_Generic_BotTurretShoot_C_Targeted_A37C36084B41A1B49DD946A52CACDE45_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Generic_BotTurretShoot.GA_Generic_BotTurretShoot_C.K2_ActivateAbility
struct UGA_Generic_BotTurretShoot_C_K2_ActivateAbility_Params
{
};

// Function GA_Generic_BotTurretShoot.GA_Generic_BotTurretShoot_C.ExecuteUbergraph_GA_Generic_BotTurretShoot
struct UGA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
