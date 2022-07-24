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

// Function HordeTierResultsWidget.HordeTierResultsWidget_C.OnEndOfMovieReached
// (Public, BlueprintCallable, BlueprintEvent)

void UHordeTierResultsWidget_C::OnEndOfMovieReached()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeTierResultsWidget.HordeTierResultsWidget_C.OnEndOfMovieReached");

	UHordeTierResultsWidget_C_OnEndOfMovieReached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeTierResultsWidget.HordeTierResultsWidget_C.ChooseMediaToUse
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMediaSource*            MediaToUse                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHordeTierResultsWidget_C::ChooseMediaToUse(class UMediaSource** MediaToUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeTierResultsWidget.HordeTierResultsWidget_C.ChooseMediaToUse");

	UHordeTierResultsWidget_C_ChooseMediaToUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MediaToUse != nullptr)
		*MediaToUse = params.MediaToUse;
}


// Function HordeTierResultsWidget.HordeTierResultsWidget_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortCompletionResult          Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHordeTierResultsWidget_C::Initialize(EFortCompletionResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeTierResultsWidget.HordeTierResultsWidget_C.Initialize");

	UHordeTierResultsWidget_C_Initialize_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeTierResultsWidget.HordeTierResultsWidget_C.InitializeMovie
// (Protected, BlueprintCallable, BlueprintEvent)

void UHordeTierResultsWidget_C::InitializeMovie()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeTierResultsWidget.HordeTierResultsWidget_C.InitializeMovie");

	UHordeTierResultsWidget_C_InitializeMovie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeTierResultsWidget.HordeTierResultsWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHordeTierResultsWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeTierResultsWidget.HordeTierResultsWidget_C.Construct");

	UHordeTierResultsWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeTierResultsWidget.HordeTierResultsWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHordeTierResultsWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeTierResultsWidget.HordeTierResultsWidget_C.Destruct");

	UHordeTierResultsWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeTierResultsWidget.HordeTierResultsWidget_C.ExecuteUbergraph_HordeTierResultsWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHordeTierResultsWidget_C::ExecuteUbergraph_HordeTierResultsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeTierResultsWidget.HordeTierResultsWidget_C.ExecuteUbergraph_HordeTierResultsWidget");

	UHordeTierResultsWidget_C_ExecuteUbergraph_HordeTierResultsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeTierResultsWidget.HordeTierResultsWidget_C.OnTierResultsWidgetComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UHordeTierResultsWidget_C::OnTierResultsWidgetComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeTierResultsWidget.HordeTierResultsWidget_C.OnTierResultsWidgetComplete__DelegateSignature");

	UHordeTierResultsWidget_C_OnTierResultsWidgetComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
