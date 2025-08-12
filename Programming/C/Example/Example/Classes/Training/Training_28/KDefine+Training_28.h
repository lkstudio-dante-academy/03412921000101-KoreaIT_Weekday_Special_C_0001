#pragma once

#include "../../Global/Define/KDefine+Global.h"

/**
* 메뉴
*/
typedef enum EMenu_T28
{
	MENU_OPEN_ACCOUNT_T28 = 1,
	MENU_DEPOSIT_T28,
	MENU_WITHDRAW_T28,
	MENU_PRINT_ACCOUNTS_ALL_T28,
	MENU_EXIT_T28
} EMenu_T28;

/**
* 계좌
*/
typedef struct STAccount_T28
{
	int m_nAmount;
	char m_szName[UCHAR_MAX];
} STAccount_T28;

/**
* 계좌 관리자
*/
typedef struct STManager_Account_T28
{
	int m_nSize;
	int m_nNumAccounts;

	STAccount_T28* m_pstAccounts;
} STManager_Account_T28;
