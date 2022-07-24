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

// BlueprintGeneratedClass B_Placement_Pack_MissileBattery.B_Placement_Pack_MissileBattery_C
// 0x0018 (0x0BC8 - 0x0BB0)
class AB_Placement_Pack_MissileBattery_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0BB0(0x0008) (Transient, DuplicateTransient)
	float                                              BombHeightOffset;                                         // 0x0BB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0BBC(0x0004) MISSED OFFSET
	class UGA_AirStrike_C*                             AirStrikeAbility;                                         // 0x0BC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Placement_Pack_MissileBattery.B_Placement_Pack_MissileBattery_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_Placement_Pack_MissileBattery(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
