#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct FrontEnd_VFXStorage.FrontEnd_VFXStorage
// 0x0320
struct FFrontEnd_VFXStorage
{
	TMap<class USkeletalMesh*, class UParticleSystem*> PickAxeVFX1_8_9F24534A48EEC9548F370C85E07AFC16;           // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<class USkeletalMesh*, struct FName>           PickAxeVFX1AttachPointName_27_C3C6A99D414B273C3F2F4D83065E1F93;// 0x0050(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<class USkeletalMesh*, struct FVector>         PickAxeVFX1LocationOffsets_13_E94D17BD41E2A1E9B4F2A3992A88A9A2;// 0x00A0(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<class USkeletalMesh*, struct FRotator>        PickAxeVFX1RotationValues_30_530C9B024EF0D3495130BEB05A7C9DB5;// 0x00F0(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<class USkeletalMesh*, struct FVector>         PickAxeVFX1ScaleValues_19_B790CD784F54FD8585F547AD90432108;// 0x0140(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<class USkeletalMesh*, class UParticleSystem*> PickAxeVFX2_10_F5BE108344031B4970BDAD97279D79EA;          // 0x0190(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<class USkeletalMesh*, struct FName>           PickAxeVFX2AttachPointName_29_B410A96742FDD4099417DF8CA199B996;// 0x01E0(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<class USkeletalMesh*, struct FVector>         PickAxeVFX2LocationOffsets_15_ED578CEC48BC2913F76226B1B016824C;// 0x0230(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<class USkeletalMesh*, struct FRotator>        PickAxeVFX2RotationValues_31_9A48DA3E422CB2EDC97145A59E7D176E;// 0x0280(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<class USkeletalMesh*, struct FVector>         PickAxeVFX2ScaleValues_23_9FC074A54C37F11135B1D6BD790088E1;// 0x02D0(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
