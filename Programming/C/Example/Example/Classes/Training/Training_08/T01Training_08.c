#include "T01Training_08.h"

int T01Training_08(int argc, char* args[])
{
	int nVal_Sum = 0;
	int nNumValues = 0;

	do
	{
		int nVal = 0;

		printf("%d 번째 정수 입력 : ", nNumValues + 1);
		scanf("%d", &nVal);

		// 입력을 종료했을 경우
		if(nVal <= 0)
		{
			break;
		}

		nVal_Sum += nVal;
		nNumValues += 1;
	} while(1);

	printf("\n=====> 결과 <=====\n");
	printf("합계 : %d\n", nVal_Sum);
	printf("평균 : %f\n", nVal_Sum / (float)nNumValues);

	return 0;
}
