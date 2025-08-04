#pragma once

#include "../../Global/Define/KDefine+Global.h"

/*
* 함수 포인터 (Function Pointer) 란?
* - 변수가 아닌 함수를 참조 할 수 있는 포인터를 의미한다. (+ 즉, 함수 포인터를 활용하면
* 함수를 데이터처럼 취급하는 것이 가능하다.)
* 
* 함수 포인터에는 변수의 주소가 아닌 함수의 주소를 할당하는 것이 가능하며 필요에 따라
* 함수 포인터가 참조하고 있는 함수를 호출하는 것이 가능하다. (+ 즉, 함수의 이름을 통하지 않고 
* 함수를 간접적으로 호출 할 수 있다는 것을 의미한다.)
* 
* C 함수 포인터 선언 방법
* - 반환형 + 포인터 연산자 + 함수 포인터 이름 + 매개 변수
* 
* Ex)
* void SomeFunc(int a_nValA, int a_nValB) {
*		// Do Something
* }
* 
* int (*pfnPtr)(int, int) = &SomeFunc;
* pfnPtr(10, 20);
* 
* 위와 같이 함수 포인터에는 함수의 주소를 할당하는 것이 가능하며 특정 함수를 참조하고 있는
* 함수 포인터를 통해 해당 함수를 호출하는 것이 가능하다.
*/

/** Example 19 */
int E01Example_19(int argc, char* args[]);
