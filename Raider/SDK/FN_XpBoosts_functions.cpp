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

// Function XpBoosts.XpBoosts_C.Activate
// (Public, BlueprintCallable, BlueprintEvent)

void UXpBoosts_C::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoosts.XpBoosts_C.Activate");

	UXpBoosts_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoosts.XpBoosts_C.Update Total Boosts
// (Public, BlueprintCallable, BlueprintEvent)

void UXpBoosts_C::Update_Total_Boosts()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoosts.XpBoosts_C.Update Total Boosts");

	UXpBoosts_C_Update_Total_Boosts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoosts.XpBoosts_C.Update Total Boost Amounts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UXpBoosts_C::Update_Total_Boost_Amounts()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoosts.XpBoosts_C.Update Total Boost Amounts");

	UXpBoosts_C_Update_Total_Boost_Amounts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoosts.XpBoosts_C.HandleRemotePlayerRemoved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RemovedIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UXpBoosts_C::HandleRemotePlayerRemoved(int RemovedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoosts.XpBoosts_C.HandleRemotePlayerRemoved");

	UXpBoosts_C_HandleRemotePlayerRemoved_Params params;
	params.RemovedIndex = RemovedIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoosts.XpBoosts_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UXpBoosts_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoosts.XpBoosts_C.Construct");

	UXpBoosts_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoosts.XpBoosts_C.Party Member Boost Amount Changed
// (BlueprintCallable, BlueprintEvent)

void UXpBoosts_C::Party_Member_Boost_Amount_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoosts.XpBoosts_C.Party Member Boost Amount Changed");

	UXpBoosts_C_Party_Member_Boost_Amount_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoosts.XpBoosts_C.Rest Xp Changed
// (BlueprintCallable, BlueprintEvent)

void UXpBoosts_C::Rest_Xp_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoosts.XpBoosts_C.Rest Xp Changed");

	UXpBoosts_C_Rest_Xp_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoosts.XpBoosts_C.ExecuteUbergraph_XpBoosts
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UXpBoosts_C::ExecuteUbergraph_XpBoosts(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoosts.XpBoosts_C.ExecuteUbergraph_XpBoosts");

	UXpBoosts_C_ExecuteUbergraph_XpBoosts_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
