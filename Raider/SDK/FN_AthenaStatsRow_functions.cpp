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

// Function AthenaStatsRow.AthenaStatsRow_C.SetStatValueAsText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   StatValue                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaStatsRow_C::SetStatValueAsText(const struct FText& StatValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaStatsRow.AthenaStatsRow_C.SetStatValueAsText");

	UAthenaStatsRow_C_SetStatValueAsText_Params params;
	params.StatValue = StatValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaStatsRow.AthenaStatsRow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaStatsRow_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaStatsRow.AthenaStatsRow_C.PreConstruct");

	UAthenaStatsRow_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaStatsRow.AthenaStatsRow_C.ExecuteUbergraph_AthenaStatsRow
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaStatsRow_C::ExecuteUbergraph_AthenaStatsRow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaStatsRow.AthenaStatsRow_C.ExecuteUbergraph_AthenaStatsRow");

	UAthenaStatsRow_C_ExecuteUbergraph_AthenaStatsRow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
