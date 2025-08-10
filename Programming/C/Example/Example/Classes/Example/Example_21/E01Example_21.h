#pragma once

#include "../../Global/Define/KDefine+Global.h"

/*
* 다차원 배열 동적 할당 방법
* - 1 차원 배열을 동적 할당 후 인덱스 연산 사용
* - 포인터 배열을 동적 할당 후 각 요소에 하위 차원 배열 동적 할당
* 
* 위와 같이 C 에서 다차원 배열을 직접적으로 할당 할 수 있는 방법은 없지만 포인터 연산을 활용해서
* 동적 할당 된 메모리를 다차원 배열처럼 사용하는 것이 가능하다.
*/

/** Example 21 */
int E01Example_21(int argc, char* args[]);
