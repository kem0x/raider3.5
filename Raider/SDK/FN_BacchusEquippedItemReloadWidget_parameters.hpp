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

// Function BacchusEquippedItemReloadWidget.BacchusEquippedItemReloadWidget_C.OnTouchStarted
struct UBacchusEquippedItemReloadWidget_C_OnTouchStarted_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              InTouchEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BacchusEquippedItemReloadWidget.BacchusEquippedItemReloadWidget_C.GetRemainingAmmoText
struct UBacchusEquippedItemReloadWidget_C_GetRemainingAmmoText_Params
{
	int                                                RemainingAmmoCount;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       CurrentAmmoText;                                          // (Parm, OutParm)
};

// Function BacchusEquippedItemReloadWidget.BacchusEquippedItemReloadWidget_C.GetCurrentAmmoText
struct UBacchusEquippedItemReloadWidget_C_GetCurrentAmmoText_Params
{
	int                                                CurrentAmmoCount;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       CurrentAmmoText;                                          // (Parm, OutParm)
};

// Function BacchusEquippedItemReloadWidget.BacchusEquippedItemReloadWidget_C.UpdateWidgetColor
struct UBacchusEquippedItemReloadWidget_C_UpdateWidgetColor_Params
{
	bool                                               HasAmmo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BacchusEquippedItemReloadWidget.BacchusEquippedItemReloadWidget_C.ResourceCountChanged
struct UBacchusEquippedItemReloadWidget_C_ResourceCountChanged_Params
{
	int*                                               ResourceCount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BacchusEquippedItemReloadWidget.BacchusEquippedItemReloadWidget_C.AmmoTypeChanged
struct UBacchusEquippedItemReloadWidget_C_AmmoTypeChanged_Params
{
	class AFortWeaponRanged**                          RangedWeapon;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortWorldItemDefinition**                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BacchusEquippedItemReloadWidget.BacchusEquippedItemReloadWidget_C.ResourceTypeChanged
struct UBacchusEquippedItemReloadWidget_C_ResourceTypeChanged_Params
{
	class UFortResourceItemDefinition**                Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ResourceCount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BacchusEquippedItemReloadWidget.BacchusEquippedItemReloadWidget_C.WeaponTypeChanged
struct UBacchusEquippedItemReloadWidget_C_WeaponTypeChanged_Params
{
	EEquippedWeaponDisplay*                            Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BacchusEquippedItemReloadWidget.BacchusEquippedItemReloadWidget_C.HasAmmoChanged
struct UBacchusEquippedItemReloadWidget_C_HasAmmoChanged_Params
{
	bool*                                              bHasAmmo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BacchusEquippedItemReloadWidget.BacchusEquippedItemReloadWidget_C.AmmoChanged
struct UBacchusEquippedItemReloadWidget_C_AmmoChanged_Params
{
	int*                                               MagazineAmmoCount;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               BackupAmmoCount;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TotalRemaining;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BacchusEquippedItemReloadWidget.BacchusEquippedItemReloadWidget_C.UtilityItemCountChanged
struct UBacchusEquippedItemReloadWidget_C_UtilityItemCountChanged_Params
{
	int*                                               Remaining;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BacchusEquippedItemReloadWidget.BacchusEquippedItemReloadWidget_C.UtilityItemTypeChanged
struct UBacchusEquippedItemReloadWidget_C_UtilityItemTypeChanged_Params
{
	class AFortWeapon**                                Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortWeaponItemDefinition**                  Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BacchusEquippedItemReloadWidget.BacchusEquippedItemReloadWidget_C.ExecuteUbergraph_BacchusEquippedItemReloadWidget
struct UBacchusEquippedItemReloadWidget_C_ExecuteUbergraph_BacchusEquippedItemReloadWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
