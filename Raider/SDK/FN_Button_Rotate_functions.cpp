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

// Function Button_Rotate.Button_Rotate_C.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          InTouchEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UButton_Rotate_C::OnTouchStarted(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Rotate.Button_Rotate_C.OnTouchStarted");

	UButton_Rotate_C_OnTouchStarted_Params params;
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Button_Rotate.Button_Rotate_C.OnTouched_2
// (BlueprintCallable, BlueprintEvent)

void UButton_Rotate_C::OnTouched_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Rotate.Button_Rotate_C.OnTouched_2");

	UButton_Rotate_C_OnTouched_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Rotate.Button_Rotate_C.ExecuteUbergraph_Button_Rotate
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_Rotate_C::ExecuteUbergraph_Button_Rotate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Rotate.Button_Rotate_C.ExecuteUbergraph_Button_Rotate");

	UButton_Rotate_C_ExecuteUbergraph_Button_Rotate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
