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

// BlueprintGeneratedClass GCN_HuskDigger_TunnelMove.GCN_HuskDigger_TunnelMove_C
// 0x0008 (0x0428 - 0x0420)
class AGCN_HuskDigger_TunnelMove_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_HuskDigger_TunnelMove.GCN_HuskDigger_TunnelMove_C");
		return ptr;
	}


	void UserConstructionScript();
	void K2_HandleGameplayCue(class AActor** MyTarget, TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters);
	void Trail();
	void ExecuteUbergraph_GCN_HuskDigger_TunnelMove(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
