#pragma once

#include "../../Global/Define/KDefine+Global.h"

/**
* 노드
*/
typedef struct STNode_BSTree_E28
{
	int m_nVal;

	struct STNode_BSTree_E28* m_pstNode_LChild;
	struct STNode_BSTree_E28* m_pstNode_RChild;
} STNode_BSTree_E28;

/**
* 이진 탐색 트리
*/
typedef struct STTree_BSearch_E28
{
	STNode_BSTree_E28* m_pstNode_Root;
} STTree_BSearch_E28;

/** 이진 탐색 트리를 초기화한다 */
void InitTree_BSearch_E28(STTree_BSearch_E28* a_pstTree);

/** 이진 탐색 트리를 제거한다 */
void DestroyTree_BSearch_E28(STTree_BSearch_E28* a_pstTree);

/** 값을 추가한다 */
void AddVal_BSTree_E28(STTree_BSearch_E28* a_pstTree, int a_nVal);

/** 값을 제거한다 */
void RemoveVal_BSTree_E28(STTree_BSearch_E28* a_pstTree, int a_nVal);
