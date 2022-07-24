#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass B_MissileBattery_Homing_Placement.B_MissileBattery_Homing_Placement_C
// 0x0008 (0x0BB8 - 0x0BB0)
class AB_MissileBattery_Homing_Placement_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0BB0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_MissileBattery_Homing_Placement.B_MissileBattery_Homing_Placement_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_MissileBattery_Homing_Placement(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
