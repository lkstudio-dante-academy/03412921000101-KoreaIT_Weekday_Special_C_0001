#include "List_Array_E25.h"

/** 크기를 변경한다 */
static void Resize_ArrayList_E25(STList_Array_E25* a_pstList, 
	int a_nSize);

void InitList_Array_E25(STList_Array_E25* a_pstList)
{
	memset(a_pstList, 0, sizeof(STList_Array_E25));
	
	a_pstList->m_nSize = 5;
	a_pstList->m_pnValues = (int*)malloc(sizeof(int) * a_pstList->m_nSize);
}

void DestroyList_Array_E25(STList_Array_E25* a_pstList)
{
	free(a_pstList->m_pnValues);
}

void AddVal_ArrayList_E25(STList_Array_E25* a_pstList, int a_nVal)
{
	// 배열이 가득 찼을 경우
	if(a_pstList->m_pnValues >= a_pstList->m_nSize)
	{
		Resize_ArrayList_E25(a_pstList, a_pstList->m_nSize * 2);
	}

	int nIdx = a_pstList->m_nNumValues;

	a_pstList->m_pnValues[nIdx] = a_nVal;
	a_pstList->m_nNumValues += 1;
}

void InsertVal_ArrayList_E25(STList_Array_E25* a_pstList, int a_nIdx, int a_nVal)
{
	// 배열이 가득 찼을 경우
	if(a_pstList->m_nNumValues >= a_pstList->m_nSize)
	{
		Resize_ArrayList_E25(a_pstList, a_pstList->m_nSize * 2);
	}

	for(int i = a_pstList->m_nNumValues; i > a_nIdx; --i)
	{
		a_pstList->m_pnValues[i] = a_pstList->m_pnValues[i - 1];
	}

	a_pstList->m_pnValues[a_nIdx] = a_nVal;
	a_pstList->m_nNumValues += 1;
}

void RemoveVal_ArrayList_E25(STList_Array_E25* a_pstList, int a_nVal)
{
	int nResult = FindVal_ArrayList_E25(a_pstList, a_nVal);

	// 값 제거가 불가능 할 경우
	if(nResult < 0)
	{
		return;
	}

	for(int i = nResult; i < a_pstList->m_nNumValues - 1; ++i) {
		a_pstList->m_pnValues[i] = a_pstList->m_pnValues[i + 1];
	}

	a_pstList->m_nNumValues -= 1;
}

int FindVal_ArrayList_E25(STList_Array_E25* a_pstList, int a_nVal)
{
	for(int i = 0; i < a_pstList->m_nNumValues; ++i)
	{
		// 값이 존재 할 경우
		if(a_nVal == a_pstList->m_pnValues[i])
		{
			return i;
		}
	}

	return -1;
}

void Resize_ArrayList_E25(STList_Array_E25* a_pstList, int a_nSize)
{
	a_pstList->m_nSize = a_nSize;

	a_pstList->m_pnValues = (int*)realloc(a_pstList->m_pnValues,
		sizeof(int) * a_nSize);
}
