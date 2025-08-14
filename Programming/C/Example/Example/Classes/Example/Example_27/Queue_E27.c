#include "Queue_E27.h"

void InitQueue_E27(STQueue_E27* a_pstQueue)
{
	memset(a_pstQueue, 0, sizeof(STQueue_E27));
	a_pstQueue->m_nSize = 5;

	a_pstQueue->m_pnValues = (int*)malloc(sizeof(int) * a_pstQueue->m_nSize);
}

void DestroyQueue_E27(STQueue_E27* a_pstQueue)
{
	free(a_pstQueue->m_pnValues);
}

void Enqueue_Queue_E27(STQueue_E27* a_pstQueue, int a_nVal)
{
	// 배열이 가득 찼을 경우
	if((a_pstQueue->m_nRear + 1) % a_pstQueue->m_nSize == a_pstQueue->m_nFront)
	{
		int nRear = 0;
		int* pnValues_New = (int*)malloc(sizeof(int) * a_pstQueue->m_nSize * 2);

		while(!IsEmpty_Queue_E27(a_pstQueue))
		{
			pnValues_New[nRear++] = Dequeue_Queue_E27(a_pstQueue);
		}

		free(a_pstQueue->m_pnValues);

		a_pstQueue->m_nFront = 0;
		a_pstQueue->m_nRear = nRear;

		a_pstQueue->m_nSize *= 2;
		a_pstQueue->m_pnValues = pnValues_New;
	}

	a_pstQueue->m_pnValues[a_pstQueue->m_nRear] = a_nVal;
	a_pstQueue->m_nRear = (a_pstQueue->m_nRear + 1) % a_pstQueue->m_nSize;
}

int Dequeue_Queue_E27(STQueue_E27* a_pstQueue)
{
	int nFront = a_pstQueue->m_nFront;
	a_pstQueue->m_nFront = (a_pstQueue->m_nFront + 1) % a_pstQueue->m_nSize;

	return a_pstQueue->m_pnValues[nFront];
}

int IsEmpty_Queue_E27(STQueue_E27* a_pstQueue)
{
	return a_pstQueue->m_nFront == a_pstQueue->m_nRear;
}
