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

// BlueprintGeneratedClass CheckForMessageItems.CheckForMessageItems_C
// 0x0018 (0x03A0 - 0x0388)
class ACheckForMessageItems_C : public AFortScriptedAction
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortGiftBoxItem*                            GiftBox;                                                  // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CheckForMessageItems.CheckForMessageItems_C");
		return ptr;
	}


	void Closed(class UCommonActivatablePanel* Closed);
	void ShowMessage();
	void UserConstructionScript();
	void Execute(struct FFortScriptedActionParams* Params);
	void ExecuteUbergraph_CheckForMessageItems(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
