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

// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.OnActive
struct AGCNL_Generic_BotTurret_C_OnActive_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.OnRemove
struct AGCNL_Generic_BotTurret_C_OnRemove_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.UserConstructionScript
struct AGCNL_Generic_BotTurret_C_UserConstructionScript_Params
{
};

// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.BotFired
struct AGCNL_Generic_BotTurret_C_BotFired_Params
{
	int                                                Left;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.Activated
struct AGCNL_Generic_BotTurret_C_Activated_Params
{
};

// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.BindBotFired
struct AGCNL_Generic_BotTurret_C_BindBotFired_Params
{
};

// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.BindBotExplosionWarning
struct AGCNL_Generic_BotTurret_C_BindBotExplosionWarning_Params
{
};

// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.BotExplosionWarning
struct AGCNL_Generic_BotTurret_C_BotExplosionWarning_Params
{
};

// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.ExecuteUbergraph_GCNL_Generic_BotTurret
struct AGCNL_Generic_BotTurret_C_ExecuteUbergraph_GCNL_Generic_BotTurret_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
