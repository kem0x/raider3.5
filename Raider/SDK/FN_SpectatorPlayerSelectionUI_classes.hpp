#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass SpectatorPlayerSelectionUI.SpectatorPlayerSelectionUI_C
// 0x05A8 (0x07B8 - 0x0210)
class USpectatorPlayerSelectionUI_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0210(0x0008) (Transient, DuplicateTransient)
	class UScrollBox*                                  ScrollBox_151_152;                                        // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FButtonStyle                                ButtonStyle;                                              // 0x0220(0x0278) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class UButton*, class AFortPlayerState*>      ButtonToPlayerStateMap;                                   // 0x0498(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FButtonStyle                                FollowedButtonStyle;                                      // 0x04E8(0x0278) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class AFortPlayerState*, class UButton*>      PlayerStateToButtonMap;                                   // 0x0760(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UButton*                                     FollowedPlayerButton;                                     // 0x07B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SpectatorPlayerSelectionUI.SpectatorPlayerSelectionUI_C");
		return ptr;
	}


	void SetFollowedPlayerButton(class UButton* NewButton);
	void FindPlayerWithPressedButton(class AFortPlayerState** Player);
	void AddPlayerElement(class AFortPlayerStateAthena* Player);
	void Construct();
	void OnPlayerButtonPressed();
	void OnFollowedPlayerChanged(class AFortPlayerControllerSpectating* SpectatorPC, class AFortPlayerState* NewFollowedPlayer);
	void PlayerBecameRelevant(class AFortPlayerState* NewlyRelevantPlayer);
	void PlayerBecameIrrelevant(class AFortPlayerState* NewlyRelevantPlayer);
	void ExecuteUbergraph_SpectatorPlayerSelectionUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
