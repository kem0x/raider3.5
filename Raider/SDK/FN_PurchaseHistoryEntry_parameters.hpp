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

// Function PurchaseHistoryEntry.PurchaseHistoryEntry_C.DisableAppearance
struct UPurchaseHistoryEntry_C_DisableAppearance_Params
{
	bool                                               IsDisabled;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PurchaseHistoryEntry.PurchaseHistoryEntry_C.PreConstruct
struct UPurchaseHistoryEntry_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PurchaseHistoryEntry.PurchaseHistoryEntry_C.SetPurchaseText
struct UPurchaseHistoryEntry_C_SetPurchaseText_Params
{
	struct FText*                                      PurchaseText;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool*                                              bHasBeenRefunded;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PurchaseHistoryEntry.PurchaseHistoryEntry_C.ExecuteUbergraph_PurchaseHistoryEntry
struct UPurchaseHistoryEntry_C_ExecuteUbergraph_PurchaseHistoryEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
