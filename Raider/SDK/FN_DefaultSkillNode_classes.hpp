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

// WidgetBlueprintGeneratedClass DefaultSkillNode.DefaultSkillNode_C
// 0x0151 (0x0A01 - 0x08B0)
class UDefaultSkillNode_C : public UFortSkillTreeCanvasNode
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08B0(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      GlowOverlay;                                              // 0x08B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USpacer*                                     InternalSpacer;                                           // 0x08C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      SelectionPulseEffect;                                     // 0x08C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              SelectionGlowPercentage;                                  // 0x08D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverGlowPercentage;                                      // 0x08D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                HoverGlowTimerHandle;                                     // 0x08D8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                SelectionGlowTimerHandle;                                 // 0x08E0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSkillTreePageColors                        PageColors;                                               // 0x08E8(0x00C0) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<ESkillTreePages>                       Pages;                                                    // 0x09A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x09A9(0x0003) MISSED OFFSET
	struct FSkillTreeGroupColors                       GroupColors;                                              // 0x09AC(0x0054) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<ESkillTreeGroups>                      Groups;                                                   // 0x0A00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

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
	void BP_OnUnhovered();
	void BP_OnHovered();
	void BP_OnSelected();
	void BP_OnDeselected();
	void ExecuteUbergraph_DefaultSkillNode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
