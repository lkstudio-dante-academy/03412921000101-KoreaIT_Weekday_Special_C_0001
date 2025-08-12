#include "T01Training_28.h"
#include "KDefine+Training_28.h"

/** 관리자를 초기화한다 */
void InitManager_T28(STManager_Account_T28* a_pstManager);

/** 관리자를 제거한다 */
void DestroyManager_T28(STManager_Account_T28* a_pstManager);

/** 메뉴를 출력한다 */
void PrintMenu_T28(void);

/** 계좌를 개설한다 */
void OpenAccount_T28(STManager_Account_T28* a_pstManager);

/** 계좌를 입금한다 */
void Deposit_T28(STManager_Account_T28* a_pstManager);

/** 계좌를 출금한다 */
void Withdraw_T28(STManager_Account_T28* a_pstManager);

/** 모든 계좌를 출력한다 */
void PrintAccounts_All_T28(STManager_Account_T28* a_pstManager);

/** 계좌를 탐색한다 */
int FindAccount_T28(STManager_Account_T28* a_pstManager, char a_pszName[]);

int T01Training_28(int argc, char* args[])
{
	STManager_Account_T28 stManager;
	InitManager_T28(&stManager);

	do
	{
		PrintMenu_T28();

		EMenu_T28 eMenu = 0;
		scanf("%d", &eMenu);

		// 종료 일 경우
		if(eMenu == MENU_EXIT_T28)
		{
			break;
		}

		switch(eMenu)
		{
			case MENU_OPEN_ACCOUNT_T28:
				OpenAccount_T28(&stManager);
				break;

			case MENU_DEPOSIT_T28:
				Deposit_T28(&stManager);
				break;

			case MENU_WITHDRAW_T28:
				Withdraw_T28(&stManager);
				break;

			case MENU_PRINT_ACCOUNTS_ALL_T28:
				PrintAccounts_All_T28(&stManager);
				break;
		}

		printf("\n");
	} while(1);

	printf("프로그램을 종료합니다.\n");

	DestroyManager_T28(&stManager);
	return 0;
}

void InitManager_T28(STManager_Account_T28* a_pstManager)
{
	memset(a_pstManager, 0, sizeof(STManager_Account_T28));
	a_pstManager->m_nSize = 5;

	a_pstManager->m_pstAccounts = (STAccount_T28*)calloc(a_pstManager->m_nSize,
		sizeof(STAccount_T28));
}

void DestroyManager_T28(STManager_Account_T28* a_pstManager)
{
	free(a_pstManager->m_pstAccounts);
}

void PrintMenu_T28(void)
{
	printf("=====> 메뉴 <=====\n");
	printf("1. 계좌 개설\n");
	printf("2. 계좌 입금\n");
	printf("3. 계좌 출금\n");
	printf("4. 모든 계좌 출력\n");
	printf("5. 종료\n");

	printf("\n선택 : ");
}

void OpenAccount_T28(STManager_Account_T28* a_pstManager)
{
	char szName[UCHAR_MAX] = "";

	printf("이름 입력 : ");
	scanf(" %[^\n]s", szName);

	int nResult = FindAccount_T28(a_pstManager, szName);

	// 계좌가 존재 할 경우
	if(nResult >= 0)
	{
		printf("%s 은(는) 이미 계좌를 개설했습니다.\n", szName);
		return;
	}

	int nAmount = 0;

	printf("초기 금액 입력 : ");
	scanf("%d", &nAmount);

	STAccount_T28 stAccount = 
	{
		nAmount
	};

	strcpy(stAccount.m_szName, szName);

	// 배열이 가득 찼을 경우
	if(a_pstManager->m_nNumAccounts >= a_pstManager->m_nSize)
	{
		a_pstManager->m_nSize *= 2;

		a_pstManager->m_pstAccounts = (STAccount_T28*)realloc(a_pstManager->m_pstAccounts,
			sizeof(STAccount_T28) * a_pstManager->m_nSize);
	}

	int nIdx = a_pstManager->m_nNumAccounts;

	a_pstManager->m_pstAccounts[nIdx] = stAccount;
	a_pstManager->m_nNumAccounts += 1;

	printf("\n=====> 계좌 개설 결과 <=====\n");
	printf("이름 : %s\n", szName);
	printf("잔액 : %d\n", nAmount);

	printf("\n계좌 개설이 완료되었습니다.\n");
}

void Deposit_T28(STManager_Account_T28* a_pstManager)
{
	char szName[UCHAR_MAX] = "";

	printf("이름 입력 : ");
	scanf(" %[^\n]s", szName);

	int nResult = FindAccount_T28(a_pstManager, szName);

	// 계좌가 없을 경우
	if(nResult < 0)
	{
		printf("%s 은(는) 존재하지않습니다.\n", szName);
		return;
	}

	int nAmount = 0;

	printf("입금 금액 입력 : ");
	scanf("%d", &nAmount);

	a_pstManager->m_pstAccounts[nResult].m_nAmount += nAmount;
}

void Withdraw_T28(STManager_Account_T28* a_pstManager)
{
	char szName[UCHAR_MAX] = "";

	printf("이름 입력 : ");
	scanf(" %[^\n]s", szName);

	int nResult = FindAccount_T28(a_pstManager, szName);

	// 계좌가 없을 경우
	if(nResult < 0)
	{
		printf("%s 은(는) 존재하지않습니다.\n", szName);
		return;
	}

	int nAmount = 0;

	printf("출금 금액 입력 : ");
	scanf("%d", &nAmount);

	// 잔액이 부족 할 경우
	if(nAmount > a_pstManager->m_pstAccounts[nResult].m_nAmount)
	{
		printf("잔액이 부족합니다.\n");
	}
	else
	{
		a_pstManager->m_pstAccounts[nResult].m_nAmount -= nAmount;
	}
}

void PrintAccounts_All_T28(STManager_Account_T28* a_pstManager)
{
	printf("=====> 모든 계좌 정보 <=====\n");

	for(int i = 0; i < a_pstManager->m_nNumAccounts; ++i)
	{
		printf("이름 : %s\n", a_pstManager->m_pstAccounts[i].m_szName);
		printf("잔액 : %d\n\n", a_pstManager->m_pstAccounts[i].m_nAmount);
	}
}

int FindAccount_T28(STManager_Account_T28* a_pstManager, char a_pszName[])
{
	for(int i = 0; i < a_pstManager->m_nNumAccounts; ++i)
	{
		// 계좌가 존재 할 경우
		if(strcmp(a_pszName, a_pstManager->m_pstAccounts[i].m_szName) == 0)
		{
			return i;
		}
	}

	return -1;
}
