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

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.UpdateScrollHintVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsUsingGamepad                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFrontEndRewards_ListRewards_C::UpdateScrollHintVisibility(bool IsUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.UpdateScrollHintVisibility");

	UFrontEndRewards_ListRewards_C_UpdateScrollHintVisibility_Params params;
	params.IsUsingGamepad = IsUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.Get Item Description
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   OutDescription                 (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFrontEndRewards_ListRewards_C::Get_Item_Description(class UFortItem* Object, struct FText* OutDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.Get Item Description");

	UFrontEndRewards_ListRewards_C_Get_Item_Description_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDescription != nullptr)
		*OutDescription = params.OutDescription;

	return params.ReturnValue;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.Set DisplayName and Description Widget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UFrontEndRewards_ListRewards_C::Set_DisplayName_and_Description_Widget(class UFortItem* Item, const struct FText& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.Set DisplayName and Description Widget");

	UFrontEndRewards_ListRewards_C_Set_DisplayName_and_Description_Widget_Params params;
	params.Item = Item;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.Clear DisplayName and Description Widgets
// (Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ListRewards_C::Clear_DisplayName_and_Description_Widgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.Clear DisplayName and Description Widgets");

	UFrontEndRewards_ListRewards_C_Clear_DisplayName_and_Description_Widgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SkipTransitionIn
// (Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ListRewards_C::SkipTransitionIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SkipTransitionIn");

	UFrontEndRewards_ListRewards_C_SkipTransitionIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.TickTransitionIn
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ListRewards_C::TickTransitionIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.TickTransitionIn");

	UFrontEndRewards_ListRewards_C_TickTransitionIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.BindEvents
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ListRewards_C::BindEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.BindEvents");

	UFrontEndRewards_ListRewards_C_BindEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleTransitionInComplete
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ListRewards_C::HandleTransitionInComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleTransitionInComplete");

	UFrontEndRewards_ListRewards_C_HandleTransitionInComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ListRewards_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.Reset");

	UFrontEndRewards_ListRewards_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.AddInputActions
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ListRewards_C::AddInputActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.AddInputActions");

	UFrontEndRewards_ListRewards_C_AddInputActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.DisableInputActions
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ListRewards_C::DisableInputActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.DisableInputActions");

	UFrontEndRewards_ListRewards_C_DisableInputActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.EnableInputActions
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ListRewards_C::EnableInputActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.EnableInputActions");

	UFrontEndRewards_ListRewards_C_EnableInputActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.PopulateFromCardsList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class URewards_ItemCard_C*> Cards                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFrontEndRewards_ListRewards_C::PopulateFromCardsList(TArray<class URewards_ItemCard_C*>* Cards)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.PopulateFromCardsList");

	UFrontEndRewards_ListRewards_C_PopulateFromCardsList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cards != nullptr)
		*Cards = params.Cards;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleInspectAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Committed                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFrontEndRewards_ListRewards_C::HandleInspectAction(bool* Committed)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleInspectAction");

	UFrontEndRewards_ListRewards_C_HandleInspectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Committed != nullptr)
		*Committed = params.Committed;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleScrollAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Committed                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFrontEndRewards_ListRewards_C::HandleScrollAction(bool* Committed)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleScrollAction");

	UFrontEndRewards_ListRewards_C_HandleScrollAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Committed != nullptr)
		*Committed = params.Committed;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleCollectAllAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Committed                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFrontEndRewards_ListRewards_C::HandleCollectAllAction(bool* Committed)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleCollectAllAction");

	UFrontEndRewards_ListRewards_C_HandleCollectAllAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Committed != nullptr)
		*Committed = params.Committed;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SetArrowVisibility
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ListRewards_C::SetArrowVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SetArrowVisibility");

	UFrontEndRewards_ListRewards_C_SetArrowVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleLastPopInFinished
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ListRewards_C::HandleLastPopInFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleLastPopInFinished");

	UFrontEndRewards_ListRewards_C_HandleLastPopInFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleOutroAnimFinished
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ListRewards_C::HandleOutroAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleOutroAnimFinished");

	UFrontEndRewards_ListRewards_C_HandleOutroAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SelectCard
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InNewIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFrontEndRewards_ListRewards_C::SelectCard(int InNewIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SelectCard");

	UFrontEndRewards_ListRewards_C_SelectCard_Params params;
	params.InNewIndex = InNewIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SetCardSelected
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewards_ItemCard_C*     Card                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFrontEndRewards_ListRewards_C::SetCardSelected(class URewards_ItemCard_C* Card)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SetCardSelected");

	UFrontEndRewards_ListRewards_C_SetCardSelected_Params params;
	params.Card = Card;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleCardClicked
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewards_ItemCard_C*     Card                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFrontEndRewards_ListRewards_C::HandleCardClicked(class URewards_ItemCard_C* Card)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleCardClicked");

	UFrontEndRewards_ListRewards_C_HandleCardClicked_Params params;
	params.Card = Card;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.ClearCards
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ListRewards_C::ClearCards()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.ClearCards");

	UFrontEndRewards_ListRewards_C_ClearCards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.PlayCardSlide
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewards_ItemCard_C*     RewardsItemCard                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          StaggerDelay                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFrontEndRewards_ListRewards_C::PlayCardSlide(class URewards_ItemCard_C* RewardsItemCard, float StaggerDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.PlayCardSlide");

	UFrontEndRewards_ListRewards_C_PlayCardSlide_Params params;
	params.RewardsItemCard = RewardsItemCard;
	params.StaggerDelay = StaggerDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SetItemDescription
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ListRewards_C::SetItemDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SetItemDescription");

	UFrontEndRewards_ListRewards_C_SetItemDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SetCardAlignment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 CardWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            SelectionIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFrontEndRewards_ListRewards_C::SetCardAlignment(class UWidget* CardWidget, int SelectionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SetCardAlignment");

	UFrontEndRewards_ListRewards_C_SetCardAlignment_Params params;
	params.CardWidget = CardWidget;
	params.SelectionIndex = SelectionIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SelectPreviousCard
// (Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ListRewards_C::SelectPreviousCard()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SelectPreviousCard");

	UFrontEndRewards_ListRewards_C_SelectPreviousCard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleLastSlideAnimFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewards_ItemCard_C*     RewardsItemCard                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFrontEndRewards_ListRewards_C::HandleLastSlideAnimFinished(class URewards_ItemCard_C* RewardsItemCard)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleLastSlideAnimFinished");

	UFrontEndRewards_ListRewards_C_HandleLastSlideAnimFinished_Params params;
	params.RewardsItemCard = RewardsItemCard;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.GetCardAlignment
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CardQueueIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CardListIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Alignment                      (Parm, OutParm, IsPlainOldData)
// struct FAnchors                Anchors                        (Parm, OutParm)
// float                          Scale                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Offset                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Angle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Translation                    (Parm, OutParm, IsPlainOldData)
// float                          DropShadowDepth                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFrontEndRewards_ListRewards_C::GetCardAlignment(int CardQueueIndex, int CardListIndex, struct FVector2D* Alignment, struct FAnchors* Anchors, float* Scale, float* Offset, float* Angle, struct FVector2D* Translation, float* DropShadowDepth)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.GetCardAlignment");

	UFrontEndRewards_ListRewards_C_GetCardAlignment_Params params;
	params.CardQueueIndex = CardQueueIndex;
	params.CardListIndex = CardListIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Alignment != nullptr)
		*Alignment = params.Alignment;
	if (Anchors != nullptr)
		*Anchors = params.Anchors;
	if (Scale != nullptr)
		*Scale = params.Scale;
	if (Offset != nullptr)
		*Offset = params.Offset;
	if (Angle != nullptr)
		*Angle = params.Angle;
	if (Translation != nullptr)
		*Translation = params.Translation;
	if (DropShadowDepth != nullptr)
		*DropShadowDepth = params.DropShadowDepth;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SelectNextCard
// (Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ListRewards_C::SelectNextCard()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SelectNextCard");

	UFrontEndRewards_ListRewards_C_SelectNextCard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.AddCard
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewards_ItemCard_C*     Card                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFrontEndRewards_ListRewards_C::AddCard(class URewards_ItemCard_C* Card)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.AddCard");

	UFrontEndRewards_ListRewards_C_AddCard_Params params;
	params.Card = Card;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.InitDesignView
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ListRewards_C::InitDesignView()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.InitDesignView");

	UFrontEndRewards_ListRewards_C_InitDesignView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFrontEndRewards_ListRewards_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.PreConstruct");

	UFrontEndRewards_ListRewards_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.DelayedCheckScroll
// (BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ListRewards_C::DelayedCheckScroll()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.DelayedCheckScroll");

	UFrontEndRewards_ListRewards_C_DelayedCheckScroll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFrontEndRewards_ListRewards_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.Construct");

	UFrontEndRewards_ListRewards_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.TransitionInBegin
// (Event, Protected, BlueprintEvent)

void UFrontEndRewards_ListRewards_C::TransitionInBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.TransitionInBegin");

	UFrontEndRewards_ListRewards_C_TransitionInBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.TransitionOutBegin
// (Event, Protected, BlueprintEvent)

void UFrontEndRewards_ListRewards_C::TransitionOutBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.TransitionOutBegin");

	UFrontEndRewards_ListRewards_C_TransitionOutBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.OnNavigationLeft
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ListRewards_C::OnNavigationLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.OnNavigationLeft");

	UFrontEndRewards_ListRewards_C_OnNavigationLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.OnNavigationRight
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ListRewards_C::OnNavigationRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.OnNavigationRight");

	UFrontEndRewards_ListRewards_C_OnNavigationRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.OnActivated
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ListRewards_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.OnActivated");

	UFrontEndRewards_ListRewards_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.OnDeactivated
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ListRewards_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.OnDeactivated");

	UFrontEndRewards_ListRewards_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.OnPrimaryAction
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ListRewards_C::OnPrimaryAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.OnPrimaryAction");

	UFrontEndRewards_ListRewards_C_OnPrimaryAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.BndEvt__ActionWidgetScroll_K2Node_ComponentBoundEvent_5_OnInputMethodChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFrontEndRewards_ListRewards_C::BndEvt__ActionWidgetScroll_K2Node_ComponentBoundEvent_5_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.BndEvt__ActionWidgetScroll_K2Node_ComponentBoundEvent_5_OnInputMethodChanged__DelegateSignature");

	UFrontEndRewards_ListRewards_C_BndEvt__ActionWidgetScroll_K2Node_ComponentBoundEvent_5_OnInputMethodChanged__DelegateSignature_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.ExecuteUbergraph_FrontEndRewards_ListRewards
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFrontEndRewards_ListRewards_C::ExecuteUbergraph_FrontEndRewards_ListRewards(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.ExecuteUbergraph_FrontEndRewards_ListRewards");

	UFrontEndRewards_ListRewards_C_ExecuteUbergraph_FrontEndRewards_ListRewards_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
