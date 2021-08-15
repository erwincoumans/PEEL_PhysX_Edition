///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/**
 *	Main file for IceTerrain.dll.
 *	\file		IceTerrain.h
 *	\author		Pierre Terdiman
 *	\date		May, 8, 2000
 */
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Include Guard
#ifndef ICETERRAIN_H
#define ICETERRAIN_H

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Compilation messages
#if defined(ICETERRAIN_EXPORTS)
	#pragma message("----Compiling ICE Terrain")
#elif !defined(ICETERRAIN_EXPORTS)
	#pragma message("----Using ICE Terrain")
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// Automatic linking
	#ifndef BAN_ICETERRAIN_AUTOLINK
		#ifdef _WIN64
			#ifdef _DEBUG
				#pragma comment(lib, "IceTerrain64_D.lib")
			#else
				#pragma comment(lib, "IceTerrain64.lib")
			#endif
		#else
			#ifdef _DEBUG
				#pragma comment(lib, "IceTerrain_D.lib")
			#else
				#pragma comment(lib, "IceTerrain.lib")
			#endif
		#endif
	#endif
#endif

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Preprocessor

#ifndef ICE_NO_DLL
	#ifdef ICETERRAIN_EXPORTS
		#define ICETERRAIN_API		__declspec(dllexport)
	#else
		#define ICETERRAIN_API		__declspec(dllimport)
	#endif
#else
		#define ICETERRAIN_API
#endif

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// Includes

	#include "IceTerrainSettings.h"

	namespace IceTerrain
	{
		#include "IceHeightfield.h"

		// Height layers
		#include "IceHeightLayer.h"

		#include "IceBitmapLayer.h"
		#include "IceCellularLayer.h"
		#include "IceClampLayer.h"
		#include "IceConstantLayer.h"
		#include "IceCraterLayer.h"
		#include "IceErosionLayer.h"
		#include "IceFBMLayer.h"
		#include "IceFilterLayer.h"
		#include "IceMidpointLayer.h"
		#include "IcePowerLayer.h"
		#include "IceRidgedFractalLayer.h"
		#include "IceScaleLayer.h"
		#include "IceSinusLayer.h"
		#include "IceSpectralLayer.h"
		#include "IceTurbulenceLayer.h"
		#include "IceMaddLayer.h"

		// Terrain texture
		#include "IceTerrainTexture.h"

		// Weather
		#include "IceLightning.h"

		// Scattering
		#include "IceAtmosphere.h"
		#include "IceSun.h"
//		#include "IceSky.h"

		FUNCTION ICETERRAIN_API bool InitIceTerrain();
		FUNCTION ICETERRAIN_API bool CloseIceTerrain();
	}

#endif // ICETERRAIN_H