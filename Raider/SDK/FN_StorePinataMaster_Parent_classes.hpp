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

// BlueprintGeneratedClass StorePinataMaster_Parent.StorePinataMaster_Parent_C
// 0x0010 (0x0338 - 0x0328)
class AStorePinataMaster_Parent_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             PinataSceneRoot;                                          // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StorePinataMaster_Parent.StorePinataMaster_Parent_C");
		return ptr;
	}


	void UserConstructionScript();
	void InitiatePinata();
	void CameraResetComplete();
	void CameraTransitionComplete();
	void ExecuteUbergraph_StorePinataMaster_Parent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
