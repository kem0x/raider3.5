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

// Function AthenaHeadlessReminder.AthenaHeadlessReminder_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaHeadlessReminder_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHeadlessReminder.AthenaHeadlessReminder_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature");

	UAthenaHeadlessReminder_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHeadlessReminder.AthenaHeadlessReminder_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaHeadlessReminder_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHeadlessReminder.AthenaHeadlessReminder_C.Construct");

	UAthenaHeadlessReminder_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHeadlessReminder.AthenaHeadlessReminder_C.ExecuteUbergraph_AthenaHeadlessReminder
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaHeadlessReminder_C::ExecuteUbergraph_AthenaHeadlessReminder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHeadlessReminder.AthenaHeadlessReminder_C.ExecuteUbergraph_AthenaHeadlessReminder");

	UAthenaHeadlessReminder_C_ExecuteUbergraph_AthenaHeadlessReminder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
