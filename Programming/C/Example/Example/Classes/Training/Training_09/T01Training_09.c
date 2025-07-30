#include "T01Training_09.h"

int T01Training_09(int argc, char* args[])
{
	int nValA = 0;
	int nValB = 0;
	int nValC = 0;

	printf("정수 (3 개) 입력 : ");
	scanf("%d %d %d", &nValA, &nValB, &nValC);

	int nVal_Max = (nValA >= nValB) ? nValA : nValB;
	nVal_Max = (nValC >= nVal_Max) ? nValC : nVal_Max;

	for(int i = 0; i < nVal_Max; ++i)
	{
		int bIsStarA = i < nValA;
		int bIsStarB = i < nValB;
		int bIsStarC = i < nValC;

		printf("%c ", bIsStarA ? '*' : ' ');
		printf("%c ", bIsStarB ? '*' : ' ');
		printf("%c\n", bIsStarC ? '*' : ' ');
	}

	return 0;
}
