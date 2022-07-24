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

// BlueprintGeneratedClass GCNL_IsUsingRemoteControlPawn.GCNL_IsUsingRemoteControlPawn_C
// 0x0008 (0x0428 - 0x0420)
class AGCNL_IsUsingRemoteControlPawn_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCNL_IsUsingRemoteControlPawn.GCNL_IsUsingRemoteControlPawn_C");
		return ptr;
	}


	bool OnRemove(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
	bool OnActive(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
	void UserConstructionScript();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ReceiveDestroyed();
	void ExecuteUbergraph_GCNL_IsUsingRemoteControlPawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
