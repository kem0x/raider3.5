#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GA_Trap_FloorHoverboardSpeed.GA_Trap_FloorHoverboardSpeed_C
// 0x0018 (0x0B38 - 0x0B20)
class UGA_Trap_FloorHoverboardSpeed_C : public UGA_TrapGeneric_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B20(0x0008) (Transient, DuplicateTransient)
	float                                              HoverboardBoostVelocityShift;                             // 0x0B28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0B2C(0x0004) MISSED OFFSET
	class ATrap_Floor_Hoverboard_Speed_C*              HoverboardSpeedTrap;                                      // 0x0B30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Trap_FloorHoverboardSpeed.GA_Trap_FloorHoverboardSpeed_C");
		return ptr;
	}


	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Trap_FloorHoverboardSpeed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
