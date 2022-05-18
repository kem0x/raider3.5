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

// Function DailyQuestProgressWidget.DailyQuestProgressWidget_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Required                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Achieved                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDailyQuestProgressWidget_C::Update(int Required, int Achieved)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestProgressWidget.DailyQuestProgressWidget_C.Update");

	UDailyQuestProgressWidget_C_Update_Params params;
	params.Required = Required;
	params.Achieved = Achieved;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyQuestProgressWidget.DailyQuestProgressWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDailyQuestProgressWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestProgressWidget.DailyQuestProgressWidget_C.Construct");

	UDailyQuestProgressWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyQuestProgressWidget.DailyQuestProgressWidget_C.ExecuteUbergraph_DailyQuestProgressWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDailyQuestProgressWidget_C::ExecuteUbergraph_DailyQuestProgressWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestProgressWidget.DailyQuestProgressWidget_C.ExecuteUbergraph_DailyQuestProgressWidget");

	UDailyQuestProgressWidget_C_ExecuteUbergraph_DailyQuestProgressWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
