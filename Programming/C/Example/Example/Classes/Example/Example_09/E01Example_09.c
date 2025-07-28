#include "E01Example_09.h"

int E01Example_09(int argc, char* args[])
{
	int anMatrixA[2][2];
	anMatrixA[0][0] = 1;
	anMatrixA[0][1] = 2;
	anMatrixA[1][0] = 3;
	anMatrixA[1][1] = 4;

	int anMatrixB[2][2] = {
		1, 2
	};

	int anMatrixC[2][2] = {
		{ 1 },
		{ 2 }
	};

	int anMatrixD[][2] = {
		1, 2
	};

	int anMatrixE[][2] = {
		{ 1 },
		{ 2 }
	};

	const int nRowA = sizeof(anMatrixA) / sizeof(anMatrixA[0]);
	const int nColA = sizeof(anMatrixA[0]) / sizeof(anMatrixA[0][0]);

	const int nRowB = sizeof(anMatrixB) / sizeof(anMatrixB[0]);
	const int nColB = sizeof(anMatrixB[0]) / sizeof(anMatrixB[0][0]);

	const int nRowC = sizeof(anMatrixC) / sizeof(anMatrixC[0]);
	const int nColC = sizeof(anMatrixC[0]) / sizeof(anMatrixC[0][0]);

	const int nRowD = sizeof(anMatrixD) / sizeof(anMatrixD[0]);
	const int nColD = sizeof(anMatrixD[0]) / sizeof(anMatrixD[0][0]);

	const int nRowE = sizeof(anMatrixE) / sizeof(anMatrixE[0]);
	const int nColE = sizeof(anMatrixE[0]) / sizeof(anMatrixE[0][0]);

	printf("=====> 2 차원 배열 - A <=====\n");

	for(int i = 0; i < nRowA; ++i)
	{
		for(int j = 0; j < nColA; ++j)
		{
			printf("%d, ", anMatrixA[i][j]);
		}

		printf("\n");
	}

	printf("\n=====> 2 차원 배열 - B <=====\n");

	for(int i = 0; i < nRowB; ++i)
	{
		for(int j = 0; j < nColB; ++j)
		{
			printf("%d, ", anMatrixB[i][j]);
		}

		printf("\n");
	}

	printf("\n=====> 2 차원 배열 - C <=====\n");

	for(int i = 0; i < nRowC; ++i)
	{
		for(int j = 0; j < nColC; ++j)
		{
			printf("%d, ", anMatrixC[i][j]);
		}

		printf("\n");
	}

	printf("\n=====> 2 차원 배열 - D <=====\n");

	for(int i = 0; i < nRowD; ++i)
	{
		for(int j = 0; j < nColA; ++j)
		{
			printf("%d, ", anMatrixD[i][j]);
		}

		printf("\n");
	}

	printf("\n=====> 2 차원 배열 - E <=====\n");

	for(int i = 0; i < nRowE; ++i)
	{
		for(int j = 0; j < nColE; ++j)
		{
			printf("%d, ", anMatrixE[i][j]);
		}

		printf("\n");
	}

	return 0;
}
