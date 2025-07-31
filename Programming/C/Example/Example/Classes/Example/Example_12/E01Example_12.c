#include "E01Example_12.h"

int g_nVal = 0;
static int g_nVal_Static = 0;

/** 값을 변경한다 */
void SetVal_12(int a_nTarget, int a_nVal);

/** 값을 증가 시킨다 */
void IncrVal_12(int a_nVal);

int E01Example_12(int argc, char* args[])
{
	printf("=====> 전역 변수 <=====\n");
	printf("전역 변수 : %d\n", g_nVal);
	printf("정적 전역 변수 : %d\n", g_nVal_Static);

	int nVal = 0;

	{
		int nVal = 0;
		nVal = 10;

		printf("\n=====> 지역 변수 - A <=====\n");
		printf("지역 변수 : %d\n", nVal);
	}

	SetVal_12(nVal, 20);

	printf("\n=====> 지역 변수 - B <=====\n");
	printf("지역 변수 : %d\n\n", nVal);

	IncrVal_12(10);
	IncrVal_12(10);

	return 0;
}

void SetVal_12(int a_nTarget, int a_nVal)
{
	a_nTarget = a_nVal;

	//nVal = a_nVal;
}

void IncrVal_12(int a_nVal)
{
	int nVal = 0;
	static int nVal_Static = 0;

	nVal += a_nVal;
	nVal_Static += a_nVal;

	g_nVal += a_nVal;
	g_nVal_Static += a_nVal;

	printf("=====> 결과 - 값 증가 후 <=====\n");
	printf("지역 변수 : %d\n", nVal);
	printf("정적 지역 변수 : %d\n\n", nVal_Static);

	printf("전역 변수 : %d\n", g_nVal);
	printf("정적 지역 변수 : %d\n\n", g_nVal_Static);
}
