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

// WidgetBlueprintGeneratedClass Button_Shoot.Button_Shoot_C
// 0x0020 (0x03F0 - 0x03D0)
class UButton_Shoot_C : public UCommonBacchusButton_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	bool                                               NewVar_1;                                                 // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03D9(0x0007) MISSED OFFSET
	class UPaperSprite*                                ShootGunSprite;                                           // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPaperSprite*                                PickaxeSprite;                                            // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Button_Shoot.Button_Shoot_C");
		return ptr;
	}


	struct FEventReply OnTouchMoved(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent);
	void Check_For_Tag(const struct FGameplayTag& TagToCheck, bool* HasTag);
	void HandleWeaponChanged(class AFortWeapon* New_Weapon, class AFortWeapon* Previous_Weapon);
	struct FEventReply OnTouchStarted(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent);
	struct FEventReply OnTouchEnded(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent);
	void Construct();
	void On_Build_Mode_Changed(bool bEntering);
	void ExecuteUbergraph_Button_Shoot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
