#include "E01Example_20.h"

int E01Example_20(int argc, char* args[])
{
	/*
	* C 에서 동적 할당 함수들은 반환 값으로 동적 할당 된 메모리를 참조
	* 할 수 있는 void 포인터를 반환한다.
	*
	* 이는 동적 할당 된 메모리에 어떤 데이터를 저장하거나 읽어들일지
	* 알 수 없기 때문이다.
	*
	* 따라서 동적 할당 함수를 통해 반환 된 void 포인터는 반드시 적절한
	* 자료형의 포인터로 형 변환 해줘야한다.
	*
	* void 포인터란?
	* - 메모리의 주소만을 저장 할 수 있는 포인터를 의미한다. (+ 즉,
	* void 포인터는 역참조 연산자를 직접적으로 사용하는 것이 불가능하다.)
	*
	* 포인터에 자료형이 존재하는 이유는 포인터를 통해 메모리에 접근해서
	* 얼만큼의 메모리를 제어 할 지 정보가 필요하기 때문이다.
	*
	* 따라서 메모리의 주소만을 저장하는 것이 목적이라면 자료형이 필요없으며
	* 이때 사용하는 포인터가 void 포인터이다.
	*
	* 만약 void 포인터가 참조하는 메모리에 접근하고 싶다면 void 포인터는
	* 역참조 연산자를 지원하지 않기 때문에 void 포인터를 적절한 자료형의
	* 포인터로 형변환 해줄 필요가 있다.
	*/
	int* pnVal = (int*)malloc(sizeof(int));
	float* pfVal = (float*)calloc(1, sizeof(float));

	*pnVal = 10;
	*pfVal = 3.14f;

	printf("=====> 동적 할당 결과 - A <=====\n");
	printf("%p : %d\n", pnVal, *pnVal);
	printf("%p : %f\n", pfVal, *pfVal);

	int nSize = 0;

	printf("\n크기 입력 : ");
	scanf("%d", &nSize);

	int* pnValues = (int*)malloc(sizeof(int) * nSize);

	for(int i = 0; i < nSize; ++i)
	{
		pnValues[i] = rand() % 99 + 1;
	}

	printf("\n=====> 동적 할당 결과 - B <=====\n");

	for(int i = 0; i < nSize; ++i)
	{
		printf("%d, ", pnValues[i]);
	}

	printf("\n");

	free(pnVal);
	free(pfVal);
	free(pnValues);

	return 0;
}
