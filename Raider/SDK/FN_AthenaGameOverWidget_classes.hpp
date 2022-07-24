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

// WidgetBlueprintGeneratedClass AthenaGameOverWidget.AthenaGameOverWidget_C
// 0x00CA (0x03F2 - 0x0328)
class UAthenaGameOverWidget_C : public UFortActivatablePanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UEliminatedOverlay_C*                        EliminatedOverlay;                                        // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetSwitcher*                             GameOverSwitcher;                                         // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           OpenShadowPlayHighlights;                                 // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USafeZone*                                   SafeZone_1;                                               // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWinnerOverlay_C*                            WinnerOverlay;                                            // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                         Input_ReturnToLobby;                                      // 0x0358(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         Input_NextTeammate;                                       // 0x0368(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         Input_PreviousTeammate;                                   // 0x0378(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         Input_ReportPlayer;                                       // 0x0388(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         Input_ViewMatchStats;                                     // 0x0398(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ForceSpectatorSetupForReportingPlayer;                    // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03A9(0x0007) MISSED OFFSET
	struct FText                                       KillersName;                                              // 0x03B0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               DeadAndSpectating;                                        // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03C9(0x0007) MISSED OFFSET
	struct FDataTableRowHandle                         Input_Matchmake;                                          // 0x03D0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         Input_CancelMatchmaking;                                  // 0x03E0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               MatchmakingComplete;                                      // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EInputActionState                                  NewVar_1;                                                 // 0x03F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaGameOverWidget.AthenaGameOverWidget_C");
		return ptr;
	}


	void OnPlayerLost(EEndOfMatchReason LostReason);
	void OnWinningScoreDetermined(int Score);
	void Handle_CancelMatchmaking(bool* Passthrough);
	void Handle_Matchmake(bool* Passthrough);
	void Handle_ToggleMap(bool* Passthrough);
	void InGameMatchmakingComplete(bool Success);
	void SetViewModel(class UAthenaPlayerViewModel* ViewModel);
	bool CanFollowNextOrPreviousTeammate();
	void SetKillersName(struct FFortPlayerDeathReport* FortPlayerDeathReport);
	void OnPlayerOrTeamWon();
	void Handle_ViewMatchStats(bool* Passthrough);
	void Handle_ReportPlayer(bool* Passthrough);
	void InputSetup();
	void Handle_FollowPreviousTeammate(bool* Passthrough);
	void Handle_FollowNextTeammate(bool* Passthrough);
	void InputRefresh();
	void Handle_ReturnToLobby(bool* Passthrough);
	void HighlightCountChanged(int HighlightCount);
	void OnWinnerAnnounced(const struct FString& Winner);
	void HideExtraStuffForSpectating();
	void OnViewTargetChanged();
	void OnPlaceChanged();
	void OnPawnDied(struct FFortPlayerDeathReport* DeathReport);
	void OnActivated();
	void Construct();
	void On_Kill_Feed_Updated();
	void BndEvt__OpenShadowPlayHighlights_K2Node_ComponentBoundEvent_188_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnDeactivated();
	void Destruct();
	void ExecuteUbergraph_AthenaGameOverWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
