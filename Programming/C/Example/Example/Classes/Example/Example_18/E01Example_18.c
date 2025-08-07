#include "E01Example_18.h"

/** 값을 설정한다 */
void SetupValues_E18(int a_pnValues[], int a_nSize);

int E01Example_18(int argc, char* args[])
{
	int anValues[5] = { 0 };
	SetupValues_E18(anValues, _countof(anValues));

	printf("=====> 배열 <=====\n");

	for(int i = 0; i < _countof(anValues); ++i)
	{
		printf("%d, ", *(anValues + i));
	}

	int nVal = 0;
	char* pchLetters = (char*)&nVal;

	for(int i = 0; i < sizeof(nVal); ++i)
	{
		pchLetters[i] = 'A' + i;
	}

	printf("\n\n=====> 포인터 연산 결과 - A <=====\n");

	for(int i = 0; i < sizeof(nVal); ++i)
	{
		printf("%c, ", pchLetters[i]);
	}

	short* pnValues = (short*)&nVal;

	for(int i = 0; i < sizeof(short); ++i)
	{
		pnValues[i] = i + 1;
	}

	printf("\n\n=====> 포인터 연산 결과 - B <=====\n");

	for(int i = 0; i < sizeof(short); ++i)
	{
		printf("%d, ", pnValues[i]);
	}

	float* pfFloat = (float*)&nVal;
	*pfFloat = 3.14f;

	printf("\n\n=====> 포인터 연산 결과 - C <=====\n");
	printf("%f\n", *pfFloat);

	return 0;
}

void SetupValues_E18(int a_pnValues[], int a_nSize)
{
	for(int i = 0; i < a_nSize; ++i)
	{
		a_pnValues[i] = rand() % 99 + 1;
	}
}
