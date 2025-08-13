#pragma once

#include "../../Global/Define/KDefine+Global.h"

/**
* 배열 리스트
*/
typedef struct STList_Array_E25
{
	int m_nSize;
	int m_nNumValues;

	int* m_pnValues;
} STList_Array_E25;

/** 배열 리스트를 초기화한다 */
void InitList_Array_E25(STList_Array_E25* a_pstList);

/** 배열 리스트를 제거한다 */
void DestroyList_Array_E25(STList_Array_E25* a_pstList);

/** 값을 추가한다 */
void AddVal_ArrayList_E25(STList_Array_E25* a_pstList, int a_nVal);

/** 값을 추가한다 */
void InsertVal_ArrayList_E25(STList_Array_E25* a_pstList, int a_nIdx, int a_nVal);

/** 값을 제거한다 */
void RemoveVal_ArrayList_E25(STList_Array_E25* a_pstList, int a_nVal);

/** 값을 탐색한다 */
int FindVal_ArrayList_E25(STList_Array_E25* a_pstList, int a_nVal);
