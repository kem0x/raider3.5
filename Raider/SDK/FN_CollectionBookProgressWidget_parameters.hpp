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

// Function CollectionBookProgressWidget.CollectionBookProgressWidget_C.OnCollectionBookLevelProgressionChanged
struct UCollectionBookProgressWidget_C_OnCollectionBookLevelProgressionChanged_Params
{
	float*                                             NewCompletionPct;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionBookProgressWidget.CollectionBookProgressWidget_C.OnCollectionBookPreviewXPChange
struct UCollectionBookProgressWidget_C_OnCollectionBookPreviewXPChange_Params
{
	float*                                             PreviewCompletionPct;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionBookProgressWidget.CollectionBookProgressWidget_C.ExecuteUbergraph_CollectionBookProgressWidget
struct UCollectionBookProgressWidget_C_ExecuteUbergraph_CollectionBookProgressWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
