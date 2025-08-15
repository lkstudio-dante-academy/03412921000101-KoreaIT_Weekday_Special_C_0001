#include "HTable_Chaining_E29.h"

/** 키를 생성한다 */
static int MakeKey_CHTable_E29(STHTable_Chaining_E29* a_pstHTable, int a_nVal);

void InitHTable_Chaining_E29(STHTable_Chaining_E29* a_pstHTable)
{
	memset(a_pstHTable, 0, sizeof(STHTable_Chaining_E29));
	a_pstHTable->m_nSize = UCHAR_MAX;

	a_pstHTable->m_pstLists_Linked = (STList_Linked_E25*)calloc(a_pstHTable->m_nSize,
		sizeof(STList_Linked_E25));

	for(int i = 0; i < a_pstHTable->m_nSize; ++i)
	{
		InitList_Linked_E25(a_pstHTable->m_pstLists_Linked + i);
	}
}

void DestroyHTable_Chaining_E29(STHTable_Chaining_E29* a_pstHTable)
{
	for(int i = 0; i < a_pstHTable->m_nSize; ++i)
	{
		DestroyList_Linked_E25(a_pstHTable->m_pstLists_Linked + i);
	}

	SAFE_FREE(a_pstHTable->m_pstLists_Linked);
}

void AddVal_CHTable_E29(STHTable_Chaining_E29* a_pstHTable, int a_nVal)
{
	int nKey = MakeKey_CHTable_E29(a_pstHTable, a_nVal);
	InsertVal_LList_E25(a_pstHTable->m_pstLists_Linked + nKey, 0, a_nVal);
}

void RemoveVal_CHTable_E29(STHTable_Chaining_E29* a_pstHTable, int a_nVal)
{
	int nKey = MakeKey_CHTable_E29(a_pstHTable, a_nVal);
	RemoveVal_LList_E25(a_pstHTable->m_pstLists_Linked + nKey, a_nVal);
}

void Enumerate_CHTable_E29(STHTable_Chaining_E29* a_pstHTable,
	void (*a_pfnCallback)(int, int))
{
	for(int i = 0; i < a_pstHTable->m_nSize; ++i)
	{
		for(int j = 0; j < a_pstHTable->m_pstLists_Linked[i].m_nNumValues; ++j)
		{
			int nVal = GetVal_LList_E25(a_pstHTable->m_pstLists_Linked + i, j);
			a_pfnCallback(i, nVal);
		}
	}
}

int MakeKey_CHTable_E29(STHTable_Chaining_E29* a_pstHTable, int a_nVal)
{
	int nVal_Sum = 0;

	while(a_nVal != 0)
	{
		nVal_Sum += a_nVal % 10;
		a_nVal /= 10;
	}

	return nVal_Sum % a_pstHTable->m_nSize;
}
