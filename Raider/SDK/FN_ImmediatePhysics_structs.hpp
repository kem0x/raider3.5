#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ImmediatePhysics.ESimulationSpace
enum class ESimulationSpace : uint8_t
{
	ComponentSpace                 = 0,
	WorldSpace                     = 1,
	RootBoneSpace                  = 2,
	ESimulationSpace_MAX           = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ImmediatePhysics.AnimNode_RigidBody
// 0x0478 (0x0590 - 0x0118)
struct FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase
{
	class UPhysicsAsset*                               OverridePhysicsAsset;                                     // 0x0118(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OverrideWorldGravity;                                     // 0x0120(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     ExternalForce;                                            // 0x012C(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     ComponentLinearAccScale;                                  // 0x0138(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     ComponentLinearVelScale;                                  // 0x0144(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     ComponentAppliedLinearAccClamp;                           // 0x0150(0x000C) (Edit, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     OverlapChannel;                                           // 0x015C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableWorldGeometry;                                     // 0x015D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x015E(0x0002) MISSED OFFSET
	ESimulationSpace                                   SimulationSpace;                                          // 0x0160(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x015E(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               bOverrideWorldGravity;                                    // 0x0164(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0165(0x0003) MISSED OFFSET
	float                                              CachedBoundsScale;                                        // 0x0168(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTransferBoneVelocities;                                  // 0x016C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFreezeIncomingPoseOnStart;                               // 0x016D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bComponentSpaceSimulation;                                // 0x016E(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData03[0x421];                                     // 0x016F(0x0421) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
