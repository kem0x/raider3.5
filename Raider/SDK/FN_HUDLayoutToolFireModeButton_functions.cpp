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

// Function HUDLayoutToolFireModeButton.HUDLayoutToolFireModeButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUDLayoutToolFireModeButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDLayoutToolFireModeButton.HUDLayoutToolFireModeButton_C.PreConstruct");

	UHUDLayoutToolFireModeButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDLayoutToolFireModeButton.HUDLayoutToolFireModeButton_C.BndEvt__BigAssButton_K2Node_ComponentBoundEvent_21_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UHUDLayoutToolFireModeButton_C::BndEvt__BigAssButton_K2Node_ComponentBoundEvent_21_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDLayoutToolFireModeButton.HUDLayoutToolFireModeButton_C.BndEvt__BigAssButton_K2Node_ComponentBoundEvent_21_OnButtonPressedEvent__DelegateSignature");

	UHUDLayoutToolFireModeButton_C_BndEvt__BigAssButton_K2Node_ComponentBoundEvent_21_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDLayoutToolFireModeButton.HUDLayoutToolFireModeButton_C.ExecuteUbergraph_HUDLayoutToolFireModeButton
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUDLayoutToolFireModeButton_C::ExecuteUbergraph_HUDLayoutToolFireModeButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDLayoutToolFireModeButton.HUDLayoutToolFireModeButton_C.ExecuteUbergraph_HUDLayoutToolFireModeButton");

	UHUDLayoutToolFireModeButton_C_ExecuteUbergraph_HUDLayoutToolFireModeButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
