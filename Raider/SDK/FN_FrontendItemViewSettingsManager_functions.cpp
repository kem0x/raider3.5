// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FrontendItemViewSettingsManager.FrontendItemViewSettingsManager_C.Is Hero or Previews on Hero
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UFortItemDefinition*     Item_Definition                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFrontendItemViewSettingsManager_C::Is_Hero_or_Previews_on_Hero(class UFortItemDefinition* Item_Definition)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontendItemViewSettingsManager.FrontendItemViewSettingsManager_C.Is Hero or Previews on Hero");

	UFrontendItemViewSettingsManager_C_Is_Hero_or_Previews_on_Hero_Params params;
	params.Item_Definition = Item_Definition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FrontendItemViewSettingsManager.FrontendItemViewSettingsManager_C.GetItemViewSettings
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// EFrontEndCamera*               Camera                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESubGame*                      GameMode                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortItemDefinition**    ItemDefinition                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortItemViewSettings   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FFortItemViewSettings UFrontendItemViewSettingsManager_C::GetItemViewSettings(EFrontEndCamera* Camera, ESubGame* GameMode, class UFortItemDefinition** ItemDefinition)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontendItemViewSettingsManager.FrontendItemViewSettingsManager_C.GetItemViewSettings");

	UFrontendItemViewSettingsManager_C_GetItemViewSettings_Params params;
	params.Camera = Camera;
	params.GameMode = GameMode;
	params.ItemDefinition = ItemDefinition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
