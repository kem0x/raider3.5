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

// Function DailyRewardsSchedule.DailyRewardsSchedule_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDailyRewardsSchedule_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyRewardsSchedule.DailyRewardsSchedule_C.Construct");

	UDailyRewardsSchedule_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyRewardsSchedule.DailyRewardsSchedule_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDailyRewardsSchedule_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyRewardsSchedule.DailyRewardsSchedule_C.Destruct");

	UDailyRewardsSchedule_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyRewardsSchedule.DailyRewardsSchedule_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDailyRewardsSchedule_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyRewardsSchedule.DailyRewardsSchedule_C.PreConstruct");

	UDailyRewardsSchedule_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyRewardsSchedule.DailyRewardsSchedule_C.ExecuteUbergraph_DailyRewardsSchedule
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDailyRewardsSchedule_C::ExecuteUbergraph_DailyRewardsSchedule(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyRewardsSchedule.DailyRewardsSchedule_C.ExecuteUbergraph_DailyRewardsSchedule");

	UDailyRewardsSchedule_C_ExecuteUbergraph_DailyRewardsSchedule_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
