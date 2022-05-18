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

// Function HelpEntryBodyWidget.HelpEntryBodyWidget_C.ResetAdditionalContent
struct UHelpEntryBodyWidget_C_ResetAdditionalContent_Params
{
};

// Function HelpEntryBodyWidget.HelpEntryBodyWidget_C.UpdateAdditionalImage
struct UHelpEntryBodyWidget_C_UpdateAdditionalImage_Params
{
};

// Function HelpEntryBodyWidget.HelpEntryBodyWidget_C.UpdateAdditionalWidget
struct UHelpEntryBodyWidget_C_UpdateAdditionalWidget_Params
{
};

// Function HelpEntryBodyWidget.HelpEntryBodyWidget_C.UpdateBodyText
struct UHelpEntryBodyWidget_C_UpdateBodyText_Params
{
};

// Function HelpEntryBodyWidget.HelpEntryBodyWidget_C.SetActiveEntry
struct UHelpEntryBodyWidget_C_SetActiveEntry_Params
{
	class UFortHelpItem*                               InHelpItem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
