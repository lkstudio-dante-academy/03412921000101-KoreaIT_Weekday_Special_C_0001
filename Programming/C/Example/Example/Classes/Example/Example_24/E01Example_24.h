#pragma once

#include "../../Global/Define/KDefine+Global.h"

/*
* 매크로 (Macro) 란?
* - 전처리기 (Preprocessor) 를 활용해서 상수나 함수를 구현 할 수 있는 기능을 의미한다. (+ 즉,
* 매크로를 활용하면 전처리기에 의해서 처리 되는 상수나 함수를 구현하는 것이 가능하다.)
*
* C 매크로 상수 선언 방법
* - #define + 상수 이름
*
* Ex)
* #define SOME_MACRO_CONSTANT_A			1
* #define SOME_MACRO_CONSTANT_B			2
*
* int nVal = SOME_MACRO_CONSTANT_A;
* printf("%d\n", nVal);								<- "1" 출력
*
* C 매크로 함수 구현 방법
* - #define + 함수 이름 + 매개 변수
*
* Ex)
* #define SOME_MACRO_FUNC(VAL_A, VAL_B)			((VAL_A) + (VAL_B))
*
* 위와 같이 #define 명령어를 활용하면 매크로 상수나 매크로 함수를 구현하는 것이 가능하다.
*
* 단, 매크나 상수나 매크로 함수는 단순히 명령문을 치환하는 것이기 때문에 명령문 치환에 의해 문제가
* 발생하지 않도록 주의 할 필요가 있다. (+ 즉, 매크로 상수나 매크로 함수는 전처리 단계에서
* 전처리기에 의해 명령문이 치환 된다는 것을 알 수 있다.)
*
* Ex)
* #define SOME_MACRO_FUNC(VAL_A, VAL_B)			VAL_A * VAL_B
*
* int nVal = SOME_MACRO_FUNC(2 + 2, 2 + 2)			<- "2 + 2 * 2 + 2" 로 치환
* printf("%d\n", nVal);								<- "8" 출력
*
* 위와 같이 매크로 함수는 명령문을 치환하는 것이기 때문에 우선 순위에 의해서 원치 않는 결과가
* 출력 된다는 것을 알 수 있다.
*/

/** Example 24 */
int E01Example_24(int argc, char* args[]);
