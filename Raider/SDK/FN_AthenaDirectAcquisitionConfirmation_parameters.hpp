#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.SetPurchaseNumber
struct UAthenaDirectAcquisitionConfirmation_C_SetPurchaseNumber_Params
{
	int                                                InNumToPurchse;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.UpdateCatalogOfferName
struct UAthenaDirectAcquisitionConfirmation_C_UpdateCatalogOfferName_Params
{
};

// Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.UpdateItemList
struct UAthenaDirectAcquisitionConfirmation_C_UpdateItemList_Params
{
};

// Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.SetupPrice
struct UAthenaDirectAcquisitionConfirmation_C_SetupPrice_Params
{
	class UWidget*                                     PriceContainer;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  NormalPriceText;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     SalePriceContainer;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  SalePriceText;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      CurrencyImage;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.UpdateFromOffer
struct UAthenaDirectAcquisitionConfirmation_C_UpdateFromOffer_Params
{
};

// Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.OnOfferSet
struct UAthenaDirectAcquisitionConfirmation_C_OnOfferSet_Params
{
};

// Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.OnActivated
struct UAthenaDirectAcquisitionConfirmation_C_OnActivated_Params
{
};

// Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
struct UAthenaDirectAcquisitionConfirmation_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.Construct
struct UAthenaDirectAcquisitionConfirmation_C_Construct_Params
{
};

// Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_171_CommonButtonClicked__DelegateSignature
struct UAthenaDirectAcquisitionConfirmation_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_171_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.ExecuteUbergraph_AthenaDirectAcquisitionConfirmation
struct UAthenaDirectAcquisitionConfirmation_C_ExecuteUbergraph_AthenaDirectAcquisitionConfirmation_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.Decline__DelegateSignature
struct UAthenaDirectAcquisitionConfirmation_C_Decline__DelegateSignature_Params
{
};

// Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.Confirm__DelegateSignature
struct UAthenaDirectAcquisitionConfirmation_C_Confirm__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
