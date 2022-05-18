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

// Function AthenaToastWidget.AthenaToastWidget_C.StartIntro
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaToastWidget_C::StartIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaToastWidget.AthenaToastWidget_C.StartIntro");

	UAthenaToastWidget_C_StartIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaToastWidget.AthenaToastWidget_C.ShowText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UCommonTextBlock*        TextBlock                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaToastWidget_C::ShowText(const struct FText& Text, class UCommonTextBlock* TextBlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaToastWidget.AthenaToastWidget_C.ShowText");

	UAthenaToastWidget_C_ShowText_Params params;
	params.Text = Text;
	params.TextBlock = TextBlock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaToastWidget.AthenaToastWidget_C.SetToast
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaToastWidget_C::SetToast(const struct FText& Title, const struct FText& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaToastWidget.AthenaToastWidget_C.SetToast");

	UAthenaToastWidget_C_SetToast_Params params;
	params.Title = Title;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaToastWidget.AthenaToastWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaToastWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaToastWidget.AthenaToastWidget_C.Construct");

	UAthenaToastWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaToastWidget.AthenaToastWidget_C.HandleIntroFinished
// (BlueprintCallable, BlueprintEvent)

void UAthenaToastWidget_C::HandleIntroFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaToastWidget.AthenaToastWidget_C.HandleIntroFinished");

	UAthenaToastWidget_C_HandleIntroFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaToastWidget.AthenaToastWidget_C.HandleOutroFinished
// (BlueprintCallable, BlueprintEvent)

void UAthenaToastWidget_C::HandleOutroFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaToastWidget.AthenaToastWidget_C.HandleOutroFinished");

	UAthenaToastWidget_C_HandleOutroFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaToastWidget.AthenaToastWidget_C.HandleAnimationDelay
// (BlueprintCallable, BlueprintEvent)

void UAthenaToastWidget_C::HandleAnimationDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaToastWidget.AthenaToastWidget_C.HandleAnimationDelay");

	UAthenaToastWidget_C_HandleAnimationDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaToastWidget.AthenaToastWidget_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaToastWidget_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaToastWidget.AthenaToastWidget_C.OnMouseEnter");

	UAthenaToastWidget_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaToastWidget.AthenaToastWidget_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaToastWidget_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaToastWidget.AthenaToastWidget_C.OnMouseLeave");

	UAthenaToastWidget_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaToastWidget.AthenaToastWidget_C.ExecuteUbergraph_AthenaToastWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaToastWidget_C::ExecuteUbergraph_AthenaToastWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaToastWidget.AthenaToastWidget_C.ExecuteUbergraph_AthenaToastWidget");

	UAthenaToastWidget_C_ExecuteUbergraph_AthenaToastWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaToastWidget.AthenaToastWidget_C.OnFinishedToast__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UAthenaToastWidget_C::OnFinishedToast__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaToastWidget.AthenaToastWidget_C.OnFinishedToast__DelegateSignature");

	UAthenaToastWidget_C_OnFinishedToast__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
