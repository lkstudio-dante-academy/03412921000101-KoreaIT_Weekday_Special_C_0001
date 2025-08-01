#pragma once

#include "../../Global/Define/KDefine+Global.h"

/*
* C 연습 문제 5
* - 비트 반전 시키기
* - 0 ~ 255 사이의 수를 입력 받아 해당 수를 2 진수로 출력한다
* - 0 ~ 7 사이의 위치를 입력 받은 후 해당 위치에 있는 비트를 반전 시킨다
* - 위치는 가장 오른쪽이 0 이며 왼쪽으로 갈 수록 1 씩 증가한다
*
* Ex)
* 정수 입력 : 10
*
* =====> 결과 - 변환 전 <=====
* 1010
*
* 위치 입력 : 2
*
* =====> 결과 - 변환 후 <=====
* 1110
*/

/** Training 5 */
int T01Training_05(int argc, char* args[]);
