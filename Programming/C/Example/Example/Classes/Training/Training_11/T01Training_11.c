#include "T01Training_11.h"

int T01Training_11(int argc, char* args[])
{
	int nStep = 3;

	for(int i = 2; i < 10; i += nStep)
	{
		for(int j = 1; j < 10; ++j)
		{
			for(int k = 0; k < nStep; ++k)
			{
				int nVal = i + k;

				// 구구단 출력이 불가능 할 경우
				if(nVal >= 10)
				{
					break;
				}

				printf("%d * %d = %-4d", nVal, j, nVal * j);
			}

			printf("\n");
		}

		printf("\n");
	}

	return 0;
}
