#include "T01Training_06.h"

int T01Training_06(int argc, char* args[])
{
	int nScore = 0;

	printf("점수 입력 : ");
	scanf("%d", &nScore);

	char chGrade = '\0';
	char chGrade_Detail = '\0';

	// F 학점 일 경우
	if(nScore < 60)
	{
		chGrade = 'F';
	}
	else
	{
		// A 학점 일 경우
		if(nScore >= 90)
		{
			chGrade = 'A';
		}
		// B 학점 일 경우
		else if(nScore >= 80)
		{
			chGrade = 'B';
		}
		// C 학점 일 경우
		else if(nScore >= 70)
		{
			chGrade = 'C';
		}
		// D 학점 일 경우
		else
		{
			chGrade = 'D';
		}

		// + 학점 일 경우
		if(nScore >= 100 || nScore % 10 >= 7)
		{
			chGrade_Detail = '+';
		}
		else
		{
			chGrade_Detail = (nScore % 10 <= 3) ? '-' : '0';
		}
	}

	printf("=====> if ~ else 결과 <=====\n");
	printf("%c%c 학점입니다.\n", chGrade, chGrade_Detail);

	switch(nScore / 10)
	{
		case 9:
		case 10:
			chGrade = 'A';
			break;

		case 8:
			chGrade = 'B';
			break;

		case 7:
			chGrade = 'C';
			break;

		case 6:
			chGrade = 'D';
			break;

		default:
			chGrade = 'F';
			break;
	}

	switch(nScore % 10)
	{
		case 9:
		case 8:
		case 7:
			chGrade_Detail = '+';
			break;

		case 6:
		case 5:
		case 4:
			chGrade_Detail = '0';
			break;

		default:
			chGrade_Detail = '-';
			break;
	}

	switch(chGrade)
	{
		case 'F':
			chGrade_Detail = '\0';
			break;
	}

	switch(nScore)
	{
		case 100:
			chGrade_Detail = '+';
			break;
	}

	printf("\n=====> switch ~ case 결과 <=====\n");
	printf("%c%c 학점입니다.\n", chGrade, chGrade_Detail);

	return 0;
}
