#include "T01Training_26.h"

#define ENABLE_REALLOC

/** 합계를 반환한다 */
int GetVal_Sum_T26(int a_pnValues[], int a_nSize);

int T01Training_26(int argc, char* args[])
{
	int nSize = 5;
	int nNumValues = 0;

	int* pnValues = (int*)malloc(sizeof(int) * nSize);

	do
	{
		int nVal = 0;

		printf("%d 번째 정수 입력 : ", nNumValues + 1);
		scanf("%d", &nVal);

		// 입력을 종료했을 경우
		if(nVal <= 0)
		{
			break;
		}

		// 배열이 가득 찼을 경우
		if(nNumValues >= nSize)
		{
#if defined ENABLE_REALLOC
			nSize *= 2;
			pnValues = (int*)realloc(pnValues, sizeof(int) * nSize);
#else
			int* pnValues_New = (int*)malloc(sizeof(int) * nSize * 2);

			for(int i = 0; i < nNumValues; ++i)
			{
				pnValues_New[i] = pnValues[i];
			}

			free(pnValues);

			nSize *= 2;
			pnValues = pnValues_New;
#endif // #if defined ENABLE_REALLOC
		}

		pnValues[nNumValues++] = nVal;
	} while(1);

	printf("\n=====> 배열 <=====\n");

	for(int i = 0; i < nNumValues; ++i)
	{
		printf("%d, ", pnValues[i]);
	}

	int nVal_Sum = GetVal_Sum_T26(pnValues, nNumValues);

	printf("\n\n합계 : %d\n", nVal_Sum);
	printf("평균 : %f\n", nVal_Sum / (float)nNumValues);

	free(pnValues);
	return 0;
}

int GetVal_Sum_T26(int a_pnValues[], int a_nSize)
{
	int nVal_Sum = 0;

	for(int i = 0; i < a_nSize; ++i)
	{
		nVal_Sum += a_pnValues[i];
	}

	return nVal_Sum;
}
