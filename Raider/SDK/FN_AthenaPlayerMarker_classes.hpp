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

// BlueprintGeneratedClass AthenaPlayerMarker.AthenaPlayerMarker_C
// 0x0040 (0x03B0 - 0x0370)
class AAthenaPlayerMarker_C : public AFortPlayerMarkerBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SM_Target;                                                // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            ProximitySphereCollision;                                 // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SpawnMarkerAnim_SpawnVerticalScale_D00BAF4B4CCD528A4D4E94BA8CAE97A2;// 0x0388(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SpawnMarkerAnim_SpawnScale_D00BAF4B4CCD528A4D4E94BA8CAE97A2;// 0x038C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SpawnMarkerAnim_Opacity_D00BAF4B4CCD528A4D4E94BA8CAE97A2; // 0x0390(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    SpawnMarkerAnim__Direction_D00BAF4B4CCD528A4D4E94BA8CAE97A2;// 0x0394(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0395(0x0003) MISSED OFFSET
	class UTimelineComponent*                          SpawnMarkerAnim;                                          // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_Main;                                                 // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_Target;                                               // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AthenaPlayerMarker.AthenaPlayerMarker_C");
		return ptr;
	}


	void UserConstructionScript();
	void SpawnMarkerAnim__FinishedFunc();
	void SpawnMarkerAnim__UpdateFunc();
	void BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnSetupMarker(struct FPlayerMarkerData* MarkerData);
	void OnMarkerPlaced();
	void ExecuteUbergraph_AthenaPlayerMarker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
