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

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.GetListItemObject
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UAthenaDirectAcquisitionOfferWidget_C::GetListItemObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.GetListItemObject");

	UAthenaDirectAcquisitionOfferWidget_C_GetListItemObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateBadge
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferWidget_C::UpdateBadge()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateBadge");

	UAthenaDirectAcquisitionOfferWidget_C_UpdateBadge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateStyle_Sizing
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferWidget_C::UpdateStyle_Sizing()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateStyle_Sizing");

	UAthenaDirectAcquisitionOfferWidget_C_UpdateStyle_Sizing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateStyle_Border
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferWidget_C::UpdateStyle_Border()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateStyle_Border");

	UAthenaDirectAcquisitionOfferWidget_C_UpdateStyle_Border_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateStyle_MainText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferWidget_C::UpdateStyle_MainText()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateStyle_MainText");

	UAthenaDirectAcquisitionOfferWidget_C_UpdateStyle_MainText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.SetupSaleInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   SaleText                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   NormalPrice                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 BannerOverrideTag              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bHasSale                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHasBattlePassStars            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            iNumOfBattlePassStars          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitionOfferWidget_C::SetupSaleInfo(const struct FText& SaleText, const struct FText& NormalPrice, const struct FString& BannerOverrideTag, bool bHasSale, bool bHasBattlePassStars, int iNumOfBattlePassStars)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.SetupSaleInfo");

	UAthenaDirectAcquisitionOfferWidget_C_SetupSaleInfo_Params params;
	params.SaleText = SaleText;
	params.NormalPrice = NormalPrice;
	params.BannerOverrideTag = BannerOverrideTag;
	params.bHasSale = bHasSale;
	params.bHasBattlePassStars = bHasBattlePassStars;
	params.iNumOfBattlePassStars = iNumOfBattlePassStars;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateSaleStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferWidget_C::UpdateSaleStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateSaleStatus");

	UAthenaDirectAcquisitionOfferWidget_C_UpdateSaleStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.Setup Price
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferWidget_C::Setup_Price()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.Setup Price");

	UAthenaDirectAcquisitionOfferWidget_C_Setup_Price_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateShortDescription
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferWidget_C::UpdateShortDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateShortDescription");

	UAthenaDirectAcquisitionOfferWidget_C_UpdateShortDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferWidget_C::UpdateName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateName");

	UAthenaDirectAcquisitionOfferWidget_C_UpdateName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.LargeImageLoaded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 LoadedObject                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitionOfferWidget_C::LargeImageLoaded(class UObject* LoadedObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.LargeImageLoaded");

	UAthenaDirectAcquisitionOfferWidget_C_LargeImageLoaded_Params params;
	params.LoadedObject = LoadedObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.SetupPrice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PriceIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UItemCount_C*            PriceWidget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaDirectAcquisitionOfferWidget_C::SetupPrice(int PriceIndex, class UItemCount_C* PriceWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.SetupPrice");

	UAthenaDirectAcquisitionOfferWidget_C_SetupPrice_Params params;
	params.PriceIndex = PriceIndex;
	params.PriceWidget = PriceWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferWidget_C::UpdateStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateStyle");

	UAthenaDirectAcquisitionOfferWidget_C_UpdateStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateAvailability
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferWidget_C::UpdateAvailability()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateAvailability");

	UAthenaDirectAcquisitionOfferWidget_C_UpdateAvailability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OfferSet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferWidget_C::OfferSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OfferSet");

	UAthenaDirectAcquisitionOfferWidget_C_OfferSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UAthenaDirectAcquisitionOfferWidget_C::BP_OnEntryReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.BP_OnEntryReleased");

	UAthenaDirectAcquisitionOfferWidget_C_BP_OnEntryReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsExpanded                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitionOfferWidget_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.BP_OnItemExpansionChanged");

	UAthenaDirectAcquisitionOfferWidget_C_BP_OnItemExpansionChanged_Params params;
	params.bIsExpanded = bIsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitionOfferWidget_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.BP_OnItemSelectionChanged");

	UAthenaDirectAcquisitionOfferWidget_C_BP_OnItemSelectionChanged_Params params;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OnOfferSet
// (Event, Public, BlueprintEvent)

void UAthenaDirectAcquisitionOfferWidget_C::OnOfferSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OnOfferSet");

	UAthenaDirectAcquisitionOfferWidget_C_OnOfferSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)

void UAthenaDirectAcquisitionOfferWidget_C::BP_OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.BP_OnClicked");

	UAthenaDirectAcquisitionOfferWidget_C_BP_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.HandleOfferPurchaseComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitionOfferWidget_C::HandleOfferPurchaseComplete(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.HandleOfferPurchaseComplete");

	UAthenaDirectAcquisitionOfferWidget_C_HandleOfferPurchaseComplete_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UAthenaDirectAcquisitionOfferWidget_C::BP_OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.BP_OnHovered");

	UAthenaDirectAcquisitionOfferWidget_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UAthenaDirectAcquisitionOfferWidget_C::BP_OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.BP_OnUnhovered");

	UAthenaDirectAcquisitionOfferWidget_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OnUpdateStatus
// (Event, Public, BlueprintEvent)

void UAthenaDirectAcquisitionOfferWidget_C::OnUpdateStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OnUpdateStatus");

	UAthenaDirectAcquisitionOfferWidget_C_OnUpdateStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                 ListItemObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitionOfferWidget_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OnListItemObjectSet");

	UAthenaDirectAcquisitionOfferWidget_C_OnListItemObjectSet_Params params;
	params.ListItemObject = ListItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaDirectAcquisitionOfferWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.Construct");

	UAthenaDirectAcquisitionOfferWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OnOfferAdded
// (Event, Public, BlueprintEvent)

void UAthenaDirectAcquisitionOfferWidget_C::OnOfferAdded()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OnOfferAdded");

	UAthenaDirectAcquisitionOfferWidget_C_OnOfferAdded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OfferCarousel
// (BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferWidget_C::OfferCarousel()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OfferCarousel");

	UAthenaDirectAcquisitionOfferWidget_C_OfferCarousel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitionOfferWidget_C::ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget");

	UAthenaDirectAcquisitionOfferWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
