#include "E01Example_13.h"

/** 값을 출력한다 */
int GetVal_Sum_E13(int a_nNumValues, ...);

int E01Example_13(int argc, char* args[])
{
	int nVal_SumA = GetVal_Sum_E13(3, 1, 2, 3);
	int nVal_SumB = GetVal_Sum_E13(6, 1, 2, 3, 4, 5, 6);
	int nVal_SumC = GetVal_Sum_E13(9, 1, 2, 3, 4, 5, 6, 7, 8, 9);

	printf("=====> 결과 <=====\n");
	printf("합계 A : %d\n", nVal_SumA);
	printf("합계 B : %d\n", nVal_SumB);
	printf("합계 C : %d\n", nVal_SumC);

	return 0;
}

int GetVal_Sum_E13(int a_nNumValues, ...)
{
	/*
	* va_list 란?
	* - 가변 매개 변수를 참조하기 위한 자료형을 의미한다. (+ 즉, va_list 는 가변 매개 변수를
	* 참조하기 위한 포인터라는 것을 알 수 있다.)
	* 
	* va_start 함수란?
	* - va_list 포인터가 가변 매개 변수의 첫번째 매개 변수를 참조하도록 하는 함수를 의미한다.
	* (+ 즉, va_start 함수를 활용하면 가변 매개 변수에 접근하는 것이 가능하다.)
	*/
	va_list pvList = NULL;
	va_start(pvList, a_nNumValues);

	int nVal_Sum = 0;

	for(int i = 0; i < a_nNumValues; ++i)
	{
		/*
		* va_arg 함수란?
		* - 현재 참조 중 인 매개 변수의 데이터를 가져오는 역할을 수행하는 함수를 의미한다. (+ 즉,
		* va_arg 함수를 활용하면 매개 변수에 전달 된 데이터를 가져와서 제어하는 것이 가능하다.)
		*/
		nVal_Sum += va_arg(pvList, int);
	}

	va_end(pvList);
	return nVal_Sum;
}
