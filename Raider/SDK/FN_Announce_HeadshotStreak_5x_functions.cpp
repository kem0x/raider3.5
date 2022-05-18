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

// Function Announce_HeadshotStreak_5x.Announce_HeadshotStreak_5x_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAnnounce_HeadshotStreak_5x_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_HeadshotStreak_5x.Announce_HeadshotStreak_5x_C.UserConstructionScript");

	AAnnounce_HeadshotStreak_5x_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_HeadshotStreak_5x.Announce_HeadshotStreak_5x_C.OnClientAnnouncementStart
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AAnnounce_HeadshotStreak_5x_C::OnClientAnnouncementStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_HeadshotStreak_5x.Announce_HeadshotStreak_5x_C.OnClientAnnouncementStart");

	AAnnounce_HeadshotStreak_5x_C_OnClientAnnouncementStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_HeadshotStreak_5x.Announce_HeadshotStreak_5x_C.ExecuteUbergraph_Announce_HeadshotStreak_5x
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAnnounce_HeadshotStreak_5x_C::ExecuteUbergraph_Announce_HeadshotStreak_5x(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_HeadshotStreak_5x.Announce_HeadshotStreak_5x_C.ExecuteUbergraph_Announce_HeadshotStreak_5x");

	AAnnounce_HeadshotStreak_5x_C_ExecuteUbergraph_Announce_HeadshotStreak_5x_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
