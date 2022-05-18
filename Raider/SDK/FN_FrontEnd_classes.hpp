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

// BlueprintGeneratedClass Frontend.FrontEnd_C
// 0x01F8 (0x0528 - 0x0330)
class AFrontEnd_C : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (Transient, DuplicateTransient)
	bool                                               CameraTargetMovementUnlocked;                             // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0339(0x0007) MISSED OFFSET
	TArray<EFrontEndCamera>                            UnlockedCameraTypes;                                      // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               MouseDown;                                                // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0351(0x0007) MISSED OFFSET
	TArray<EFortItemType>                              UnlockedItemTypes;                                        // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               ItemMovementUnlocked;                                     // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0369(0x0007) MISSED OFFSET
	TArray<EFortItemType>                              WorldRotationAllowed;                                     // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	EFortItemType                                      CurrentType;                                              // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0381(0x0007) MISSED OFFSET
	class UMeshComponent*                              PreviewMesh;                                              // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              ThumbstickTolerance;                                      // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    SpawnerRotation;                                          // 0x0394(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStoredInitialRotation;                                   // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x03A1(0x0007) MISSED OFFSET
	TMap<int, struct FVector>                          CurrentTouches;                                           // 0x03A8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, struct FVector>                          PreviousTouches;                                          // 0x03F8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     TouchDragDelta;                                           // 0x0448(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                TouchPinchDirection;                                      // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentZoomStep;                                          // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxZoomSteps;                                             // 0x045C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<EFrontEndCamera, struct FVector>              TotalZoomOffsets;                                         // 0x0460(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	EFrontEndCamera                                    CurrentCameraType;                                        // 0x04B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x04B1(0x0007) MISSED OFFSET
	TArray<EFortItemType>                              ZoomAllowed;                                              // 0x04B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     VaultCameraZoomOffset;                                    // 0x04C8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUpdateThumbstickRot;                                     // 0x04D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x04D5(0x0003) MISSED OFFSET
	float                                              ThumbstickRotSpeedScalar;                                 // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    DesiredRot;                                               // 0x04DC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowDrift;                                              // 0x04E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x04E9(0x0003) MISSED OFFSET
	float                                              DriftInterpSpeed;                                         // 0x04EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UpdateRotInterpSpeed;                                     // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MouseRotSpeedScalar;                                      // 0x04F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TouchRotSpeedScalar;                                      // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x04FC(0x0004) MISSED OFFSET
	class APartyDisplayManagerBP_C*                    PartyDisplayManagerBP_574_ExecuteUbergraph_Frontend_RefProperty;// 0x0500(0x0008) (ZeroConstructor, IsPlainOldData)
	class AHBOnboardingFlow_C*                         HBOnboardingFlow_ExecuteUbergraph_Frontend_RefProperty;   // 0x0508(0x0008) (ZeroConstructor, IsPlainOldData)
	class AFrontendCamera_Manage_C*                    FrontendCamera_StoreItemInspect_EdGraph_1_RefProperty;    // 0x0510(0x0008) (ZeroConstructor, IsPlainOldData)
	class AFrontendCamera_Manage_C*                    FrontendCamera_Cosmetics_EdGraph_1_RefProperty;           // 0x0518(0x0008) (ZeroConstructor, IsPlainOldData)
	class AFrontendCamera_Manage_C*                    FrontendCamera_SmallCosmetics_EdGraph_1_RefProperty;      // 0x0520(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Frontend.FrontEnd_C");
		return ptr;
	}


	void UpdateVaultCameraZoom(EFrontEndCamera InCameraType);
	void ProcessTouchInput();
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3_4(const struct FKey& Key);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2_3(const struct FKey& Key);
	void InpTchEvt_Moved(TEnumAsByte<ETouchIndex> FingerIndex, const struct FVector& Location);
	void InpTchEvt_Released(TEnumAsByte<ETouchIndex> FingerIndex, const struct FVector& Location);
	void InpTchEvt_Pressed(TEnumAsByte<ETouchIndex> FingerIndex, const struct FVector& Location);
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1_2(const struct FKey& Key);
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0_1(const struct FKey& Key);
	void InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent_4_5(float AxisValue);
	void ResetRotation();
	void StoreInitialRotation();
	void ReceiveTick(float* DeltaSeconds);
	void OnMatchStarted();
	void EnableTutorial();
	void ReceiveBeginPlay();
	void UnlockCameraTargetMovement(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera);
	void UnlockItemMovement(class UFortItem* Item);
	void BindFrontendEvents();
	void ExecuteUbergraph_FrontEnd(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
