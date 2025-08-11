#include "T01Training_22.h"

/** 학점을 반환한다 */
char GetGrade_T22(int a_nScore);

/** 세부 학점을 반환한다 */
char GetGrade_Detail_T22(int a_nScore);

int T01Training_22(int argc, char* args[])
{
	int nScore = 0;

	printf("점수 입력 : ");
	scanf("%d", &nScore);

	char chGrade = GetGrade_T22(nScore);
	char chGrade_Detail = GetGrade_Detail_T22(nScore);

	printf("%c%c 학점입니다.\n", chGrade, chGrade_Detail);
	return 0;
}

char GetGrade_T22(int a_nScore)
{
	// F 학점 일 경우
	if(a_nScore < 60)
	{
		return 'F';
	}

	// A 학점 일 경우
	if(a_nScore >= 90)
	{
		return 'A';
	}
	// B 학점 일 경우
	else if(a_nScore >= 80)
	{
		return 'B';
	}
	// C 학점 일 경우
	else if(a_nScore >= 70)
	{
		return 'C';
	}

	return 'D';
}

char GetGrade_Detail_T22(int a_nScore)
{
	// F 학점 일 경우
	if(a_nScore < 60)
	{
		return '\0';
	}

	// + 학점 일 경우
	if(a_nScore >= 100 || a_nScore % 10 >= 7)
	{
		return '+';
	}

	return (a_nScore % 10 <= 3) ? '-' : '0';
}
