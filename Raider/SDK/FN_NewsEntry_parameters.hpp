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

// Function NewsEntry.NewsEntry_C.SetFocus
struct UNewsEntry_C_SetFocus_Params
{
};

// Function NewsEntry.NewsEntry_C.Construct
struct UNewsEntry_C_Construct_Params
{
};

// Function NewsEntry.NewsEntry_C.BndEvt__ButtonEntry_K2Node_ComponentBoundEvent_201_CommonButtonClicked__DelegateSignature
struct UNewsEntry_C_BndEvt__ButtonEntry_K2Node_ComponentBoundEvent_201_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function NewsEntry.NewsEntry_C.ExecuteUbergraph_NewsEntry
struct UNewsEntry_C_ExecuteUbergraph_NewsEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewsEntry.NewsEntry_C.HandleEntrySelected__DelegateSignature
struct UNewsEntry_C_HandleEntrySelected__DelegateSignature_Params
{
	struct FText                                       BodyText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
