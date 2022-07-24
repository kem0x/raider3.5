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

// Function Button_Mode.Button_Mode_C.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          InTouchEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UButton_Mode_C::OnTouchStarted(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Mode.Button_Mode_C.OnTouchStarted");

	UButton_Mode_C_OnTouchStarted_Params params;
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Button_Mode.Button_Mode_C.OnBuildModeChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEntering                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_Mode_C::OnBuildModeChanged_Event_1(bool bEntering)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Mode.Button_Mode_C.OnBuildModeChanged_Event_1");

	UButton_Mode_C_OnBuildModeChanged_Event_1_Params params;
	params.bEntering = bEntering;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Mode.Button_Mode_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UButton_Mode_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Mode.Button_Mode_C.Construct");

	UButton_Mode_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Mode.Button_Mode_C.ExecuteUbergraph_Button_Mode
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_Mode_C::ExecuteUbergraph_Button_Mode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Mode.Button_Mode_C.ExecuteUbergraph_Button_Mode");

	UButton_Mode_C_ExecuteUbergraph_Button_Mode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
