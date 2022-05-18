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

// BlueprintGeneratedClass Task_SetBlackboardBoolValues.Task_SetBlackboardBoolValues_C
// 0x00F9 (0x0199 - 0x00A0)
class UTask_SetBlackboardBoolValues_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)
	bool                                               Update_1_;                                                // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      BoolKey1;                                                 // 0x00B0(0x0028) (Edit, BlueprintVisible)
	bool                                               BoolKey1Value;                                            // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Update_2_;                                                // 0x00D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00DA(0x0006) MISSED OFFSET
	struct FBlackboardKeySelector                      BoolKey2;                                                 // 0x00E0(0x0028) (Edit, BlueprintVisible)
	bool                                               BoolKey2Value;                                            // 0x0108(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Update_3_;                                                // 0x0109(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x010A(0x0006) MISSED OFFSET
	struct FBlackboardKeySelector                      BoolKey3;                                                 // 0x0110(0x0028) (Edit, BlueprintVisible)
	bool                                               BoolKey3Value;                                            // 0x0138(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Update_4_;                                                // 0x0139(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x013A(0x0006) MISSED OFFSET
	struct FBlackboardKeySelector                      BoolKey4;                                                 // 0x0140(0x0028) (Edit, BlueprintVisible)
	bool                                               BoolKey4Value;                                            // 0x0168(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Update_5_;                                                // 0x0169(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x016A(0x0006) MISSED OFFSET
	struct FBlackboardKeySelector                      BoolKey5;                                                 // 0x0170(0x0028) (Edit, BlueprintVisible)
	bool                                               BoolKey5Value;                                            // 0x0198(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Task_SetBlackboardBoolValues.Task_SetBlackboardBoolValues_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_Task_SetBlackboardBoolValues(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
