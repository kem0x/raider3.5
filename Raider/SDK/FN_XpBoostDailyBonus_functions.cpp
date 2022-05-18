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

// Function XpBoostDailyBonus.XpBoostDailyBonus_C.Update Daily Bonus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UXpBoostDailyBonus_C::Update_Daily_Bonus()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostDailyBonus.XpBoostDailyBonus_C.Update Daily Bonus");

	UXpBoostDailyBonus_C_Update_Daily_Bonus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoostDailyBonus.XpBoostDailyBonus_C.OnPlayerInfoChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo*    NewInfo                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UXpBoostDailyBonus_C::OnPlayerInfoChanged(struct FFortTeamMemberInfo* NewInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostDailyBonus.XpBoostDailyBonus_C.OnPlayerInfoChanged");

	UXpBoostDailyBonus_C_OnPlayerInfoChanged_Params params;
	params.NewInfo = NewInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoostDailyBonus.XpBoostDailyBonus_C.ExecuteUbergraph_XpBoostDailyBonus
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UXpBoostDailyBonus_C::ExecuteUbergraph_XpBoostDailyBonus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostDailyBonus.XpBoostDailyBonus_C.ExecuteUbergraph_XpBoostDailyBonus");

	UXpBoostDailyBonus_C_ExecuteUbergraph_XpBoostDailyBonus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoostDailyBonus.XpBoostDailyBonus_C.Boost Amount Changed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UXpBoostDailyBonus_C::Boost_Amount_Changed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostDailyBonus.XpBoostDailyBonus_C.Boost Amount Changed__DelegateSignature");

	UXpBoostDailyBonus_C_Boost_Amount_Changed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
