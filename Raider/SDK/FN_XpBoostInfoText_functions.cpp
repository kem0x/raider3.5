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

// Function XpBoostInfoText.XpBoostInfoText_C.Update Available Boosts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UXpBoostInfoText_C::Update_Available_Boosts()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostInfoText.XpBoostInfoText_C.Update Available Boosts");

	UXpBoostInfoText_C_Update_Available_Boosts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoostInfoText.XpBoostInfoText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UXpBoostInfoText_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostInfoText.XpBoostInfoText_C.Construct");

	UXpBoostInfoText_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoostInfoText.XpBoostInfoText_C.HandleAccountUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo  NewInfo                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UXpBoostInfoText_C::HandleAccountUpdate(const struct FFortPublicAccountInfo& NewInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostInfoText.XpBoostInfoText_C.HandleAccountUpdate");

	UXpBoostInfoText_C_HandleAccountUpdate_Params params;
	params.NewInfo = NewInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoostInfoText.XpBoostInfoText_C.Xp Boost Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BoostAmount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UXpBoostInfoText_C::Xp_Boost_Changed(int BoostAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostInfoText.XpBoostInfoText_C.Xp Boost Changed");

	UXpBoostInfoText_C_Xp_Boost_Changed_Params params;
	params.BoostAmount = BoostAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoostInfoText.XpBoostInfoText_C.ExecuteUbergraph_XpBoostInfoText
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UXpBoostInfoText_C::ExecuteUbergraph_XpBoostInfoText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostInfoText.XpBoostInfoText_C.ExecuteUbergraph_XpBoostInfoText");

	UXpBoostInfoText_C_ExecuteUbergraph_XpBoostInfoText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
