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

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateCamera
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::UpdateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateCamera");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_UpdateCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdatePreviewButton
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::UpdatePreviewButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdatePreviewButton");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_UpdatePreviewButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateViewedItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               ViewedItem                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::UpdateViewedItem(class UFortItem* ViewedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateViewedItem");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_UpdateViewedItem_Params params;
	params.ViewedItem = ViewedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.FixupBackpack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAccountItemDefinition* ItemDef                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UFortAccountItemDefinition*> AllItemDefs                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UAthenaSeasonReward_C*   RewardWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::FixupBackpack(class UFortAccountItemDefinition* ItemDef, class UAthenaSeasonReward_C* RewardWidget, TArray<class UFortAccountItemDefinition*>* AllItemDefs)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.FixupBackpack");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_FixupBackpack_Params params;
	params.ItemDef = ItemDef;
	params.RewardWidget = RewardWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllItemDefs != nullptr)
		*AllItemDefs = params.AllItemDefs;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.DeclinePurchase
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::DeclinePurchase()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.DeclinePurchase");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_DeclinePurchase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.ExecutePurchase
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::ExecutePurchase()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.ExecutePurchase");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_ExecutePurchase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateCatalogOfferName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::UpdateCatalogOfferName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateCatalogOfferName");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_UpdateCatalogOfferName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateItemList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::UpdateItemList()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateItemList");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_UpdateItemList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.GetWidgetForFramingViewedItem
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UAthenaDirectAcquisitionOfferDetailsWidget_C::GetWidgetForFramingViewedItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.GetWidgetForFramingViewedItem");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_GetWidgetForFramingViewedItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.SetupSaleInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bHasSale                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   SaleText                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 BannerOverrideTag              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FText                   NormalPrice                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bHasBattlePassStars            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NumOfBattlePassStars           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::SetupSaleInfo(bool bHasSale, const struct FText& SaleText, const struct FString& BannerOverrideTag, const struct FText& NormalPrice, bool bHasBattlePassStars, int NumOfBattlePassStars)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.SetupSaleInfo");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_SetupSaleInfo_Params params;
	params.bHasSale = bHasSale;
	params.SaleText = SaleText;
	params.BannerOverrideTag = BannerOverrideTag;
	params.NormalPrice = NormalPrice;
	params.bHasBattlePassStars = bHasBattlePassStars;
	params.NumOfBattlePassStars = NumOfBattlePassStars;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateSaleStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::UpdateSaleStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateSaleStatus");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_UpdateSaleStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdatePurchaseQuantity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::UpdatePurchaseQuantity()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdatePurchaseQuantity");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_UpdatePurchaseQuantity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateAvailability
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::UpdateAvailability()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateAvailability");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_UpdateAvailability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.Update Locked Information
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::Update_Locked_Information()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.Update Locked Information");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_Update_Locked_Information_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.AttemptPurchase
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::AttemptPurchase()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.AttemptPurchase");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_AttemptPurchase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.HandlePurchaseOfferComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::HandlePurchaseOfferComplete(bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.HandlePurchaseOfferComplete");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_HandlePurchaseOfferComplete_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.SetupPrice
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UIconTextButton_C*       PurchaseButton                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget*                 PriceContainer                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UTextBlock*              NormalPriceText                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget*                 SalePriceContainer             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UTextBlock*              SalePriceText                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UImage*                  CurrencyImage                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::SetupPrice(class UIconTextButton_C* PurchaseButton, class UWidget* PriceContainer, class UTextBlock* NormalPriceText, class UWidget* SalePriceContainer, class UTextBlock* SalePriceText, class UImage* CurrencyImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.SetupPrice");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_SetupPrice_Params params;
	params.PurchaseButton = PurchaseButton;
	params.PriceContainer = PriceContainer;
	params.NormalPriceText = NormalPriceText;
	params.SalePriceContainer = SalePriceContainer;
	params.SalePriceText = SalePriceText;
	params.CurrencyImage = CurrencyImage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.PopDetails
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::PopDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.PopDetails");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_PopDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::HandleBack(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.HandleBack");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateFromOffer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::UpdateFromOffer()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateFromOffer");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_UpdateFromOffer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.DialogResult_9E262B7A4CA17B2146A54B8A29CFC473
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::DialogResult_9E262B7A4CA17B2146A54B8A29CFC473(EFortDialogResult Result, const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.DialogResult_9E262B7A4CA17B2146A54B8A29CFC473");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_DialogResult_9E262B7A4CA17B2146A54B8A29CFC473_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.OnOfferSet
// (Event, Public, BlueprintEvent)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::OnOfferSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.OnOfferSet");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_OnOfferSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.OnActivated");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.Construct");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.OnUpdateStatus
// (Event, Public, BlueprintEvent)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::OnUpdateStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.OnUpdateStatus");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_OnUpdateStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__QuantityToPurchaseLeft_K2Node_ComponentBoundEvent_777_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::BndEvt__QuantityToPurchaseLeft_K2Node_ComponentBoundEvent_777_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__QuantityToPurchaseLeft_K2Node_ComponentBoundEvent_777_CommonButtonClicked__DelegateSignature");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_BndEvt__QuantityToPurchaseLeft_K2Node_ComponentBoundEvent_777_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__QuantityToPurchaseRight_K2Node_ComponentBoundEvent_794_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::BndEvt__QuantityToPurchaseRight_K2Node_ComponentBoundEvent_794_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__QuantityToPurchaseRight_K2Node_ComponentBoundEvent_794_CommonButtonClicked__DelegateSignature");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_BndEvt__QuantityToPurchaseRight_K2Node_ComponentBoundEvent_794_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.Show Not Enough Currency
// (BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::Show_Not_Enough_Currency()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.Show Not Enough Currency");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_Show_Not_Enough_Currency_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.PurchaseAmountLeft
// (Event, Public, BlueprintEvent)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::PurchaseAmountLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.PurchaseAmountLeft");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_PurchaseAmountLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.PurchaseAmountRight
// (Event, Public, BlueprintEvent)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::PurchaseAmountRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.PurchaseAmountRight");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_PurchaseAmountRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__Button_Next_K2Node_ComponentBoundEvent_54_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::BndEvt__Button_Next_K2Node_ComponentBoundEvent_54_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__Button_Next_K2Node_ComponentBoundEvent_54_CommonButtonClicked__DelegateSignature");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_BndEvt__Button_Next_K2Node_ComponentBoundEvent_54_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__Button_Previous_K2Node_ComponentBoundEvent_83_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::BndEvt__Button_Previous_K2Node_ComponentBoundEvent_83_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__Button_Previous_K2Node_ComponentBoundEvent_83_CommonButtonClicked__DelegateSignature");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_BndEvt__Button_Previous_K2Node_ComponentBoundEvent_83_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__GiftButton_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::BndEvt__GiftButton_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__GiftButton_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_BndEvt__GiftButton_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::BndEvt__PanelButton_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_BndEvt__PanelButton_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__SwipePanel_K2Node_ComponentBoundEvent_11_OnFortSwipeEvent__DelegateSignature
// (BlueprintEvent)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::BndEvt__SwipePanel_K2Node_ComponentBoundEvent_11_OnFortSwipeEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__SwipePanel_K2Node_ComponentBoundEvent_11_OnFortSwipeEvent__DelegateSignature");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_BndEvt__SwipePanel_K2Node_ComponentBoundEvent_11_OnFortSwipeEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__SwipePanel_K2Node_ComponentBoundEvent_29_OnFortSwipeEvent__DelegateSignature
// (BlueprintEvent)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::BndEvt__SwipePanel_K2Node_ComponentBoundEvent_29_OnFortSwipeEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__SwipePanel_K2Node_ComponentBoundEvent_29_OnFortSwipeEvent__DelegateSignature");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_BndEvt__SwipePanel_K2Node_ComponentBoundEvent_29_OnFortSwipeEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.OnBeginIntro
// (Event, Public, BlueprintEvent)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::OnBeginIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.OnBeginIntro");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_OnBeginIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.HandleVaultViewItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::HandleVaultViewItem(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.HandleVaultViewItem");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_HandleVaultViewItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateCenterandBinding
// (BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::UpdateCenterandBinding()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateCenterandBinding");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_UpdateCenterandBinding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__PreviewStylesButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::BndEvt__PreviewStylesButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__PreviewStylesButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_BndEvt__PreviewStylesButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.OnDeactivated");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateItemViewModeBP
// (Event, Protected, BlueprintEvent)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::UpdateItemViewModeBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateItemViewModeBP");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_UpdateItemViewModeBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.ExecuteUbergraph_AthenaDirectAcquisitionOfferDetailsWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::ExecuteUbergraph_AthenaDirectAcquisitionOfferDetailsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.ExecuteUbergraph_AthenaDirectAcquisitionOfferDetailsWidget");

	UAthenaDirectAcquisitionOfferDetailsWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferDetailsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
