#pragma once

#include "../../Global/Define/KDefine+Global.h"

/*
* C 연습 문제 23
* - 행맨 게임 제작하기
* - 정해진 단어 중 하나를 랜덤하게 선택한다
* - 선택 된 단어의 문자를 일부만 공개 후 나머지는 비활성화한다
* - 사용자로부터 문자를 입력 받아 해당 문자가 단어에 존재 할 경우 문자를 공개한다
* - 모든 문자가 공개 되었을 경우 게임을 종료한다
* - 단, 대/소문자 구분 X
* 
* Ex)
* 정답 : Apple
* 
* _ _ _ l _
* 문자 입력 : a
* 
* A _ _ l _
* 문자 입력 : P
* 
* A p p l _
* 문자 입력 : e
* 
* A p p l e
* 프로그램을 종료합니다.
*/

/** Training 23 */
int T01Training_23(int argc, char* args[]);
