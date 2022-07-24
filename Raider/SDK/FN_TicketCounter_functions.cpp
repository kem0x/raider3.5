// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TicketCounter.TicketCounter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTicketCounter_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TicketCounter.TicketCounter_C.Construct");

	UTicketCounter_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TicketCounter.TicketCounter_C.InitializeTickets
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumTicketsAvailableToUse       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTicketCounter_C::InitializeTickets(int NumTicketsAvailableToUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function TicketCounter.TicketCounter_C.InitializeTickets");

	UTicketCounter_C_InitializeTickets_Params params;
	params.NumTicketsAvailableToUse = NumTicketsAvailableToUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TicketCounter.TicketCounter_C.ConsumeTicket
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TicketIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTicketCounter_C::ConsumeTicket(int TicketIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TicketCounter.TicketCounter_C.ConsumeTicket");

	UTicketCounter_C_ConsumeTicket_Params params;
	params.TicketIndex = TicketIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TicketCounter.TicketCounter_C.ExecuteUbergraph_TicketCounter
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTicketCounter_C::ExecuteUbergraph_TicketCounter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TicketCounter.TicketCounter_C.ExecuteUbergraph_TicketCounter");

	UTicketCounter_C_ExecuteUbergraph_TicketCounter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
