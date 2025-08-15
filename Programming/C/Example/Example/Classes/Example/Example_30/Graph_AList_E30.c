#include "Graph_AList_E30.h"

/** 정점을 제거한다 */
static void DestroyVertex_ALGraph_E30(STVertex_AList_E30* a_pstVertex);

/** 간선을 제거한다 */
static void DestroyEdge_ALGraph_E30(STEdge_AList_E30* a_pstEdge);

/** 정점을 탐색한다 */
static STVertex_AList_E30* FindVertex_ALGraph_E30(STGraph_AList_E30* a_pstGraph,
	char a_chKey);

/** 간선을 탐색한다 */
static STEdge_AList_E30* FindEdge_ALGraph_E30(STGraph_AList_E30* a_pstGraph,
	char a_chFrom, char a_chTo);

/** 정점을 생성한다 */
static STVertex_AList_E30* CreateVertex_ALGraph_E30(char a_chKey);

/** 간선을 생성한다 */
static STEdge_AList_E30* CreateEdge_ALGraph_E30(STVertex_AList_E30* a_pstVertex_From,
	STVertex_AList_E30* a_pstVertex_To);

void InitGraph_AList_E30(STGraph_AList_E30* a_pstGraph)
{
	memset(a_pstGraph->m_pstVertex, 0, sizeof(STGraph_AList_E30));
	a_pstGraph->m_pstVertex = CreateVertex_ALGraph_E30('\0');
}

void DestroyGraph_AList_E30(STGraph_AList_E30* a_pstGraph)
{
	STVertex_AList_E30* pstVertex = a_pstGraph->m_pstVertex;

	while(pstVertex != NULL)
	{
		STVertex_AList_E30* pstVertex_Remove = pstVertex;
		pstVertex = pstVertex->m_pstVertex_Next;

		DestroyVertex_ALGraph_E30(pstVertex_Remove);
	}
}

void AddVertex_ALGraph_E30(STGraph_AList_E30* a_pstGraph, char a_chKey)
{
	STVertex_AList_E30* pstVertex = FindVertex_ALGraph_E30(a_pstGraph, a_chKey);

	// 정점 추가가 불가능 할 경우
	if(pstVertex->m_pstVertex_Next != NULL)
	{
		return;
	}

	STVertex_AList_E30* pstVertex_Tail = a_pstGraph->m_pstVertex;

	while(pstVertex_Tail->m_pstVertex_Next != NULL)
	{
		pstVertex_Tail = pstVertex_Tail->m_pstVertex_Next;
	}

	pstVertex_Tail->m_pstVertex_Next = CreateVertex_ALGrpah_E30(a_chKey);
}

void AddEdge_ALGraph_E30(STGraph_AList_E30* a_pstGraph, char a_chFrom, char a_chTo)
{
	STEdge_AList_E30* pstEdge = FindEdge_ALGraph_E30(a_pstGraph, a_chFrom, a_chTo);

	// 간선 추가가 불가능 할 경우
	if(pstEdge->m_pstEdge_Next != NULL)
	{
		return;
	}

	STVertex_AList_E30* pstVertex_From = FindVertex_ALGraph_E30(a_pstGraph, a_chFrom);
	STVertex_AList_E30* pstVertex_To = FindVertex_ALGraph_E30(a_pstGraph, a_chTo);

	// 간선 추가가 불가능 할 경우
	if(pstVertex_From->m_pstVertex_Next == NULL || pstVertex_To->m_pstVertex_Next == NULL)
	{
		return;
	}

	STEdge_AList_E30* pstEdge_Tail = pstVertex_From->m_pstVertex_Next->m_pstEdge;

	while(pstEdge_Tail->m_pstEdge_Next != NULL)
	{
		pstEdge_Tail = pstEdge_Tail->m_pstEdge_Next;
	}

	pstEdge_Tail->m_pstEdge_Next = CreateEdge_ALGraph_E30(pstVertex_From, pstVertex_To);
}

void RemoveVertex_ALGraph_E30(STGraph_AList_E30* a_pstGraph, char a_chKey)
{ 
	STVertex_AList_E30* pstVertex_Prev = FindVertex_ALGraph_E30(a_pstGraph, a_chKey);

	// 정점 제거가 불가능 할 경우
	if(pstVertex_Prev->m_pstVertex_Next == NULL)
	{
		return;
	}

	STVertex_AList_E30* pstVertex = a_pstGraph->m_pstVertex;
	STVertex_AList_E30* pstVertex_Remove = pstVertex_Prev->m_pstVertex_Next;

	while(pstVertex->m_pstVertex_Next != NULL)
	{
		// 간선 제거가 불가능 할 경우
		if(pstVertex->m_pstVertex_Next == pstVertex_Remove)
		{
			continue;
		}

		RemoveEdge_ALGraph_E30(a_pstGraph, pstVertex->m_pstVertex_Next->m_chKey, a_chKey);
		pstVertex = pstVertex->m_pstVertex_Next;
	}

	pstVertex_Prev->m_pstVertex_Next = pstVertex_Remove->m_pstVertex_Next;
	SAFE_FREE(pstVertex);
}

void RemoveEdge_ALGraph_E30(STGraph_AList_E30* a_pstGraph, char a_chFrom, char a_chTo)
{ }

void DestroyVertex_ALGraph_E30(STVertex_AList_E30* a_pstVertex)
{
	STEdge_AList_E30* pstEdge = a_pstVertex->m_pstEdge;

	while(pstEdge != NULL)
	{
		STEdge_AList_E30* pstEdge_Remove = pstEdge;
		pstEdge = pstEdge->m_pstEdge_Next;

		DestroyEdge_ALGraph_E30(pstEdge_Remove);
	}

	SAFE_FREE(a_pstVertex);
}

void DestroyEdge_ALGraph_E30(STEdge_AList_E30* a_pstEdge)
{
	SAFE_FREE(a_pstEdge);
}

STVertex_AList_E30* FindVertex_ALGraph_E30(STGraph_AList_E30* a_pstGraph, char a_chKey)
{
	STVertex_AList_E30* pstVertex = NULL;

	while(pstVertex != NULL && a_chKey != pstVertex->m_chKey)
	{
		pstVertex = pstVertex->m_pstVertex_Next;
	}

	return pstVertex;
}

STEdge_AList_E30* FindEdge_ALGraph_E30(STGraph_AList_E30* a_pstGraph,
	char a_chFrom, char a_chTo)
{
	STVertex_AList_E30* pstVertex_From = FindVertex_ALGraph_E30(a_pstGraph, a_chFrom);

	// 정점이 없을 경우
	if(pstVertex_From == NULL)
	{
		return NULL;
	}

	STEdge_AList_E30* pstEdge = pstVertex_From->m_pstEdge;

	while(pstEdge != NULL && a_chTo != pstEdge->m_pstVertex_To->m_chKey)
	{
		pstEdge = pstEdge->m_pstEdge_Next;
	}

	return pstEdge;
}

STVertex_AList_E30* CreateVertex_ALGraph_E30(char a_chKey)
{
	STVertex_AList_E30* pstVertex = (STVertex_AList_E30*)calloc(1,
		sizeof(STVertex_AList_E30));

	pstVertex->m_chKey = a_chKey;
	pstVertex->m_pstEdge = CreateEdge_ALGraph_E30(NULL, NULL);

	return pstVertex;
}

STEdge_AList_E30* CreateEdge_ALGraph_E30(STVertex_AList_E30* a_pstVertex_From,
	STVertex_AList_E30* a_pstVertex_To)
{
	STEdge_AList_E30* pstEdge = (STEdge_AList_E30*)calloc(1, sizeof(STEdge_AList_E30));
	pstEdge->m_pstVertex_From = a_pstVertex_From;
	pstEdge->m_pstVertex_To = a_pstVertex_To;

	return pstEdge;
}
