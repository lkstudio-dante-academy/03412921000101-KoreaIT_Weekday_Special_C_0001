#include "T01Training_17.h"

int T01Training_17(int argc, char* args[])
{
	int anValues[10] = { 0 };
	const int nSize = sizeof(anValues) / sizeof(anValues[0]);

	for(int i = 0; i < nSize; ++i)
	{
		anValues[i] = rand() % 15 + 1;
	}

	printf("=====> 배열 <=====\n");

	for(int i = 0; i < nSize; ++i)
	{
		printf("%d, ", anValues[i]);
	}

	int nPos = 0;

	printf("\n\n위치 입력 : ");
	scanf("%d", &nPos);

	int i = 0;

	while(nPos - i >= 0 && anValues[nPos - i] < 10)
	{
		anValues[nPos - i] = -1;
		i += 1;
	}

	i = 0;

	while(nPos + i < nSize && anValues[nPos + i] < 10)
	{
		anValues[nPos + i] = -1;
		i += 1;
	}
	
	printf("\n=====> 배열 - 치환 후 <=====\n");

	for(int i = 0; i < nSize; ++i)
	{
		printf("%d, ", anValues[i]);
	}

	printf("\n");
	return 0;
}
