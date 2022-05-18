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

// Function InfoWindow.InfoWindow_C.Initialize
struct UInfoWindow_C_Initialize_Params
{
};

// Function InfoWindow.InfoWindow_C.AddInfo
struct UInfoWindow_C_AddInfo_Params
{
	TArray<class UFortItemDefinition*>                 Info_Items;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function InfoWindow.InfoWindow_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature
struct UInfoWindow_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function InfoWindow.InfoWindow_C.Construct
struct UInfoWindow_C_Construct_Params
{
};

// Function InfoWindow.InfoWindow_C.Destruct
struct UInfoWindow_C_Destruct_Params
{
};

// Function InfoWindow.InfoWindow_C.BndEvt__Lightbox_K2Node_ComponentBoundEvent_0_IntroEnded__DelegateSignature
struct UInfoWindow_C_BndEvt__Lightbox_K2Node_ComponentBoundEvent_0_IntroEnded__DelegateSignature_Params
{
};

// Function InfoWindow.InfoWindow_C.BndEvt__Lightbox_K2Node_ComponentBoundEvent_1_OutroEnded__DelegateSignature
struct UInfoWindow_C_BndEvt__Lightbox_K2Node_ComponentBoundEvent_1_OutroEnded__DelegateSignature_Params
{
};

// Function InfoWindow.InfoWindow_C.OnBeginOutro
struct UInfoWindow_C_OnBeginOutro_Params
{
};

// Function InfoWindow.InfoWindow_C.OnBeginIntro
struct UInfoWindow_C_OnBeginIntro_Params
{
};

// Function InfoWindow.InfoWindow_C.BndEvt__InfoButtons_K2Node_ComponentBoundEvent_212_OnListViewItemWidgetCreated__DelegateSignature
struct UInfoWindow_C_BndEvt__InfoButtons_K2Node_ComponentBoundEvent_212_OnListViewItemWidgetCreated__DelegateSignature_Params
{
	class UUserWidget*                                 Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function InfoWindow.InfoWindow_C.Set Info
struct UInfoWindow_C_Set_Info_Params
{
	class UFortItemDefinition*                         Entry_Item_Definition;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InfoWindow.InfoWindow_C.ExecuteUbergraph_InfoWindow
struct UInfoWindow_C_ExecuteUbergraph_InfoWindow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
