#include "T01Training_13.h"

#define PRICE_STUFF_A			50
#define PRICE_STUFF_B			250
#define PRICE_STUFF_C			500

int T01Training_13(int argc, char* args[])
{
	int nAmount = 0;

	printf("소지 금액 입력 : ");
	scanf("%d", &nAmount);

	printf("\n=====> 구입 가능 조합 <=====\n");

	for(int i = 0; i <= nAmount; i += PRICE_STUFF_A)
	{
		for(int j = 0; j <= nAmount; j += PRICE_STUFF_B)
		{
			for(int k = 0; k <= nAmount; k += PRICE_STUFF_C)
			{
				int nPrice_Total = i + j + k;

				// 조합이 불가능 할 경우
				if(nPrice_Total != nAmount)
				{
					continue;
				}

				const int nNumStuffsA = i / PRICE_STUFF_A;
				const int nNumStuffsB = j / PRICE_STUFF_B;
				const int nNumStuffsC = k / PRICE_STUFF_C;

				printf("물건 A x %d 개, 물건 B x %d 개, 물건 C x %d 개\n", nNumStuffsA, nNumStuffsB, nNumStuffsC);
			}
		}
	}

	return 0;
}
