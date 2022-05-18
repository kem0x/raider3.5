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

// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.SetUIFeatureRevealData
struct UMainTabTutorialBangWrapper_C_SetUIFeatureRevealData_Params
{
	EFortUIFeature                                     UIFeature;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       RevealText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.Adjust Bang Image Translation
struct UMainTabTutorialBangWrapper_C_Adjust_Bang_Image_Translation_Params
{
	struct FVector2D                                   Translation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.Update Bang Icon Version
struct UMainTabTutorialBangWrapper_C_Update_Bang_Icon_Version_Params
{
	int                                                InCount;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.SetTutorialBorderStyle
struct UMainTabTutorialBangWrapper_C_SetTutorialBorderStyle_Params
{
	class UClass*                                      BorderStyle;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.OnBangStateChanged
struct UMainTabTutorialBangWrapper_C_OnBangStateChanged_Params
{
	bool*                                              bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.PreConstruct
struct UMainTabTutorialBangWrapper_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.Tab Reveal Message Closed
struct UMainTabTutorialBangWrapper_C_Tab_Reveal_Message_Closed_Params
{
};

// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.OnStartCallout
struct UMainTabTutorialBangWrapper_C_OnStartCallout_Params
{
};

// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.OnStopCallout
struct UMainTabTutorialBangWrapper_C_OnStopCallout_Params
{
};

// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.ExecuteUbergraph_MainTabTutorialBangWrapper
struct UMainTabTutorialBangWrapper_C_ExecuteUbergraph_MainTabTutorialBangWrapper_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.StopTabCallout__DelegateSignature
struct UMainTabTutorialBangWrapper_C_StopTabCallout__DelegateSignature_Params
{
};

// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.TabDialogClosed__DelegateSignature
struct UMainTabTutorialBangWrapper_C_TabDialogClosed__DelegateSignature_Params
{
};

// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.TabAdded__DelegateSignature
struct UMainTabTutorialBangWrapper_C_TabAdded__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
