#include "E01Example_01.h"

int E01Example_01(int argc, char* args[])
{
	/*
	* printf 함수란?
	* - 단어 or 문장을 콘솔 창에 출력하는 역할을 수행하는 함수를 의미한다. (+ 즉,
	* printf 함수를 활용하면 다양한 정보를 콘솔 창에 출력하는 것이 가능하다.)
	*/
	printf("Hello, World!\n");

	char szStr[UCHAR_MAX] = "";
	printf("\n문자열 입력 : ");

	/*
	* scanf 함수란?
	* - printf 함수와는 반대로 콘솔 창으로부터 데이터를 읽어들이는 역할을 수행하는 함수를 의미한다.
	* (+ 즉, scanf 함수를 활용하면 C/C++ 로 제작 된 프로그램과 사용자가 상호 작용하는 것이
	* 가능하다.)
	*/
	scanf(" %[^\n]s", szStr);

	printf("입력 된 문자열 : %s\n", szStr);
	return 0;
}
