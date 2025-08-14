#pragma once

#include "../../Global/Define/KDefine+Global.h"

/**
* 노드
*/
typedef struct STNode_LinkedList_E25
{
	int m_nVal;
	struct STNode_LinkedList_E25* m_pstNode_Next;
} STNode_LinkedList_E25;

/**
* 연결 리스트
*/
typedef struct STList_Linked_E25
{
	int m_nNumValues;
	STNode_LinkedList_E25* m_pstNode_Head;
} STList_Linked_E25;

/** 연결 리스트를 초기화한다 */
void InitList_Linked_E25(STList_Linked_E25* a_pstList);

/** 연결 리스트를 제거한다 */
void DestroyList_Linked_E25(STList_Linked_E25* a_pstList);

/** 값을 반환한다 */
int GetVal_LinkedList_E25(STList_Linked_E25* a_pstList, int a_nIdx);

/** 값을 추가한다 */
void AddVal_LinkedList_E25(STList_Linked_E25* a_pstList, int a_nVal);

/** 값을 추가한다 */
void InsertVal_LinkedList_E25(STList_Linked_E25* a_pstList, int a_nIdx, int a_nVal);

/** 값을 제거한다 */
void RemoveVal_LinkedList_E25(STList_Linked_E25* a_pstList, int a_nVal);
