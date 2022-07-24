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

// WidgetBlueprintGeneratedClass DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C
// 0x0021 (0x0231 - 0x0210)
class UDefaultObjectiveContentWidget_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0210(0x0008) (Transient, DuplicateTransient)
	class UMissionObjectiveProgressBarsManager_C*      MissionObjectiveProgressBarsManager;                      // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UNamedSlot*                                  RichTextSlot;                                             // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class AFortObjectiveBase*                          TrackedObjective;                                         // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bConfigureAsHUD;                                          // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C");
		return ptr;
	}


	void GetHeightEstimate(float* Height);
	void HandleTimerComponentUpdated(class UFortMissionTimerComponent* InTimerComponent);
	void CreateRichTextBlock(const struct FText& Text);
	void GetRichTextBlock(class UMissionRichText_C** MissionRichTextBlock);
	void Update();
	void Setup(class AFortObjectiveBase* Objective, bool bInConfigureAsHUD);
	void HandleObjectiveStatusChanged(class AFortObjectiveBase* Objective, EFortObjectiveStatus NewStatus);
	void HandleObjectiveVisibilityChanged(class AFortObjectiveBase* Objective, bool bNewVisibility);
	void HandleUpdate(class AFortMissionState* MissionState);
	void ExecuteUbergraph_DefaultObjectiveContentWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
