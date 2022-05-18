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

// Function ItemTransformKeyInfo.ItemTransformKeyInfo_C.SetKeyToRepresent
struct UItemTransformKeyInfo_C_SetKeyToRepresent_Params
{
	class UFortItem*                                   Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransformKeyInfo.ItemTransformKeyInfo_C.Construct
struct UItemTransformKeyInfo_C_Construct_Params
{
};

// Function ItemTransformKeyInfo.ItemTransformKeyInfo_C.ExecuteUbergraph_ItemTransformKeyInfo
struct UItemTransformKeyInfo_C_ExecuteUbergraph_ItemTransformKeyInfo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
