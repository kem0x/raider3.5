#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ImagePlate.ImagePlateComponent.SetImagePlate
struct UImagePlateComponent_SetImagePlate_Params
{
	struct FImagePlateParameters                       Plate;                                                    // (Parm)
};

// Function ImagePlate.ImagePlateComponent.OnRenderTextureChanged
struct UImagePlateComponent_OnRenderTextureChanged_Params
{
};

// Function ImagePlate.ImagePlateComponent.GetPlate
struct UImagePlateComponent_GetPlate_Params
{
	struct FImagePlateParameters                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
