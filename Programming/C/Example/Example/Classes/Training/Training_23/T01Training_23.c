#include "T01Training_23.h"

/** 정답을 설정한다 */
void SetupAnswer_T23(char a_pszAnswer[]);

/** 단어를 설정한다 */
void SetupWord_T23(char a_pszWord[], char a_pszAnswer[]);

/** 정답 여부를 검사한다 */
int IsAnswer_T23(char a_pszWord[], char a_pszAnswer[]);

/** 단어를 출력한다 */
void PrintWord_T23(char a_pszWord[]);

int T01Training_23(int argc, char* args[])
{
	char szAnswer[UCHAR_MAX] = "";
	SetupAnswer_T23(szAnswer);

	printf("정답 : %s\n\n", szAnswer);

	char szWord[UCHAR_MAX] = "";
	SetupWord_T23(szWord, szAnswer);

	do
	{
		PrintWord_T23(szWord);
		char chLetter = '\0';

		printf("문자 입력 : ");
		scanf("%c", &chLetter);

		getchar();

		for(int i = 0; i < strlen(szAnswer); ++i)
		{
			// 문자가 다를 경우
			if(toupper(chLetter) != toupper(szAnswer[i]))
			{
				continue;
			}

			szWord[i] = szAnswer[i];
		}

		printf("\n");

		// 정답 일 경우
		if(IsAnswer_T23(szWord, szAnswer))
		{
			break;
		}
	} while(1);

	PrintWord_T23(szWord);
	printf("프로그램을 종료합니다.\n");

	return 0;
}

void SetupAnswer_T23(char a_pszAnswer[])
{
	char aszStrings[][UCHAR_MAX] =
	{
		"Apple",
		"Google",
		"Samsung",
		"Microsoft"
	};

	int nIdx = rand() % _countof(aszStrings);
	strcpy(a_pszAnswer, aszStrings[nIdx]);
}

void SetupWord_T23(char a_pszWord[], char a_pszAnswer[])
{
	for(int i = 0; i < strlen(a_pszAnswer); ++i)
	{
		a_pszWord[i] = '_';
	}

	for(int i = 0; i < (int)(strlen(a_pszAnswer) * 0.3f); ++i)
	{
		int nIdx = rand() % strlen(a_pszAnswer);
		a_pszWord[nIdx] = a_pszAnswer[nIdx];
	}
}

int IsAnswer_T23(char a_pszWord[], char a_pszAnswer[])
{
	return strcmp(a_pszWord, a_pszAnswer) == 0;
}

void PrintWord_T23(char a_pszWord[])
{
	for(int i = 0; i < strlen(a_pszWord); ++i)
	{
		printf("%c ", a_pszWord[i]);
	}

	printf("\n");
}
