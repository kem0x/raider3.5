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

// BlueprintGeneratedClass MissionVoteNotification.MissionVoteNotification_C
// 0x0008 (0x00B0 - 0x00A8)
class UMissionVoteNotification_C : public UFortMissionVoteUINotification
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionVoteNotification.MissionVoteNotification_C");
		return ptr;
	}


	void TakeAction();
	void ExecuteUbergraph_MissionVoteNotification(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
