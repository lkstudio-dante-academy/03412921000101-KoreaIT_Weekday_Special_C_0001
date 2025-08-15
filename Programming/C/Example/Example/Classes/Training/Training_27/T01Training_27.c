#include "T01Training_27.h"
#include "KDefine+Training_27.h"

/**
* 메뉴
*/
#define MENU_ADD_MEMBER					1
#define MENU_REMOVE_MEMBER				2
#define MENU_SEARCH_MEMBER				3
#define MENU_PRINT_MEMBERS_ALL			4
#define MENU_EXIT						5

/** 회원 관리자를 초기화한다 */
void InitManager_T27(STManager_Member_T27* a_pstManager);

/** 회원 관리자를 제거한다 */
void DestroyManager_T27(STManager_Member_T27* a_pstManager);

/** 메뉴를 출력한다 */
void PrintMenu_T27(void);

/** 회원을 추가한다 */
void AddMember_T27(STManager_Member_T27* a_pstManager);

/** 회원을 제거한다 */
void RemoveMember_T27(STManager_Member_T27* a_pstManager);

/** 회원을 검색한다 */
void SearchMember_T27(STManager_Member_T27* a_pstManager);

/** 모든 회원을 출력한다 */
void PrintMembers_All_T27(STManager_Member_T27* a_pstManager);

/** 회원을 탐색한다 */
int FindMember_T27(STManager_Member_T27* a_pstManager, char a_pszName[]);

int T01Training_27(int argc, char* args[])
{
	STManager_Member_T27 stManager;
	InitManager_T27(&stManager);

	do
	{
		PrintMenu_T27();

		int nMenu = 0;
		scanf("%d", &nMenu);

		getchar();

		// 종료 일 경우
		if(nMenu == MENU_EXIT)
		{
			break;
		}

		switch(nMenu)
		{
			case MENU_ADD_MEMBER:
				AddMember_T27(&stManager);
				break;

			case MENU_REMOVE_MEMBER:
				RemoveMember_T27(&stManager);
				break;

			case MENU_SEARCH_MEMBER:
				SearchMember_T27(&stManager);
				break;

			case MENU_PRINT_MEMBERS_ALL:
				PrintMembers_All_T27(&stManager);
				break;
		}

		printf("\n");
	} while(1);

	printf("프로그램을 종료합니다.\n");

	DestroyManager_T27(&stManager);
	return 0;
}

void InitManager_T27(STManager_Member_T27* a_pstManager)
{
	memset(a_pstManager, 0, sizeof(STManager_Member_T27));

	a_pstManager->m_nSize = 5;
	a_pstManager->m_pstMembers = (STMember_T27*)malloc(sizeof(STMember_T27) * a_pstManager->m_nSize);
}

void DestroyManager_T27(STManager_Member_T27* a_pstManager)
{
	SAFE_FREE(a_pstManager->m_pstMembers);
}

void PrintMenu_T27(void)
{
	printf("=====> 메뉴 <=====\n");
	printf("1. 회원 추가\n");
	printf("2. 회원 제거\n");
	printf("3. 회원 검색\n");
	printf("4. 모든 회원 출력\n");
	printf("5. 종료\n");

	printf("\n선택 : ");
}

void AddMember_T27(STManager_Member_T27* a_pstManager)
{
	char szName[UCHAR_MAX] = "";
	char szPNumber[UCHAR_MAX] = "";

	printf("이름 입력 : ");
	scanf(" %[^\n]s", szName);

	printf("전화 번호 입력 : ");
	scanf(" %[^\n]s", szPNumber);

	int nResult = FindMember_T27(a_pstManager, szName);

	// 회원이 존재 할 경우
	if(nResult >= 0)
	{
		printf("%s 은(는) 이미 존재하는 회원입니다.\n", szName);
		return;
	}

	STMember_T27 stMember;
	memset(&stMember, 0, sizeof(stMember));

	strcpy(stMember.m_szName, szName);
	strcpy(stMember.m_szPNumber, szPNumber);

	// 배열이 가득찼을 경우
	if(a_pstManager->m_nNumMembers >= a_pstManager->m_nSize)
	{
		a_pstManager->m_nSize *= 2;

		a_pstManager->m_pstMembers = (STMember_T27*)realloc(a_pstManager->m_pstMembers,
			sizeof(STMember_T27) * a_pstManager->m_nSize);
	}

	int nIdx = a_pstManager->m_nNumMembers;
	a_pstManager->m_pstMembers[nIdx] = stMember;

	a_pstManager->m_nNumMembers += 1;
	printf("%s 을(를) 추가했습니다.\n", szName);
}

void RemoveMember_T27(STManager_Member_T27* a_pstManager)
{
	char szName[UCHAR_MAX] = "";

	printf("이름 입력 : ");
	scanf(" %[^\n]s", szName);

	int nResult = FindMember_T27(a_pstManager, szName);

	// 회원이 없을 경우
	if(nResult < 0)
	{
		printf("%s 은(는) 존재하지 않습니다.\n", szName);
		return;
	}

	for(int i = nResult; i < a_pstManager->m_nNumMembers - 1; ++i)
	{
		a_pstManager[i] = a_pstManager[i + 1];
	}

	a_pstManager->m_nNumMembers -= 1;
	printf("%s 을(를) 제거했습니다.\n", szName);
}

void SearchMember_T27(STManager_Member_T27* a_pstManager)
{
	char szName[UCHAR_MAX] = "";

	printf("이름 입력 : ");
	scanf(" %[^\n]s", szName);

	int nResult = FindMember_T27(a_pstManager, szName);

	// 회원이 없을 경우
	if(nResult < 0)
	{
		printf("%s 은(는) 존재하지 않습니다.\n", szName);
		return;
	}

	printf("=====> 회원 정보 <=====\n");
	printf("이름 : %s\n", a_pstManager->m_pstMembers[nResult].m_szName);
	printf("전화 번호 : %s\n", a_pstManager->m_pstMembers[nResult].m_szPNumber);
}

void PrintMembers_All_T27(STManager_Member_T27* a_pstManager)
{
	printf("=====> 모든 회원 정보 <=====\n");

	for(int i = 0; i < a_pstManager->m_nNumMembers; ++i)
	{
		printf("이름 : %s\n", a_pstManager->m_pstMembers[i].m_szName);
		printf("전화 번호 : %s\n\n", a_pstManager->m_pstMembers[i].m_szPNumber);
	}
}

int FindMember_T27(STManager_Member_T27* a_pstManager, char a_pszName[])
{
	for(int i = 0; i < a_pstManager->m_nNumMembers; ++i)
	{
		// 회원이 존재 할 경우
		if(strcmp(a_pszName, a_pstManager->m_pstMembers[i].m_szName) == 0)
		{
			return i;
		}
	}

	return -1;
}
