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

// BlueprintGeneratedClass GAB_TakerPortalBase.GAB_TakerPortalBase_C
// 0x0040 (0x0B80 - 0x0B40)
class UGAB_TakerPortalBase_C : public UFortGameplayAbility_AIPortal
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B40(0x0008) (Transient, DuplicateTransient)
	bool                                               Debug;                                                    // 0x0B48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0B49(0x0003) MISSED OFFSET
	struct FVector                                     PortalInStartLocation;                                    // 0x0B4C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PortalInEndLocation;                                      // 0x0B58(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PortalOutEndLocation;                                     // 0x0B64(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UFortAbilityTask_MoveAI*                     PortalInMove;                                             // 0x0B70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortAbilityTask_MoveAI*                     PortalOutMove;                                            // 0x0B78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_TakerPortalBase.GAB_TakerPortalBase_C");
		return ptr;
	}


	void OnMoveFinished_16BAAEB04DC04FA84D2FF3BBFD3A3425(TEnumAsByte<EPathFollowingResult> Result, class AAIController* AIController);
	void OnRequestFailed_16BAAEB04DC04FA84D2FF3BBFD3A3425();
	void OnCancelled_16BAAEB04DC04FA84D2FF3BBFD3A3425();
	void OnInterrupted_16BAAEB04DC04FA84D2FF3BBFD3A3425();
	void OnComplete_16BAAEB04DC04FA84D2FF3BBFD3A3425();
	void OnMoveFinished_F402FFCD40B6F77E728220BFF4A37F11(TEnumAsByte<EPathFollowingResult> Result, class AAIController* AIController);
	void OnRequestFailed_F402FFCD40B6F77E728220BFF4A37F11();
	void OnCancelled_F402FFCD40B6F77E728220BFF4A37F11();
	void OnInterrupted_F402FFCD40B6F77E728220BFF4A37F11();
	void OnComplete_F402FFCD40B6F77E728220BFF4A37F11();
	void Completed_7D4D41B64C4603D73B5B158D82C73287(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_7D4D41B64C4603D73B5B158D82C73287(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_7D4D41B64C4603D73B5B158D82C73287(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_OnEndAbility(bool* bWasCancelled);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_TakerPortalBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
