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

	/*
	* 아래와 같이 { } 기호를 이용하면 새로운 지역을 명시하는 것이 가능하다. (+ 즉, 지역 내부에
	* 새로운 하위 지역을 명시 할 수 있다는 것을 의미한다.)
	*/
	{
		/*
		* C 는 아래와 같이 서로 지역이 다르다면 같은 이름의 변수를 선언하는 것이 가능하다.
		* 
		* 이때 변수의 우선 순위는 하위 지역이 더 높기 때문에 동일한 이름의 변수를 하위 지역에
		* 선언 할 경우 하위 지역에서는 상위 지역에 선언 된 동일한 이름의 변수에는 접근하는 것이
		* 불가능하다.
		*/
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

	/*
	* 아래와 같이 다른 지역에 선언 된 변수에 접근하는 것이 불가능하다. (+ 즉, 지역 변수는 
	* 해당 변수가 선언 된 지역 내부에서만 접근 가능하다는 것을 알 수 있다.)
	*/
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
