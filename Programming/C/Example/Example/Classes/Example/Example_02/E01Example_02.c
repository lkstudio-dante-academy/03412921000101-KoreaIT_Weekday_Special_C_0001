#include "E01Example_02.h"

int E01Example_02(int argc, char* args[])
{
	short nShortA = SHRT_MAX;
	unsigned nShortB = USHRT_MAX;

	int nIntA = INT_MAX;
	unsigned int nIntB = UINT_MAX;

	long nLongA = LONG_MAX;
	unsigned long nLongB = ULONG_MAX;

	long long nLongLongA = LLONG_MAX;
	unsigned long long nLongLongB = ULLONG_MAX;

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
	* C 주요 서식 문자 종류
	* - %d or %u				<- int
	* - %ld or %lu				<- long
	* - %lld or %llu			<- long long
	*
	* - %f or %e				<- float
	* - %lf or %le				<- double
	* - %Lf or %Le				<- long double
	*
	* - %c						<- char
	* - %s						<- 문자열
	*
	* 위와 같이 C 의 서식 문자는 여러 종류가 존재하며 치환하고 싶은 데이터에 맞는 서식 문자를
	* 사용해야한다. (+ 즉, 잘못 된 서식 문자를 사용 할 경우 원치 않는 결과가 출력 된다는 것을
	* 알 수 있다.)
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

	float fFloat = FLT_MAX;
	double dblDouble = DBL_MAX;
	long double dblLongDouble = LDBL_MAX;

	printf("\n=====> 실수 <=====\n");
	printf("Float (%d) : %e\n", sizeof(float), fFloat);
	printf("Double (%d) : %le\n", sizeof(double), dblDouble);
	printf("Long Double (%d) : %Le\n", sizeof(long double), dblLongDouble);

	char chLetterA = 'A';
	char chLetterB = 'B';
	char chLetterC = 'C';

	/*
	* 아래와 같이 C 는 문자열을 표현하기 위한 별도의 자료형이 존재하지 않기 때문에
	* 문자의 배열을 통해서 문자열을 표현하는 방법을 사용한다.
	*
	* 배열 (Array) 란?
	* - 동일한 자료형의 데이터를 여러개 관리 할 수 있는 기능을 의미한다. (+ 즉, 배열을 활용하면
	* 여러 데이터를 좀 더 수월하게 제어하는 것이 가능하다.)
	*/
	char szStr[] = "Hello, World!";

	printf("\n=====> 문자 <=====\n");
	printf("Char (%d) : %c%c%c\n", sizeof(char), chLetterA, chLetterB, chLetterC);
	printf("String : %s\n", szStr);

	return 0;
}
