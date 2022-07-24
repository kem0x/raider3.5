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

// BlueprintGeneratedClass B_StockBattleBus.B_StockBattleBus_C
// 0x0090 (0x03C8 - 0x0338)
class AB_StockBattleBus_C : public ABattleBusCosmeticInstanceBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Bus;                                                      // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        BalloonFlame;                                             // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Balloon;                                                  // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Light_Flash_Timeline_Light3_7AB7DCFD4BB25B57EF475DAD841187C0;// 0x0360(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Light_Flash_Timeline_Light2_7AB7DCFD4BB25B57EF475DAD841187C0;// 0x0364(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Light_Flash_Timeline_Light1_7AB7DCFD4BB25B57EF475DAD841187C0;// 0x0368(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Light_Flash_Timeline__Direction_7AB7DCFD4BB25B57EF475DAD841187C0;// 0x036C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x036D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Light_Flash_Timeline;                                     // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Bus_Music_Fader_Volume_A587597F47291E46479564BC14A7B45A;  // 0x0378(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Bus_Music_Fader__Direction_A587597F47291E46479564BC14A7B45A;// 0x037C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x037D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Bus_Music_Fader;                                          // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundBase*                                  LoopingSound;                                             // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  LoopingMusic;                                             // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             BusMusic_Inst;                                            // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             BusEngine_Inst;                                           // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MaterialWindows;                                          // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LightIndex;                                               // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03B4(0x0004) MISSED OFFSET
	TArray<struct FName>                               ParamNames;                                               // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_StockBattleBus.B_StockBattleBus_C");
		return ptr;
	}


	void UserConstructionScript();
	void Bus_Music_Fader__FinishedFunc();
	void Bus_Music_Fader__UpdateFunc();
	void Light_Flash_Timeline__FinishedFunc();
	void Light_Flash_Timeline__UpdateFunc();
	void Light_Flash_Timeline__Loop__EventFunc();
	void Start_Audio();
	void GrabAudioReferences();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_StockBattleBus(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
