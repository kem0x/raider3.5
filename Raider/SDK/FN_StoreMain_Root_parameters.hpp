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

// Function StoreMain_Root.StoreMain_Root_C.TriggerResetOfferTileAnim
struct UStoreMain_Root_C_TriggerResetOfferTileAnim_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.TriggerNextOfferTileAnim
struct UStoreMain_Root_C_TriggerNextOfferTileAnim_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.TriggerInitialOfferTileReset
struct UStoreMain_Root_C_TriggerInitialOfferTileReset_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.UpdateCurrencyNotification
struct UStoreMain_Root_C_UpdateCurrencyNotification_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.HandleRedeem
struct UStoreMain_Root_C_HandleRedeem_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StoreMain_Root.StoreMain_Root_C.InitInputActions
struct UStoreMain_Root_C_InitInputActions_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.HandleBack
struct UStoreMain_Root_C_HandleBack_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StoreMain_Root.StoreMain_Root_C.HandleChatEntered
struct UStoreMain_Root_C_HandleChatEntered_Params
{
	bool                                               Entered_Chat;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreMain_Root.StoreMain_Root_C.AboutToPushDetails
struct UStoreMain_Root_C_AboutToPushDetails_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.IsOffersScrollBoxActive
struct UStoreMain_Root_C_IsOffersScrollBoxActive_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StoreMain_Root.StoreMain_Root_C.SetFocus
struct UStoreMain_Root_C_SetFocus_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.AddOffer
struct UStoreMain_Root_C_AddOffer_Params
{
	class UFortMtxStoreOfferBase*                      MtxOffer;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function StoreMain_Root.StoreMain_Root_C.NoOffersAvailable
struct UStoreMain_Root_C_NoOffersAvailable_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.OnMtxOfferGenerated
struct UStoreMain_Root_C_OnMtxOfferGenerated_Params
{
	class UFortMtxStoreOfferBase**                     MtxOffer;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function StoreMain_Root.StoreMain_Root_C.OnOffersGenerated
struct UStoreMain_Root_C_OnOffersGenerated_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.Destruct
struct UStoreMain_Root_C_Destruct_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.Construct
struct UStoreMain_Root_C_Construct_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.OnStartReadingOffers
struct UStoreMain_Root_C_OnStartReadingOffers_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.OnBeginIntro
struct UStoreMain_Root_C_OnBeginIntro_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.OnBeginOutro
struct UStoreMain_Root_C_OnBeginOutro_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.OnUpdateOtherPlatformMTXMessage
struct UStoreMain_Root_C_OnUpdateOtherPlatformMTXMessage_Params
{
	bool*                                              HasOtherPlatformCurrency;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      CurrencyMessageLocText;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function StoreMain_Root.StoreMain_Root_C.ExecuteUbergraph_StoreMain_Root
struct UStoreMain_Root_C_ExecuteUbergraph_StoreMain_Root_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
