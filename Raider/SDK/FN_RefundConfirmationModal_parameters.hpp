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

// Function RefundConfirmationModal.RefundConfirmationModal_C.SetRefundsRemainingText
struct URefundConfirmationModal_C_SetRefundsRemainingText_Params
{
	int*                                               RefundsRemaining;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TotalRefunds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RefundConfirmationModal.RefundConfirmationModal_C.ExecuteUbergraph_RefundConfirmationModal
struct URefundConfirmationModal_C_ExecuteUbergraph_RefundConfirmationModal_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
