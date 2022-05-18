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

// BlueprintGeneratedClass TheaterCamera_Blueprint.TheaterCamera_Blueprint_C
// 0x0205 (0x0AB5 - 0x08B0)
class ATheaterCamera_Blueprint_C : public AFortTheaterCamera
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08B0(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        MeshScreenPlane;                                          // 0x08B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             SceneInitializeFX;                                        // 0x08C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              FocusTimeline_Float_Curve_ADC98EA5D14E24EC78DD4F80C5102578;// 0x08C8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FocusTimeline__Direction_ADC98EA5D14E24EC78DD4F80C5102578;// 0x08CC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x08CD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FocusTimeline;                                            // 0x08D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DEBUGFOVA_ggt443_69C3A05E440A88A12DB0BAA6A9375778;        // 0x08D8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    DEBUGFOVA__Direction_69C3A05E440A88A12DB0BAA6A9375778;    // 0x08DC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x08DD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          DEBUGFOVA;                                                // 0x08E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              InitializeFX_TL_FadeInitFX_21BA8C434B0965A323799DA5570E46CF;// 0x08E8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    InitializeFX_TL__Direction_21BA8C434B0965A323799DA5570E46CF;// 0x08EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x08ED(0x0003) MISSED OFFSET
	class UTimelineComponent*                          InitializeFX_TL;                                          // 0x08F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DebugZoomTL_CameraRotLevelMax_41B63CEF445574B1F9D6F489004E4238;// 0x08F8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DebugZoomTL_CameraRotLevelZero_41B63CEF445574B1F9D6F489004E4238;// 0x08FC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DebugZoomTL_CameraOffsetX___LevelMax_41B63CEF445574B1F9D6F489004E4238;// 0x0900(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DebugZoomTL_CameraOffsetX___LevelZero_41B63CEF445574B1F9D6F489004E4238;// 0x0904(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DebugZoomTL_TotalNumberOfZoomLevels_41B63CEF445574B1F9D6F489004E4238;// 0x0908(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DebugZoomTL_CameraHeight_LevelMax_41B63CEF445574B1F9D6F489004E4238;// 0x090C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DebugZoomTL_CameraHeight_LevelZero_41B63CEF445574B1F9D6F489004E4238;// 0x0910(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DebugZoomTL_FOV_In_41B63CEF445574B1F9D6F489004E4238;      // 0x0914(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DebugZoomTL_FOV_Out_41B63CEF445574B1F9D6F489004E4238;     // 0x0918(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    DebugZoomTL__Direction_41B63CEF445574B1F9D6F489004E4238;  // 0x091C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x091D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          DebugZoomTL;                                              // 0x0920(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              WorldLocSnapSize;                                         // 0x0928(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraZHeightLevelZero;                                   // 0x092C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraXOffsetLevelZero;                                   // 0x0930(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0934(0x0004) MISSED OFFSET
	class AFortTheaterMapTile*                         TargetTile;                                               // 0x0938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentZoomPercentage;                                    // 0x0940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NumberOfZoomLevels;                                       // 0x0944(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZoomDistanceUnitZ;                                        // 0x0948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentZoomLevel;                                         // 0x094C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FocusedTileLocWithOffset;                                 // 0x0950(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               MouseDown;                                                // 0x095C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x095D(0x0003) MISSED OFFSET
	float                                              CurrentOffsetAmountX;                                     // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraXOffsetLevelMax;                                    // 0x0964(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                InitialZoomLevels;                                        // 0x0968(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ForwardVector;                                            // 0x096C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraYRotationLevelZero;                                 // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TargetTileLoc;                                            // 0x097C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              OldOffsetAmountX;                                         // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentFOV;                                               // 0x098C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FOVLevelZero;                                             // 0x0990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FOVLevelMax;                                              // 0x0994(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraZHeightLevelMax;                                    // 0x0998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZoomDistanceUnitX;                                        // 0x099C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugCameraZoom;                                          // 0x09A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x09A1(0x0003) MISSED OFFSET
	float                                              CameraYRotationLevelMax;                                  // 0x09A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugCameraVariables;                                     // 0x09A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SnapCameraToFocusedTile;                                  // 0x09A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x6];                                       // 0x09AA(0x0006) MISSED OFFSET
	class UMaterialInstanceDynamic*                    MIDMeshScreenPlane;                                       // 0x09B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVector2D>                           CloudMaskLocations;                                       // 0x09B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              CloudMaskScale;                                           // 0x09C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ReadyForPings;                                            // 0x09CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x09CD(0x0003) MISSED OFFSET
	class ATVPostProcessBP_C*                          TVPostProcess;                                            // 0x09D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABP_Hex_PARENT_C*>                    AllHexesArray;                                            // 0x09D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<unsigned char>                              HexesPinged;                                              // 0x09E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               AllHexesHavePingedOnce;                                   // 0x09F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WaitForForceFocus;                                        // 0x09F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AQuestIsPinned;                                           // 0x09FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x5];                                       // 0x09FB(0x0005) MISSED OFFSET
	TArray<bool>                                       PinnedQuestsArray;                                        // 0x0A00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               WaitForPinned;                                            // 0x0A10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0A11(0x0003) MISSED OFFSET
	struct FVector                                     HexWorldLocFromBP_Hex_PARENT;                             // 0x0A14(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxCameraDistance;                                        // 0x0A20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CenterOfCameraBounds;                                     // 0x0A24(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              HighestX_Value;                                           // 0x0A30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HighestY_Value;                                           // 0x0A34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TotalWidthOfHexPlane;                                     // 0x0A38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HexPlaneBufferSize;                                       // 0x0A3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CenterLocOfAllHexes;                                      // 0x0A40(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     AllHexesBoxExtent;                                        // 0x0A4C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVector2D>                           RoadMaskLocations;                                        // 0x0A58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               LightsBPSet;                                              // 0x0A68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x0A69(0x0007) MISSED OFFSET
	class AHexmapLevelSettings_Temperate01_C*          LightsBP;                                                 // 0x0A70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              HexPlaneLayersBufferSize;                                 // 0x0A78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TotalWidthOfHexPlaneLayer;                                // 0x0A7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVector2D>                           TileType0_Locs;                                           // 0x0A80(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector2D>                           TileType1_Locs;                                           // 0x0A90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector2D>                           TileType2_Locs;                                           // 0x0AA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TileTypeMaskScale;                                        // 0x0AB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSuspendInput;                                            // 0x0AB4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TheaterCamera_Blueprint.TheaterCamera_Blueprint_C");
		return ptr;
	}


	void SetSuspendInput(bool SuspendInput);
	bool IsInputSuspended();
	struct FVector2D NewFunction_0_1(class AActor* self2);
	void PanCamera(float DeltaX, float DeltaY);
	void HandleTheaterSelected(const struct FString& TheaterId);
	void ZoomCameraStep(bool Forward);
	void UserConstructionScript();
	void FocusTimeline__FinishedFunc();
	void FocusTimeline__UpdateFunc();
	void DebugZoomTL__FinishedFunc();
	void DebugZoomTL__UpdateFunc();
	void InitializeFX_TL__FinishedFunc();
	void InitializeFX_TL__UpdateFunc();
	void DEBUGFOVA__FinishedFunc();
	void DEBUGFOVA__UpdateFunc();
	void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_3_4(const struct FKey& Key);
	void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_2_3(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_1_2(const struct FKey& Key);
	void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_0_1(const struct FKey& Key);
	void OnActivated();
	void OnDeactivated();
	void SetTileFocus(class AFortTheaterMapTile** TargetTile);
	void ReceiveTick(float* DeltaSeconds);
	void OnDragBegin();
	void OnDragEnd();
	void StopFocusTimeline();
	void ForceTileFocus(const struct FVector& HexWorldLoc);
	void PingFromHex();
	void RefreshCloudMask();
	void MaskFinished();
	void PinnedPing();
	void ExecuteUbergraph_TheaterCamera_Blueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
