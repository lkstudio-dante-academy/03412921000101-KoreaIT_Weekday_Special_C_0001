#include "E01Example_02.h"

int E01Example_02(int argc, char* args[])
{
	short nShortA = 10;
	unsigned nShortB = 20;

	int nIntA = 10;
	unsigned int nIntB = 20;

	long nLongA = 10L;
	unsigned long nLongB = 20L;

	long long nLongLongA = 10LL;
	unsigned long long nLongLongB = 20LL;

	/*
	* 서식 문자란?
	* - 문자열의 일부를 다른 데이터로 치환 할 수 있게 명시하는 문자를 의미한다. (+ 즉,
	* 서식 문자를 활용하면 여러 데이터를 이용해서 문자열을 구성하는 것이 가능하다.)
	*
	* printf 함수는 서식화 된 출력을 지원하기 때문에 서식 문자를 활용해서 문자열의 일부를
	* 특정 데이터로 치환해서 최종적으로 완성 된 문자열을 콘솔 창에 출력하는 것이 가능하다.
	*
	* Ex)
	* int nVal = 10;
	* printf("정수 : %d\n", nVal);			<- "정수 : 10" 문자열 출력
	*
	* 위와 같이 %d 서식 문자는 nVal 변수에 저장 된 데이터로 치환되기 때문에 "정수 : 10" 이라는
	* 문자열이 최종적으로 콘솔 창에 출려 된다는 것을 알 수 있다.
	*
	* 개행 문자 (\n) 란?
	* - 콘솔 창의 커서를 다음 줄로 이동 시키는 특수 문자를 의미한다. (+ 즉, 개행 문자를 활용하면
	* 여러 라인에 문자열을 출력하는 것이 가능하다.)
	*
	* Ex)
	* printf("AB\nC\n");
	*
	* 출력 결과
	* AB
	* C
	*
	* 위와 같이 A 와 B 는 같은 라인에 출력되는 반면 C 는 다음 라인에 출력 된다는 것을 알 수 있다.
	*
	* sizeof 키워드란?
	* - 변수 or 자료형의 바이트 크기를 반환하는 역할을 수행하는 키워드를 의미한다. (+ 즉,
	* sizeof 키워드를 활용하면 특정 데이터의 바이트 크기를 가져와서 연산에 사용하는 것이
	* 가능하다.)
	*/
	printf("=====> 정수 <=====\n");
	printf("Short (%d) : %d, %u\n", sizeof(short), nShortA, nShortB);
	printf("Int (%d) : %d, %u\n", sizeof(int), nIntA, nIntB);
	printf("Long (%d) : %ld, %lu\n", sizeof(long), nLongA, nLongB);
	printf("Long Long (%d) : %lld, %llu\n", sizeof(long long), nLongLongA, nLongLongB);

	float fFloat = 3.14f;
	double dblDouble = 3.14;
	long double dblLongDouble = 3.14L;

	printf("\n=====> 실수 <=====\n");
	printf("Float (%d) : %f\n", sizeof(float), fFloat);
	printf("Double (%d) : %lf\n", sizeof(double), dblDouble);
	printf("Long Double (%d) : %Lf\n", sizeof(long double), dblLongDouble);

	char chLetterA = 'A';
	char chLetterB = 'B';
	char chLetterC = 'C';

	char szStr[] = "Hello, World!";

	printf("\n=====> 문자 <=====\n");
	printf("Char (%d) : %c%c%c\n", sizeof(char), chLetterA, chLetterB, chLetterC);
	printf("String : %s\n", szStr);

	return 0;
}
