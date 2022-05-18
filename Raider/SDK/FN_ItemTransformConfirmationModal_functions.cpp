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

// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.Cleanup Confirmation Widget
// (Public, BlueprintCallable, BlueprintEvent)

void UItemTransformConfirmationModal_C::Cleanup_Confirmation_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.Cleanup Confirmation Widget");

	UItemTransformConfirmationModal_C_Cleanup_Confirmation_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.Setup Transform MCP Binds
// (Public, BlueprintCallable, BlueprintEvent)

void UItemTransformConfirmationModal_C::Setup_Transform_MCP_Binds()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.Setup Transform MCP Binds");

	UItemTransformConfirmationModal_C_Setup_Transform_MCP_Binds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.UpdateTransformInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               TransformKey                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UFortItem*>       SacrificeItems                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            SacrificePoints                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentTier                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemTransformConfirmationModal_C::UpdateTransformInfo(class UFortItem* TransformKey, int SacrificePoints, int CurrentTier, TArray<class UFortItem*>* SacrificeItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.UpdateTransformInfo");

	UItemTransformConfirmationModal_C_UpdateTransformInfo_Params params;
	params.TransformKey = TransformKey;
	params.SacrificePoints = SacrificePoints;
	params.CurrentTier = CurrentTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SacrificeItems != nullptr)
		*SacrificeItems = params.SacrificeItems;
}


// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemTransformConfirmationModal_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	UItemTransformConfirmationModal_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemTransformConfirmationModal_C::BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");

	UItemTransformConfirmationModal_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UItemTransformConfirmationModal_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.OnActivated");

	UItemTransformConfirmationModal_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemTransformConfirmationModal_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.PreConstruct");

	UItemTransformConfirmationModal_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.Handle Transform Succeeded
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortItemInstanceQuantityPair> TransmoggedItems               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FFortItemInstanceQuantityPair> RecycledItems                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UItemTransformConfirmationModal_C::Handle_Transform_Succeeded(TArray<struct FFortItemInstanceQuantityPair> TransmoggedItems, TArray<struct FFortItemInstanceQuantityPair> RecycledItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.Handle Transform Succeeded");

	UItemTransformConfirmationModal_C_Handle_Transform_Succeeded_Params params;
	params.TransmoggedItems = TransmoggedItems;
	params.RecycledItems = RecycledItems;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.Handle Transform Failed
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ErrorMessage                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UItemTransformConfirmationModal_C::Handle_Transform_Failed(const struct FText& ErrorMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.Handle Transform Failed");

	UItemTransformConfirmationModal_C_Handle_Transform_Failed_Params params;
	params.ErrorMessage = ErrorMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.ExecuteUbergraph_ItemTransformConfirmationModal
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemTransformConfirmationModal_C::ExecuteUbergraph_ItemTransformConfirmationModal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.ExecuteUbergraph_ItemTransformConfirmationModal");

	UItemTransformConfirmationModal_C_ExecuteUbergraph_ItemTransformConfirmationModal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.OnConfirm__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UItemTransformConfirmationModal_C::OnConfirm__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.OnConfirm__DelegateSignature");

	UItemTransformConfirmationModal_C_OnConfirm__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.OnCancel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UItemTransformConfirmationModal_C::OnCancel__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.OnCancel__DelegateSignature");

	UItemTransformConfirmationModal_C_OnCancel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
