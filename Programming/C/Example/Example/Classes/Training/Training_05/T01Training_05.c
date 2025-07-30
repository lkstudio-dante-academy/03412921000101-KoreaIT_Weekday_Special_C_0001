#include "T01Training_05.h"

int T01Training_05(int argc, char* args[])
{
	int nVal = 0;

	printf("정수 입력 : ");
	scanf("%d", &nVal);

	printf("=====> 결과 - 변환 전 <=====\n");

	for(int i = 7; i >= 0; --i)
	{
		int nMask = 1 << i;
		printf("%d", (nVal & nMask) != 0);
	}

	int nPos = 0;

	printf("\n\n위치 입력 : ");
	scanf("%d", &nPos);

	int nMask = 1 << nPos;
	nVal ^= nMask;

	printf("\n=====> 결과 - 변환 후 <=====\n");

	for(int i = 7; i >= 0; --i)
	{
		int nMask = 1 << i;
		printf("%d", (nVal & nMask) != 0);
	}

	printf("\n");
	return 0;
}
