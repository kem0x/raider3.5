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

// Function TabAudioOptions.TabAudioOptions_C.FindVoiceChatOutputDeviceIndex
struct UTabAudioOptions_C_FindVoiceChatOutputDeviceIndex_Params
{
	int                                                FoundDeviceIndex;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TabAudioOptions.TabAudioOptions_C.GatherVoiceChatOutputDevices
struct UTabAudioOptions_C_GatherVoiceChatOutputDevices_Params
{
};

// Function TabAudioOptions.TabAudioOptions_C.FindVoiceChatInputDeviceIndex
struct UTabAudioOptions_C_FindVoiceChatInputDeviceIndex_Params
{
	int                                                FoundDeviceIndex;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TabAudioOptions.TabAudioOptions_C.GatherVoiceChatInputDevices
struct UTabAudioOptions_C_GatherVoiceChatInputDevices_Params
{
};

// Function TabAudioOptions.TabAudioOptions_C.UpdateVoiceOptionsVisibility
struct UTabAudioOptions_C_UpdateVoiceOptionsVisibility_Params
{
};

// Function TabAudioOptions.TabAudioOptions_C.InitializeData
struct UTabAudioOptions_C_InitializeData_Params
{
};

// Function TabAudioOptions.TabAudioOptions_C.Update Data
struct UTabAudioOptions_C_Update_Data_Params
{
};

// Function TabAudioOptions.TabAudioOptions_C.Construct
struct UTabAudioOptions_C_Construct_Params
{
};

// Function TabAudioOptions.TabAudioOptions_C.UpdateOptionsTab
struct UTabAudioOptions_C_UpdateOptionsTab_Params
{
};

// Function TabAudioOptions.TabAudioOptions_C.BndEvt__SoundFXVolume_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature
struct UTabAudioOptions_C_BndEvt__SoundFXVolume_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature_Params
{
	float                                              Slider_Value;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabAudioOptions.TabAudioOptions_C.BndEvt__MusicVolume_K2Node_ComponentBoundEvent_2_SliderChanged__DelegateSignature
struct UTabAudioOptions_C_BndEvt__MusicVolume_K2Node_ComponentBoundEvent_2_SliderChanged__DelegateSignature_Params
{
	float                                              Slider_Value;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabAudioOptions.TabAudioOptions_C.BndEvt__DialogVolume_K2Node_ComponentBoundEvent_11_SliderChanged__DelegateSignature
struct UTabAudioOptions_C_BndEvt__DialogVolume_K2Node_ComponentBoundEvent_11_SliderChanged__DelegateSignature_Params
{
	float                                              Slider_Value;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabAudioOptions.TabAudioOptions_C.BndEvt__ChatVolume_K2Node_ComponentBoundEvent_15_SliderChanged__DelegateSignature
struct UTabAudioOptions_C_BndEvt__ChatVolume_K2Node_ComponentBoundEvent_15_SliderChanged__DelegateSignature_Params
{
	float                                              Slider_Value;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabAudioOptions.TabAudioOptions_C.CenterOnTab
struct UTabAudioOptions_C_CenterOnTab_Params
{
};

// Function TabAudioOptions.TabAudioOptions_C.BndEvt__Subtitles_K2Node_ComponentBoundEvent_45_Selection Changed__DelegateSignature
struct UTabAudioOptions_C_BndEvt__Subtitles_K2Node_ComponentBoundEvent_45_Selection_Changed__DelegateSignature_Params
{
	int                                                Selected_Index;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabAudioOptions.TabAudioOptions_C.BndEvt__Quality_K2Node_ComponentBoundEvent_43_Selection Changed__DelegateSignature
struct UTabAudioOptions_C_BndEvt__Quality_K2Node_ComponentBoundEvent_43_Selection_Changed__DelegateSignature_Params
{
	int                                                Selected_Index;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabAudioOptions.TabAudioOptions_C.BndEvt__VoiceChatEnable_K2Node_ComponentBoundEvent_18_Selection Changed__DelegateSignature
struct UTabAudioOptions_C_BndEvt__VoiceChatEnable_K2Node_ComponentBoundEvent_18_Selection_Changed__DelegateSignature_Params
{
	int                                                Selected_Index;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabAudioOptions.TabAudioOptions_C.BndEvt__VoiceChatPushToTalk_K2Node_ComponentBoundEvent_36_Selection Changed__DelegateSignature
struct UTabAudioOptions_C_BndEvt__VoiceChatPushToTalk_K2Node_ComponentBoundEvent_36_Selection_Changed__DelegateSignature_Params
{
	int                                                Selected_Index;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabAudioOptions.TabAudioOptions_C.BndEvt__VoiceChat3DEnable_K2Node_ComponentBoundEvent_22_Selection Changed__DelegateSignature
struct UTabAudioOptions_C_BndEvt__VoiceChat3DEnable_K2Node_ComponentBoundEvent_22_Selection_Changed__DelegateSignature_Params
{
	int                                                Selected_Index;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabAudioOptions.TabAudioOptions_C.BndEvt__VoiceChatDevice_K2Node_ComponentBoundEvent_175_Selection Changed__DelegateSignature
struct UTabAudioOptions_C_BndEvt__VoiceChatDevice_K2Node_ComponentBoundEvent_175_Selection_Changed__DelegateSignature_Params
{
	int                                                Selected_Index;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabAudioOptions.TabAudioOptions_C.BndEvt__CinematicsVolume_K2Node_ComponentBoundEvent_42_SliderChanged__DelegateSignature
struct UTabAudioOptions_C_BndEvt__CinematicsVolume_K2Node_ComponentBoundEvent_42_SliderChanged__DelegateSignature_Params
{
	float                                              Slider_Value;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabAudioOptions.TabAudioOptions_C.BndEvt__AllowGameVolumeWhenMinimized_K2Node_ComponentBoundEvent_30_Selection Changed__DelegateSignature
struct UTabAudioOptions_C_BndEvt__AllowGameVolumeWhenMinimized_K2Node_ComponentBoundEvent_30_Selection_Changed__DelegateSignature_Params
{
	int                                                Selected_Index;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabAudioOptions.TabAudioOptions_C.BndEvt__VoiceChatOutputDevice_K2Node_ComponentBoundEvent_5_Selection Changed__DelegateSignature
struct UTabAudioOptions_C_BndEvt__VoiceChatOutputDevice_K2Node_ComponentBoundEvent_5_Selection_Changed__DelegateSignature_Params
{
	int                                                Selected_Index;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabAudioOptions.TabAudioOptions_C.ExecuteUbergraph_TabAudioOptions
struct UTabAudioOptions_C_ExecuteUbergraph_TabAudioOptions_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
