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

// Function LeaderboardThrobber.LeaderboardThrobber_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULeaderboardThrobber_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderboardThrobber.LeaderboardThrobber_C.PreConstruct");

	ULeaderboardThrobber_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderboardThrobber.LeaderboardThrobber_C.ExecuteUbergraph_LeaderboardThrobber
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULeaderboardThrobber_C::ExecuteUbergraph_LeaderboardThrobber(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderboardThrobber.LeaderboardThrobber_C.ExecuteUbergraph_LeaderboardThrobber");

	ULeaderboardThrobber_C_ExecuteUbergraph_LeaderboardThrobber_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
