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

// Function AthenaDirectAcquisitionOffer_SpecialBanner.AthenaDirectAcquisitionOffer_SpecialBanner_C.SetupSpecialOfferBanner
struct UAthenaDirectAcquisitionOffer_SpecialBanner_C_SetupSpecialOfferBanner_Params
{
	bool                                               bHasSale;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       SaleText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     BannerOverrideTag;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bHasBattlePassStars;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                iNumOfBattlePassStars;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOffer_SpecialBanner.AthenaDirectAcquisitionOffer_SpecialBanner_C.ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner
struct UAthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
