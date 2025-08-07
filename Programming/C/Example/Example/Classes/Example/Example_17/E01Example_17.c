#include "E01Example_17.h"

int E01Example_17(int argc, char* args[])
{
	int nValA = 0;
	int nValB = 0;

	const int* pnValA = &nValA;
	int* const pnValB = &nValB;

	/*
	* 아래와 같이 상수 포인터 유형 1 은 포인터가 참조하는 대상을 상수화
	* 시키는 것이기 때문에 * (역참조 연산자) 를 통해 포인터가 참조하는
	* 대상을 변경하는 것이 불가능하다.
	*/
	//*pnValA = 10;
	*pnValB = 20;

	printf("=====> 상수 포인터 결과 - A <=====\n");
	printf("변수 A (%p, %p) : %d, %d\n", &nValA, pnValA, nValA, *pnValA);
	printf("변수 B (%p, %p) : %d, %d\n", &nValB, pnValB, nValB, *pnValB);

	/*
	* 상수 포인터 유형 2 는 포인터 변수 자체가 상수이기 때문에
	* 포인터가 다른 대상을 참조하는 것이 불가능하다. (+ 즉, 배열은
	* 상수 포인터 유형 2 와 유사하다는 것을 알 수 있다.)
	*/
	pnValA = &nValB;
	//pnValB = &nValA;

	printf("\n=====> 상수 포인터 결과 - B <=====\n");
	printf("변수 A (%p, %p) : %d, %d\n", &nValA, pnValA, nValA, *pnValA);
	printf("변수 B (%p, %p) : %d, %d\n", &nValB, pnValB, nValB, *pnValB);

	return 0;
}
