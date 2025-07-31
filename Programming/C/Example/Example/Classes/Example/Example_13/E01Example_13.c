#include "E01Example_13.h"

/** 값을 출력한다 */
int GetVal_Sum_13(int a_nNumValues, ...);

int E01Example_13(int argc, char* args[])
{
	int nVal_SumA = GetVal_Sum_13(3, 1, 2, 3);
	int nVal_SumB = GetVal_Sum_13(6, 1, 2, 3, 4, 5, 6);
	int nVal_SumC = GetVal_Sum_13(9, 1, 2, 3, 4, 5, 6, 7, 8, 9);

	printf("=====> 결과 <=====\n");
	printf("합계 A : %d\n", nVal_SumA);
	printf("합계 B : %d\n", nVal_SumB);
	printf("합계 C : %d\n", nVal_SumC);

	return 0;
}

int GetVal_Sum_13(int a_nNumValues, ...)
{
	va_list pvList = NULL;
	va_start(pvList, a_nNumValues);

	int nVal_Sum = 0;

	for(int i = 0; i < a_nNumValues; ++i)
	{
		nVal_Sum += va_arg(pvList, int);
	}

	va_end(pvList);
	return nVal_Sum;
}
