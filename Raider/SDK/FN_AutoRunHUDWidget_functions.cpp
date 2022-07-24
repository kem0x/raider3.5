// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AutoRunHUDWidget.AutoRunHUDWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAutoRunHUDWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoRunHUDWidget.AutoRunHUDWidget_C.Destruct");

	UAutoRunHUDWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoRunHUDWidget.AutoRunHUDWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAutoRunHUDWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoRunHUDWidget.AutoRunHUDWidget_C.Construct");

	UAutoRunHUDWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoRunHUDWidget.AutoRunHUDWidget_C.OnAutoRunEnabled_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bAutoRunEnabled                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAutoRunHUDWidget_C::OnAutoRunEnabled_Bind(bool bAutoRunEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoRunHUDWidget.AutoRunHUDWidget_C.OnAutoRunEnabled_Bind");

	UAutoRunHUDWidget_C_OnAutoRunEnabled_Bind_Params params;
	params.bAutoRunEnabled = bAutoRunEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoRunHUDWidget.AutoRunHUDWidget_C.ExecuteUbergraph_AutoRunHUDWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAutoRunHUDWidget_C::ExecuteUbergraph_AutoRunHUDWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoRunHUDWidget.AutoRunHUDWidget_C.ExecuteUbergraph_AutoRunHUDWidget");

	UAutoRunHUDWidget_C_ExecuteUbergraph_AutoRunHUDWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
