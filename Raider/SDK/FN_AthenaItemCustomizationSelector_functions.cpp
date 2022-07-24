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

// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.ToggleFavorite
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaItemCustomizationSelector_C::ToggleFavorite(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.ToggleFavorite");

	UAthenaItemCustomizationSelector_C_ToggleFavorite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaItemCustomizationSelector_C::HandleBack(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.HandleBack");

	UAthenaItemCustomizationSelector_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.BndEvt__ConfirmItemSelection_K2Node_ComponentBoundEvent_127_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaItemCustomizationSelector_C::BndEvt__ConfirmItemSelection_K2Node_ComponentBoundEvent_127_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.BndEvt__ConfirmItemSelection_K2Node_ComponentBoundEvent_127_CommonButtonClicked__DelegateSignature");

	UAthenaItemCustomizationSelector_C_BndEvt__ConfirmItemSelection_K2Node_ComponentBoundEvent_127_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaItemCustomizationSelector_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.Construct");

	UAthenaItemCustomizationSelector_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_44_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButton*           TabButton                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaItemCustomizationSelector_C::BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_44_OnTabButtonCreated__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_44_OnTabButtonCreated__DelegateSignature");

	UAthenaItemCustomizationSelector_C_BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_44_OnTabButtonCreated__DelegateSignature_Params params;
	params.TabId = TabId;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.ExecuteUbergraph_AthenaItemCustomizationSelector
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaItemCustomizationSelector_C::ExecuteUbergraph_AthenaItemCustomizationSelector(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.ExecuteUbergraph_AthenaItemCustomizationSelector");

	UAthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
