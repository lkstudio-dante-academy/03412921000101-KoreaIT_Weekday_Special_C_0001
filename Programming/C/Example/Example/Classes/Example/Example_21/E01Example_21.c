#include "E01Example_21.h"

int E01Example_21(int argc, char* args[])
{
	int nNumRows = 0;
	int nNumCols = 0;

	printf("크기 입력 (행, 열) : ");
	scanf("%d %d", &nNumRows, &nNumCols);

	int* pnMatrixA = (int*)malloc(sizeof(int) * nNumRows * nNumCols);
	int** pnMatrixB = (int**)malloc(sizeof(int*) * nNumRows);

	for(int i = 0; i < nNumRows; ++i)
	{
		pnMatrixA[i] = (int*)malloc(sizeof(int) * nNumCols);
	}

	for(int i = 0; i < nNumRows; ++i)
	{
		for(int j = 0; j < nNumCols; ++j)
		{
			int nIdx = (i * nNumCols) + j;

			pnMatrixA[nIdx] = rand() % 99 + 1;
			pnMatrixB[i][j] = rand() % 99 + 1;
		}
	}

	printf("\n=====> 행렬 - A <=====\n");

	for(int i = 0; i < nNumRows; ++i)
	{
		for(int j = 0; j < nNumCols; ++j)
		{
			int nIdx = (i * nNumCols) + j;
			printf("%2d, ", pnMatrixA[nIdx]);
		}

		printf("\n");
	}

	printf("\n=====> 행렬 - B <=====\n");

	for(int i = 0; i < nNumRows; ++i)
	{
		for(int j = 0; j < nNumCols; ++j)
		{
			printf("%2d, ", pnMatrixB[i][j]);
		}

		printf("\n");
	}

	for(int i = 0; i < nNumRows; ++i)
	{
		free(pnMatrixB[i]);
	}

	free(pnMatrixA);
	free(pnMatrixB);

	return 0;
}
