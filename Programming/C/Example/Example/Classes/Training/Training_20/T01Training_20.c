#include "T01Training_20.h"

int T01Training_20(int argc, char* args[])
{
	int anMatrix[5][5] = { 0 };

	const int nNumRows = sizeof(anMatrix) / sizeof(anMatrix[0]);
	const int nNumCols = sizeof(anMatrix[0]) / sizeof(anMatrix[0][0]);

	for(int i = 0; i < nNumRows; ++i)
	{
		for(int j = 0; j < nNumCols; ++j)
		{
			anMatrix[i][j] = rand() % 15 + 1;
		}
	}

	printf("=====> 2 차원 배열 <=====\n");

	for(int i = 0; i < nNumRows; ++i)
	{
		for(int j = 0; j < nNumCols; ++j)
		{
			printf("%2d, ", anMatrix[i][j]);
		}

		printf("\n");
	}

	int nRow = 0;
	int nCol = 0;

	printf("\n위치 입력 (행, 열) : ");
	scanf("%d %d", &nRow, &nCol);

	for(int i = 0; i < nNumCols; ++i)
	{
		// 치환이 불가능 할 경우
		if(anMatrix[nRow][i] >= 10)
		{
			continue;
		}

		anMatrix[nRow][i] = -1;
	}

	for(int i = 0; i < nNumRows; ++i)
	{
		// 치환이 불가능 할 경우
		if(anMatrix[i][nCol] >= 10)
		{
			continue;
		}

		anMatrix[i][nCol] = -1;
	}

	printf("\n=====> 2 차원 배열 - 치환 후 <=====\n");

	for(int i = 0; i < nNumRows; ++i)
	{
		for(int j = 0; j < nNumCols; ++j)
		{
			printf("%2d, ", anMatrix[i][j]);
		}

		printf("\n");
	}

	return 0;
}
