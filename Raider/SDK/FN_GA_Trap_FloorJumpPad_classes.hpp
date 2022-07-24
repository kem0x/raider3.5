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

// BlueprintGeneratedClass GA_Trap_FloorJumpPad.GA_Trap_FloorJumpPad_C
// 0x0068 (0x09A8 - 0x0940)
class UGA_Trap_FloorJumpPad_C : public UGA_TrapGeneric_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0940(0x0008) (Transient, DuplicateTransient)
	float                                              LaunchStrength;                                           // 0x0948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x094C(0x0004) MISSED OFFSET
	class UForceFeedbackEffect*                        LaunchForceFeedback;                                      // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawn*                             PlayerJumping;                                            // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_PlayerLaunched;                                        // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                TC_LaunchTag;                                             // 0x0968(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                              OverlappingTargets;                                       // 0x0970(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UClass*                                      GE_TrapImmunity;                                          // 0x0980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // 0x0988(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Trap_FloorJumpPad.GA_Trap_FloorJumpPad_C");
		return ptr;
	}


	void Cancelled_E91C59AB43D826926CE5CEAA22E84570(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_E91C59AB43D826926CE5CEAA22E84570(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void PlayPlayerFX(class AFortPlayerPawn* Player);
	void ExecuteUbergraph_GA_Trap_FloorJumpPad(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
