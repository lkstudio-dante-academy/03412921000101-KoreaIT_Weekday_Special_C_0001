#pragma once

#include "../../Global/Define/KDefine+Global.h"

/**
* 회원
*/
typedef struct STMember_T27
{
	char m_szName[UCHAR_MAX];
	char m_szPNumber[UCHAR_MAX];
} STMember_T27;

/**
* 회원 관리자
*/
typedef struct STManager_Member_T27
{
	int m_nSize;
	int m_nNumMembers;

	STMember_T27* m_pstMembers;
} STManager_Member_T27;
