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

// Function AthenaMapPanel.AthenaMapPanel_C.SetTriggerImages
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaMapPanel_C::SetTriggerImages()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMapPanel.AthenaMapPanel_C.SetTriggerImages");

	UAthenaMapPanel_C_SetTriggerImages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMapPanel.AthenaMapPanel_C.OnTouchEnded
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          InTouchEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UAthenaMapPanel_C::OnTouchEnded(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMapPanel.AthenaMapPanel_C.OnTouchEnded");

	UAthenaMapPanel_C_OnTouchEnded_Params params;
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaMapPanel.AthenaMapPanel_C.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          InTouchEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UAthenaMapPanel_C::OnTouchStarted(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMapPanel.AthenaMapPanel_C.OnTouchStarted");

	UAthenaMapPanel_C_OnTouchStarted_Params params;
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaMapPanel.AthenaMapPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaMapPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMapPanel.AthenaMapPanel_C.Construct");

	UAthenaMapPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMapPanel.AthenaMapPanel_C.FlashPlayerIcon
// (BlueprintCallable, BlueprintEvent)

void UAthenaMapPanel_C::FlashPlayerIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMapPanel.AthenaMapPanel_C.FlashPlayerIcon");

	UAthenaMapPanel_C_FlashPlayerIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMapPanel.AthenaMapPanel_C.ExecuteUbergraph_AthenaMapPanel
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMapPanel_C::ExecuteUbergraph_AthenaMapPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMapPanel.AthenaMapPanel_C.ExecuteUbergraph_AthenaMapPanel");

	UAthenaMapPanel_C_ExecuteUbergraph_AthenaMapPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
