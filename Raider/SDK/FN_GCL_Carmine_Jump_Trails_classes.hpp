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

// BlueprintGeneratedClass GCL_Carmine_Jump_Trails.GCL_Carmine_Jump_Trails_C
// 0x0008 (0x0428 - 0x0420)
class AGCL_Carmine_Jump_Trails_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCL_Carmine_Jump_Trails.GCL_Carmine_Jump_Trails_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_GCL_Carmine_Jump_Trails(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
