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

// Function InputReflector.InputReflector_C.StyleButton
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           ButtonToStyle                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UCommonButton*           ButtonStyled                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UInputReflector_C::StyleButton(class UCommonButton** ButtonToStyle, class UCommonButton** ButtonStyled)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputReflector.InputReflector_C.StyleButton");

	UInputReflector_C_StyleButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ButtonToStyle != nullptr)
		*ButtonToStyle = params.ButtonToStyle;
	if (ButtonStyled != nullptr)
		*ButtonStyled = params.ButtonStyled;
}


// Function InputReflector.InputReflector_C.HandleAddButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           AddedButton                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UInputReflector_C::HandleAddButton(class UCommonButton* AddedButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputReflector.InputReflector_C.HandleAddButton");

	UInputReflector_C_HandleAddButton_Params params;
	params.AddedButton = AddedButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputReflector.InputReflector_C.OnButtonAdded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UCommonButton**          AddedButton                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCommonInputActionHandlerData* Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UInputReflector_C::OnButtonAdded(class UCommonButton** AddedButton, struct FCommonInputActionHandlerData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputReflector.InputReflector_C.OnButtonAdded");

	UInputReflector_C_OnButtonAdded_Params params;
	params.AddedButton = AddedButton;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputReflector.InputReflector_C.ExecuteUbergraph_InputReflector
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputReflector_C::ExecuteUbergraph_InputReflector(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputReflector.InputReflector_C.ExecuteUbergraph_InputReflector");

	UInputReflector_C_ExecuteUbergraph_InputReflector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
