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

// WidgetBlueprintGeneratedClass JoinServer.JoinServer_C
// 0x007C (0x038C - 0x0310)
class UJoinServer_C : public UFortUIStateWidget_NUI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0310(0x0008) (Transient, DuplicateTransient)
	class UBuildWatermark_C*                           BuildWatermark;                                           // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonWidgetStack*                          MainContentStack;                                         // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               ManualStart;                                              // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0329(0x0007) MISSED OFFSET
	TArray<struct FConfirmationDialogAction>           TutorialCanceledConfirmActions;                           // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       NoneAction;                                               // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundPromptTutorial;                                      // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MatchmakingAttempts;                                      // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TutorialMatchmakingStarted;                               // 0x0354(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0355(0x0003) MISSED OFFSET
	class UProgressWidget_C*                           ProgressWidget;                                           // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UTutorialWindow_C*                           TutorialWindow;                                           // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               AbandonSession;                                           // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0369(0x0007) MISSED OFFSET
	class UObject*                                     MenuWidget;                                               // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxMatchmakingAttempts;                                   // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x037C(0x0004) MISSED OFFSET
	class URejoinWindow_C*                             RejoinWindow;                                             // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                RejoinAttemptCount;                                       // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass JoinServer.JoinServer_C");
		return ptr;
	}


	void HandleLobbyConnectingToGame();
	void ShowAbandoningProgress();
	void ShowRetryRejoinWindow(const struct FText& Failure, bool AllowRetry);
	void ShowRetryRejoinSession();
	void ShowRejoiningProgress();
	void HideRejoinWindow(bool AbandonSession);
	void ShowRejoinWindow();
	class UWidget* HandleGetMainMenuContent();
	void ShowTutorialCanceled();
	void GetMatchmakingError(EMatchmakingCompleteResult MatchMakingError, struct FText* ErrorText);
	void HandleLobbyTimeUpdated(int TimeRemaining);
	void SkipTutorial();
	void StartTutorialMatchmakingFlow();
	void HandleEnterState(EFortUIState PreviousState);
	void HandleLobbyDisconnected();
	void HandleMatchmakingStateChange(TEnumAsByte<EMatchmakingState> OldState, TEnumAsByte<EMatchmakingState> NewState);
	void HandleMatchmakingComplete(EMatchmakingCompleteResult Result);
	void Initialize();
	void DialogResult_B65B7C6342A70AAA7E4C689EE8A624BF(EFortDialogResult Result, const struct FName& ResultName);
	void OnFailure_B419884742513722D11D8AB4D90DE5E2();
	void OnSuccess_B419884742513722D11D8AB4D90DE5E2();
	void OnFailure_C91A02504569664A4B1E259E5F57A79D();
	void OnSuccess_C91A02504569664A4B1E259E5F57A79D();
	void RequestTutorialRetry();
	void ShowSkipTutorial();
	void HandleClientEvent_RejoinStart(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void HandleRequestRejoinRetry();
	void HandleRequestAbandon();
	void HandleClientEvent_OnboardingStartMatchmaking(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void Construct();
	void OnEnterState(EFortUIState* PreviousUIState);
	void ExecuteUbergraph_JoinServer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
