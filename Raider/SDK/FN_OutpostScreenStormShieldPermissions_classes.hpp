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

// WidgetBlueprintGeneratedClass OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C
// 0x0030 (0x03F0 - 0x03C0)
class UOutpostScreenStormShieldPermissions_C : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (Transient, DuplicateTransient)
	class UOutpostScreenCanEditPanel_C*                OutpostScreenCanEditPanel;                                // 0x03C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               GetHelp;                                                  // 0x03D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03D1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    CloseOutpostScreen;                                       // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UOutpostScreenStormShield_C*                 ParentReference;                                          // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C");
		return ptr;
	}


	void CenterWidget();
	void SetParent(class UOutpostScreenStormShield_C* ParentWidget);
	void HandleBack(bool* Passthrough);
	void AddInputHandlers();
	bool IsOwningPlayerOutpostOwner();
	void UpdatePrivilages();
	void isPlayerAlone(bool* isAlone);
	void Construct();
	void UpdatePrivilagesEvent_0_1(const struct FFortTeamMemberInfo& NewTeamMemberInfo);
	void UpdatePrivilagesEvent_1_2(int PlayerIndex);
	void OnActivated();
	void ExecuteUbergraph_OutpostScreenStormShieldPermissions(int EntryPoint);
	void CloseOutpostScreen__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
