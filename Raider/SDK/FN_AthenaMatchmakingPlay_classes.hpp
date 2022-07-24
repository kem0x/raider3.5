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

// WidgetBlueprintGeneratedClass AthenaMatchmakingPlay.AthenaMatchmakingPlay_C
// 0x0028 (0x02F8 - 0x02D0)
class UAthenaMatchmakingPlay_C : public UFortAthenaMatchmakingWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (Transient, DuplicateTransient)
	class UAthenaMatchmakingModeButton_C*              AthenaMatchmakingModeButton;                              // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      MatchmakingSpinner;                                       // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    PlaylistsUpdated;                                         // 0x02E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaMatchmakingPlay.AthenaMatchmakingPlay_C");
		return ptr;
	}


	void OpenPlayOptions();
	void BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void OnAvailablePlaylistsUpdated();
	void OnPlayButtonUpdated(bool* bShowPlayButton);
	void OnSetPlayButtonText(struct FText* PlayButtonText);
	void OnSetCancelButtonText(struct FText* CancelButtonText);
	void PlaylistChanged(class UFortPlaylistAthena** NewPlaylist);
	void BndEvt__AthenaMatchmakingModeButton_K2Node_ComponentBoundEvent_42_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void SetSquadFillText(bool* InCurrentSquadFill);
	void ExecuteUbergraph_AthenaMatchmakingPlay(int EntryPoint);
	void PlaylistsUpdated__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
