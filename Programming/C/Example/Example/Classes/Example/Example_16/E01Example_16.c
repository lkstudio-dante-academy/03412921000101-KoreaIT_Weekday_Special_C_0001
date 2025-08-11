#include "E01Example_16.h"

/** 최소, 최대 값을 반환한다 */
void GetVal_MinMax_E16(int a_pnValues[],
	int a_nSize, int* a_pnOutVal_Min, int* a_pnOutVal_Max);

/** 값을 교환한다 */
void SwapVal_ByVal_E16(int a_nValA, int a_nValB);

/** 값을 교환한다 */
void SwapVal_ByRef_E16(int* a_pnValA, int* a_pnValB);

int E01Example_16(int argc, char* args[])
{
	int nValA = 10;
	int nValB = 20;

	printf("=====> 교환 전 <=====\n");
	printf("변수 A : %d\n", nValA);
	printf("변수 B : %d\n", nValB);

	SwapVal_ByVal_E16(nValA, nValB);

	printf("\n=====> 교환 후 - Call By Value <=====\n");
	printf("변수 A : %d\n", nValA);
	printf("변수 B : %d\n", nValB);

	SwapVal_ByRef_E16(&nValA, &nValB);

	printf("\n=====> 교환 후 - Call By Reference <=====\n");
	printf("변수 A : %d\n", nValA);
	printf("변수 B : %d\n", nValB);

	int anValues[10] = { 0 };

	/*
	* _countof 함수란?
	* - 배열의 길이를 계산하는 역할을 수행하는 함수를 의미한다. (+ 즉, _countof 함수를 활용하면
	* sizeof 키워드를 사용해서 직접 배열의 길이를 계산 할 필요가 없다는 것을 알 수 있다.)
	*/
	for(int i = 0; i < _countof(anValues); ++i)
	{
		anValues[i] = rand() % 99 + 1;
	}

	printf("\n=====> 배열 <=====\n");

	for(int i = 0; i < _countof(anValues); ++i)
	{
		printf("%d, ", anValues[i]);
	}

	int nVal_Min = 0;
	int nVal_Max = 0;

	/*
	* 아래와 같이 포인터를 활용하면 함수의 결과를 포인터를 통해 돌려 받는 구조로 명령문을
	* 작성하는 것이 가능하다. (+ 즉, 함수가 2 개 이상의 반환 값을 돌려주는 것이 가능하다.)
	*/
	GetVal_MinMax_E16(anValues, _countof(anValues), &nVal_Min, &nVal_Max);

	printf("\n\n최소 값 : %d\n", nVal_Min);
	printf("최대 값 : %d\n", nVal_Max);

	return 0;
}

/*
* C 에서 함수를 호출 할 때 배열을 입력으로 전달 할 경우 반드시 해당 배열에 대한 길이를 같이
* 입력으로 전달해야한다. (+ 즉, 함수 내부에서는 배열의 길이를 계산하는 것이 불가능하다.)
*
* C 에서 함수에 입력으로 배열을 전달 할 경우 배열 자체가 아닌 배열의 첫번째 요소를 참조하는
* 포인터가 전달 된다.
*
* 따라서 함수 내부에서 sizeof 키워드를 통해 배열의 길이를 계산하는 것이 불가능하다. (+ 즉,
* sizeof 키워드를 통해 계산 된 크기는 배열의 크기가 아니라 포인터의 크기가 계산 된다는 것을
* 알 수 있다.)
*
* C 에서 함수의 입력으로 배열을 전달하는 것은 구조체를 활용하지 않으면 불가능하기 때문에
* 함수를 호출 할 때 배열을 입력으로 전달 할 경우 항상 배열의 길이를 같이 전달하는 것이 관례이다.
*/
void GetVal_MinMax_E16(int a_pnValues[],
	int a_nSize, int* a_pnOutVal_Min, int* a_pnOutVal_Max)
{
	*a_pnOutVal_Min = INT_MAX;
	*a_pnOutVal_Max = INT_MIN;

	for(int i = 0; i < a_nSize; ++i)
	{
		*a_pnOutVal_Min = (*a_pnOutVal_Min <= a_pnValues[i]) ?
			*a_pnOutVal_Min : a_pnValues[i];

		*a_pnOutVal_Max = (*a_pnOutVal_Max >= a_pnValues[i]) ?
			*a_pnOutVal_Max : a_pnValues[i];
	}
}

void SwapVal_ByVal_E16(int a_nValA, int a_nValB)
{
	int nTemp = a_nValA;
	a_nValA = a_nValB;
	a_nValB = nTemp;
}

void SwapVal_ByRef_E16(int* a_pnValA, int* a_pnValB)
{
	int nTemp = *a_pnValA;
	*a_pnValA = *a_pnValB;
	*a_pnValB = nTemp;
}
