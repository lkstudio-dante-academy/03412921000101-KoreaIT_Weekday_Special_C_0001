#include "E01Example_10.h"

int E01Example_10(int argc, char* args[])
{
	/*
	* 아래와 같이 C 은 문자열을 좀 더 쉽게 초기화 할 수 있게 할당 연산자를 사용하는 것이
	* 가능하다.
	*
	* 단, 문자열에 할당 연산자를 사용 할 수 있는 시점은 초기화 시점에만 사용가능하며 문자열을
	* 선언 후 할당 연산자를 사용하면 컴파일 에러가 발생한다. (+ 즉, 초기화 시점에 할당 연산자를
	* 사용 할 수 있는 이유는 C 에서 편리성을 제공하기 때문이다.)
	*
	* Ex)
	* char szStr[] = "ABC";
	* szStr = "DEF"						<- 컴파일 에러
	*
	* 위와 같이 선언이 완료 된 문자열에 할당 연산자를 사용하면 컴파일 에러가 발생한다는 것을
	* 알 수 있다.
	*/
	char szStrA[UCHAR_MAX] = "";
	char szStrB[UCHAR_MAX] = "";

	printf("문자열 A 입력 : ");
	scanf(" %[^\n]s", szStrA);

	printf("문자열 B 입력 : ");
	scanf(" %[^\n]s", szStrB);

	printf("\n=====> 결과 - A <=====\n");
	printf("문자열 A 길이 : %d\n", strlen(szStrA));
	printf("문자열 B 길이 : %d\n", strlen(szStrB));

	char szResultA[UCHAR_MAX] = "";
	strcpy(szResultA, szStrA);

	char szResultB[UCHAR_MAX] = "";
	strcat(szResultB, szStrA);
	strcat(szResultB, szStrB);

	printf("\n=====> 결과 - B <=====\n");
	printf("문자열 복사 : %s\n", szResultA);
	printf("문자열 결합 : %s\n", szResultB);

	/*
	* strcmp 함수 반환 결과
	* - 0			<- 좌항과 우항이 서로 같을 경우
	* - 양수			<- 좌항이 더 클 경우
	* - 음수			<- 우항이 더 클 경우
	*
	* 위와 같이 strcmp 함수는 두 문자열을 비교해서 양수, 음수, 0 중 하나의 값을 반환한다.
	* 문자열의 대/소 여부는 자연어의 순서와 일치한다. (+ Ex, A < B < C 등등...)
	*/
	printf("\n=====> 결과 - C <=====\n");
	printf("문자열 비교 : %d\n", strcmp(szStrA, szStrB));

	return 0;
}
