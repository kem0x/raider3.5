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

// BlueprintGeneratedClass BTDecorator_IsCharging.BTDecorator_IsCharging_C
// 0x0029 (0x00C9 - 0x00A0)
class UBTDecorator_IsCharging_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      OtherActorKey;                                            // 0x00A0(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               SucceedOnNOTCharging;                                     // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTDecorator_IsCharging.BTDecorator_IsCharging_C");
		return ptr;
	}


	bool PerformConditionCheckAI(class AAIController** OwnerController, class APawn** ControlledPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
