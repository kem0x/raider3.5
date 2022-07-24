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

// Function FrontendItemViewSettingsManager.FrontendItemViewSettingsManager_C.Is Hero or Previews on Hero
struct UFrontendItemViewSettingsManager_C_Is_Hero_or_Previews_on_Hero_Params
{
	class UFortItemDefinition*                         Item_Definition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FrontendItemViewSettingsManager.FrontendItemViewSettingsManager_C.GetItemViewSettings
struct UFrontendItemViewSettingsManager_C_GetItemViewSettings_Params
{
	EFrontEndCamera*                                   Camera;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESubGame*                                          GameMode;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortItemDefinition**                        ItemDefinition;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FFortItemViewSettings                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
