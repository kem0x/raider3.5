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

// BlueprintGeneratedClass B_Assault_Surgical_Thermal_Athena.B_Assault_Surgical_Thermal_Athena_C
// 0x0028 (0x0F34 - 0x0F0C)
class AB_Assault_Surgical_Thermal_Athena_C : public AB_Assault_Generic_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0F0C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0F10(0x0008) (Transient, DuplicateTransient)
	float                                              ScalePlayerThermal_NewTrack_0_53EEC0934805CD1ABD5237ADD42E83EE;// 0x0F18(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ScalePlayerThermal__Direction_53EEC0934805CD1ABD5237ADD42E83EE;// 0x0F1C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0F1D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ScalePlayerThermal;                                       // 0x0F20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTimerHandle                                ScalePlayerVisibility;                                    // 0x0F28(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              BlendInTime;                                              // 0x0F30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Assault_Surgical_Thermal_Athena.B_Assault_Surgical_Thermal_Athena_C");
		return ptr;
	}


	void UserConstructionScript();
	void ScalePlayerThermal__FinishedFunc();
	void ScalePlayerThermal__UpdateFunc();
	void OnSetTargeting(bool* bNewIsTargeting);
	void PlayScopePP();
	void ReverseScopePP();
	void ExecuteUbergraph_B_Assault_Surgical_Thermal_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
