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

// Function InZoneTitleBar.InZoneTitleBar_C.On_TouchZone_MouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UInZoneTitleBar_C::On_TouchZone_MouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function InZoneTitleBar.InZoneTitleBar_C.On_TouchZone_MouseButtonDown_1");

	UInZoneTitleBar_C_On_TouchZone_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InZoneTitleBar.InZoneTitleBar_C.BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UInZoneTitleBar_C::BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function InZoneTitleBar.InZoneTitleBar_C.BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	UInZoneTitleBar_C_BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InZoneTitleBar.InZoneTitleBar_C.ExecuteUbergraph_InZoneTitleBar
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInZoneTitleBar_C::ExecuteUbergraph_InZoneTitleBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InZoneTitleBar.InZoneTitleBar_C.ExecuteUbergraph_InZoneTitleBar");

	UInZoneTitleBar_C_ExecuteUbergraph_InZoneTitleBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
