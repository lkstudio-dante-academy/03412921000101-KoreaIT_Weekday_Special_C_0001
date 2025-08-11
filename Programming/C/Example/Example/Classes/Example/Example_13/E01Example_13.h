#pragma once

#include "../../Global/Define/KDefine+Global.h"

/*
* 가변 매개 변수 (Variable Parameter) 란?
* - 일반적인 매개 변수와 달리 매개 변수의 개수가 정해져 있지 않는 매개 변수를 의미한다. (+ 즉,
* 가변 매개 변수를 활용하면 원하는 만큼 입력 데이터를 함수에 입력으로 전달하는 것이 가능하다.)
*
* 단, 가변 매개 변수는 포인터를 통해서만 접근하는 것이 가능하기 때문에 매개 변수의 주소를
* 계산하기 위한 고정 매개 변수가 반드시 필요하다. (+ 즉, 함수의 입력으로 전달 된 데이터는
* 메모리에 순차적으로 할당 된다는 것을 알 수 있다.)
*
* Ex)
* void SomeFunc(...) {
*		// Do Something
* }
*
* SomeFunc(10);
* SomeFunc(10, 20);
*
* 위와 같이 ... 기호를 사용하면 가변 매개 변수를 선언하는 것이 가능하다.
*/

/** Example 13 */
int E01Example_13(int argc, char* args[]);
