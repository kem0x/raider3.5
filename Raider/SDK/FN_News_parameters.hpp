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

// Function News.News_C.UpdateInfoPanel
struct UNews_C_UpdateInfoPanel_Params
{
	struct FText                                       BodyText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function News.News_C.Init
struct UNews_C_Init_Params
{
};

// Function News.News_C.PopulateEntries
struct UNews_C_PopulateEntries_Params
{
	bool                                               isEmpty;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function News.News_C.AddEntry
struct UNews_C_AddEntry_Params
{
	struct FText                                       inEntryText;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function News.News_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature
struct UNews_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function News.News_C.Construct
struct UNews_C_Construct_Params
{
};

// Function News.News_C.ExecuteUbergraph_News
struct UNews_C_ExecuteUbergraph_News_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
