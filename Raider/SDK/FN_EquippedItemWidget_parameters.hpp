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

// Function EquippedItemWidget.EquippedItemWidget_C.GetCurrentAmmoText
struct UEquippedItemWidget_C_GetCurrentAmmoText_Params
{
	int                                                CurrentAmmoCount;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       CurrentAmmoText;                                          // (Parm, OutParm)
};

// Function EquippedItemWidget.EquippedItemWidget_C.UpdateResourceCount
struct UEquippedItemWidget_C_UpdateResourceCount_Params
{
};

// Function EquippedItemWidget.EquippedItemWidget_C.UpdateCurrentAmmo
struct UEquippedItemWidget_C_UpdateCurrentAmmo_Params
{
	int                                                LocalCount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                LocalRemaining;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EquippedItemWidget.EquippedItemWidget_C.UpdateAmmoCapacity
struct UEquippedItemWidget_C_UpdateAmmoCapacity_Params
{
};

// Function EquippedItemWidget.EquippedItemWidget_C.UpdateWidgetColor
struct UEquippedItemWidget_C_UpdateWidgetColor_Params
{
	bool                                               HasAmmo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EquippedItemWidget.EquippedItemWidget_C.UpdateVisibility
struct UEquippedItemWidget_C_UpdateVisibility_Params
{
};

// Function EquippedItemWidget.EquippedItemWidget_C.FullUpdateResourceDisplay
struct UEquippedItemWidget_C_FullUpdateResourceDisplay_Params
{
};

// Function EquippedItemWidget.EquippedItemWidget_C.FullUpdateAmmoDisplay
struct UEquippedItemWidget_C_FullUpdateAmmoDisplay_Params
{
};

// Function EquippedItemWidget.EquippedItemWidget_C.Construct
struct UEquippedItemWidget_C_Construct_Params
{
};

// Function EquippedItemWidget.EquippedItemWidget_C.OnWeaponEquipped
struct UEquippedItemWidget_C_OnWeaponEquipped_Params
{
	class AFortWeapon*                                 NewWeapon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortWeapon*                                 PrevWeapon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EquippedItemWidget.EquippedItemWidget_C.OnLocalAmmoChanged
struct UEquippedItemWidget_C_OnLocalAmmoChanged_Params
{
	int                                                LocalCount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                LocalRemaining;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EquippedItemWidget.EquippedItemWidget_C.OnWorldItemsChanged
struct UEquippedItemWidget_C_OnWorldItemsChanged_Params
{
};

// Function EquippedItemWidget.EquippedItemWidget_C.OnBuildingMaterialCycled
struct UEquippedItemWidget_C_OnBuildingMaterialCycled_Params
{
};

// Function EquippedItemWidget.EquippedItemWidget_C.ExecuteUbergraph_EquippedItemWidget
struct UEquippedItemWidget_C_ExecuteUbergraph_EquippedItemWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
