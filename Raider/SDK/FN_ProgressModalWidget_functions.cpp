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

// Function ProgressModalWidget.ProgressModalWidget_C.OnAnalogValueChanged
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FAnalogInputEvent*      InAnalogInputEvent             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UProgressModalWidget_C::OnAnalogValueChanged(struct FGeometry* MyGeometry, struct FAnalogInputEvent* InAnalogInputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressModalWidget.ProgressModalWidget_C.OnAnalogValueChanged");

	UProgressModalWidget_C_OnAnalogValueChanged_Params params;
	params.MyGeometry = MyGeometry;
	params.InAnalogInputEvent = InAnalogInputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProgressModalWidget.ProgressModalWidget_C.SetIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             Icon                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UProgressModalWidget_C::SetIcon(const struct FSlateBrush& Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressModalWidget.ProgressModalWidget_C.SetIcon");

	UProgressModalWidget_C_SetIcon_Params params;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressModalWidget.ProgressModalWidget_C.SetDescription
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UProgressModalWidget_C::SetDescription(const struct FText& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressModalWidget.ProgressModalWidget_C.SetDescription");

	UProgressModalWidget_C_SetDescription_Params params;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressModalWidget.ProgressModalWidget_C.SetTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UProgressModalWidget_C::SetTitle(const struct FText& Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressModalWidget.ProgressModalWidget_C.SetTitle");

	UProgressModalWidget_C_SetTitle_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressModalWidget.ProgressModalWidget_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UProgressModalWidget_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressModalWidget.ProgressModalWidget_C.Initialize");

	UProgressModalWidget_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressModalWidget.ProgressModalWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UProgressModalWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressModalWidget.ProgressModalWidget_C.Construct");

	UProgressModalWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressModalWidget.ProgressModalWidget_C.HandleIntroEnded
// (BlueprintCallable, BlueprintEvent)

void UProgressModalWidget_C::HandleIntroEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressModalWidget.ProgressModalWidget_C.HandleIntroEnded");

	UProgressModalWidget_C_HandleIntroEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressModalWidget.ProgressModalWidget_C.HandleOutroEnded
// (BlueprintCallable, BlueprintEvent)

void UProgressModalWidget_C::HandleOutroEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressModalWidget.ProgressModalWidget_C.HandleOutroEnded");

	UProgressModalWidget_C_HandleOutroEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressModalWidget.ProgressModalWidget_C.OnBeginIntro
// (Event, Public, BlueprintEvent)

void UProgressModalWidget_C::OnBeginIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressModalWidget.ProgressModalWidget_C.OnBeginIntro");

	UProgressModalWidget_C_OnBeginIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressModalWidget.ProgressModalWidget_C.OnBeginOutro
// (Event, Public, BlueprintEvent)

void UProgressModalWidget_C::OnBeginOutro()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressModalWidget.ProgressModalWidget_C.OnBeginOutro");

	UProgressModalWidget_C_OnBeginOutro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressModalWidget.ProgressModalWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UProgressModalWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressModalWidget.ProgressModalWidget_C.Destruct");

	UProgressModalWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressModalWidget.ProgressModalWidget_C.ExecuteUbergraph_ProgressModalWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressModalWidget_C::ExecuteUbergraph_ProgressModalWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressModalWidget.ProgressModalWidget_C.ExecuteUbergraph_ProgressModalWidget");

	UProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
