#pragma once

#ifdef CB_PLATFORM_WINDOWS
	#ifdef CB_BUILD_DLL
		#define CODEBASE_API __declspec(dllexport)
	#else
		#define CODEBASE_API __declspec(dllimport)
	#endif
#else
	#error CodeBase only supports Windows
#endif