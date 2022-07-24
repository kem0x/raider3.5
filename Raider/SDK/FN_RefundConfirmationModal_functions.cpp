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

// Function RefundConfirmationModal.RefundConfirmationModal_C.SetRefundsRemainingText
// (Event, Protected, BlueprintEvent)
// Parameters:
// int*                           RefundsRemaining               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           TotalRefunds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URefundConfirmationModal_C::SetRefundsRemainingText(int* RefundsRemaining, int* TotalRefunds)
{
	static auto fn = UObject::FindObject<UFunction>("Function RefundConfirmationModal.RefundConfirmationModal_C.SetRefundsRemainingText");

	URefundConfirmationModal_C_SetRefundsRemainingText_Params params;
	params.RefundsRemaining = RefundsRemaining;
	params.TotalRefunds = TotalRefunds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RefundConfirmationModal.RefundConfirmationModal_C.ExecuteUbergraph_RefundConfirmationModal
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URefundConfirmationModal_C::ExecuteUbergraph_RefundConfirmationModal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RefundConfirmationModal.RefundConfirmationModal_C.ExecuteUbergraph_RefundConfirmationModal");

	URefundConfirmationModal_C_ExecuteUbergraph_RefundConfirmationModal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
