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

// Function RefundTicket.RefundTicket_C.ConsumeEvent
struct URefundTicket_C_ConsumeEvent_Params
{
};

// Function RefundTicket.RefundTicket_C.IsConsumed
struct URefundTicket_C_IsConsumed_Params
{
};

// Function RefundTicket.RefundTicket_C.PendingEvent
struct URefundTicket_C_PendingEvent_Params
{
	bool                                               isPending;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RefundTicket.RefundTicket_C.ExecuteUbergraph_RefundTicket
struct URefundTicket_C_ExecuteUbergraph_RefundTicket_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
