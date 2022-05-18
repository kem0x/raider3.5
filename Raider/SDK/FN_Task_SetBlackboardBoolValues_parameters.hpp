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

// Function Task_SetBlackboardBoolValues.Task_SetBlackboardBoolValues_C.ReceiveExecute
struct UTask_SetBlackboardBoolValues_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_SetBlackboardBoolValues.Task_SetBlackboardBoolValues_C.ExecuteUbergraph_Task_SetBlackboardBoolValues
struct UTask_SetBlackboardBoolValues_C_ExecuteUbergraph_Task_SetBlackboardBoolValues_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
