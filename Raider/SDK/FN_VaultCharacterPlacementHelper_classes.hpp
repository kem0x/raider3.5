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

// BlueprintGeneratedClass VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C
// 0x0081 (0x03A9 - 0x0328)
class AVaultCharacterPlacementHelper_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Floor;                                                    // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CharacterPlacement;                                       // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    NewEventDispatcher_1;                                     // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0358(0x0008) MISSED OFFSET
	struct FTransform                                  OriginalTransform;                                        // 0x0360(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     OffsetTranslate;                                          // 0x0390(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    OffsetRotate;                                             // 0x039C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               Athena;                                                   // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C");
		return ptr;
	}


	void UpdatePosition_For_Camera(EFrontEndCamera FrontendCamera);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SubGameChanged_Event_1(ESubGame SubGame);
	void ReceiveTick(float* DeltaSeconds);
	void OnFrontEndCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera);
	void ExecuteUbergraph_VaultCharacterPlacementHelper(int EntryPoint);
	void NewEventDispatcher_0__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
