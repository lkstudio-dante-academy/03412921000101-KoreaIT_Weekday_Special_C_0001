#pragma once

#include "../../Global/Define/KDefine+Global.h"

/**
* 상태
*/
typedef enum EState_OAHTable_E29
{
	STATE_OAHTABLE_E29_NONE = -1,
	STATE_OAHTABLE_E29_EMPTY,
	STATE_OAHTABLE_E29_USE,
	STATE_OAHTABLE_E29_REMOVE,
	STATE_OAHTABLE_E29_MAX_VAL,
} EState_OAHTable_E29;


/**
* 슬롯
*/
typedef struct STSlot_OAHTable_E29
{
	int m_nVal;
	EState_OAHTable_E29 m_eState;
} STSlot_OAHTable_E29;

/**
* 해시 테이블
*/
typedef struct STHTable_OAddress_E29
{
	int m_nSize;
	int m_nNumValues;

	STSlot_OAHTable_E29* m_pstSlots;
} STHTable_OAddress_E29;

/** 해시 테이블을 초기화한다 */
void InitHTable_OAddress_E29(STHTable_OAddress_E29* a_pstHTable);

/** 해시 테이블을 제거한다 */
void DestroyHTable_OAddress_E29(STHTable_OAddress_E29* a_pstHTable);

/** 값을 추가한다 */
void AddVal_OAHTable_E29(STHTable_OAddress_E29* a_pstHTable, int a_nVal);

/** 값을 제거한다 */
void RemoveVal_OAHTable_E29(STHTable_OAddress_E29* a_pstHTable, int a_nVal);

/** 해시 테이블을 순회한다 */
void Enumerate_OAHTable_E29(STHTable_OAddress_E29* a_pstHTable,
	void (*a_pfnCallback)(int, int));
