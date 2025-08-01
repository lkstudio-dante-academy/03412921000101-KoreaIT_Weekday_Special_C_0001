#include "T01Training_21.h"

int T01Training_21(int argc, char* args[])
{
	int anMatrixA[3][3] = { 0 };
	int anMatrixB[3][3] = { 0 };

	const int nNumRows = sizeof(anMatrixA) / sizeof(anMatrixA[0]);
	const int nNumCols = sizeof(anMatrixA[0]) / sizeof(anMatrixA[0][0]);

	for(int i = 0; i < nNumRows; ++i)
	{
		for(int j = 0; j < nNumCols; ++j)
		{
			int nValA = rand() % 99 + 1;
			int nValB = rand() % 99 + 1;

			anMatrixA[i][j] = nValA;
			anMatrixB[i][j] = nValB;
		}
	}

	printf("=====> 행렬 - A <=====\n");

	for(int i = 0; i < nNumRows; ++i)
	{
		for(int j = 0; j < nNumCols; ++j)
		{
			printf("%2d, ", anMatrixA[i][j]);
		}

		printf("\n");
	}

	printf("\n=====> 행렬 - B <=====\n");

	for(int i = 0; i < nNumRows; ++i)
	{
		for(int j = 0; j < nNumCols; ++j)
		{
			printf("%2d, ", anMatrixB[i][j]);
		}

		printf("\n");
	}

	return 0;
}
