#include "E01Example_10.h"

int E01Example_10(int argc, char* args[])
{
	char szStrA[UCHAR_MAX] = "";
	char szStrB[UCHAR_MAX] = "";

	printf("문자열 A 입력 : ");
	scanf("%[^\n]s", szStrA);

	printf("문자열 B 입력 : ");
	scanf("%[^\n]s", szStrB);

	return 0;
}
