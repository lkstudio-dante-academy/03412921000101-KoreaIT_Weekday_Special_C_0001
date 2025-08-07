#include "E01Example_19.h"

/*
* typedef 키워드란?
* - 기존 자료형에 새로운 이름을 추가하는 역할을 수행하는 키워드를 의미한다. (+ 즉, 
* typedef 키워드를 활용하면 기존 자료형에 프로젝트 목적에 맞는 이름을 추가하는 것이 가능하다.)
* 
* Ex)
* typedef unsigned int size_t;			<- unsigned int 자료형에 size_t 이름 추가
* 
* size_t nSizeA = 10;
* size_t nSizeB = 20;
* 
* 위와 같이 typdef 키워드를 통해 기존 unsigned int 자료형에 size_t 이름을 부여함으로서
* 해당 이름으로 변수 등을 선언하는 것이 가능하다.
*/
typedef double(*pfn_t)(int, int);

/** 덧셈 결과를 반환한다 */
double GetVal_Sum_E19(int a_nValA, int a_nValB);

/** 뺄셈 결과를 반환한다 */
double GetVal_Sub_E19(int a_nValA, int a_nValB);

/** 곱셈 결과를 반환한다 */
double GetVal_Multiply_E19(int a_nValA, int a_nValB);

/** 나눗셈 결과를 반환한다 */
double GetVal_Divide_E19(int a_nValA, int a_nValB);

/** 함수 포인터를 반환한다 */
double (*GetPtr_Func_E19(char a_chOperator))(int, int);

/** 오름차순 비교한다 */
int CompareVal_ByAscending_E19(int a_nValA, int a_nValB);

/** 내림차순 비교한다 */
int CompareVal_ByDescending_E19(int a_nValA, int a_nValB);

/** 값을 정렬한다 */
void SortValues_E19(int a_pnValues[], int a_nSize, int(*a_pfnCompare)(int, int));

/** 값을 출력한다 */
void PrintValues_E19(int a_pnValues[], int a_nSize);

int E01Example_19(int argc, char* args[])
{
	int nValA = 0;
	int nValB = 0;

	char chOperator = '\0';

	printf("수식 입력 : ");
	scanf("%d %c %d", &nValA, &chOperator, &nValB);

	double (*pfnPtr)(int, int) = GetPtr_Func_E19(chOperator);

	double dblResult = pfnPtr(nValA, nValB);
	printf("결과 : %lf\n", dblResult);

	int anValues[10] = { 0 };

	for(int i = 0; i < _countof(anValues); ++i)
	{
		anValues[i] = rand() % 99 + 1;
	}

	printf("\n=====> 배열 <=====\n");
	PrintValues_E19(anValues, _countof(anValues));

	SortValues_E19(anValues,
		_countof(anValues), &CompareVal_ByAscending_E19);

	printf("\n=====> 배열 - 오름차순 정렬 후 <=====\n");
	PrintValues_E19(anValues, _countof(anValues));

	SortValues_E19(anValues,
		_countof(anValues), &CompareVal_ByDescending_E19);

	printf("\n=====> 배열 - 내림차순 정렬 후 <=====\n");
	PrintValues_E19(anValues, _countof(anValues));

	return 0;
}

double GetVal_Sum_E19(int a_nValA, int a_nValB)
{
	return a_nValA + (double)a_nValB;
}

double GetVal_Sub_E19(int a_nValA, int a_nValB)
{
	return a_nValA - (double)a_nValB;
}

double GetVal_Multiply_E19(int a_nValA, int a_nValB)
{
	return a_nValA * (double)a_nValB;
}

double GetVal_Divide_E19(int a_nValA, int a_nValB)
{
	return a_nValA / (double)a_nValB;
}

double(*GetPtr_Func_E19(char a_chOperator))(int, int)
{
	switch(a_chOperator)
	{
		case '+': return &GetVal_Sum_E19;
		case '-': return &GetVal_Sub_E19;
		case '*': return &GetVal_Multiply_E19;
		case '/': return &GetVal_Divide_E19;
	}

	return NULL;
}

int CompareVal_ByAscending_E19(int a_nValA, int a_nValB)
{
	return a_nValA - a_nValB;
}

int CompareVal_ByDescending_E19(int a_nValA, int a_nValB)
{
	return a_nValB - a_nValA;
}

void SortValues_E19(int a_pnValues[], int a_nSize, int(*a_pfnCompare)(int, int))
{
	for(int i = 0; i < a_nSize - 1; ++i)
	{
		for(int j = 0; j < a_nSize - 1 - i; ++j)
		{
			// 정렬이 필요 없을 경우
			if(a_pfnCompare(a_pnValues[j], a_pnValues[j + 1]) <= 0)
			{
				continue;
			}

			int nTemp = a_pnValues[j];
			a_pnValues[j] = a_pnValues[j + 1];
			a_pnValues[j + 1] = nTemp;
		}
	}
}

void PrintValues_E19(int a_pnValues[], int a_nSize)
{
	int* pnVal = a_pnValues;

	while(pnVal != a_pnValues + a_nSize)
	{
		printf("%d, ", *pnVal++);
	}

	printf("\n");
}
