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

// WidgetBlueprintGeneratedClass MissionTrackerEntry.MissionTrackerEntry_C
// 0x0018 (0x02D0 - 0x02B8)
class UMissionTrackerEntry_C : public UFortMissionTrackerEntry
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B8(0x0008) (Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    WidgetVisibilityChanged;                                  // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MissionTrackerEntry.MissionTrackerEntry_C");
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_MissionTrackerEntry(int EntryPoint);
	void WidgetVisibilityChanged__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
