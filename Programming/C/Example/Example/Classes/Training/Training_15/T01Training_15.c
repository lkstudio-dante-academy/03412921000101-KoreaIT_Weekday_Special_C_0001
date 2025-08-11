#include "T01Training_15.h"

#define MENU_MOVE_LEFT			1
#define MENU_MOVE_RIGHT			2
#define MENU_EXIT				3

int T01Training_15(int argc, char* args[])
{
	int anValues[] =
	{
		1, 2, 3, 4, 5
	};

	const int nSize = sizeof(anValues) / sizeof(anValues[0]);
	printf("=====> 배열 <=====\n");

	for(int i = 0; i < nSize; ++i)
	{
		printf("%d, ", anValues[i]);
	}

	printf("\n\n");

	while(1)
	{
		printf("=====> 메뉴 <=====\n");
		printf("1. 왼쪽으로 이동\n");
		printf("2. 오른쪽으로 이동\n");
		printf("3. 종료\n");

		printf("\n선택 : ");

		int nMenu = 0;
		scanf("%d", &nMenu);

		// 종료 일 경우
		if(nMenu == MENU_EXIT)
		{
			break;
		}

		switch(nMenu)
		{
			case MENU_MOVE_LEFT:
			{
				int nVal = anValues[0];

				for(int i = 0; i < nSize - 1; ++i)
				{
					anValues[i] = anValues[i + 1];
				}

				anValues[nSize - 1] = nVal;
				break;
			}
			case MENU_MOVE_RIGHT:
			{
				int nVal = anValues[nSize - 1];

				for(int i = nSize - 1; i > 0; --i)
				{
					anValues[i] = anValues[i - 1];
				}

				anValues[0] = nVal;
				break;
			}
		}

		printf("-----> 배열 - 이동 후\n");

		for(int i = 0; i < nSize; ++i)
		{
			printf("%d, ", anValues[i]);
		}

		printf("\n\n");
	}

	printf("프로그램을 종료합니다.\n");
	return 0;
}
