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

// BlueprintGeneratedClass FriendNotification.FriendNotification_C
// 0x0008 (0x00B0 - 0x00A8)
class UFriendNotification_C : public UFortUIFriendNotification
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FriendNotification.FriendNotification_C");
		return ptr;
	}


	void ShowFriendInvites();
	void ShowPartyInvites();
	void TakeAction();
	void ExecuteUbergraph_FriendNotification(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
