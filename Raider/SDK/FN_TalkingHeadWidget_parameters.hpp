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

// Function TalkingHeadWidget.TalkingHeadWidget_C.HandleTalkingHeadEnd
struct UTalkingHeadWidget_C_HandleTalkingHeadEnd_Params
{
};

// Function TalkingHeadWidget.TalkingHeadWidget_C.HandleTalkingHeadBegin
struct UTalkingHeadWidget_C_HandleTalkingHeadBegin_Params
{
	class UTexture2D*                                  Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Subtitle;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	EFortAnnouncementDisplayPreference                 DisplayPreference;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TalkingHeadWidget.TalkingHeadWidget_C.SetTalkingHeadSubtitle
struct UTalkingHeadWidget_C_SetTalkingHeadSubtitle_Params
{
	struct FText                                       Subtitle;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TalkingHeadWidget.TalkingHeadWidget_C.SetTalkingHeadName
struct UTalkingHeadWidget_C_SetTalkingHeadName_Params
{
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TalkingHeadWidget.TalkingHeadWidget_C.SetTalkingHeadImage
struct UTalkingHeadWidget_C_SetTalkingHeadImage_Params
{
	class UTexture2D*                                  Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TalkingHeadWidget.TalkingHeadWidget_C.Construct
struct UTalkingHeadWidget_C_Construct_Params
{
};

// Function TalkingHeadWidget.TalkingHeadWidget_C.ExecuteUbergraph_TalkingHeadWidget
struct UTalkingHeadWidget_C_ExecuteUbergraph_TalkingHeadWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
