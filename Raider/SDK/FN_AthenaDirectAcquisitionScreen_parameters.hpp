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

// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.Focus
struct UAthenaDirectAcquisitionScreen_C_Focus_Params
{
};

// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.GenerateOfferWidget
struct UAthenaDirectAcquisitionScreen_C_GenerateOfferWidget_Params
{
	class UFortDirectAcquisitionOfferInfo**            OfferData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.NoOffersAvailable
struct UAthenaDirectAcquisitionScreen_C_NoOffersAvailable_Params
{
};

// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.OnStartReadingOffers
struct UAthenaDirectAcquisitionScreen_C_OnStartReadingOffers_Params
{
};

// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.OnOffersGenerated
struct UAthenaDirectAcquisitionScreen_C_OnOffersGenerated_Params
{
};

// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.OnActivated
struct UAthenaDirectAcquisitionScreen_C_OnActivated_Params
{
};

// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.ClearOfferWidgets
struct UAthenaDirectAcquisitionScreen_C_ClearOfferWidgets_Params
{
};

// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.OnUpdateOtherPlatformMTXMessage
struct UAthenaDirectAcquisitionScreen_C_OnUpdateOtherPlatformMTXMessage_Params
{
	bool*                                              HasOtherPlatformCurrency;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      CurrencyMessageLocText;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.ExecuteUbergraph_AthenaDirectAcquisitionScreen
struct UAthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
