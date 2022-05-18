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

// Function QuestsModal.QuestsModal_C.TouchToClose
struct UQuestsModal_C_TouchToClose_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function QuestsModal.QuestsModal_C.ClosePanel
struct UQuestsModal_C_ClosePanel_Params
{
	bool                                               bCommitted;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuestsModal.QuestsModal_C.Construct
struct UQuestsModal_C_Construct_Params
{
};

// Function QuestsModal.QuestsModal_C.OnActivated
struct UQuestsModal_C_OnActivated_Params
{
};

// Function QuestsModal.QuestsModal_C.ExecuteUbergraph_QuestsModal
struct UQuestsModal_C_ExecuteUbergraph_QuestsModal_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
