#include "E01Example_03.h"

int E01Example_03(int argc, char* args[])
{
	/*
	* 아래와 같이 정수 데이터에 접두어를 명시함으로서 특정 진수로 수를 표기하는 것이 가능하다.
	* (+ 즉, 접두어를 명시하지 않으면 기본적으로 10 진수 형태로 수를 표기한다는 것을 알 수 있다.)
	*/
	int nVal_Bin = 0b10;
	int nVal_Oct = 0010;
	int nVal_Hex = 0x10;

	/*
	* 아래와 같이 %o, %x 서식 문자를 활용하면 숫자를 8 진수나 16 진수 형태로 출력하는 것이
	* 가능하다.
	*/
	printf("=====> 결과 - A =====\n");
	printf("8 진수 : %o\n", nVal_Bin);
	printf("16 진수 : %x\n", nVal_Oct);

	printf("\n=====> 결과 - B =====\n");
	printf("2 진수 -> 10 진수 : %d\n", nVal_Bin);
	printf("8 진수 -> 10 진수 : %d\n", nVal_Oct);
	printf("16 진수 -> 10 진수 : %d\n", nVal_Hex);

	return 0;
}
