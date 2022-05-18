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

// Function LobbyGadgetButton.LobbyGadgetButton_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)

void ULobbyGadgetButton_C::Focus()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyGadgetButton.LobbyGadgetButton_C.Focus");

	ULobbyGadgetButton_C_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyGadgetButton.LobbyGadgetButton_C.GetLocked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bLocked                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULobbyGadgetButton_C::GetLocked(bool* bLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyGadgetButton.LobbyGadgetButton_C.GetLocked");

	ULobbyGadgetButton_C_GetLocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bLocked != nullptr)
		*bLocked = params.bLocked;
}


// Function LobbyGadgetButton.LobbyGadgetButton_C.SetLocked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bLocked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobbyGadgetButton_C::SetLocked(bool bLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyGadgetButton.LobbyGadgetButton_C.SetLocked");

	ULobbyGadgetButton_C_SetLocked_Params params;
	params.bLocked = bLocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyGadgetButton.LobbyGadgetButton_C.GetGadgetItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortWorldItem*          GadgetItem                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULobbyGadgetButton_C::GetGadgetItem(class UFortWorldItem** GadgetItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyGadgetButton.LobbyGadgetButton_C.GetGadgetItem");

	ULobbyGadgetButton_C_GetGadgetItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GadgetItem != nullptr)
		*GadgetItem = params.GadgetItem;
}


// Function LobbyGadgetButton.LobbyGadgetButton_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortWorldItem*          WorldItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobbyGadgetButton_C::Refresh(class UFortWorldItem* WorldItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyGadgetButton.LobbyGadgetButton_C.Refresh");

	ULobbyGadgetButton_C_Refresh_Params params;
	params.WorldItem = WorldItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyGadgetButton.LobbyGadgetButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobbyGadgetButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyGadgetButton.LobbyGadgetButton_C.PreConstruct");

	ULobbyGadgetButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyGadgetButton.LobbyGadgetButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ULobbyGadgetButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyGadgetButton.LobbyGadgetButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature");

	ULobbyGadgetButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyGadgetButton.LobbyGadgetButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_96_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ULobbyGadgetButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_96_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyGadgetButton.LobbyGadgetButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_96_CommonButtonClicked__DelegateSignature");

	ULobbyGadgetButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_96_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyGadgetButton.LobbyGadgetButton_C.ExecuteUbergraph_LobbyGadgetButton
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobbyGadgetButton_C::ExecuteUbergraph_LobbyGadgetButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyGadgetButton.LobbyGadgetButton_C.ExecuteUbergraph_LobbyGadgetButton");

	ULobbyGadgetButton_C_ExecuteUbergraph_LobbyGadgetButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyGadgetButton.LobbyGadgetButton_C.OnButtonHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULobbyGadgetButton_C*    GadgetButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ULobbyGadgetButton_C::OnButtonHovered__DelegateSignature(class ULobbyGadgetButton_C* GadgetButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyGadgetButton.LobbyGadgetButton_C.OnButtonHovered__DelegateSignature");

	ULobbyGadgetButton_C_OnButtonHovered__DelegateSignature_Params params;
	params.GadgetButton = GadgetButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyGadgetButton.LobbyGadgetButton_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULobbyGadgetButton_C*    GadgetButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ULobbyGadgetButton_C::OnButtonClicked__DelegateSignature(class ULobbyGadgetButton_C* GadgetButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyGadgetButton.LobbyGadgetButton_C.OnButtonClicked__DelegateSignature");

	ULobbyGadgetButton_C_OnButtonClicked__DelegateSignature_Params params;
	params.GadgetButton = GadgetButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
