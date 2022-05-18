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

// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.HandleResizeFinished
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewards_ItemCard_C*     Card                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFrontEndRewards_ChoiceRewards_C::HandleResizeFinished(class URewards_ItemCard_C* Card)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.HandleResizeFinished");

	UFrontEndRewards_ChoiceRewards_C_HandleResizeFinished_Params params;
	params.Card = Card;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.AddInputActions
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::AddInputActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.AddInputActions");

	UFrontEndRewards_ChoiceRewards_C_AddInputActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.HandleInspectAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Committed                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFrontEndRewards_ChoiceRewards_C::HandleInspectAction(bool* Committed)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.HandleInspectAction");

	UFrontEndRewards_ChoiceRewards_C_HandleInspectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Committed != nullptr)
		*Committed = params.Committed;
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.HandleTransitionInComplete
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::HandleTransitionInComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.HandleTransitionInComplete");

	UFrontEndRewards_ChoiceRewards_C_HandleTransitionInComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.Reset");

	UFrontEndRewards_ChoiceRewards_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.PopulateFromCardList
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class URewards_ItemCard_C*> Cards                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFrontEndRewards_ChoiceRewards_C::PopulateFromCardList(TArray<class URewards_ItemCard_C*>* Cards)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.PopulateFromCardList");

	UFrontEndRewards_ChoiceRewards_C_PopulateFromCardList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cards != nullptr)
		*Cards = params.Cards;
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.HideConfirmation
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::HideConfirmation()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.HideConfirmation");

	UFrontEndRewards_ChoiceRewards_C_HideConfirmation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.ShowConfirmation
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::ShowConfirmation()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.ShowConfirmation");

	UFrontEndRewards_ChoiceRewards_C_ShowConfirmation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.ConfirmChoice
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::ConfirmChoice()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.ConfirmChoice");

	UFrontEndRewards_ChoiceRewards_C_ConfirmChoice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.SetCanvasSize
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::SetCanvasSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.SetCanvasSize");

	UFrontEndRewards_ChoiceRewards_C_SetCanvasSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.SetSelectedItemDescription
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::SetSelectedItemDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.SetSelectedItemDescription");

	UFrontEndRewards_ChoiceRewards_C_SetSelectedItemDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.HandleCardClicked
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewards_ItemCard_C*     ItemCard                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFrontEndRewards_ChoiceRewards_C::HandleCardClicked(class URewards_ItemCard_C* ItemCard)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.HandleCardClicked");

	UFrontEndRewards_ChoiceRewards_C_HandleCardClicked_Params params;
	params.ItemCard = ItemCard;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.SelectPreviousCard
// (Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::SelectPreviousCard()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.SelectPreviousCard");

	UFrontEndRewards_ChoiceRewards_C_SelectPreviousCard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.SelectNextCard
// (Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::SelectNextCard()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.SelectNextCard");

	UFrontEndRewards_ChoiceRewards_C_SelectNextCard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.SelectCard
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewSelection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFrontEndRewards_ChoiceRewards_C::SelectCard(int NewSelection)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.SelectCard");

	UFrontEndRewards_ChoiceRewards_C_SelectCard_Params params;
	params.NewSelection = NewSelection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.SetCardSelected
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewards_ItemCard_C*     Card                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFrontEndRewards_ChoiceRewards_C::SetCardSelected(class URewards_ItemCard_C* Card)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.SetCardSelected");

	UFrontEndRewards_ChoiceRewards_C_SetCardSelected_Params params;
	params.Card = Card;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.InitDesignView
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::InitDesignView()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.InitDesignView");

	UFrontEndRewards_ChoiceRewards_C_InitDesignView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.AdjustCardPositions
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::AdjustCardPositions()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.AdjustCardPositions");

	UFrontEndRewards_ChoiceRewards_C_AdjustCardPositions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFrontEndRewards_ChoiceRewards_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.PreConstruct");

	UFrontEndRewards_ChoiceRewards_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.BndEvt__ButtonSure_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFrontEndRewards_ChoiceRewards_C::BndEvt__ButtonSure_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.BndEvt__ButtonSure_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature");

	UFrontEndRewards_ChoiceRewards_C_BndEvt__ButtonSure_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.BndEvt__ButtonNope_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFrontEndRewards_ChoiceRewards_C::BndEvt__ButtonNope_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.BndEvt__ButtonNope_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature");

	UFrontEndRewards_ChoiceRewards_C_BndEvt__ButtonNope_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.TransitionInBegin
// (Event, Protected, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::TransitionInBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.TransitionInBegin");

	UFrontEndRewards_ChoiceRewards_C_TransitionInBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.TransitionOutBegin
// (Event, Protected, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::TransitionOutBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.TransitionOutBegin");

	UFrontEndRewards_ChoiceRewards_C_TransitionOutBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.Construct");

	UFrontEndRewards_ChoiceRewards_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.OnNavigationLeft
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::OnNavigationLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.OnNavigationLeft");

	UFrontEndRewards_ChoiceRewards_C_OnNavigationLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.OnNavigationRight
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::OnNavigationRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.OnNavigationRight");

	UFrontEndRewards_ChoiceRewards_C_OnNavigationRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.OnActivated
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.OnActivated");

	UFrontEndRewards_ChoiceRewards_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.OnDeactivated
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.OnDeactivated");

	UFrontEndRewards_ChoiceRewards_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.CustomEvent_0_1
// (BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::CustomEvent_0_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.CustomEvent_0_1");

	UFrontEndRewards_ChoiceRewards_C_CustomEvent_0_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.CustomEvent_1_2
// (BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::CustomEvent_1_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.CustomEvent_1_2");

	UFrontEndRewards_ChoiceRewards_C_CustomEvent_1_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.OnPrimaryAction
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::OnPrimaryAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.OnPrimaryAction");

	UFrontEndRewards_ChoiceRewards_C_OnPrimaryAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.ExecuteUbergraph_FrontEndRewards_ChoiceRewards
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFrontEndRewards_ChoiceRewards_C::ExecuteUbergraph_FrontEndRewards_ChoiceRewards(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.ExecuteUbergraph_FrontEndRewards_ChoiceRewards");

	UFrontEndRewards_ChoiceRewards_C_ExecuteUbergraph_FrontEndRewards_ChoiceRewards_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.OnRewardSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFrontEndRewards_ChoiceRewards_C::OnRewardSelected__DelegateSignature(int Index, class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.OnRewardSelected__DelegateSignature");

	UFrontEndRewards_ChoiceRewards_C_OnRewardSelected__DelegateSignature_Params params;
	params.Index = Index;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
