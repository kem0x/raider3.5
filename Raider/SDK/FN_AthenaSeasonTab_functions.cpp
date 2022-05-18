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

// Function AthenaSeasonTab.AthenaSeasonTab_C.UpdateLevelPageWidgetSwitcherTranslation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaSeasonTab_C::UpdateLevelPageWidgetSwitcherTranslation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonTab.AthenaSeasonTab_C.UpdateLevelPageWidgetSwitcherTranslation");

	UAthenaSeasonTab_C_UpdateLevelPageWidgetSwitcherTranslation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonTab.AthenaSeasonTab_C.OnUpdateInputType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType               NewInputType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonTab_C::OnUpdateInputType(ECommonInputType NewInputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonTab.AthenaSeasonTab_C.OnUpdateInputType");

	UAthenaSeasonTab_C_OnUpdateInputType_Params params;
	params.NewInputType = NewInputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonTab.AthenaSeasonTab_C.OpenPurchaseScreen
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaSeasonTab_C::OpenPurchaseScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonTab.AthenaSeasonTab_C.OpenPurchaseScreen");

	UAthenaSeasonTab_C_OpenPurchaseScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonTab.AthenaSeasonTab_C.Handle_GiftBattlePass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonTab_C::Handle_GiftBattlePass(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonTab.AthenaSeasonTab_C.Handle_GiftBattlePass");

	UAthenaSeasonTab_C_Handle_GiftBattlePass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function AthenaSeasonTab.AthenaSeasonTab_C.Handle_ShowFAQ
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonTab_C::Handle_ShowFAQ(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonTab.AthenaSeasonTab_C.Handle_ShowFAQ");

	UAthenaSeasonTab_C_Handle_ShowFAQ_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function AthenaSeasonTab.AthenaSeasonTab_C.SetupViewedItemName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonTab_C::SetupViewedItemName(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonTab.AthenaSeasonTab_C.SetupViewedItemName");

	UAthenaSeasonTab_C_SetupViewedItemName_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonTab.AthenaSeasonTab_C.UpdatePageCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaSeasonTab_C::UpdatePageCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonTab.AthenaSeasonTab_C.UpdatePageCount");

	UAthenaSeasonTab_C_UpdatePageCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonTab.AthenaSeasonTab_C.UpdateSeasonPurchaseState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaSeasonTab_C::UpdateSeasonPurchaseState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonTab.AthenaSeasonTab_C.UpdateSeasonPurchaseState");

	UAthenaSeasonTab_C_UpdateSeasonPurchaseState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonTab.AthenaSeasonTab_C.SetupViewedItemData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonTab_C::SetupViewedItemData(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonTab.AthenaSeasonTab_C.SetupViewedItemData");

	UAthenaSeasonTab_C_SetupViewedItemData_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonTab.AthenaSeasonTab_C.SelectPageByLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TargetLevel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonTab_C::SelectPageByLevel(int TargetLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonTab.AthenaSeasonTab_C.SelectPageByLevel");

	UAthenaSeasonTab_C_SelectPageByLevel_Params params;
	params.TargetLevel = TargetLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonTab.AthenaSeasonTab_C.GenerateLevelWidgets
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortSeasonPassLevelInfo** LevelInfo                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class USeasonPassLevelWidget*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class USeasonPassLevelWidget*> UAthenaSeasonTab_C::GenerateLevelWidgets(class UFortSeasonPassLevelInfo** LevelInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonTab.AthenaSeasonTab_C.GenerateLevelWidgets");

	UAthenaSeasonTab_C_GenerateLevelWidgets_Params params;
	params.LevelInfo = LevelInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaSeasonTab.AthenaSeasonTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaSeasonTab_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonTab.AthenaSeasonTab_C.Construct");

	UAthenaSeasonTab_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonTab.AthenaSeasonTab_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaSeasonTab_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonTab.AthenaSeasonTab_C.OnActivated");

	UAthenaSeasonTab_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonTab.AthenaSeasonTab_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAthenaSeasonTab_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonTab.AthenaSeasonTab_C.OnDeactivated");

	UAthenaSeasonTab_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonTab.AthenaSeasonTab_C.OnNavigateToLevel
// (Event, Protected, BlueprintEvent)
// Parameters:
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonTab_C::OnNavigateToLevel(int* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonTab.AthenaSeasonTab_C.OnNavigateToLevel");

	UAthenaSeasonTab_C_OnNavigateToLevel_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonTab.AthenaSeasonTab_C.OnStartReadingOffers
// (Event, Public, BlueprintEvent)

void UAthenaSeasonTab_C::OnStartReadingOffers()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonTab.AthenaSeasonTab_C.OnStartReadingOffers");

	UAthenaSeasonTab_C_OnStartReadingOffers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonTab.AthenaSeasonTab_C.OnOffersGenerated
// (Event, Public, BlueprintEvent)

void UAthenaSeasonTab_C::OnOffersGenerated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonTab.AthenaSeasonTab_C.OnOffersGenerated");

	UAthenaSeasonTab_C_OnOffersGenerated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonTab.AthenaSeasonTab_C.GenerateOfferWidget
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortDirectAcquisitionOfferInfo** OfferData                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonTab_C::GenerateOfferWidget(class UFortDirectAcquisitionOfferInfo** OfferData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonTab.AthenaSeasonTab_C.GenerateOfferWidget");

	UAthenaSeasonTab_C_GenerateOfferWidget_Params params;
	params.OfferData = OfferData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonTab.AthenaSeasonTab_C.OnSeasonPassChanged
// (Event, Protected, BlueprintEvent)

void UAthenaSeasonTab_C::OnSeasonPassChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonTab.AthenaSeasonTab_C.OnSeasonPassChanged");

	UAthenaSeasonTab_C_OnSeasonPassChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonTab.AthenaSeasonTab_C.BndEvt__PurchaseSeasonBtn_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaSeasonTab_C::BndEvt__PurchaseSeasonBtn_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonTab.AthenaSeasonTab_C.BndEvt__PurchaseSeasonBtn_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature");

	UAthenaSeasonTab_C_BndEvt__PurchaseSeasonBtn_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonTab.AthenaSeasonTab_C.OnLevelsGenerated
// (Event, Protected, BlueprintEvent)

void UAthenaSeasonTab_C::OnLevelsGenerated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonTab.AthenaSeasonTab_C.OnLevelsGenerated");

	UAthenaSeasonTab_C_OnLevelsGenerated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonTab.AthenaSeasonTab_C.BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_45_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaSeasonTab_C::BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_45_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonTab.AthenaSeasonTab_C.BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_45_CommonButtonClicked__DelegateSignature");

	UAthenaSeasonTab_C_BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_45_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonTab.AthenaSeasonTab_C.BndEvt__PageRightBtn_K2Node_ComponentBoundEvent_84_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaSeasonTab_C::BndEvt__PageRightBtn_K2Node_ComponentBoundEvent_84_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonTab.AthenaSeasonTab_C.BndEvt__PageRightBtn_K2Node_ComponentBoundEvent_84_CommonButtonClicked__DelegateSignature");

	UAthenaSeasonTab_C_BndEvt__PageRightBtn_K2Node_ComponentBoundEvent_84_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonTab.AthenaSeasonTab_C.HandlePageLeft
// (BlueprintCallable, BlueprintEvent)

void UAthenaSeasonTab_C::HandlePageLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonTab.AthenaSeasonTab_C.HandlePageLeft");

	UAthenaSeasonTab_C_HandlePageLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonTab.AthenaSeasonTab_C.HandlePageRight
// (BlueprintCallable, BlueprintEvent)

void UAthenaSeasonTab_C::HandlePageRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonTab.AthenaSeasonTab_C.HandlePageRight");

	UAthenaSeasonTab_C_HandlePageRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonTab.AthenaSeasonTab_C.BndEvt__LevelPageWidgetSwitcher_K2Node_ComponentBoundEvent_1_OnActiveWidgetChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 ActiveWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ActiveWidgetIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonTab_C::BndEvt__LevelPageWidgetSwitcher_K2Node_ComponentBoundEvent_1_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int ActiveWidgetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonTab.AthenaSeasonTab_C.BndEvt__LevelPageWidgetSwitcher_K2Node_ComponentBoundEvent_1_OnActiveWidgetChanged__DelegateSignature");

	UAthenaSeasonTab_C_BndEvt__LevelPageWidgetSwitcher_K2Node_ComponentBoundEvent_1_OnActiveWidgetChanged__DelegateSignature_Params params;
	params.ActiveWidget = ActiveWidget;
	params.ActiveWidgetIndex = ActiveWidgetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonTab.AthenaSeasonTab_C.BndEvt__PurchaseLevelBtn_K2Node_ComponentBoundEvent_40_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaSeasonTab_C::BndEvt__PurchaseLevelBtn_K2Node_ComponentBoundEvent_40_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonTab.AthenaSeasonTab_C.BndEvt__PurchaseLevelBtn_K2Node_ComponentBoundEvent_40_CommonButtonClicked__DelegateSignature");

	UAthenaSeasonTab_C_BndEvt__PurchaseLevelBtn_K2Node_ComponentBoundEvent_40_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonTab.AthenaSeasonTab_C.NoOffersAvailable
// (Event, Public, BlueprintEvent)

void UAthenaSeasonTab_C::NoOffersAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonTab.AthenaSeasonTab_C.NoOffersAvailable");

	UAthenaSeasonTab_C_NoOffersAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonTab.AthenaSeasonTab_C.ScrollPositive
// (Event, Protected, BlueprintEvent)

void UAthenaSeasonTab_C::ScrollPositive()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonTab.AthenaSeasonTab_C.ScrollPositive");

	UAthenaSeasonTab_C_ScrollPositive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonTab.AthenaSeasonTab_C.ScrollNegative
// (Event, Protected, BlueprintEvent)

void UAthenaSeasonTab_C::ScrollNegative()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonTab.AthenaSeasonTab_C.ScrollNegative");

	UAthenaSeasonTab_C_ScrollNegative_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonTab.AthenaSeasonTab_C.UpdateStoreHasStarsNotification
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bShowNotification              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonTab_C::UpdateStoreHasStarsNotification(bool* bShowNotification)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonTab.AthenaSeasonTab_C.UpdateStoreHasStarsNotification");

	UAthenaSeasonTab_C_UpdateStoreHasStarsNotification_Params params;
	params.bShowNotification = bShowNotification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonTab.AthenaSeasonTab_C.SetupInput
// (BlueprintCallable, BlueprintEvent)

void UAthenaSeasonTab_C::SetupInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonTab.AthenaSeasonTab_C.SetupInput");

	UAthenaSeasonTab_C_SetupInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonTab.AthenaSeasonTab_C.OnFAQStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortUIFeature                 ChangedFeature                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortUIFeatureState            NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortUIFeatureStateReason      StateReason                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonTab_C::OnFAQStateChanged(EFortUIFeature ChangedFeature, EFortUIFeatureState NewState, EFortUIFeatureStateReason StateReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonTab.AthenaSeasonTab_C.OnFAQStateChanged");

	UAthenaSeasonTab_C_OnFAQStateChanged_Params params;
	params.ChangedFeature = ChangedFeature;
	params.NewState = NewState;
	params.StateReason = StateReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonTab.AthenaSeasonTab_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonTab_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonTab.AthenaSeasonTab_C.Tick");

	UAthenaSeasonTab_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonTab.AthenaSeasonTab_C.BndEvt__SwipePanel_K2Node_ComponentBoundEvent_103_OnFortSwipeEvent__DelegateSignature
// (BlueprintEvent)

void UAthenaSeasonTab_C::BndEvt__SwipePanel_K2Node_ComponentBoundEvent_103_OnFortSwipeEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonTab.AthenaSeasonTab_C.BndEvt__SwipePanel_K2Node_ComponentBoundEvent_103_OnFortSwipeEvent__DelegateSignature");

	UAthenaSeasonTab_C_BndEvt__SwipePanel_K2Node_ComponentBoundEvent_103_OnFortSwipeEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonTab.AthenaSeasonTab_C.BndEvt__SwipePanel_K2Node_ComponentBoundEvent_118_OnFortSwipeEvent__DelegateSignature
// (BlueprintEvent)

void UAthenaSeasonTab_C::BndEvt__SwipePanel_K2Node_ComponentBoundEvent_118_OnFortSwipeEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonTab.AthenaSeasonTab_C.BndEvt__SwipePanel_K2Node_ComponentBoundEvent_118_OnFortSwipeEvent__DelegateSignature");

	UAthenaSeasonTab_C_BndEvt__SwipePanel_K2Node_ComponentBoundEvent_118_OnFortSwipeEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonTab.AthenaSeasonTab_C.OnNoCurrentSeason
// (Event, Protected, BlueprintEvent)

void UAthenaSeasonTab_C::OnNoCurrentSeason()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonTab.AthenaSeasonTab_C.OnNoCurrentSeason");

	UAthenaSeasonTab_C_OnNoCurrentSeason_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonTab.AthenaSeasonTab_C.ExecuteUbergraph_AthenaSeasonTab
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonTab_C::ExecuteUbergraph_AthenaSeasonTab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonTab.AthenaSeasonTab_C.ExecuteUbergraph_AthenaSeasonTab");

	UAthenaSeasonTab_C_ExecuteUbergraph_AthenaSeasonTab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
