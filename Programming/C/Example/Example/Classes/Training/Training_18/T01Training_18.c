#include "T01Training_18.h"

#define MENU_MOVE_UP			1
#define MENU_MOVE_DOWN			2
#define MENU_MOVE_LEFT			3
#define MENU_MOVE_RIGHT			4
#define MENU_EXIT				5

int T01Training_18(int argc, char* args[])
{
	int anMatrix[3][3] = {
		1, 2, 3, 4, 5, 6, 7, 8, 9
	};

	const int nNumRows = sizeof(anMatrix) / sizeof(anMatrix[0]);
	const int nNumCols = sizeof(anMatrix[0]) / sizeof(anMatrix[0][0]);

	printf("=====> 2 차원 배열 <=====\n");

	for(int i = 0; i < nNumRows; ++i)
	{
		for(int j = 0; j < nNumCols; ++j)
		{
			printf("%d, ", anMatrix[i][j]);
		}

		printf("\n");
	}

	printf("\n");

	do
	{
		printf("=====> 메뉴 <=====\n");
		printf("1. 위로 이동\n");
		printf("2. 아래로 이동\n");
		printf("3. 왼쪽으로 이동\n");
		printf("4. 오른쪽으로 이동\n");
		printf("5. 종료\n");

		int nMenu = 0;

		printf("\n선택 : ");
		scanf("%d", &nMenu);

		// 종료 일 경우
		if(nMenu == MENU_EXIT)
		{
			break;
		}

		switch(nMenu)
		{
			case MENU_MOVE_UP:
				for(int i = 0; i < nNumCols; ++i)
				{
					int nVal = anMatrix[0][i];

					for(int j = 0; j < nNumRows - 1; ++j)
					{
						anMatrix[j][i] = anMatrix[j + 1][i];
					}

					anMatrix[nNumRows - 1][i] = nVal;
				}

				break;

			case MENU_MOVE_DOWN:
				for(int i = 0; i < nNumCols; ++i)
				{
					int nVal = anMatrix[nNumRows - 1][i];

					for(int j = nNumRows - 1; j > 0; --j)
					{
						anMatrix[j][i] = anMatrix[j - 1][i];
					}

					anMatrix[0][i] = nVal;
				}

				break;

			case MENU_MOVE_LEFT:
				for(int i = 0; i < nNumRows; ++i)
				{
					int nVal = anMatrix[i][0];

					for(int j = 0; j < nNumCols - 1; ++j)
					{
						anMatrix[i][j] = anMatrix[i][j + 1];
					}

					anMatrix[i][nNumCols - 1] = nVal;
				}

				break;

			case MENU_MOVE_RIGHT:
				for(int i = 0; i < nNumRows; ++i)
				{
					int nVal = anMatrix[i][nNumCols - 1];

					for(int j = nNumCols - 1; j > 0; --j)
					{
						anMatrix[i][j] = anMatrix[i][j - 1];
					}

					anMatrix[i][0] = nVal;
				}

				break;
		}

		printf("-----> 2 차원 배열 - 이동 후\n");

		for(int i = 0; i < nNumRows; ++i)
		{
			for(int j = 0; j < nNumCols; ++j)
			{
				printf("%d, ", anMatrix[i][j]);
			}

			printf("\n");
		}

		printf("\n");
	} while(1);

	printf("프로그램을 종료합니다.\n");
	return 0;
}
