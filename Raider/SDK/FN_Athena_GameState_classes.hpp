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

// BlueprintGeneratedClass Athena_GameState.Athena_GameState_C
// 0x0020 (0x1658 - 0x1638)
class AAthena_GameState_C : public AFortGameStateAthena
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1638(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x1640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_NewTrack_0_21F3C11243B4DF8C6B6A958D51E85950;   // 0x1648(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_21F3C11243B4DF8C6B6A958D51E85950;   // 0x164C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x164D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x1650(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Athena_GameState.Athena_GameState_C");
		return ptr;
	}


	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void OnWinnerAnnounced();
	void ExecuteUbergraph_Athena_GameState(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
