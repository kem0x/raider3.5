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

// Function BTTask_AlwaysFail.BTTask_AlwaysFail_C.ReceiveExecute
struct UBTTask_AlwaysFail_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_AlwaysFail.BTTask_AlwaysFail_C.ExecuteUbergraph_BTTask_AlwaysFail
struct UBTTask_AlwaysFail_C_ExecuteUbergraph_BTTask_AlwaysFail_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
