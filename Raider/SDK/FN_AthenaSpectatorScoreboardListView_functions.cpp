// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaSpectatorScoreboardListView.AthenaSpectatorScoreboardListView_C.ResetFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorScoreboardListView_C::ResetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorScoreboardListView.AthenaSpectatorScoreboardListView_C.ResetFocus");

	UAthenaSpectatorScoreboardListView_C_ResetFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
