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

// BlueprintGeneratedClass MusicManager.MusicManager_C
// 0x0098 (0x0420 - 0x0388)
class AMusicManager_C : public AFortMusicManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	float                                              Gameplay_Music_Fader_Volume_869161D741AED71C8F0239859977BB00;// 0x0390(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Gameplay_Music_Fader__Direction_869161D741AED71C8F0239859977BB00;// 0x0394(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0395(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Gameplay_Music_Fader;                                     // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundBase*                                  MusicFrontend;                                            // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  MusicLobby;                                               // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  StingerReturningToAmbientMusic;                           // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Debug;                                                    // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03B9(0x0007) MISSED OFFSET
	struct FName                                       GameMode_Current;                                         // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GameMode_Lobby;                                           // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GameMode_Frontend;                                        // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GameMode_InGame;                                          // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayStingerWhenReturningToAmbientMusic;                   // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayingAmbientMusic;                                      // 0x03E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayingThreatMusic;                                       // 0x03E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayingNearbyEnemiesMusic;                                // 0x03E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayingHuskLowMusic;                                      // 0x03E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayingHuskHighMusic;                                     // 0x03E5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayingLargeEnemyMusic;                                   // 0x03E6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x03E7(0x0001) MISSED OFFSET
	float                                              LastTimeMusicWasStartedOrContinued;                       // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentMusicIntensityLevel;                               // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EFortDayPhase>                         CurrentDayPhase;                                          // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03F1(0x0003) MISSED OFFSET
	float                                              MusicLogicUpdateTickTime;                                 // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDurationBeforeMusicCanIncreaseIntensity;               // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IntensityIncreaseFadeTime;                                // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMusicFadeStyles>                      IntensityIncreaseFadeStyle;                               // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0401(0x0003) MISSED OFFSET
	float                                              MinDurationBeforeMusicCanDecreaseInIntensity;             // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IntensityDecreaseFadeTime;                                // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMusicFadeStyles>                      IntensityDecreaseFadeStyle;                               // 0x040C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MusicShouldStop;                                          // 0x040D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayingStingerMusic;                                      // 0x040E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x040F(0x0001) MISSED OFFSET
	float                                              IntensityVeryHigh;                                        // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IntensityHigh;                                            // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IntensityMedium;                                          // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IntensityLow;                                             // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MusicManager.MusicManager_C");
		return ptr;
	}


	void ResetMusicBools();
	void UserConstructionScript();
	void Gameplay_Music_Fader__FinishedFunc();
	void Gameplay_Music_Fader__UpdateFunc();
	void OnDayPhaseChanged(TEnumAsByte<EFortDayPhase>* CurrentDayPhase, TEnumAsByte<EFortDayPhase>* PreviousDayPhase, bool* bAtCreation);
	void OnUpdateMusic();
	void PlayAmbientMusic();
	void ReceiveBeginPlay();
	void On_Music_Tick();
	void PlayStinger(class UFortMusicAsset** NewMusicAsset);
	void Music_Fade_In(float Time);
	void Music_Fade_Out(float Time);
	void On_Stinger_Completed(class UFortMusicVoice* Voice);
	void Gather_Combat_Graph_Tresholds();
	void ExecuteUbergraph_MusicManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
