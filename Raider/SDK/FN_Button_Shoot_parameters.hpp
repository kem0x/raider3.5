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

// Function Button_Shoot.Button_Shoot_C.OnTouchMoved
struct UButton_Shoot_C_OnTouchMoved_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              InTouchEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Button_Shoot.Button_Shoot_C.Check For Tag
struct UButton_Shoot_C_Check_For_Tag_Params
{
	struct FGameplayTag                                TagToCheck;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               HasTag;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Button_Shoot.Button_Shoot_C.HandleWeaponChanged
struct UButton_Shoot_C_HandleWeaponChanged_Params
{
	class AFortWeapon*                                 New_Weapon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortWeapon*                                 Previous_Weapon;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Button_Shoot.Button_Shoot_C.OnTouchStarted
struct UButton_Shoot_C_OnTouchStarted_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              InTouchEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Button_Shoot.Button_Shoot_C.OnTouchEnded
struct UButton_Shoot_C_OnTouchEnded_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              InTouchEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Button_Shoot.Button_Shoot_C.Construct
struct UButton_Shoot_C_Construct_Params
{
};

// Function Button_Shoot.Button_Shoot_C.On Build Mode Changed
struct UButton_Shoot_C_On_Build_Mode_Changed_Params
{
	bool                                               bEntering;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Button_Shoot.Button_Shoot_C.ExecuteUbergraph_Button_Shoot
struct UButton_Shoot_C_ExecuteUbergraph_Button_Shoot_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
