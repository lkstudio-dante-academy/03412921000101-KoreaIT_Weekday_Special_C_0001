#include "T01Training_24.h"

/** 10 진수 -> 2 진수 로 변환한다 */
int Convert_ToBinary_T24(int a_nVal, char a_pszOutStr_Binary[]);

int T01Training_24(int argc, char* args[])
{
	int nVal = 0;
	char szStr_Binary[UCHAR_MAX] = "";

	printf("정수 입력 : ");
	scanf("%d", &nVal);

	Convert_ToBinary_T24(nVal, szStr_Binary);
	printf("결과 : %s\n", szStr_Binary);

	return 0;
}

int Convert_ToBinary_T24(int a_nVal, char a_pszOutStr_Binary[])
{
	// 재귀 호출이 불가능 할 경우
	if(a_nVal <= 0)
	{
		return 0;
	}

	int nResult = Convert_ToBinary_T24(a_nVal / 2, a_pszOutStr_Binary);
	a_pszOutStr_Binary[nResult] = '0' + (a_nVal % 2);

	return nResult + 1;
}
