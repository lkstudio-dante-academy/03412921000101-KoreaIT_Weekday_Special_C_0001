#include "E01Example_24.h"

#define GET_VAL_SUM(VAL_A, VAL_B)				((VAL_A) + (VAL_B))
#define GET_VAL_SUB(VAL_A, VAL_B)				((VAL_A) - (VAL_B))
#define GET_VAL_MULTIPLY(VAL_A, VAL_B)			((VAL_A) * (VAL_B))
#define GET_VAL_DIVIDE(VAL_A, VAL_B)			((VAL_A) / (VAL_B))

int E01Example_24(int argc, char* args[])
{
	int nValA = 0;
	int nValB = 0;

	printf("정수 (2 개) 입력 : ");
	scanf("%d %d", &nValA, &nValB);

	printf("\n=====> 사칙 연산 결과 <=====\n");
	printf("%d + %d = %d\n", nValA, nValB, GET_VAL_SUM(nValA, nValB));
	printf("%d - %d = %d\n", nValA, nValB, GET_VAL_SUB(nValA, nValB));
	printf("%d * %d = %d\n", nValA, nValB, GET_VAL_MULTIPLY(nValA, nValB));
	printf("%d / %d = %f\n", nValA, nValB, GET_VAL_DIVIDE(nValA, (float)nValB));

	return 0;
}
