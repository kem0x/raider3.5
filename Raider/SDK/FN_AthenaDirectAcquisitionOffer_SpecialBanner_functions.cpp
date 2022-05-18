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

// Function AthenaDirectAcquisitionOffer_SpecialBanner.AthenaDirectAcquisitionOffer_SpecialBanner_C.SetupSpecialOfferBanner
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bHasSale                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   SaleText                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 BannerOverrideTag              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bHasBattlePassStars            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            iNumOfBattlePassStars          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitionOffer_SpecialBanner_C::SetupSpecialOfferBanner(bool bHasSale, const struct FText& SaleText, const struct FString& BannerOverrideTag, bool bHasBattlePassStars, int iNumOfBattlePassStars)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOffer_SpecialBanner.AthenaDirectAcquisitionOffer_SpecialBanner_C.SetupSpecialOfferBanner");

	UAthenaDirectAcquisitionOffer_SpecialBanner_C_SetupSpecialOfferBanner_Params params;
	params.bHasSale = bHasSale;
	params.SaleText = SaleText;
	params.BannerOverrideTag = BannerOverrideTag;
	params.bHasBattlePassStars = bHasBattlePassStars;
	params.iNumOfBattlePassStars = iNumOfBattlePassStars;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOffer_SpecialBanner.AthenaDirectAcquisitionOffer_SpecialBanner_C.ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitionOffer_SpecialBanner_C::ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOffer_SpecialBanner.AthenaDirectAcquisitionOffer_SpecialBanner_C.ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner");

	UAthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
