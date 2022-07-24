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

// Function HamburgerButton.HamburgerButton_C.BndEvt__MenuButton_K2Node_ComponentBoundEvent_46_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHamburgerButton_C::BndEvt__MenuButton_K2Node_ComponentBoundEvent_46_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function HamburgerButton.HamburgerButton_C.BndEvt__MenuButton_K2Node_ComponentBoundEvent_46_CommonButtonClicked__DelegateSignature");

	UHamburgerButton_C_BndEvt__MenuButton_K2Node_ComponentBoundEvent_46_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HamburgerButton.HamburgerButton_C.ExecuteUbergraph_HamburgerButton
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHamburgerButton_C::ExecuteUbergraph_HamburgerButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HamburgerButton.HamburgerButton_C.ExecuteUbergraph_HamburgerButton");

	UHamburgerButton_C_ExecuteUbergraph_HamburgerButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
