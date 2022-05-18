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

// Function GC_Husk_Slow.GC_Husk_Slow_C.UserConstructionScript
struct AGC_Husk_Slow_C_UserConstructionScript_Params
{
};

// Function GC_Husk_Slow.GC_Husk_Slow_C.CuffLock__FinishedFunc
struct AGC_Husk_Slow_C_CuffLock__FinishedFunc_Params
{
};

// Function GC_Husk_Slow.GC_Husk_Slow_C.CuffLock__UpdateFunc
struct AGC_Husk_Slow_C_CuffLock__UpdateFunc_Params
{
};

// Function GC_Husk_Slow.GC_Husk_Slow_C.CuffLock__Open_Event__EventFunc
struct AGC_Husk_Slow_C_CuffLock__Open_Event__EventFunc_Params
{
};

// Function GC_Husk_Slow.GC_Husk_Slow_C.CuffLock__Close_Event__EventFunc
struct AGC_Husk_Slow_C_CuffLock__Close_Event__EventFunc_Params
{
};

// Function GC_Husk_Slow.GC_Husk_Slow_C.K2_HandleGameplayCue
struct AGC_Husk_Slow_C_K2_HandleGameplayCue_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayCueEvent>*                    EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GC_Husk_Slow.GC_Husk_Slow_C.ReceiveTick
struct AGC_Husk_Slow_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GC_Husk_Slow.GC_Husk_Slow_C.CuffLinkLock
struct AGC_Husk_Slow_C_CuffLinkLock_Params
{
};

// Function GC_Husk_Slow.GC_Husk_Slow_C.Cuff_Locked
struct AGC_Husk_Slow_C_Cuff_Locked_Params
{
	TEnumAsByte<ETimelineDirection>                    TimelineDirection;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GC_Husk_Slow.GC_Husk_Slow_C.CuffRemoved
struct AGC_Husk_Slow_C_CuffRemoved_Params
{
};

// Function GC_Husk_Slow.GC_Husk_Slow_C.Cuff_Unlocked
struct AGC_Husk_Slow_C_Cuff_Unlocked_Params
{
	TEnumAsByte<ETimelineDirection>                    TimelineDirection;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GC_Husk_Slow.GC_Husk_Slow_C.ExecuteUbergraph_GC_Husk_Slow
struct AGC_Husk_Slow_C_ExecuteUbergraph_GC_Husk_Slow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
