#include "T01Training_19.h"

int T01Training_19(int argc, char* args[])
{
	int anMatrix[3][3] = { 0 };

	const int nNumRows = sizeof(anMatrix) / sizeof(anMatrix[0]);
	const int nNumCols = sizeof(anMatrix[0]) / sizeof(anMatrix[0][0]);

	for(int i = 0; i < nNumRows * nNumCols; ++i)
	{
		int nRow = i / nNumCols;
		int nCol = i % nNumCols;

		anMatrix[nRow][nCol] = i + 1;
	}

	printf("=====> 2 차원 배열 <=====\n");

	for(int i = 0; i < nNumRows; ++i)
	{
		for(int j = 0; j < nNumCols; ++j)
		{
			printf("%d, ", anMatrix[i][j]);
		}

		printf("\n");
	}

	return 0;
}
