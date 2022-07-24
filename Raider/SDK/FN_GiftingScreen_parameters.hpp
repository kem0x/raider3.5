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

// Function GiftingScreen.GiftingScreen_C.HandleBackClicked
struct UGiftingScreen_C_HandleBackClicked_Params
{
	bool                                               bIsHandled;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GiftingScreen.GiftingScreen_C.Construct
struct UGiftingScreen_C_Construct_Params
{
};

// Function GiftingScreen.GiftingScreen_C.OnOfferSet
struct UGiftingScreen_C_OnOfferSet_Params
{
	class UFortDirectAcquisitionOfferInfo**            NewOfferInfo;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GiftingScreen.GiftingScreen_C.ExecuteUbergraph_GiftingScreen
struct UGiftingScreen_C_ExecuteUbergraph_GiftingScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
