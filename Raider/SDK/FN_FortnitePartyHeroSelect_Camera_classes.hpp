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

// BlueprintGeneratedClass FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C
// 0x0020 (0x08E0 - 0x08C0)
class AFortnitePartyHeroSelect_Camera_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08C0(0x0008) (Transient, DuplicateTransient)
	class UCameraComponent*                            CameraActor_1;                                            // 0x08C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               MouseDown;                                                // 0x08D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x08D1(0x0007) MISSED OFFSET
	class AFortPlayerPawn*                             CachedPawn;                                               // 0x08D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C");
		return ptr;
	}


	void HandleMousePress();
	void HandleMouseRelease();
	void UserConstructionScript();
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void OnDeactivated();
	void ReceiveTick(float* DeltaSeconds);
	void OnActivated();
	void ExecuteUbergraph_FortnitePartyHeroSelect_Camera(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
