#pragma once

#include "../../Global/Define/KDefine+Global.h"

/*
* 포인터를 사용하는 주된 이유
* - 다른 지역에 선언 된 변수를 제어 할 경우
* - 함수 호출 결과로 2 개 이상의 데이터를 반환 할 경우
* - 동적 할당 된 메모리를 제어 할 경우
* 
* Ex)
* void SomeFuncA(void) {
*		int nVal = 0;
*		SomeFuncB(&nValA);
* }
* 
* void SomeFuncB(int* a_pnVal) {
*		// Do Something
* }
* 
* 위와 같이 포인터를 활용하면 다른 지역에 선언 된 변수에 접근해서 데이터를 할당하거나 
* 읽어들이는 것이 가능하다. (+ 즉, 다른 지역에 선언 된 변수의 이름에는 접근이 불가능하지만
* 해당 변수가 할당 된 메모리의 주소를 알고 있다면 메모리 주소를 통해 해당 변수에 접근하는 것이
* 가능하다.)
* 
* Ex)
* void SomeFunc(int a_pnValues[], int a_nSize, int *a_pnOutValA, int *a_pnOutValB) {
*		// Do Something
* }
* 
* int nValA = 0;
* int nValB = 0;
* 
* int anValues[5] = {
*		1, 2, 3, 4, 5
* };
* 
* SomeFunc(anValues, _countof(anValues), &nValA, &nValB);
* 
* 위와 같이 포인터를 활용하면 함수의 호출 결과를 포인터를 통해 반환 받는 것이 가능하다. (+ 즉,
* 함수가 2 개 이상의 결과를 포인터를 통해 출력 할 수 있다는 것을 의미한다.)
* 
* C 에서 함수는 기본적으로 1 개의 데이터만 반환하는 것이 가능하기 때문에 2 개 이상의 데이터를
* 반환하고 싶다면 포인터 등을 활용하는 것이 일반적이다.
*/

/** Example 16 */
int E01Example_16(int argc, char* args[]);
