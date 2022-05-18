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

// Function SocialImportPanel.SocialImportPanel_C.OnLauncherImportOpened
struct USocialImportPanel_C_OnLauncherImportOpened_Params
{
};

// Function SocialImportPanel.SocialImportPanel_C.OnClaimViewRequested
struct USocialImportPanel_C_OnClaimViewRequested_Params
{
};

// Function SocialImportPanel.SocialImportPanel_C.OnImportViewRequested
struct USocialImportPanel_C_OnImportViewRequested_Params
{
};

// Function SocialImportPanel.SocialImportPanel_C.OnWaitingViewRequested
struct USocialImportPanel_C_OnWaitingViewRequested_Params
{
};

// Function SocialImportPanel.SocialImportPanel_C.OnPanelTypeSet
struct USocialImportPanel_C_OnPanelTypeSet_Params
{
	ESocialImportPanelType*                            NewType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SocialImportPanel.SocialImportPanel_C.OnActivated
struct USocialImportPanel_C_OnActivated_Params
{
};

// Function SocialImportPanel.SocialImportPanel_C.ExecuteUbergraph_SocialImportPanel
struct USocialImportPanel_C_ExecuteUbergraph_SocialImportPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
