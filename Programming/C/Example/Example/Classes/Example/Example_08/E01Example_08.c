#include "E01Example_08.h"

int E01Example_08(int argc, char* args[])
{
	int anValuesA[5];
	anValuesA[0] = 1;
	anValuesA[1] = 2;
	anValuesA[2] = 3;
	anValuesA[3] = 4;
	anValuesA[4] = 5;

	/*
	* 아래와 같이 배열은 변수와 마찬가지로 선언과 동시에 초기화가 가능하다.
	*
	* 배열의 각 요소의 값은 { } 사이에 명시하는 것이 가능하며 배열의 요소 개수보다 초기화 데이터의
	* 개수가 적을 경우 명시 되지 않은 배열 요소는 0 으로 초기화 된다. (+ 즉, 초기화 데이터는
	* 순차적으로 배열 요소에 할당 된다는 것을 알 수 있다.)
	*/
	int anValuesB[5] =
	{
		1, 2, 3
	};

	/*
	* 아래와 같이 배열의 길이를 생략했을 경우 반드시 해당 배열을 초기화해줘야한다. (+ 즉,
	* 명시 된 초기화 데이터를 기반으로 C 컴파일러가 자동으로 배열의 길이를 계산한다는 것을
	* 알 수 있다.)
	*/
	int anValuesC[] =
	{
		1, 2, 3
	};

	/*
	* sizeof 키워드를 활용하면 배열의 길이를 계산하는 것이 가능하다.
	*
	* Ex)
	* int anValues[5] = { 0 };
	* int nSize = sizeof(anValues) / sizeof(anValues[0]);
	*
	* 위와 같이 sizeof 키워드에 배열을 명시 할 경우 배열의 바이트 크기가 반환 되며
	* 배열의 바이트 크기는 배열 요소의 바이트 크기 * 배열 길이이다.
	*
	* 따라서 배열의 바이트 크기를 배열 요소의 바이트 크기로 나누어주면 배열 길이를 계산하는 것이
	* 가능하다.
	*/
	const int nSizeA = sizeof(anValuesA) / sizeof(anValuesA[0]);
	const int nSizeB = sizeof(anValuesB) / sizeof(anValuesB[0]);
	const int nSizeC = sizeof(anValuesC) / sizeof(anValuesC[0]);

	printf("=====> 배열 - A <=====\n");

	for(int i = 0; i < nSizeA; ++i)
	{
		printf("%d, ", anValuesA[i]);
	}

	printf("\n\n=====> 배열 - B <=====\n");

	for(int i = 0; i < nSizeB; ++i)
	{
		printf("%d, ", anValuesB[i]);
	}

	printf("\n\n=====> 배열 - C <=====\n");

	for(int i = 0; i < nSizeC; ++i)
	{
		printf("%d, ", anValuesC[i]);
	}

	printf("\n");
	return 0;
}
