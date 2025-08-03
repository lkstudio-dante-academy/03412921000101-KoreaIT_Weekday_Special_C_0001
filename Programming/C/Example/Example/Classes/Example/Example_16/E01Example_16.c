#include "E01Example_16.h"

/** 값을 교환한다 */
void SwapVal_ByVal_16(int a_nValA, int a_nValB);

/** 값을 교환한다 */
void SwapVal_ByRef_16(int* a_pnValA, int* a_pnValB);

int E01Example_16(int argc, char* args[])
{
	int nValA = 10;
	int nValB = 20;

	printf("=====> 교환 전 <=====\n");
	printf("변수 A : %d\n", nValA);
	printf("변수 B : %d\n", nValB);

	SwapVal_ByVal_16(nValA, nValB);

	printf("\n=====> 교환 후 - Call By Value <=====\n");
	printf("변수 A : %d\n", nValA);
	printf("변수 B : %d\n", nValB);

	SwapVal_ByRef_16(&nValA, &nValB);

	printf("\n=====> 교환 후 - Call By Reference <=====\n");
	printf("변수 A : %d\n", nValA);
	printf("변수 B : %d\n", nValB);

	return 0;
}

void SwapVal_ByVal_16(int a_nValA, int a_nValB)
{
	int nTemp = a_nValA;
	a_nValA = a_nValB;
	a_nValB = nTemp;
}

void SwapVal_ByRef_16(int* a_pnValA, int* a_pnValB)
{
	int nTemp = *a_pnValA;
	*a_pnValA = *a_pnValB;
	*a_pnValB = nTemp;
}
