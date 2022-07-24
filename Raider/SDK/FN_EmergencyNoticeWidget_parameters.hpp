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

// Function EmergencyNoticeWidget.EmergencyNoticeWidget_C.Show Notice
struct UEmergencyNoticeWidget_C_Show_Notice_Params
{
};

// Function EmergencyNoticeWidget.EmergencyNoticeWidget_C.ShowNotice
struct UEmergencyNoticeWidget_C_ShowNotice_Params
{
	struct FText*                                      Title;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText*                                      Body;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function EmergencyNoticeWidget.EmergencyNoticeWidget_C.HideNotice
struct UEmergencyNoticeWidget_C_HideNotice_Params
{
};

// Function EmergencyNoticeWidget.EmergencyNoticeWidget_C.ExecuteUbergraph_EmergencyNoticeWidget
struct UEmergencyNoticeWidget_C_ExecuteUbergraph_EmergencyNoticeWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
