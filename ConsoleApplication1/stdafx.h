// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

#include <stdlib.h>
#include <string.h>

#ifndef PERFTIME
#include <windows.h>
#include <winbase.h>
#define PERFTIME_INIT unsigned __int64 freq;  QueryPerformanceFrequency((LARGE_INTEGER*)&freq); double timerFrequency = (1.0/freq);  unsigned __int64 startTime;  unsigned __int64 endTime;  double timeDifferenceInMilliseconds;
#define PERFTIME_START QueryPerformanceCounter((LARGE_INTEGER *)&startTime);
#define PERFTIME_END QueryPerformanceCounter((LARGE_INTEGER *)&endTime); timeDifferenceInMilliseconds = ((endTime-startTime) * timerFrequency);  printf("Timing: %fms\n",timeDifferenceInMilliseconds*1000);
#endif

#define L_LITTLE_ENDIAN
/* The only leptonica header file you normally need to include: */
#include "allheaders.h"

int main_util(int argc, char *argv[]);

// TODO: reference additional headers your program requires here
