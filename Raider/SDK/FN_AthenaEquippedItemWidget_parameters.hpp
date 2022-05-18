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

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.GetRemainingAmmoText
struct UAthenaEquippedItemWidget_C_GetRemainingAmmoText_Params
{
	int                                                RemainingAmmoCount;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       CurrentAmmoText;                                          // (Parm, OutParm)
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.GetCurrentAmmoText
struct UAthenaEquippedItemWidget_C_GetCurrentAmmoText_Params
{
	int                                                CurrentAmmoCount;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       CurrentAmmoText;                                          // (Parm, OutParm)
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.UpdateWidgetColor
struct UAthenaEquippedItemWidget_C_UpdateWidgetColor_Params
{
	bool                                               HasAmmo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.ResourceCountChanged
struct UAthenaEquippedItemWidget_C_ResourceCountChanged_Params
{
	int*                                               ResourceCount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.AmmoTypeChanged
struct UAthenaEquippedItemWidget_C_AmmoTypeChanged_Params
{
	class AFortWeaponRanged**                          RangedWeapon;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortWorldItemDefinition**                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.ResourceTypeChanged
struct UAthenaEquippedItemWidget_C_ResourceTypeChanged_Params
{
	class UFortResourceItemDefinition**                Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ResourceCount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.WeaponTypeChanged
struct UAthenaEquippedItemWidget_C_WeaponTypeChanged_Params
{
	EEquippedWeaponDisplay*                            Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.HasAmmoChanged
struct UAthenaEquippedItemWidget_C_HasAmmoChanged_Params
{
	bool*                                              bHasAmmo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.AmmoChanged
struct UAthenaEquippedItemWidget_C_AmmoChanged_Params
{
	int*                                               MagazineAmmoCount;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               BackupAmmoCount;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TotalRemaining;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.UtilityItemCountChanged
struct UAthenaEquippedItemWidget_C_UtilityItemCountChanged_Params
{
	int*                                               Remaining;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.UtilityItemTypeChanged
struct UAthenaEquippedItemWidget_C_UtilityItemTypeChanged_Params
{
	class AFortWeapon**                                Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortWeaponItemDefinition**                  Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.ExecuteUbergraph_AthenaEquippedItemWidget
struct UAthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
