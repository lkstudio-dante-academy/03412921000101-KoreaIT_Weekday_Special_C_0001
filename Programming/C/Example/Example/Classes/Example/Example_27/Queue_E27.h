#pragma once

#include "../../Global/Define/KDefine+Global.h"

/**
* 큐
*/
typedef struct STQueue_E27
{
	int m_nFront;
	int m_nRear;

	int m_nSize;
	int* m_pnValues;
} STQueue_E27;

/** 큐를 초기화한다 */
void InitQueue_E27(STQueue_E27* a_pstQueue);

/** 큐를 제거한다 */
void DestroyQueue_E27(STQueue_E27* a_pstQueue);

/** 값을 추가한다 */
void Enqueue_Queue_E27(STQueue_E27* a_pstQueue, int a_nVal);

/** 값을 제거한다 */
int Dequeue_Queue_E27(STQueue_E27* a_pstQueue);

/** 빈 여부를 검사한다 */
int IsEmpty_Queue_E27(STQueue_E27* a_pstQueue);
