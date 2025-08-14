#include "List_Linked_E25.h"

/** 노드를 탐색한다 */
static STNode_LinkedList_E25* FindNode_LinkedList_E25(STList_Linked_E25* a_pstList,
	int a_nVal);

/** 노드를 탐색한다 */
static STNode_LinkedList_E25* FindNode_At_LinkedList_E25(STList_Linked_E25* a_pstList, 
	int a_nIdx);

/** 노드를 생성한다 */
static STNode_LinkedList_E25* CreateNode_LinkedList_E25(int a_nVal);

void InitList_Linked_E25(STList_Linked_E25* a_pstList)
{
	memset(a_pstList, 0, sizeof(STList_Linked_E25));
	a_pstList->m_pstNode_Head = CreateNode_LinkedList_E25(0);
}

void DestroyList_Linked_E25(STList_Linked_E25* a_pstList)
{
	STNode_LinkedList_E25* pstNode = a_pstList->m_pstNode_Head;

	while (pstNode != NULL) {
		STNode_LinkedList_E25* pstNode_Remove = pstNode;
		pstNode = pstNode->m_pstNode_Next;

		free(pstNode_Remove);
	}
}

int GetVal_LinkedList_E25(STList_Linked_E25* a_pstList, int a_nIdx)
{
	STNode_LinkedList_E25* pstNode = FindNode_At_LinkedList_E25(a_pstList, a_nIdx);
	return pstNode->m_pstNode_Next->m_nVal;
}

void AddVal_LinkedList_E25(STList_Linked_E25* a_pstList, int a_nVal)
{
	STNode_LinkedList_E25* pstNode_Tail = a_pstList->m_pstNode_Head;

	while (pstNode_Tail->m_pstNode_Next != NULL) {
		pstNode_Tail = pstNode_Tail->m_pstNode_Next;
	}

	pstNode_Tail->m_pstNode_Next = CreateNode_LinkedList_E25(a_nVal);
	a_pstList->m_nNumValues += 1;
}

void InsertVal_LinkedList_E25(STList_Linked_E25* a_pstList, int a_nIdx, int a_nVal)
{
	STNode_LinkedList_E25* pstNode = FindNode_At_LinkedList_E25(a_pstList, a_nIdx);

	STNode_LinkedList_E25* pstNode_New = CreateNode_LinkedList_E25(a_nVal);
	pstNode_New->m_pstNode_Next = pstNode->m_pstNode_Next;

	pstNode->m_pstNode_Next = pstNode_New;
	a_pstList->m_nNumValues += 1;
}

void RemoveVal_LinkedList_E25(STList_Linked_E25* a_pstList, int a_nVal)
{
	STNode_LinkedList_E25* pstNode = FindNode_LinkedList_E25(a_pstList, a_nVal);
	STNode_LinkedList_E25* pstNode_Remove = pstNode->m_pstNode_Next;

	// 값 제거가 불가능 할 경우
	if (pstNode_Remove == NULL) {
		return;
	}

	pstNode->m_pstNode_Next = pstNode_Remove->m_pstNode_Next;

	free(pstNode_Remove);
	a_pstList->m_nNumValues -= 1;
}

STNode_LinkedList_E25* FindNode_LinkedList_E25(STList_Linked_E25* a_pstList, int a_nVal)
{
	STNode_LinkedList_E25* pstNode = a_pstList->m_pstNode_Head;

	while (pstNode->m_pstNode_Next != NULL) {
		// 노드가 존재 할 경우
		if (a_nVal == pstNode->m_pstNode_Next->m_nVal) {
			break;
		}

		pstNode = pstNode->m_pstNode_Next;
	}

	return pstNode;
}

STNode_LinkedList_E25* FindNode_At_LinkedList_E25(STList_Linked_E25* a_pstList, int a_nIdx)
{
	STNode_LinkedList_E25* pstNode = a_pstList->m_pstNode_Head;

	for (int i = 0; i < a_nIdx; ++i) {
		pstNode = pstNode->m_pstNode_Next;
	}

	return pstNode;
}

STNode_LinkedList_E25* CreateNode_LinkedList_E25(int a_nVal)
{
	STNode_LinkedList_E25* pstNode = (STNode_LinkedList_E25*)calloc(1, 
		sizeof(STNode_LinkedList_E25));

	pstNode->m_nVal = a_nVal;
	return pstNode;
}
