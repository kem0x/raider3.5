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

// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.HandleBack
struct UAthenaDirectAquisitionStyleScreen_C_HandleBack_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.Construct
struct UAthenaDirectAquisitionStyleScreen_C_Construct_Params
{
};

// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.OnActivated
struct UAthenaDirectAquisitionStyleScreen_C_OnActivated_Params
{
};

// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.OnOfferSet
struct UAthenaDirectAquisitionStyleScreen_C_OnOfferSet_Params
{
};

// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.UpdatePreviewVariants
struct UAthenaDirectAquisitionStyleScreen_C_UpdatePreviewVariants_Params
{
	struct FGameplayTag                                VariantChannel;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTag                                VariantTag;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.ExecuteUbergraph_AthenaDirectAquisitionStyleScreen
struct UAthenaDirectAquisitionStyleScreen_C_ExecuteUbergraph_AthenaDirectAquisitionStyleScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
