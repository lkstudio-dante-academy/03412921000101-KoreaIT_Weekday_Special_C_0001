#include "Stack_E26.h"

void InitStack_E26(STStack_E26* a_pstStack)
{
	memset(a_pstStack, 0, sizeof(STStack_E26));
	a_pstStack->m_nSize = 5;

	a_pstStack->m_pnValues = (int*)malloc(sizeof(int) * a_pstStack->m_nSize);
}

void DestroyStack_E26(STStack_E26* a_pstStack)
{
	free(a_pstStack->m_pnValues);
}

void Push_Stack_E26(STStack_E26* a_pstStack, int a_nVal)
{
	// 배열이 가득 찼을 경우
	if(a_pstStack->m_nTop >= a_pstStack->m_nSize)
	{
		a_pstStack->m_nSize *= 2;

		a_pstStack->m_pnValues = (int*)realloc(a_pstStack->m_pnValues,
			sizeof(int) * a_pstStack->m_nSize);
	}

	a_pstStack->m_pnValues[a_pstStack->m_nTop++] = a_nVal;
}

int Pop_Stack_E26(STStack_E26* a_pstStack)
{
	return a_pstStack->m_pnValues[--a_pstStack->m_nTop];
}

int IsEmpty_Stack_E26(STStack_E26* a_pstStack)
{
	return a_pstStack->m_nTop <= 0;
}
