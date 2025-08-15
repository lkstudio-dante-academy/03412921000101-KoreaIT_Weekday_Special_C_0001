#include "Tree_BSearch_E28.h"

/** 노드를 생성한다 */
static STNode_BSTree_E28* CreateNode(int a_nVal);

void InitTree_BSearch_E28(STTree_BSearch_E28* a_pstTree)
{ }

void DestroyTree_BSearch_E28(STTree_BSearch_E28* a_pstTree)
{ }

void AddVal_BSTree_E28(STTree_BSearch_E28* a_pstTree, int a_nVal)
{ }

void RemoveVal_BSTree_E28(STTree_BSearch_E28* a_pstTree, int a_nVal)
{ }

STNode_BSTree_E28* CreateNode(int a_nVal)
{
	STNode_BSTree_E28* pstNode = (STNode_BSTree_E28*)calloc(1, sizeof(STNode_BSTree_E28));
	pstNode->m_nVal = a_nVal;

	return pstNode;
}
