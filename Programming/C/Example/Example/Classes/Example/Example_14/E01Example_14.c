#include "E01Example_14.h"

/** 팩토리얼을 반환한다 */
int GetFactorial_E14(int a_nVal);

/** 합계를 반환한다 */
int GetVal_Sum_E14(int a_pnValues[], int a_nSize, int a_nIdx);

/** 피보나치 수를 반환한다 */
int GetVal_Fibonacci_14(a_nVal);

int E01Example_14(int argc, char* args[])
{
	int nVal_Factorial = 0;

	printf("정수 입력 (팩토리얼) : ");
	scanf("%d", &nVal_Factorial);

	int nFactorial = GetFactorial_E14(nVal_Factorial);
	printf("%d! = %d\n", nVal_Factorial, nFactorial);

	int anValues[10] = { 0 };
	const int nSize = sizeof(anValues) / sizeof(anValues[0]);

	for(int i = 0; i < nSize; ++i)
	{
		anValues[i] = (rand() % 99) + 1;
	}

	printf("\n=====> 배열 <=====\n");

	for(int i = 0; i < nSize; ++i)
	{
		printf("%d, ", anValues[i]);
	}

	int nVal_Sum = GetVal_Sum_E14(anValues, nSize, 0);
	printf("\n\n합계 : %d\n", nVal_Sum);

	printf("\n=====> 피보나치 수열 <=====\n");

	for(int i = 0; i < 10; ++i)
	{
		int nVal_Fibonacci = GetVal_Fibonacci_14(i);
		printf("%d, ", nVal_Fibonacci);
	}

	printf("\n");
	return 0;
}

int GetFactorial_E14(int a_nVal)
{
	// 재귀 호출이 불가능 할 경우
	if(a_nVal <= 0)
	{
		return 1;
	}

	return a_nVal * GetFactorial_E14(a_nVal - 1);
}

int GetVal_Sum_E14(int a_pnValues[], int a_nSize, int a_nIdx)
{
	// 재귀 호출이 불가능 할 경우
	if(a_nIdx >= a_nSize)
	{
		return 0;
	}

	return a_pnValues[a_nIdx] + GetVal_Sum_E14(a_pnValues, a_nSize, a_nIdx + 1);
}

int GetVal_Fibonacci_14(a_nVal)
{
	// 재귀 호출이 불가능 할 경우
	if(a_nVal <= 1)
	{
		return (a_nVal <= 0) ? 0 : 1;
	}

	return GetVal_Fibonacci_14(a_nVal - 1) + GetVal_Fibonacci_14(a_nVal - 2);
}
