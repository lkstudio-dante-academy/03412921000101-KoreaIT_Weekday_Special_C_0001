#include "HTable_OAddress_E29.h"

/** 값을 탐색한다 */
static int FindVal_OAHTable_E29(STHTable_OAddress_E29* a_pstHTable, int a_nVal);

/** 슬롯을 탐색한다 */
static int FindSlot_OAHTable_E29(STHTable_OAddress_E29* a_pstHTable, int a_nVal);

/** 크기를 변경한다 */
static void Resize_OAHTable_E29(STHTable_OAddress_E29* a_pstHTable, int a_nSize);

/** 키를 생성한다 */
static int MakeKey_OAHTable_E29(STHTable_OAddress_E29* a_pstHTable, int a_nVal);

void InitHTable_OAddress_E29(STHTable_OAddress_E29* a_pstHTable)
{
	memset(a_pstHTable, 0, sizeof(STHTable_OAddress_E29));
	a_pstHTable->m_nSize = 10;

	a_pstHTable->m_pstSlots = (STSlot_OAHTable_E29*)calloc(a_pstHTable->m_nSize,
		sizeof(STSlot_OAHTable_E29));
}

void DestroyHTable_OAddress_E29(STHTable_OAddress_E29* a_pstHTable)
{
	SAFE_FREE(a_pstHTable->m_pstSlots);
}

void AddVal_OAHTable_E29(STHTable_OAddress_E29* a_pstHTable, int a_nVal)
{
	// 배열이 가득 찼을 경우
	if(a_pstHTable->m_nNumValues >= (int)(a_pstHTable->m_nSize * 0.7f))
	{
		Resize_OAHTable_E29(a_pstHTable, a_pstHTable->m_nSize * 2);
	}

	int nResult = FindSlot_OAHTable_E29(a_pstHTable, a_nVal);

	a_pstHTable->m_pstSlots[nResult].m_nVal = a_nVal;
	a_pstHTable->m_pstSlots[nResult].m_eState = STATE_OAHTABLE_E29_USE;

	a_pstHTable->m_nNumValues += 1;
}

void RemoveVal_OAHTable_E29(STHTable_OAddress_E29* a_pstHTable, int a_nVal)
{
	int nResult = FindVal_OAHTable_E29(a_pstHTable, a_nVal);
	a_pstHTable->m_pstSlots[nResult].m_eState = STATE_OAHTABLE_E29_REMOVE;
}

void Enumerate_OAHTable_E29(STHTable_OAddress_E29* a_pstHTable,
	void(*a_pfnCallback)(int, int))
{
	for(int i = 0; i < a_pstHTable->m_nSize; ++i)
	{
		// 순회가 불가능 할 경우
		if(a_pstHTable->m_pstSlots[i].m_eState != STATE_OAHTABLE_E29_USE)
		{
			continue;
		}

		a_pfnCallback(i, a_pstHTable->m_pstSlots[i].m_nVal);
	}
}

int FindVal_OAHTable_E29(STHTable_OAddress_E29* a_pstHTable, int a_nVal)
{
	int nKey = MakeKey_OAHTable_E29(a_pstHTable, a_nVal);

	for(int i = 0; i < a_pstHTable->m_nSize; ++i)
	{
		int nIdx = (nKey + i) % a_pstHTable->m_nSize;
		int nVal = a_pstHTable->m_pstSlots[nIdx].m_nVal;

		EState_OAHTable_E29 eState = a_pstHTable->m_pstSlots[nIdx].m_eState;

		// 값이 존재 할 경우
		if(a_nVal == nVal && eState == STATE_OAHTABLE_E29_USE)
		{
			return nIdx;
		}
	}

	return -1;
}

int FindSlot_OAHTable_E29(STHTable_OAddress_E29* a_pstHTable, int a_nVal)
{
	int nKey = MakeKey_OAHTable_E29(a_pstHTable, a_nVal);

	for(int i = 0; i < a_pstHTable->m_nSize; ++i)
	{
		int nIdx = (nKey + i) % a_pstHTable->m_nSize;
		EState_OAHTable_E29 eState = a_pstHTable->m_pstSlots[nIdx].m_eState;

		// 슬롯이 비어 있을 경우
		if(eState != STATE_OAHTABLE_E29_USE)
		{
			return nIdx;
		}
	}

	return -1;
}

void Resize_OAHTable_E29(STHTable_OAddress_E29* a_pstHTable, int a_nSize)
{
	int nSize = a_pstHTable->m_nSize;
	STSlot_OAHTable_E29* pstSlots = a_pstHTable->m_pstSlots;

	a_pstHTable->m_nSize = a_nSize;

	a_pstHTable->m_pstSlots = (STSlot_OAHTable_E29*)calloc(a_pstHTable->m_nSize,
		sizeof(STSlot_OAHTable_E29));

	for(int i = 0; i < nSize; ++i)
	{
		// 슬롯이 비어 있을 경우
		if(pstSlots[i].m_eState != STATE_OAHTABLE_E29_USE)
		{
			continue;
		}

		AddVal_OAHTable_E29(a_pstHTable, pstSlots[i].m_nVal);
	}

	SAFE_FREE(pstSlots);
}

int MakeKey_OAHTable_E29(STHTable_OAddress_E29* a_pstHTable, int a_nVal)
{
	int nVal_Sum = 0;

	while(a_nVal != 0)
	{
		nVal_Sum += a_nVal % 10;
		a_nVal /= 10;
	}

	return nVal_Sum % a_pstHTable->m_nSize;
}
