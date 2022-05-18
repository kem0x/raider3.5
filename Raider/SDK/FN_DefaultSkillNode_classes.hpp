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

// WidgetBlueprintGeneratedClass DefaultSkillNode.DefaultSkillNode_C
// 0x0151 (0x0981 - 0x0830)
class UDefaultSkillNode_C : public UFortSkillTreeCanvasNode
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0830(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      GlowOverlay;                                              // 0x0838(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USpacer*                                     InternalSpacer;                                           // 0x0840(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      SelectionPulseEffect;                                     // 0x0848(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              SelectionGlowPercentage;                                  // 0x0850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverGlowPercentage;                                      // 0x0854(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                HoverGlowTimerHandle;                                     // 0x0858(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                SelectionGlowTimerHandle;                                 // 0x0860(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSkillTreePageColors                        PageColors;                                               // 0x0868(0x00C0) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<ESkillTreePages>                       Pages;                                                    // 0x0928(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0929(0x0003) MISSED OFFSET
	struct FSkillTreeGroupColors                       GroupColors;                                              // 0x092C(0x0054) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<ESkillTreeGroups>                      Groups;                                                   // 0x0980(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DefaultSkillNode.DefaultSkillNode_C");
		return ptr;
	}


	void SetBackgroundColor();
	void UpdateFromButtonState();
	void UpdateSelectionGlow();
	void UpdateHoverGlow();
	void StepSelectionGlowInterpolation();
	void StepHoverGlowInterpolation();
	void UpdateFromNodeData();
	void UpdateFromNodeState();
	void Construct();
	void HandleSkillTreeNodeStateChanged();
	void PreConstruct(bool* IsDesignTime);
	void OnUnhovered();
	void OnHovered();
	void OnSelected();
	void OnDeselected();
	void ExecuteUbergraph_DefaultSkillNode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
