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

// BlueprintGeneratedClass Trap_Athena_WallSpikes.Trap_Athena_WallSpikes_C
// 0x0008 (0x0D60 - 0x0D58)
class ATrap_Athena_WallSpikes_C : public ATrap_Athena_Spikes_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D58(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trap_Athena_WallSpikes.Trap_Athena_WallSpikes_C");
		return ptr;
	}


	void UserConstructionScript();
	void SetSpikePosition(float* NewSpikePosition);
	void ExecuteUbergraph_Trap_Athena_WallSpikes(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
