#include "E01Example_11.h"

/** 수식 결과를 반환한다 */
double GetResult_Calc_E11(int a_nValA, char a_chOperator, int a_nValB);

int E01Example_11(int argc, char* args[])
{
	int nValA = 0;
	int nValB = 0;

	char chOperator = '\0';

	printf("수식 입력 : ");
	scanf("%d %c %d", &nValA, &chOperator, &nValB);

	/*
	* 아래와 같이 호출하는 함수에 매개 변수 (입력) 가 존재 할 경우 반드시 매개 변수의 개수만큼
	* 입력 데이터를 전달해야한다. (+ 즉, 매개 변수의 개수와 입력 데이터의 개수가 서로 다를 경우
	* 컴파일 에러가 발생한다는 것을 알 수 있다.)
	*/
	double dblResult = GetResult_Calc_E11(nValA, chOperator, nValB);
	printf("결과 : %lf\n", dblResult);

	return 0;
}

double GetResult_Calc_E11(int a_nValA, char a_chOperator, int a_nValB)
{
	switch(a_chOperator)
	{
		case '+': 
			/*
			* return 키워드란?
			* - 프로그램의 흐름을 함수를 호출한 곳으로 되돌리는 역할을 수행하는 키워드를 의미한다.
			* (+ 즉, return 키워드를 활용하면 함수를 즉시 종료 시키는 것이 가능하다.)
			* 
			* 또한 return 키워드는 데이터를 함수를 호출한 곳으로 반환하는 역할도 수행한다. (+ 즉,
			* return 키워드 옆에 데이터를 명시하면 해당 데이터는 함수를 호출한 곳으로
			* 전달 된다는 것을 알 수 있다.)
			* 
			* 따라서 함수가 반환 값이 존재 할 경우 반드시 return 키워드를 통해 함수를
			* 호출한 곳으로 결과 값을 반환해야한다. (+ 즉, 결과 값을 반환하지 않으면 컴파일 에러가
			* 발생한다는 것을 알 수 있다.)
			*/
			return a_nValA + a_nValB;

		case '-': 
			return a_nValA - a_nValB;

		case '*': 
			return a_nValA * a_nValB;

		case '/': 
			return a_nValA / (double)a_nValB;
	}

	return 0.0;
}
