#include "T01Training_14.h"

int T01Training_14(int argc, char* args[])
{
	int anValues[] =
	{
		1, 2, 3, 4, 5, 6, 7, 8, 9, 10
	};

	const int nSize = sizeof(anValues) / sizeof(anValues[0]);
	printf("=====> 배열 <=====\n");

	for(int i = 0; i < nSize; ++i)
	{
		printf("%d, ", anValues[i]);
	}

	int nLeft = 0;
	int nRight = nSize - 1;

	while(nLeft < nRight)
	{
		int nTemp = anValues[nLeft];
		anValues[nLeft] = anValues[nRight];
		anValues[nRight] = nTemp;

		nLeft += 1;
		nRight -= 1;
	}

	printf("\n\n=====> 배열 - 반전 후 <=====\n");

	for(int i = 0; i < nSize; ++i)
	{
		printf("%d, ", anValues[i]);
	}

	printf("\n");
	return 0;
}
