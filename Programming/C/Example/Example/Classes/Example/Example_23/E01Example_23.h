#pragma once

#include "../../Global/Define/KDefine+Global.h"

/*
* 열거형 (Enumeration) 이란?
* - 심볼릭 상수를 정의 할 수 있는 기능을 의미한다. (+ 즉, 열거형을 활용하면 심볼릭 상수를
* 좀 더 쉽게 선언하는 것이 가능하다.)
*
* C 열거형 선언 방법
* - enum + 열거형 이름 + 열거형 상수
*
* Ex)
* enum ESomeEnum
* {
*		ENUM_CONST_A,
*		ENUM_CONST_B,
*		ENUM_CONST_C
* };
*
* enum ESomeEnum eEnumVar = ENUM_CONST_A;
* printf("%d\n", eEnumVar);							<- "0" 출력
*
* 위와 같이 열거형 내부에는 열거형 상수를 선언하는 것이 가능하며 각 열거형 상수에는
* C 컴파일러에 의해서 자동으로 정수 값이 할당 된다.
*
* 열거형 상수에는 명시적으로 값을 할당하는 것이 가능하며 값을 할당하지 않을 경우 C 컴파일러에 의해서
* 자동으로 이전 열거형 상수에 할당 된 값에 +1 증가 시킨 값을 자동으로 할당한다. (+ 즉,
* 열거형 상수에 값을 명시적으로 할당하지 않을 경우 자동으로 중복되지 않게 값이 할당 된다는 것을
* 알 수 있다.)
*
* 단, 열거형 상수는 전역 공간에 선언 되기 때문에 서로 다른 열거형이라고 하더라도 이름이
* 중복되면 안된다. (+ 즉, 이름이 중복되면 컴파일 에러가 발생한다는 것을 알 수 있다.)
*
* Ex)
* enum ESomeEnumA
* {
*		ENUM_CONST_A,
*		ENUM_CONST_B,
*		ENUM_CONST_C
* };
*
* enum ESomeEnumB
* {
*		ENUM_CONST_A,
*		ENUM_CONST_B,
*		ENUM_COSNT_C
* };
*
* 위와 같이 열거형은 공간의 개념이 존재하지 않기 때문에 열거형 내부에 선언 된 상수는
* 모두 전역 공간에 선언 된다.
*
* 따라서 열거형 상수 이름을 작성 할 때는 이름이 중복 되지 않게 규칙을 정해서 작성해야한다.
*/

/** Example 23 */
int E01Example_23(int argc, char* args[]);
