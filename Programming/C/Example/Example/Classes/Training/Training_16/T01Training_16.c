#include "T01Training_16.h"

int T01Training_16(int argc, char* args[])
{
	int anAnswer[4] = { 0 };
	const int nSize = sizeof(anAnswer) / sizeof(anAnswer[0]);

	int nNumValues = 0;

	while(nNumValues < nSize)
	{
		int j = 0;
		int nVal = rand() % 9 + 1;

		for(j = 0; j < nNumValues && nVal != anAnswer[j]; ++j)
		{
			continue;
		}

		// 값이 존재 할 경우
		if(j < nNumValues)
		{
			continue;
		}

		anAnswer[nNumValues++] = nVal;
	}

	printf("정답 : ");

	for(int i = 0; i < nSize; ++i)
	{
		printf("%d, ", anAnswer[i]);
	}

	printf("\n\n");

	do
	{
		printf("정수 (4 개) 입력 : ");
		int anValues[4] = { 0 };

		for(int i = 0; i < nSize; ++i)
		{
			scanf("%d", &anValues[i]);
		}

		int nCount_Strike = 0;
		int nCount_Ball = 0;

		for(int i = 0; i < nSize; ++i)
		{
			int j = 0;

			for(j = 0; j < nSize && anValues[i] != anAnswer[j]; ++j)
			{
				continue;
			}

			nCount_Strike += j < nSize && i == j;
			nCount_Ball += j < nSize && i != j;
		}

		printf("결과 : %d Strike, %d Ball\n\n", nCount_Strike, nCount_Ball);

		// 정답을 맞췄을 경우
		if(nCount_Strike >= nSize)
		{
			break;
		}
	} while(1);

	printf("프로그램을 종료합니다.\n");
	return 0;
}
