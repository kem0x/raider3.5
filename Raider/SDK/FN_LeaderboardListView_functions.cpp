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

// Function LeaderboardListView.LeaderboardListView_C.FocusListView
// (Public, BlueprintCallable, BlueprintEvent)

void ULeaderboardListView_C::FocusListView()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderboardListView.LeaderboardListView_C.FocusListView");

	ULeaderboardListView_C_FocusListView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
