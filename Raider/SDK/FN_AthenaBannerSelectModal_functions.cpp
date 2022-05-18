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

// Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.HandleNextAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaBannerSelectModal_C::HandleNextAction(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.HandleNextAction");

	UAthenaBannerSelectModal_C_HandleNextAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.HandlePreviousAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaBannerSelectModal_C::HandlePreviousAction(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.HandlePreviousAction");

	UAthenaBannerSelectModal_C_HandlePreviousAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.Setup Input Action Handlers
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaBannerSelectModal_C::Setup_Input_Action_Handlers()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.Setup Input Action Handlers");

	UAthenaBannerSelectModal_C_Setup_Input_Action_Handlers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.HandleCloseAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaBannerSelectModal_C::HandleCloseAction(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.HandleCloseAction");

	UAthenaBannerSelectModal_C_HandleCloseAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaBannerSelectModal_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.Construct");

	UAthenaBannerSelectModal_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.BndEvt__BP_LocalPlayerProfileManagement_K2Node_ComponentBoundEvent_14_CloseProfileModal__DelegateSignature
// (BlueprintEvent)

void UAthenaBannerSelectModal_C::BndEvt__BP_LocalPlayerProfileManagement_K2Node_ComponentBoundEvent_14_CloseProfileModal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.BndEvt__BP_LocalPlayerProfileManagement_K2Node_ComponentBoundEvent_14_CloseProfileModal__DelegateSignature");

	UAthenaBannerSelectModal_C_BndEvt__BP_LocalPlayerProfileManagement_K2Node_ComponentBoundEvent_14_CloseProfileModal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   IconId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ColorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaBannerSelectModal_C::BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature(const struct FName& IconId, const struct FName& ColorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature");

	UAthenaBannerSelectModal_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature_Params params;
	params.IconId = IconId;
	params.ColorId = ColorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAthenaBannerSelectModal_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.OnDeactivated");

	UAthenaBannerSelectModal_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaBannerSelectModal_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.OnActivated");

	UAthenaBannerSelectModal_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.ExecuteUbergraph_AthenaBannerSelectModal
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaBannerSelectModal_C::ExecuteUbergraph_AthenaBannerSelectModal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.ExecuteUbergraph_AthenaBannerSelectModal");

	UAthenaBannerSelectModal_C_ExecuteUbergraph_AthenaBannerSelectModal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
