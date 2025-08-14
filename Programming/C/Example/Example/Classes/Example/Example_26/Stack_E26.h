#pragma once

#include "../../Global/Define/KDefine+Global.h"

/**
* 스택
*/
typedef struct STStack_E26
{
	int m_nTop;
	int m_nSize;

	int* m_pnValues;
} STStack_E26;

/** 스택을 초기화한다 */
void InitStack_E26(STStack_E26* a_pstStack);

/** 스택을 제거한다 */
void DestroyStack_E26(STStack_E26* a_pstStack);

/** 값을 추가한다 */
void Push_Stack_E26(STStack_E26* a_pstStack, int a_nVal);

/** 값을 제거한다 */
int Pop_Stack_E26(STStack_E26* a_pstStack);

/** 빈 여부를 검사한다 */
int IsEmpty_Stack_E26(STStack_E26* a_pstStack);
