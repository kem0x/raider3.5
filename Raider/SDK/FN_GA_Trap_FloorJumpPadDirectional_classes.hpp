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

// BlueprintGeneratedClass GA_Trap_FloorJumpPadDirectional.GA_Trap_FloorJumpPadDirectional_C
// 0x0068 (0x09A8 - 0x0940)
class UGA_Trap_FloorJumpPadDirectional_C : public UGA_TrapGeneric_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0940(0x0008) (Transient, DuplicateTransient)
	float                                              LaunchPitch;                                              // 0x0948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LaunchStrength;                                           // 0x094C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        LaunchForceFeedback;                                      // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawn*                             LaunchedPlayer;                                           // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                TC_LaunchTag;                                             // 0x0960(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_PlayerLaunched;                                        // 0x0968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              OverlappingTargets;                                       // 0x0970(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UClass*                                      GE_TrapImmunity;                                          // 0x0980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // 0x0988(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Trap_FloorJumpPadDirectional.GA_Trap_FloorJumpPadDirectional_C");
		return ptr;
	}


	void Cancelled_9399FB2A485BD9AC6632A4B347C4BBE0(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_9399FB2A485BD9AC6632A4B347C4BBE0(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void PlayPlayerFX(class AFortPlayerPawn* Player, const struct FRotator& LaunchRotation, const struct FTransform& TrapTransform);
	void ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
