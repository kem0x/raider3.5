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

// Function AthenaBroadcastScoreboardListView.AthenaBroadcastScoreboardListView_C.ResetFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaBroadcastScoreboardListView_C::ResetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastScoreboardListView.AthenaBroadcastScoreboardListView_C.ResetFocus");

	UAthenaBroadcastScoreboardListView_C_ResetFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
