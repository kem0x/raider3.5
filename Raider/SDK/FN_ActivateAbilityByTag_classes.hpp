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

// BlueprintGeneratedClass ActivateAbilityByTag.ActivateAbilityByTag_C
// 0x0068 (0x0100 - 0x0098)
class UActivateAbilityByTag_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (Transient, DuplicateTransient)
	struct FGameplayTagContainer                       TC_AbilityToActivate;                                     // 0x00A0(0x0020) (Edit, BlueprintVisible)
	bool                                               RequireCanHitTargetWithAbility;                           // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PawnTargetsOnly;                                          // 0x00C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00C2(0x0006) MISSED OFFSET
	struct FGameplayTagContainer                       ProhibitedTargetTags;                                     // 0x00C8(0x0020) (Edit, BlueprintVisible)
	class AFortAIController*                           OwnerAIController;                                        // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortAIPawn*                                 OwnerPawn;                                                // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      OwnerGoalActor;                                           // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ActivateAbilityByTag.ActivateAbilityByTag_C");
		return ptr;
	}


	void ReceiveActivation(class AActor** OwnerActor);
	void ReceiveDeactivation(class AActor** OwnerActor);
	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ExecuteUbergraph_ActivateAbilityByTag(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
