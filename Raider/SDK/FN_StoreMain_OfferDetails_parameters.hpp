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

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.BacchusInit
struct UStoreMain_OfferDetails_C_BacchusInit_Params
{
};

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.PopDetails
struct UStoreMain_OfferDetails_C_PopDetails_Params
{
};

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.Init
struct UStoreMain_OfferDetails_C_Init_Params
{
};

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.HandleBack
struct UStoreMain_OfferDetails_C_HandleBack_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.OnActivated
struct UStoreMain_OfferDetails_C_OnActivated_Params
{
};

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.OnDeactivated
struct UStoreMain_OfferDetails_C_OnDeactivated_Params
{
};

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature
struct UStoreMain_OfferDetails_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.HandlePurchaseComplete
struct UStoreMain_OfferDetails_C_HandlePurchaseComplete_Params
{
	bool                                               bSuccess;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.Construct
struct UStoreMain_OfferDetails_C_Construct_Params
{
};

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.Destruct
struct UStoreMain_OfferDetails_C_Destruct_Params
{
};

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_25_CommonButtonClicked__DelegateSignature
struct UStoreMain_OfferDetails_C_BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_25_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.ExecuteUbergraph_StoreMain_OfferDetails
struct UStoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
