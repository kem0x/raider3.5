#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AthenaSeasonTab.AthenaSeasonTab_C.UpdateLevelPageWidgetSwitcherTranslation
struct UAthenaSeasonTab_C_UpdateLevelPageWidgetSwitcherTranslation_Params
{
};

// Function AthenaSeasonTab.AthenaSeasonTab_C.OnUpdateInputType
struct UAthenaSeasonTab_C_OnUpdateInputType_Params
{
	ECommonInputType                                   NewInputType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonTab.AthenaSeasonTab_C.OpenPurchaseScreen
struct UAthenaSeasonTab_C_OpenPurchaseScreen_Params
{
};

// Function AthenaSeasonTab.AthenaSeasonTab_C.Handle_GiftBattlePass
struct UAthenaSeasonTab_C_Handle_GiftBattlePass_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonTab.AthenaSeasonTab_C.Handle_ShowFAQ
struct UAthenaSeasonTab_C_Handle_ShowFAQ_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonTab.AthenaSeasonTab_C.SetupViewedItemName
struct UAthenaSeasonTab_C_SetupViewedItemName_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonTab.AthenaSeasonTab_C.UpdatePageCount
struct UAthenaSeasonTab_C_UpdatePageCount_Params
{
};

// Function AthenaSeasonTab.AthenaSeasonTab_C.UpdateSeasonPurchaseState
struct UAthenaSeasonTab_C_UpdateSeasonPurchaseState_Params
{
};

// Function AthenaSeasonTab.AthenaSeasonTab_C.SetupViewedItemData
struct UAthenaSeasonTab_C_SetupViewedItemData_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonTab.AthenaSeasonTab_C.SelectPageByLevel
struct UAthenaSeasonTab_C_SelectPageByLevel_Params
{
	int                                                TargetLevel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonTab.AthenaSeasonTab_C.GenerateLevelWidgets
struct UAthenaSeasonTab_C_GenerateLevelWidgets_Params
{
	class UFortSeasonPassLevelInfo**                   LevelInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class USeasonPassLevelWidget*>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AthenaSeasonTab.AthenaSeasonTab_C.Construct
struct UAthenaSeasonTab_C_Construct_Params
{
};

// Function AthenaSeasonTab.AthenaSeasonTab_C.OnActivated
struct UAthenaSeasonTab_C_OnActivated_Params
{
};

// Function AthenaSeasonTab.AthenaSeasonTab_C.OnDeactivated
struct UAthenaSeasonTab_C_OnDeactivated_Params
{
};

// Function AthenaSeasonTab.AthenaSeasonTab_C.OnNavigateToLevel
struct UAthenaSeasonTab_C_OnNavigateToLevel_Params
{
	int*                                               Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonTab.AthenaSeasonTab_C.OnStartReadingOffers
struct UAthenaSeasonTab_C_OnStartReadingOffers_Params
{
};

// Function AthenaSeasonTab.AthenaSeasonTab_C.OnOffersGenerated
struct UAthenaSeasonTab_C_OnOffersGenerated_Params
{
};

// Function AthenaSeasonTab.AthenaSeasonTab_C.GenerateOfferWidget
struct UAthenaSeasonTab_C_GenerateOfferWidget_Params
{
	class UFortDirectAcquisitionOfferInfo**            OfferData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonTab.AthenaSeasonTab_C.OnSeasonPassChanged
struct UAthenaSeasonTab_C_OnSeasonPassChanged_Params
{
};

// Function AthenaSeasonTab.AthenaSeasonTab_C.BndEvt__PurchaseSeasonBtn_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature
struct UAthenaSeasonTab_C_BndEvt__PurchaseSeasonBtn_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaSeasonTab.AthenaSeasonTab_C.OnLevelsGenerated
struct UAthenaSeasonTab_C_OnLevelsGenerated_Params
{
};

// Function AthenaSeasonTab.AthenaSeasonTab_C.BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_45_CommonButtonClicked__DelegateSignature
struct UAthenaSeasonTab_C_BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_45_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaSeasonTab.AthenaSeasonTab_C.BndEvt__PageRightBtn_K2Node_ComponentBoundEvent_84_CommonButtonClicked__DelegateSignature
struct UAthenaSeasonTab_C_BndEvt__PageRightBtn_K2Node_ComponentBoundEvent_84_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaSeasonTab.AthenaSeasonTab_C.HandlePageLeft
struct UAthenaSeasonTab_C_HandlePageLeft_Params
{
};

// Function AthenaSeasonTab.AthenaSeasonTab_C.HandlePageRight
struct UAthenaSeasonTab_C_HandlePageRight_Params
{
};

// Function AthenaSeasonTab.AthenaSeasonTab_C.BndEvt__LevelPageWidgetSwitcher_K2Node_ComponentBoundEvent_1_OnActiveWidgetChanged__DelegateSignature
struct UAthenaSeasonTab_C_BndEvt__LevelPageWidgetSwitcher_K2Node_ComponentBoundEvent_1_OnActiveWidgetChanged__DelegateSignature_Params
{
	class UWidget*                                     ActiveWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ActiveWidgetIndex;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonTab.AthenaSeasonTab_C.BndEvt__PurchaseLevelBtn_K2Node_ComponentBoundEvent_40_CommonButtonClicked__DelegateSignature
struct UAthenaSeasonTab_C_BndEvt__PurchaseLevelBtn_K2Node_ComponentBoundEvent_40_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaSeasonTab.AthenaSeasonTab_C.NoOffersAvailable
struct UAthenaSeasonTab_C_NoOffersAvailable_Params
{
};

// Function AthenaSeasonTab.AthenaSeasonTab_C.ScrollPositive
struct UAthenaSeasonTab_C_ScrollPositive_Params
{
};

// Function AthenaSeasonTab.AthenaSeasonTab_C.ScrollNegative
struct UAthenaSeasonTab_C_ScrollNegative_Params
{
};

// Function AthenaSeasonTab.AthenaSeasonTab_C.UpdateStoreHasStarsNotification
struct UAthenaSeasonTab_C_UpdateStoreHasStarsNotification_Params
{
	bool*                                              bShowNotification;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonTab.AthenaSeasonTab_C.SetupInput
struct UAthenaSeasonTab_C_SetupInput_Params
{
};

// Function AthenaSeasonTab.AthenaSeasonTab_C.OnFAQStateChanged
struct UAthenaSeasonTab_C_OnFAQStateChanged_Params
{
	EFortUIFeature                                     ChangedFeature;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortUIFeatureState                                NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortUIFeatureStateReason                          StateReason;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonTab.AthenaSeasonTab_C.Tick
struct UAthenaSeasonTab_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonTab.AthenaSeasonTab_C.BndEvt__SwipePanel_K2Node_ComponentBoundEvent_103_OnFortSwipeEvent__DelegateSignature
struct UAthenaSeasonTab_C_BndEvt__SwipePanel_K2Node_ComponentBoundEvent_103_OnFortSwipeEvent__DelegateSignature_Params
{
};

// Function AthenaSeasonTab.AthenaSeasonTab_C.BndEvt__SwipePanel_K2Node_ComponentBoundEvent_118_OnFortSwipeEvent__DelegateSignature
struct UAthenaSeasonTab_C_BndEvt__SwipePanel_K2Node_ComponentBoundEvent_118_OnFortSwipeEvent__DelegateSignature_Params
{
};

// Function AthenaSeasonTab.AthenaSeasonTab_C.OnNoCurrentSeason
struct UAthenaSeasonTab_C_OnNoCurrentSeason_Params
{
};

// Function AthenaSeasonTab.AthenaSeasonTab_C.ExecuteUbergraph_AthenaSeasonTab
struct UAthenaSeasonTab_C_ExecuteUbergraph_AthenaSeasonTab_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
