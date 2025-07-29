#include "T01Training_07.h"

int T01Training_07(int argc, char* args[])
{
	int nAnswer = rand() % 99 + 1;
	printf("정답 : %d\n\n", nAnswer);

	while(1)
	{
		int nVal = 0;

		printf("정수 입력 : ");
		scanf("%d", &nVal);

		// 정답 일 경우
		if(nVal == nAnswer)
		{
			break;
		}

		// 값이 작을 경우
		if(nVal < nAnswer)
		{
			printf("정답은 %d 보다 큽니다.\n", nVal);
		}
		else
		{
			printf("정답은 %d 보다 작습니다.\n", nVal);
		}

		printf("\n");
	}

	printf("프로그램을 종료합니다.\n");
	return 0;
}
