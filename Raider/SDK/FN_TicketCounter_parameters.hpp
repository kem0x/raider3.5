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

// Function TicketCounter.TicketCounter_C.Construct
struct UTicketCounter_C_Construct_Params
{
};

// Function TicketCounter.TicketCounter_C.InitializeTickets
struct UTicketCounter_C_InitializeTickets_Params
{
	int                                                NumTicketsAvailableToUse;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TicketCounter.TicketCounter_C.ConsumeTicket
struct UTicketCounter_C_ConsumeTicket_Params
{
	int                                                TicketIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TicketCounter.TicketCounter_C.ExecuteUbergraph_TicketCounter
struct UTicketCounter_C_ExecuteUbergraph_TicketCounter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
