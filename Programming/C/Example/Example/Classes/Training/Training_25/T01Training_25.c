#include "T01Training_25.h"

/** 값을 설정한다 */
void SetupValues_T25(int a_pnValues[], int a_nSize);

/** 값을 교환한다 */
void SwapVal_T25(int* a_pnValA, int* a_pnValB);

/** 값을 출력한다 */
void PrintValues_T25(int a_pnValues[], int a_nSize);

int T01Training_25(int argc, char* args[])
{
	int anValues[10] = { 0 };
	SetupValues_T25(anValues, _countof(anValues));

	printf("=====> 배열 <=====\n");
	PrintValues_T25(anValues, _countof(anValues));

	return 0;
}

void SetupValues_T25(int a_pnValues[], int a_nSize)
{
	int anValues_Temp[20] = { 0 };

	for(int i = 0; i < _countof(anValues_Temp); ++i)
	{
		anValues_Temp[i] = i + 1;
	}

	for(int i = 0; i < _countof(anValues_Temp); ++i)
	{
		int nIdx = rand() % _countof(anValues_Temp);
		SwapVal_T25(&anValues_Temp[i], &anValues_Temp[nIdx]);
	}

	for(int i = 0; i < a_nSize; ++i)
	{
		a_pnValues[i] = anValues_Temp[i];
	}
}

void SwapVal_T25(int* a_pnValA, int* a_pnValB)
{
	int nTemp = *a_pnValA;
	*a_pnValA = *a_pnValB;
	*a_pnValB = nTemp;
}

void PrintValues_T25(int a_pnValues[], int a_nSize)
{
	for(int i = 0; i < a_nSize; ++i)
	{
		printf("%d, ", a_pnValues[i]);
	}

	printf("\n");
}
