// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#define L_LITTLE_ENDIAN
/* The only leptonica header file you normally need to include: */
#include "allheaders.h"

int main()
{
	printf("liblept version:\n%s\n", getLeptonicaVersion());
	printf("image library versions:\n%s", getImagelibVersions());

    return 0;
}

