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

// WidgetBlueprintGeneratedClass OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C
// 0x0030 (0x0328 - 0x02F8)
class UOutpostScreenStormShieldPermissions_C : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F8(0x0008) (Transient, DuplicateTransient)
	class UOutpostScreenCanEditPanel_C*                OutpostScreenCanEditPanel;                                // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               GetHelp;                                                  // 0x0308(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0309(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    CloseOutpostScreen;                                       // 0x0310(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UOutpostScreenStormShield_C*                 ParentReference;                                          // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

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
	void UpdatePrivilagesEvent_1(const struct FFortTeamMemberInfo& NewTeamMemberInfo);
	void UpdatePrivilagesEvent_2(int PlayerIndex);
	void OnActivated();
	void ExecuteUbergraph_OutpostScreenStormShieldPermissions(int EntryPoint);
	void CloseOutpostScreen__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
