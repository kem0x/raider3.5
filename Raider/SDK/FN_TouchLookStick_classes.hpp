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

// WidgetBlueprintGeneratedClass TouchLookStick.TouchLookStick_C
// 0x0050 (0x03F0 - 0x03A0)
class UTouchLookStick_C : public UFortTouchLookStick
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      Image_1;                                                  // 0x03A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      Image_Look_Thumb;                                         // 0x03B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              ThumbstickMoveScale;                                      // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET
	class UPaperSprite*                                LookIcon;                                                 // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSkydiving;                                              // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03C9(0x0007) MISSED OFFSET
	class UPaperSprite*                                Place_Icon;                                               // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPaperSprite*                                Consume_Icon;                                             // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPaperSprite*                                Disengage_Icon;                                           // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPaperSprite*                                Fire_Icon;                                                // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TouchLookStick.TouchLookStick_C");
		return ptr;
	}


	void SetBrushForStatus(bool InBuild_or_Edit_Mode, bool Is_RC_Pawn, bool* Found_Context);
	void CheckForTag(const struct FGameplayTag& TagToCheck, bool* HasTag);
	void HandleWeaponChanged(bool In_Build_or_Edit_Mode, bool RC_Pawn);
	bool IsFireButtonUnderTouch(struct FVector2D* TouchPosition);
	void HandleTouchEnded();
	void HandleTouchStarted();
	void SetStickPosition(const struct FVector2D& NewPosition);
	void PreConstruct(bool* IsDesignTime);
	void Construct();
	void SetFiringState(bool* IsFiring);
	void Weapon_Change(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void OnHUDStateUpdate(struct FFortHUDState* NewState);
	void ExecuteUbergraph_TouchLookStick(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
