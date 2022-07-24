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

// Function Button_Crouch.Button_Crouch_C.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          InTouchEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UButton_Crouch_C::OnTouchStarted(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Crouch.Button_Crouch_C.OnTouchStarted");

	UButton_Crouch_C_OnTouchStarted_Params params;
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Button_Crouch.Button_Crouch_C.OnHUDStateUpdate
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortHUDState*          NewState                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UButton_Crouch_C::OnHUDStateUpdate(struct FFortHUDState* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Crouch.Button_Crouch_C.OnHUDStateUpdate");

	UButton_Crouch_C_OnHUDStateUpdate_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Crouch.Button_Crouch_C.ExecuteUbergraph_Button_Crouch
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_Crouch_C::ExecuteUbergraph_Button_Crouch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Crouch.Button_Crouch_C.ExecuteUbergraph_Button_Crouch");

	UButton_Crouch_C_ExecuteUbergraph_Button_Crouch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
