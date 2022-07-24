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

// Function HUDLayoutTool.HUDLayoutTool_C.BndEvt__RecenterButton2_K2Node_ComponentBoundEvent_82_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUDLayoutTool_C::BndEvt__RecenterButton2_K2Node_ComponentBoundEvent_82_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDLayoutTool.HUDLayoutTool_C.BndEvt__RecenterButton2_K2Node_ComponentBoundEvent_82_CommonButtonClicked__DelegateSignature");

	UHUDLayoutTool_C_BndEvt__RecenterButton2_K2Node_ComponentBoundEvent_82_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDLayoutTool.HUDLayoutTool_C.Close Tool
// (BlueprintCallable, BlueprintEvent)

void UHUDLayoutTool_C::Close_Tool()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDLayoutTool.HUDLayoutTool_C.Close Tool");

	UHUDLayoutTool_C_Close_Tool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDLayoutTool.HUDLayoutTool_C.On Property State Change
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewlyOpen                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUDLayoutTool_C::On_Property_State_Change(bool bNewlyOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDLayoutTool.HUDLayoutTool_C.On Property State Change");

	UHUDLayoutTool_C_On_Property_State_Change_Params params;
	params.bNewlyOpen = bNewlyOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDLayoutTool.HUDLayoutTool_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_66_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUDLayoutTool_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_66_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDLayoutTool.HUDLayoutTool_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_66_CommonButtonClicked__DelegateSignature");

	UHUDLayoutTool_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_66_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDLayoutTool.HUDLayoutTool_C.On View Offset Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               NewOffset                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UHUDLayoutTool_C::On_View_Offset_Update(const struct FVector2D& NewOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDLayoutTool.HUDLayoutTool_C.On View Offset Update");

	UHUDLayoutTool_C_On_View_Offset_Update_Params params;
	params.NewOffset = NewOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDLayoutTool.HUDLayoutTool_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUDLayoutTool_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDLayoutTool.HUDLayoutTool_C.Construct");

	UHUDLayoutTool_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDLayoutTool.HUDLayoutTool_C.Tool Is Open
// (BlueprintCallable, BlueprintEvent)

void UHUDLayoutTool_C::Tool_Is_Open()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDLayoutTool.HUDLayoutTool_C.Tool Is Open");

	UHUDLayoutTool_C_Tool_Is_Open_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDLayoutTool.HUDLayoutTool_C.ExecuteUbergraph_HUDLayoutTool
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUDLayoutTool_C::ExecuteUbergraph_HUDLayoutTool(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDLayoutTool.HUDLayoutTool_C.ExecuteUbergraph_HUDLayoutTool");

	UHUDLayoutTool_C_ExecuteUbergraph_HUDLayoutTool_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
