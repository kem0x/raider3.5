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

// Function StoreItemCardFront.StoreItemCardFront_C.Get Type Text
struct UStoreItemCardFront_C_Get_Type_Text_Params
{
	struct FText                                       OutText;                                                  // (Parm, OutParm)
};

// Function StoreItemCardFront.StoreItemCardFront_C.Get Card Name Text
struct UStoreItemCardFront_C_Get_Card_Name_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StoreItemCardFront.StoreItemCardFront_C.Draw_Card
struct UStoreItemCardFront_C_Draw_Card_Params
{
};

// Function StoreItemCardFront.StoreItemCardFront_C.Initialize_Card
struct UStoreItemCardFront_C_Initialize_Card_Params
{
	struct FCard                                       inCard;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function StoreItemCardFront.StoreItemCardFront_C.Construct
struct UStoreItemCardFront_C_Construct_Params
{
};

// Function StoreItemCardFront.StoreItemCardFront_C.OnFortStoreStateChanged
struct UStoreItemCardFront_C_OnFortStoreStateChanged_Params
{
	EFortStoreState                                    NewStoreState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreItemCardFront.StoreItemCardFront_C.InitFromObject
struct UStoreItemCardFront_C_InitFromObject_Params
{
	class UObject*                                     InitObject;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreItemCardFront.StoreItemCardFront_C.ExecuteUbergraph_StoreItemCardFront
struct UStoreItemCardFront_C_ExecuteUbergraph_StoreItemCardFront_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
