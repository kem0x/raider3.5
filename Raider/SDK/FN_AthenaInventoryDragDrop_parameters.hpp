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

// Function AthenaInventoryDragDrop.AthenaInventoryDragDrop_C.ShowDropIcon
struct UAthenaInventoryDragDrop_C_ShowDropIcon_Params
{
	TEnumAsByte<EAthenaDragDropAction>                 Drop_Action;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
