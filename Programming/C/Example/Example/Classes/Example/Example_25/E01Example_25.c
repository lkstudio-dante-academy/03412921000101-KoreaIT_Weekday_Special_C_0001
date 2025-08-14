#include "E01Example_25.h"
#include "List_Array_E25.h"
#include "List_Linked_E25.h"

/** 값을 출력한다 */
void PrintValues_ArrayList_E25(STList_Array_E25* a_pstList);

/** 값을 출력한다 */
void PrintValues_LinkedList_E25(STList_Linked_E25* a_pstList);

int E01Example_25(int argc, char* args[])
{
	STList_Array_E25 stListValuesA;
	InitList_Array_E25(&stListValuesA);

	STList_Linked_E25 stListValuesB;
	InitList_Linked_E25(&stListValuesB);

	for(int i = 0; i < 10; ++i)
	{
		int nVal = rand() % 99 + 1;

		AddVal_ArrayList_E25(&stListValuesA, nVal);
		AddVal_LinkedList_E25(&stListValuesB, nVal);
	}

	printf("=====> 리스트 <=====\n");
	PrintValues_ArrayList_E25(&stListValuesA);
	PrintValues_LinkedList_E25(&stListValuesB);

	int nVal_Insert = 0;

	printf("\n정수 입력 (추가) : ");
	scanf("%d", &nVal_Insert);

	InsertVal_ArrayList_E25(&stListValuesA, 0, nVal_Insert);
	InsertVal_LinkedList_E25(&stListValuesB, 0, nVal_Insert);

	printf("\n=====> 리스트 - 추가 후 <=====\n");
	PrintValues_ArrayList_E25(&stListValuesA);
	PrintValues_LinkedList_E25(&stListValuesB);

	int nVal_Remove = 0;

	printf("\n정수 입력 (제거) : ");
	scanf("%d", &nVal_Remove);

	RemoveVal_ArrayList_E25(&stListValuesA, nVal_Remove);
	RemoveVal_LinkedList_E25(&stListValuesB, nVal_Remove);

	printf("\n=====> 리스트 - 제거 후 <=====\n");
	PrintValues_ArrayList_E25(&stListValuesA);
	PrintValues_LinkedList_E25(&stListValuesB);

	DestroyList_Array_E25(&stListValuesA);
	DestroyList_Linked_E25(&stListValuesB);

	return 0;
}

void PrintValues_ArrayList_E25(STList_Array_E25* a_pstList)
{
	for(int i = 0; i < a_pstList->m_nNumValues; ++i)
	{
		printf("%d, ", a_pstList->m_pnValues[i]);
	}

	printf("\n");
}

void PrintValues_LinkedList_E25(STList_Linked_E25* a_pstList)
{
	for(int i = 0; i < a_pstList->m_nNumValues; ++i)
	{
		int nVal = GetVal_LinkedList_E25(a_pstList, i);
		printf("%d, ", nVal);
	}

	printf("\n");
}
