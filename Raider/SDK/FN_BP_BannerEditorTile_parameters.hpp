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

// Function BP_BannerEditorTile.BP_BannerEditorTile_C.Mark Item As Seen
struct UBP_BannerEditorTile_C_Mark_Item_As_Seen_Params
{
};

// Function BP_BannerEditorTile.BP_BannerEditorTile_C.Update Bang State
struct UBP_BannerEditorTile_C_Update_Bang_State_Params
{
};

// Function BP_BannerEditorTile.BP_BannerEditorTile_C.SetData
struct UBP_BannerEditorTile_C_SetData_Params
{
	class UObject**                                    InData;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommonListView**                            OwningList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_BannerEditorTile.BP_BannerEditorTile_C.Construct
struct UBP_BannerEditorTile_C_Construct_Params
{
};

// Function BP_BannerEditorTile.BP_BannerEditorTile_C.HandleBannerIconLoadGuardFinished
struct UBP_BannerEditorTile_C_HandleBannerIconLoadGuardFinished_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BannerEditorTile.BP_BannerEditorTile_C.OnSelected
struct UBP_BannerEditorTile_C_OnSelected_Params
{
};

// Function BP_BannerEditorTile.BP_BannerEditorTile_C.OnHovered
struct UBP_BannerEditorTile_C_OnHovered_Params
{
};

// Function BP_BannerEditorTile.BP_BannerEditorTile_C.ExecuteUbergraph_BP_BannerEditorTile
struct UBP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BannerEditorTile.BP_BannerEditorTile_C.BannerTileBangUpdated__DelegateSignature
struct UBP_BannerEditorTile_C_BannerTileBangUpdated__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
