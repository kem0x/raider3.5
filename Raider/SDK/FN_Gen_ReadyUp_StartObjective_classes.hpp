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

// BlueprintGeneratedClass Gen_ReadyUp_StartObjective.Gen_ReadyUp_StartObjective_C
// 0x005C (0x0084 - 0x0028)
class UGen_ReadyUp_StartObjective_C : public UFortMissionEventParams
{
public:
	float                                              ReadyUpTimerLength;                                       // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FText                                       InteractText;                                             // 0x0030(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	struct FTransform                                  InteractSpawnLocation;                                    // 0x0050(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                BluGloMissionActivationQty;                               // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gen_ReadyUp_StartObjective.Gen_ReadyUp_StartObjective_C");
		return ptr;
	}


	void SetParams(float ReadyUpTimerLength, const struct FTransform& InteractSpawnLocation, const struct FText& InteractText, int BluGloMissionActivationQty, class UGen_ReadyUp_StartObjective_C** ThisObject);
	void BreakParams(float* ReadyUpTimerLength, struct FTransform* InteractSpawnLocation, struct FText* InteractText, int* BluGloMissionActivationQty);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
