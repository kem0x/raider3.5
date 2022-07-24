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

// Function RefundTicket.RefundTicket_C.ConsumeEvent
// (BlueprintCallable, BlueprintEvent)

void URefundTicket_C::ConsumeEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function RefundTicket.RefundTicket_C.ConsumeEvent");

	URefundTicket_C_ConsumeEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RefundTicket.RefundTicket_C.IsConsumed
// (BlueprintCallable, BlueprintEvent)

void URefundTicket_C::IsConsumed()
{
	static auto fn = UObject::FindObject<UFunction>("Function RefundTicket.RefundTicket_C.IsConsumed");

	URefundTicket_C_IsConsumed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RefundTicket.RefundTicket_C.PendingEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isPending                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URefundTicket_C::PendingEvent(bool isPending)
{
	static auto fn = UObject::FindObject<UFunction>("Function RefundTicket.RefundTicket_C.PendingEvent");

	URefundTicket_C_PendingEvent_Params params;
	params.isPending = isPending;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RefundTicket.RefundTicket_C.ExecuteUbergraph_RefundTicket
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URefundTicket_C::ExecuteUbergraph_RefundTicket(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RefundTicket.RefundTicket_C.ExecuteUbergraph_RefundTicket");

	URefundTicket_C_ExecuteUbergraph_RefundTicket_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
