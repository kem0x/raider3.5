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

// Function Results_StatsSubtypeBox.Results_StatsSubtypeBox_C.InitializeScoreType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UResults_StatsSubtypeBox_C::InitializeScoreType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_StatsSubtypeBox.Results_StatsSubtypeBox_C.InitializeScoreType");

	UResults_StatsSubtypeBox_C_InitializeScoreType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_StatsSubtypeBox.Results_StatsSubtypeBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UResults_StatsSubtypeBox_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_StatsSubtypeBox.Results_StatsSubtypeBox_C.Construct");

	UResults_StatsSubtypeBox_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_StatsSubtypeBox.Results_StatsSubtypeBox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_StatsSubtypeBox_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_StatsSubtypeBox.Results_StatsSubtypeBox_C.PreConstruct");

	UResults_StatsSubtypeBox_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_StatsSubtypeBox.Results_StatsSubtypeBox_C.ExecuteUbergraph_Results_StatsSubtypeBox
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_StatsSubtypeBox_C::ExecuteUbergraph_Results_StatsSubtypeBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_StatsSubtypeBox.Results_StatsSubtypeBox_C.ExecuteUbergraph_Results_StatsSubtypeBox");

	UResults_StatsSubtypeBox_C_ExecuteUbergraph_Results_StatsSubtypeBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
