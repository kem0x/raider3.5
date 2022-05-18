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

// Function GCNL_Durrrables_MovementSpeed.GCNL_Durrrables_MovementSpeed_C.OnRemove
struct AGCNL_Durrrables_MovementSpeed_C_OnRemove_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCNL_Durrrables_MovementSpeed.GCNL_Durrrables_MovementSpeed_C.WhileActive
struct AGCNL_Durrrables_MovementSpeed_C_WhileActive_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCNL_Durrrables_MovementSpeed.GCNL_Durrrables_MovementSpeed_C.UserConstructionScript
struct AGCNL_Durrrables_MovementSpeed_C_UserConstructionScript_Params
{
};

// Function GCNL_Durrrables_MovementSpeed.GCNL_Durrrables_MovementSpeed_C.ReceiveTick
struct AGCNL_Durrrables_MovementSpeed_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCNL_Durrrables_MovementSpeed.GCNL_Durrrables_MovementSpeed_C.ExecuteUbergraph_GCNL_Durrrables_MovementSpeed
struct AGCNL_Durrrables_MovementSpeed_C_ExecuteUbergraph_GCNL_Durrrables_MovementSpeed_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
