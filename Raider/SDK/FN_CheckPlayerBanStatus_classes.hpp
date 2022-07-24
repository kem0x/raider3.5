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

// BlueprintGeneratedClass CheckPlayerBanStatus.CheckPlayerBanStatus_C
// 0x0048 (0x03D0 - 0x0388)
class ACheckPlayerBanStatus_C : public AFortScriptedAction
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPlayerBannedModal_C*                        BannedModal;                                              // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FMcpBanInfo                                 CurrBanInfo;                                              // 0x03A0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CheckPlayerBanStatus.CheckPlayerBanStatus_C");
		return ptr;
	}


	void OnActionCompleted();
	void ShowBan();
	void UserConstructionScript();
	void Execute(struct FFortScriptedActionParams* Params);
	void ExecuteUbergraph_CheckPlayerBanStatus(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
