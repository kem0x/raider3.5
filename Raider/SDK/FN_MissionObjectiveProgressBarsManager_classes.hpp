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

// WidgetBlueprintGeneratedClass MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C
// 0x0011 (0x0229 - 0x0218)
class UMissionObjectiveProgressBarsManager_C : public UCommonUserWidget
{
public:
	class UVerticalBox*                                ProgressBarBox;                                           // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class AFortObjectiveBase*                          TrackedObjective;                                         // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bConfigureAsHUD;                                          // 0x0228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C");
		return ptr;
	}


	void GetHeightEstimate(float* Height);
	void HandleUpdate(class AFortMissionState* Objective);
	void HandleObjectiveVisibilityChanged(class AFortObjectiveBase* Objective, bool New_Visibility);
	void HandleObjectiveStatusChanged(class AFortObjectiveBase* Objective, EFortObjectiveStatus New_Status);
	void CreateProgressBarWidget(int Index);
	void Setup(class AFortObjectiveBase* TrackedObjective, bool bInConfigureAsHUD);
	void UpdateObjectiveProgressBars();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
