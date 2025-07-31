#include "T01Training_10.h"

int T01Training_10(int argc, char* args[])
{
	int nValA = 0;
	int nValB = 0;

	printf("정수 (2 개) 입력 : ");
	scanf("%d %d", &nValA, &nValB);

	// 보정이 필요 할 경우
	if(nValA > nValB)
	{
		int nTemp = nValA;
		nValA = nValB;
		nValB = nTemp;
	}

	for(int i = nValA; i <= nValB; ++i)
	{
		printf("=====> %d 단 <======\n", i);

		for(int j = 1; j < 10; ++j)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}

		printf("\n");
	}

	return 0;
}
