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

// Function FriendCodeList.FriendCodeList_C.On_Border_MainPanel_MouseButtonDown_0_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UFriendCodeList_C::On_Border_MainPanel_MouseButtonDown_0_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendCodeList.FriendCodeList_C.On_Border_MainPanel_MouseButtonDown_0_1");

	UFriendCodeList_C_On_Border_MainPanel_MouseButtonDown_0_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FriendCodeList.FriendCodeList_C.CloseFriendCodeList
// (Public, BlueprintCallable, BlueprintEvent)

void UFriendCodeList_C::CloseFriendCodeList()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendCodeList.FriendCodeList_C.CloseFriendCodeList");

	UFriendCodeList_C_CloseFriendCodeList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendCodeList.FriendCodeList_C.On_B_ClickBlocker_MouseButtonDown_0_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UFriendCodeList_C::On_B_ClickBlocker_MouseButtonDown_0_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendCodeList.FriendCodeList_C.On_B_ClickBlocker_MouseButtonDown_0_1");

	UFriendCodeList_C_On_B_ClickBlocker_MouseButtonDown_0_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FriendCodeList.FriendCodeList_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UFriendCodeList_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendCodeList.FriendCodeList_C.OnActivated");

	UFriendCodeList_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendCodeList.FriendCodeList_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_69_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFriendCodeList_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_69_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendCodeList.FriendCodeList_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_69_CommonButtonClicked__DelegateSignature");

	UFriendCodeList_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_69_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendCodeList.FriendCodeList_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UFriendCodeList_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendCodeList.FriendCodeList_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature");

	UFriendCodeList_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendCodeList.FriendCodeList_C.BndEvt__both_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UFriendCodeList_C::BndEvt__both_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendCodeList.FriendCodeList_C.BndEvt__both_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature");

	UFriendCodeList_C_BndEvt__both_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendCodeList.FriendCodeList_C.ExecuteUbergraph_FriendCodeList
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendCodeList_C::ExecuteUbergraph_FriendCodeList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendCodeList.FriendCodeList_C.ExecuteUbergraph_FriendCodeList");

	UFriendCodeList_C_ExecuteUbergraph_FriendCodeList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
