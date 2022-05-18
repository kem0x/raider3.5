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

// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.On_CommonBorderTouchToClose_MouseButtonUp
struct UBattlePassDirectAcquisitionScreen_C_On_CommonBorderTouchToClose_MouseButtonUp_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.HandleBack
struct UBattlePassDirectAcquisitionScreen_C_HandleBack_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.Focus
struct UBattlePassDirectAcquisitionScreen_C_Focus_Params
{
};

// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.GenerateOfferWidget
struct UBattlePassDirectAcquisitionScreen_C_GenerateOfferWidget_Params
{
	class UFortDirectAcquisitionOfferInfo**            OfferData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.NoOffersAvailable
struct UBattlePassDirectAcquisitionScreen_C_NoOffersAvailable_Params
{
};

// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.OnStartReadingOffers
struct UBattlePassDirectAcquisitionScreen_C_OnStartReadingOffers_Params
{
};

// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.OnOffersGenerated
struct UBattlePassDirectAcquisitionScreen_C_OnOffersGenerated_Params
{
};

// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.OnActivated
struct UBattlePassDirectAcquisitionScreen_C_OnActivated_Params
{
};

// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.Construct
struct UBattlePassDirectAcquisitionScreen_C_Construct_Params
{
};

// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent_97_CommonButtonClicked__DelegateSignature
struct UBattlePassDirectAcquisitionScreen_C_BndEvt__PanelButton_K2Node_ComponentBoundEvent_97_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.ExecuteUbergraph_BattlePassDirectAcquisitionScreen
struct UBattlePassDirectAcquisitionScreen_C_ExecuteUbergraph_BattlePassDirectAcquisitionScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
