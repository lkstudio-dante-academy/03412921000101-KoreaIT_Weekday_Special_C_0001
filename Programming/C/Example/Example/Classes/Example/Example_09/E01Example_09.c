#include "E01Example_09.h"

int E01Example_09(int argc, char* args[])
{
	int anMatrixA[2][2];
	anMatrixA[0][0] = 1;
	anMatrixA[0][1] = 2;
	anMatrixA[1][0] = 3;
	anMatrixA[1][1] = 4;

	/*
	* 아래와 같이 배열의 차원을 명시하지 않으면 첫번째 행부터 순차적으로 값이 할당 된다. (+ 즉,
	* 배열이 열 기준 일 경우 첫번째 열부터 순차적으로 값이 할당 된다는 것을 의미한다.)
	*/
	int anMatrixB[2][2] = {
		1, 2
	};

	/*
	* 아래와 같이 배열의 차원을 명시해서 특정 차원의 요소를 초기화하는 것이 가능하다.
	*/
	int anMatrixC[2][2] = {
		{ 1 },
		{ 2 }
	};

	/*
	* 아래와 같이 다차원 배열 또한 배열의 길이를 생략하는 것이 가능하다. (+ 즉, 배열의 길이를
	* 생략함으로서 초기화 데이터를 기반으로 C/C++ 컴파일러가 자동으로 배열의 길이를 계산한다는 것을
	* 의미한다.)
	* 
	* 단, 생략 가능한 배열의 길이는 가장 높은 차원의 길이만 생략 가능하고 하위 차원의 길이는
	* 생략이 불가능하다. (+ 즉, C/C++ 컴파일러는 하위 차원의 길이와 초기화 데이터의 개수를 기반으로
	* 배열의 길이를 계산한다는 것을 알 수 있다.)
	*/
	int anMatrixD[][2] = {
		1, 2
	};

	int anMatrixE[][2] = {
		{ 1 },
		{ 2 }
	};

	/*
	* 아래와 같이 다차원 배열 또한 sizeof 키워드를 통해 배열의 길이를 계산하는 것이 가능하다.
	* (+ 즉, 상위 차원의 바이트 크기를 하위 차원의 바이트 크기로 나누어주면 상위 차원의 길이를
	* 계산하는 것이 가능하다.)
	*/
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
