#include "T01Training_02.h"

int T01Training_02(int argc, char* args[])
{
	int nValA = 0;
	int nValB = 0;

	printf("정수 (2 개) 입력 : ");
	scanf("%d %d", &nValA, &nValB);

	int bIsTrueA = nValA != 0;
	int bIsTrueB = nValB != 0;

	printf("\n=====> 결과 <=====\n");
	printf("%d && %d = %d\n", nValA, nValB, (nValA * nValB) != 0);
	printf("%d || %d = %d\n", nValA, nValB, (nValA + nValB) != 0);

	return 0;
}
