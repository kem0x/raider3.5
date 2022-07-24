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

// Function ItemCardWidget.ItemCardWidget_C.OnFocusReceived
struct UItemCardWidget_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ItemCardWidget.ItemCardWidget_C.OnCentered
struct UItemCardWidget_C_OnCentered_Params
{
};

// Function ItemCardWidget.ItemCardWidget_C.PlayShow
struct UItemCardWidget_C_PlayShow_Params
{
	int                                                idx;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemCardWidget.ItemCardWidget_C.OnFocusLost
struct UItemCardWidget_C_OnFocusLost_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ItemCardWidget.ItemCardWidget_C.BP_OnHovered
struct UItemCardWidget_C_BP_OnHovered_Params
{
};

// Function ItemCardWidget.ItemCardWidget_C.Construct
struct UItemCardWidget_C_Construct_Params
{
};

// Function ItemCardWidget.ItemCardWidget_C.ExecuteUbergraph_ItemCardWidget
struct UItemCardWidget_C_ExecuteUbergraph_ItemCardWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemCardWidget.ItemCardWidget_C.OnHoveredEvent__DelegateSignature
struct UItemCardWidget_C_OnHoveredEvent__DelegateSignature_Params
{
	struct FFortReceivedItemLootInfo                   NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
