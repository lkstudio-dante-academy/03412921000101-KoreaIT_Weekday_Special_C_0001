#pragma once

#include "../../Global/Define/KDefine+Global.h"

struct STEdge_AList_E30;

/**
* 정점
*/
typedef struct STVertex_AList_E30
{
	char m_chKey;

	struct STEdge_AList_E30* m_pstEdge;
	struct STVertex_AList_E30* m_pstVertex_Next;
} STVertex_AList_E30;

/**
* 간선
*/
typedef struct STEdge_AList_E30
{
	STVertex_AList_E30* m_pstVertex_From;
	STVertex_AList_E30* m_pstVertex_To;

	struct STEdge_AList_E30* m_pstEdge_Next;
} STEdge_AList_E30;

/**
* 그래프
*/
typedef struct STGraph_AList_E30
{
	STVertex_AList_E30* m_pstVertex;
} STGraph_AList_E30;

/** 그래프를 초기화한다 */
void InitGraph_AList_E30(STGraph_AList_E30* a_pstGraph);

/** 그래프를 제거한다 */
void DestroyGraph_AList_E30(STGraph_AList_E30* a_pstGraph);

/** 정점을 추가한다 */
void AddVertex_ALGraph_E30(STGraph_AList_E30* a_pstGraph, char a_chKey);

/** 간선을 추가한다 */
void AddEdge_ALGraph_E30(STGraph_AList_E30* a_pstGraph, char a_chFrom, char a_chTo);

/** 정점을 제거한다 */
void RemoveVertex_ALGraph_E30(STGraph_AList_E30* a_pstGraph, char a_chKey);

/** 간선을 제거한다 */
void RemoveEdge_ALGraph_E30(STGraph_AList_E30* a_pstGraph, char a_chFrom, char a_chTo);
