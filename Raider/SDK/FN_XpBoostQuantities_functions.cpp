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

// Function XpBoostQuantities.XpBoostQuantities_C.ScaledRestBalance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            AmountToLevel                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UXpBoostQuantities_C::ScaledRestBalance(int AmountToLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostQuantities.XpBoostQuantities_C.ScaledRestBalance");

	UXpBoostQuantities_C_ScaledRestBalance_Params params;
	params.AmountToLevel = AmountToLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function XpBoostQuantities.XpBoostQuantities_C.ScaledBoostBalance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            AmountToLevel                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UXpBoostQuantities_C::ScaledBoostBalance(int AmountToLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostQuantities.XpBoostQuantities_C.ScaledBoostBalance");

	UXpBoostQuantities_C_ScaledBoostBalance_Params params;
	params.AmountToLevel = AmountToLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function XpBoostQuantities.XpBoostQuantities_C.UpdateXPQuantitiesInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UXpBoostQuantities_C::UpdateXPQuantitiesInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostQuantities.XpBoostQuantities_C.UpdateXPQuantitiesInfo");

	UXpBoostQuantities_C_UpdateXPQuantitiesInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoostQuantities.XpBoostQuantities_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UXpBoostQuantities_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostQuantities.XpBoostQuantities_C.Construct");

	UXpBoostQuantities_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoostQuantities.XpBoostQuantities_C.HandleAccountUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo  NewInfo                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UXpBoostQuantities_C::HandleAccountUpdate(const struct FFortPublicAccountInfo& NewInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostQuantities.XpBoostQuantities_C.HandleAccountUpdate");

	UXpBoostQuantities_C_HandleAccountUpdate_Params params;
	params.NewInfo = NewInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoostQuantities.XpBoostQuantities_C.Xp Boost Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BoostAmount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UXpBoostQuantities_C::Xp_Boost_Changed(int BoostAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostQuantities.XpBoostQuantities_C.Xp Boost Changed");

	UXpBoostQuantities_C_Xp_Boost_Changed_Params params;
	params.BoostAmount = BoostAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoostQuantities.XpBoostQuantities_C.ExecuteUbergraph_XpBoostQuantities
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UXpBoostQuantities_C::ExecuteUbergraph_XpBoostQuantities(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostQuantities.XpBoostQuantities_C.ExecuteUbergraph_XpBoostQuantities");

	UXpBoostQuantities_C_ExecuteUbergraph_XpBoostQuantities_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
