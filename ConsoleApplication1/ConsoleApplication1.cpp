// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char *argv[])
{
	printf("liblept version:\n%s\n", getLeptonicaVersion());
	printf("image library versions:\n%s", getImagelibVersions());

	return main_util(argc, argv);
}

