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

// Function XpBar.XpBar_C.ScaledCommanderBalance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            LeveXP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InInt2                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UXpBar_C::ScaledCommanderBalance(int LeveXP, int InInt2)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBar.XpBar_C.ScaledCommanderBalance");

	UXpBar_C_ScaledCommanderBalance_Params params;
	params.LeveXP = LeveXP;
	params.InInt2 = InInt2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function XpBar.XpBar_C.ScaledRestBalance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            AmountToLevel                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UXpBar_C::ScaledRestBalance(int AmountToLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBar.XpBar_C.ScaledRestBalance");

	UXpBar_C_ScaledRestBalance_Params params;
	params.AmountToLevel = AmountToLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function XpBar.XpBar_C.ScaledBoostBalance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            AmountToLevel                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UXpBar_C::ScaledBoostBalance(int AmountToLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBar.XpBar_C.ScaledBoostBalance");

	UXpBar_C_ScaledBoostBalance_Params params;
	params.AmountToLevel = AmountToLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function XpBar.XpBar_C.GetExperienceToolTipWidget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UXpBar_C::GetExperienceToolTipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBar.XpBar_C.GetExperienceToolTipWidget");

	UXpBar_C_GetExperienceToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function XpBar.XpBar_C.Update Xp Bar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo  Account_Info                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UXpBar_C::Update_Xp_Bar(const struct FFortPublicAccountInfo& Account_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBar.XpBar_C.Update Xp Bar");

	UXpBar_C_Update_Xp_Bar_Params params;
	params.Account_Info = Account_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBar.XpBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UXpBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBar.XpBar_C.Construct");

	UXpBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBar.XpBar_C.Account Info Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo  NewInfo                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UXpBar_C::Account_Info_Changed(const struct FFortPublicAccountInfo& NewInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBar.XpBar_C.Account Info Changed");

	UXpBar_C_Account_Info_Changed_Params params;
	params.NewInfo = NewInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBar.XpBar_C.Xp Boost Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BoostAmount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UXpBar_C::Xp_Boost_Changed(int BoostAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBar.XpBar_C.Xp Boost Changed");

	UXpBar_C_Xp_Boost_Changed_Params params;
	params.BoostAmount = BoostAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBar.XpBar_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UXpBar_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBar.XpBar_C.Destruct");

	UXpBar_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBar.XpBar_C.ExecuteUbergraph_XpBar
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UXpBar_C::ExecuteUbergraph_XpBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBar.XpBar_C.ExecuteUbergraph_XpBar");

	UXpBar_C_ExecuteUbergraph_XpBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
