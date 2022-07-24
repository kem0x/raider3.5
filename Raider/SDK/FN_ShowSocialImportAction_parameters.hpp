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

// Function ShowSocialImportAction.ShowSocialImportAction_C.HandleSocialImportClosed
struct AShowSocialImportAction_C_HandleSocialImportClosed_Params
{
};

// Function ShowSocialImportAction.ShowSocialImportAction_C.ShowSocialImport
struct AShowSocialImportAction_C_ShowSocialImport_Params
{
};

// Function ShowSocialImportAction.ShowSocialImportAction_C.UserConstructionScript
struct AShowSocialImportAction_C_UserConstructionScript_Params
{
};

// Function ShowSocialImportAction.ShowSocialImportAction_C.Execute
struct AShowSocialImportAction_C_Execute_Params
{
	struct FFortScriptedActionParams*                  Params;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ShowSocialImportAction.ShowSocialImportAction_C.ExecuteUbergraph_ShowSocialImportAction
struct AShowSocialImportAction_C_ExecuteUbergraph_ShowSocialImportAction_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
