#include "E01Example_15.h"

int E01Example_15(int argc, char* args[])
{
	int nValA = 0;
	int nValB = 0;

	int* pnValA = &nValA;
	int* pnValB = &nValB;

	*pnValA = 10;
	*pnValB = 20;

	/*
	* %p 서식 문자란?
	* - 메모리 주소를 출력하기 위한 서식 문자를 의미한다. (+ 즉, %p 서식 문자를 활용하면
	* 특정 변수가 선언 된 메모리 주소를 출력하는 것이 가능하다.)
	*/
	printf("=====> 결과 - A <=====\n");
	printf("변수 A (%p, %p) : %d, %d\n", &nValA, pnValA, nValA, *pnValA);
	printf("변수 B (%p, %p) : %d, %d\n", &nValB, pnValB, nValB, *pnValB);

	int* pnTemp = pnValA;
	pnValA = pnValB;
	pnValB = pnTemp;

	*pnValA = 30;
	*pnValB = 40;

	printf("\n=====> 결과 - B <=====\n");
	printf("변수 A (%p, %p) : %d, %d\n", &nValA, pnValA, nValA, *pnValA);
	printf("변수 B (%p, %p) : %d, %d\n", &nValB, pnValB, nValB, *pnValB);

	return 0;
}

void SwapVal_ByVal_15(int a_nValA, int a_nValB)
{
	int nTemp = a_nValA;
	a_nValA = a_nValB;
	a_nValB = nTemp;
}

void SwapVal_ByRef_15(int* a_pnValA, int* a_pnValB)
{
	int nTemp = *a_pnValA;
	*a_pnValA = *a_pnValB;
	*a_pnValB = nTemp;
}
