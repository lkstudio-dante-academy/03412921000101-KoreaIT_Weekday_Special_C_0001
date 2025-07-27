#include "E01Example_05.h"

int E01Example_05(int argc, char* args[])
{
	int nScore = 0;

	printf("점수 입력 : ");
	scanf("%d", &nScore);

	printf("\n=====> if ~ else 조건문 <=====\n");

	// F 학점 일 경우
	if(nScore < 60)
	{
		printf("F 학점입니다.\n");
	}
	else
	{
		/*
		 * 아래와 같이 조건문은 필요에 따라 중첩이 가능하다. (+ 즉, 조건문 내부에 조건문을 
		 * 작성하는 것이 가능하다는 것을 의미한다.)
		 */
		 // A 학점 일 경우
		if(nScore >= 90)
		{
			printf("A 학점입니다.\n");
		}
		// B 학점 일 경우
		else if(nScore >= 80)
		{
			printf("B 학점입니다.\n");
		}
		// C 학점 일 경우
		else if(nScore >= 70)
		{
			printf("C 학점입니다.\n");
		}
		// D 학점 일 경우
		else
		{
			printf("D 학점입니다.\n");
		}
	}

	printf("\n=====> switch ~ case 조건문 <=====\n");

	switch(nScore / 10)
	{
		case 9:
		case 10:
			printf("A 학점입니다.\n");

			/*
			 * break 키워드란?
			 * - 점프문 중 하나로서 프로그램의 흐름을 가장 가까운 조건문 or 반복문 밖으로
			 * 이동 시키는 역할을 수행하는 키워드를 의미한다.
			 *
			 * switch ~ case 조건문은 if ~ else 조건문과 달리 조건을 만족한 명령문만을 
			 * 실행하는 것이 아니기 때문에 특정 조건을 만족하는 명령문만을 실행하고 싶다면
			 * 반드시 break 키워드를 명시해서 프로그램의 흐름을 switch ~ case 조건문 밖으로
			 * 이동 시켜줘야한다.
			 */
			break;

		case 8:
			printf("B 학점입니다.\n");
			break;

		case 7:
			printf("C 학점입니다.\n");
			break;

		case 6:
			printf("D 학점입니다.\n");
			break;

		default:
			printf("F 학점입니다.\n");
			break;
	}

	int nVal = 0;
	int nVal_Sum = 0;

	printf("\n정수 (1 ~ 10) 입력 : ");
	scanf("%d", &nVal);

	switch(nVal)
	{
		case 10:
			nVal_Sum += 10;

		case 9:
			nVal_Sum += 9;

		case 8:
			nVal_Sum += 8;

		case 7:
			nVal_Sum += 7;

		case 6:
			nVal_Sum += 6;

		case 5:
			nVal_Sum += 5;

		case 4:
			nVal_Sum += 4;

		case 3:
			nVal_Sum += 3;

		case 2:
			nVal_Sum += 2;

		case 1:
			nVal_Sum += 1;
	}

	printf("1 ~ %d 합계 : %d\n", nVal, nVal_Sum);
	return 0;
}
