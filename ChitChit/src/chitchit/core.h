#pragma once
#ifdef CHITCHIT_PLATFORM_WINDOW
	#ifdef CHITCHIT_BUILD_DLL
		#define CHITCHIT_API __declspec(dllexport)
	#else
		#define CHITCHIT_API __declspec(dllimport)
	#endif
#else
#error CHITCHIT only support Window !
#endif
