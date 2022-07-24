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

// BlueprintGeneratedClass IsActorAirbornePawn.IsActorAirbornePawn_C
// 0x0050 (0x00F0 - 0x00A0)
class UIsActorAirbornePawn_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      ActorKeyToTest;                                           // 0x00A0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      TakerAirborneKeyToMoveTo;                                 // 0x00C8(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IsActorAirbornePawn.IsActorAirbornePawn_C");
		return ptr;
	}


	bool PerformConditionCheckAI(class AAIController** OwnerController, class APawn** ControlledPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
