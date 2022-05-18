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

// Function Results_SummaryBadge.Results_SummaryBadge_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               BadgeItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_SummaryBadge_C::Initialize(class UFortItem* BadgeItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_SummaryBadge.Results_SummaryBadge_C.Initialize");

	UResults_SummaryBadge_C_Initialize_Params params;
	params.BadgeItem = BadgeItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_SummaryBadge.Results_SummaryBadge_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_SummaryBadge_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_SummaryBadge.Results_SummaryBadge_C.PreConstruct");

	UResults_SummaryBadge_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_SummaryBadge.Results_SummaryBadge_C.Manual Pre Construct
// (BlueprintCallable, BlueprintEvent)

void UResults_SummaryBadge_C::Manual_Pre_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_SummaryBadge.Results_SummaryBadge_C.Manual Pre Construct");

	UResults_SummaryBadge_C_Manual_Pre_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_SummaryBadge.Results_SummaryBadge_C.ExecuteUbergraph_Results_SummaryBadge
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_SummaryBadge_C::ExecuteUbergraph_Results_SummaryBadge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_SummaryBadge.Results_SummaryBadge_C.ExecuteUbergraph_Results_SummaryBadge");

	UResults_SummaryBadge_C_ExecuteUbergraph_Results_SummaryBadge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
