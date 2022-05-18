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

// Function DayWidget.DayWidget_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UDayWidget_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function DayWidget.DayWidget_C.Update");

	UDayWidget_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayWidget.DayWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDayWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DayWidget.DayWidget_C.Construct");

	UDayWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayWidget.DayWidget_C.ExecuteUbergraph_DayWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDayWidget_C::ExecuteUbergraph_DayWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DayWidget.DayWidget_C.ExecuteUbergraph_DayWidget");

	UDayWidget_C_ExecuteUbergraph_DayWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
