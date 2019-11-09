#pragma once

#ifdef RF_PLATFORM_WINDOWS
	#ifdef RF_BUILD_DLL
		#define RAINFALL_API __declspec(dllexport)
	#else
		#define RAINFALL_API __declspec(dllimport)
	#endif
#else
	#error Rainfall only supports Windows!
#endif
