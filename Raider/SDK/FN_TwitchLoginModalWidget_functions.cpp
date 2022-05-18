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

// Function TwitchLoginModalWidget.TwitchLoginModalWidget_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_72_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTwitchLoginModalWidget_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_72_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwitchLoginModalWidget.TwitchLoginModalWidget_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_72_CommonButtonClicked__DelegateSignature");

	UTwitchLoginModalWidget_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_72_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TwitchLoginModalWidget.TwitchLoginModalWidget_C.ExecuteUbergraph_TwitchLoginModalWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTwitchLoginModalWidget_C::ExecuteUbergraph_TwitchLoginModalWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwitchLoginModalWidget.TwitchLoginModalWidget_C.ExecuteUbergraph_TwitchLoginModalWidget");

	UTwitchLoginModalWidget_C_ExecuteUbergraph_TwitchLoginModalWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TwitchLoginModalWidget.TwitchLoginModalWidget_C.OnCancelButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTwitchLoginModalWidget_C::OnCancelButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwitchLoginModalWidget.TwitchLoginModalWidget_C.OnCancelButtonClicked__DelegateSignature");

	UTwitchLoginModalWidget_C_OnCancelButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
