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

// Function ImportFriends.ImportFriends_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UImportFriends_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImportFriends.ImportFriends_C.PreConstruct");

	UImportFriends_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ImportFriends.ImportFriends_C.OnPanelTypeSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// ESocialImportPanelType*        NewType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UImportFriends_C::OnPanelTypeSet(ESocialImportPanelType* NewType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImportFriends.ImportFriends_C.OnPanelTypeSet");

	UImportFriends_C_OnPanelTypeSet_Params params;
	params.NewType = NewType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ImportFriends.ImportFriends_C.HandleHeaderText
// (BlueprintCallable, BlueprintEvent)

void UImportFriends_C::HandleHeaderText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ImportFriends.ImportFriends_C.HandleHeaderText");

	UImportFriends_C_HandleHeaderText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ImportFriends.ImportFriends_C.HandleDescriptionText
// (BlueprintCallable, BlueprintEvent)

void UImportFriends_C::HandleDescriptionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ImportFriends.ImportFriends_C.HandleDescriptionText");

	UImportFriends_C_HandleDescriptionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ImportFriends.ImportFriends_C.BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_796_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UImportFriends_C::BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_796_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImportFriends.ImportFriends_C.BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_796_CommonButtonClicked__DelegateSignature");

	UImportFriends_C_BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_796_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ImportFriends.ImportFriends_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UImportFriends_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ImportFriends.ImportFriends_C.OnActivated");

	UImportFriends_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ImportFriends.ImportFriends_C.OnIncentivizedSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bIncentivized                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UImportFriends_C::OnIncentivizedSet(bool* bIncentivized)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImportFriends.ImportFriends_C.OnIncentivizedSet");

	UImportFriends_C_OnIncentivizedSet_Params params;
	params.bIncentivized = bIncentivized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ImportFriends.ImportFriends_C.ExecuteUbergraph_ImportFriends
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UImportFriends_C::ExecuteUbergraph_ImportFriends(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImportFriends.ImportFriends_C.ExecuteUbergraph_ImportFriends");

	UImportFriends_C_ExecuteUbergraph_ImportFriends_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
