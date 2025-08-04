#pragma once

#include "../../Global/Define/KDefine+Global.h"

/*
* C 상수 포인터 (Constant Pointer) 유형
* - const int* pnVal				<- 포인터를 통한 데이터 변경 불가
* - int* const pnVal				<- 포인터 변수 자체를 상수화
* - const int* const pnVal			<- 상수 포인터 유형 1 + 상수 포인터 유형 2
* 
* Ex)
* int nValA = 0;
* int nValB = 0;
* 
* const int* pnValA = &nValA;
* int* const pnValB = &nValB;
* 
* *pnValA = 10;			<- 컴파일 에러
* *pnValB = 20;			<- 컴파일 OK
* 
* pnValA = &nValB;			<- 컴파일 OK
* pnValB = &nValA;			<- 컴파일 에러
* 
* 위와 같이 상수 포인터 유형 1 은 포인터를 통해 값을 변경하는 것은 불가능하지만 포인터 변수 자체는
* 상수가 아니기 때문에 다른 변수를 참조하는 것이 가능하다.
* 
* 반면 상수 포인터 유형 2 는 포인터 변수 자체가 상수이기 때문에 다른 변수를 참조하는 것은
* 불가능하지만 * (역참조 연산자) 를 통해 포인턱가 참조하는 변수의 값을 변경하는 것이 가능하다는
* 차이점이 존재한다.
*/

/** Example 17 */
int E01Example_17(int argc, char* args[]);
