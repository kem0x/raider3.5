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

// Function MulchRefundItemQuantityList.MulchRefundItemQuantityList_C.AddListEntry
struct UMulchRefundItemQuantityList_C_AddListEntry_Params
{
	class UFortItemQuantityListEntryBase**             ListEntry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MulchRefundItemQuantityList.MulchRefundItemQuantityList_C.ExecuteUbergraph_MulchRefundItemQuantityList
struct UMulchRefundItemQuantityList_C_ExecuteUbergraph_MulchRefundItemQuantityList_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
