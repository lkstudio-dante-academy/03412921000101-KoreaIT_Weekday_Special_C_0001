#pragma once

#include "../../Global/Define/KDefine+Global.h"
#include "../Example_25/List_Linked_E25.h"

/**
* 해시 테이블
*/
typedef struct STHTable_Chaining_E29
{
	int m_nSize;
	STList_Linked_E25* m_pstLists_Linked;
} STHTable_Chaining_E29;

/** 해시 테이블을 초기화한다 */
void InitHTable_Chaining_E29(STHTable_Chaining_E29* a_pstHTable);

/** 해시 테이블을 제거한다 */
void DestroyHTable_Chaining_E29(STHTable_Chaining_E29* a_pstHTable);

/** 값을 추가한다 */
void AddVal_CHTable_E29(STHTable_Chaining_E29* a_pstHTable, int a_nVal);

/** 값을 제거한다 */
void RemoveVal_CHTable_E29(STHTable_Chaining_E29* a_pstHTable, int a_nVal);

/** 해시 테이블을 순회한다 */
void Enumerate_CHTable_E29(STHTable_Chaining_E29* a_pstHTable,
	void (*a_pfnCallback)(int, int));
