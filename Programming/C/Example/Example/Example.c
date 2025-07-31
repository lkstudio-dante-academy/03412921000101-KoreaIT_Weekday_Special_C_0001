/*
* 전처리기 (Preprocessor) 란?
* - C 로 작성 된 명령문을 기계어로 변환하기 전에 명령문을 튜닝하는 프로그램을 의미한다. (+ 즉,
* C 로 작성 된 명령문은 전처리기에 의해 변경 될 수 있다는 것을 알 수 있다.)
*
* 전처리기에 의해 처리되는 명령문은 C 과 다른 문법을 사용하며 모든 명령문이 # 기호로
* 시작하는 특징이 존재한다.
*
* 주요 전처리기 명령어 종류
* - #define
* - #include
* - #if ~ #else ~ #endif
*
* #define 명령어란?
* - 심볼 등을 정의 할 수 있는 역할을 수행하는 명령어를 의미한다. (+ 즉, #define 명령어를 활용하면
* 심볼을 정의해서 전처리기 조건문에 활용하는 것이 가능하다.)
*
* #include 명령어란?
* - 특정 파일의 내용을 가져오는 역할을 수행하는 명령어를 의미한다. (+ 즉, #include 명령어를 활용하면
* 특정 파일에 작성 된 명령문을 가져와서 사용하는 것이 가능하다.)
*
* C 은 파일 단위로 컴파일이 이루어지기 때문에 다른 파일에 존재하는 기능 (+ Ex. 함수) 을
* 사용하고 싶다면 반드시 해당 파일의 정보를 담고 있는 헤더 파일을 #include 명령어로 가져와야한다.
*
* #if ~ #else ~ #endif 명령어란?
* - 조건에 따라 특정 명령문을 활성 or 비활성화 시키는 역할을 수행하는 명령어를 의미한다. (+ 즉,
* #if ~ #else ~ #endif 명령어를 활용하면 멀티 플랫폼에 대응해서 명령문을 작성하는 것이 가능하다.)
*
* Ex)
* #define PLATFORM_DESKTOP
*
* #if defined PLATFORM_DESKTOP
*	// 데스크 탑 플랫폼에서 동작하는 명령문
* #else
*	// 기타 플랫폼에서 동작하는 명령문
* #endif
*
* 위와 같이 #define 명령어를 이용해서 심볼을 정의하고 나면 해당 심볼을 전처리기 조건문에
* 활용하는 것이 가능하다. (+ 즉, 조건에 따라 특정 명령문을 활성 or 비활성화 시키는 것이 가능하다.)
*/
#define EXAMPLE
#define TRAINING

#if defined EXAMPLE
#include "Classes/Example/Example_01/E01Example_01.h"
#include "Classes/Example/Example_02/E01Example_02.h"
#include "Classes/Example/Example_03/E01Example_03.h"
#include "Classes/Example/Example_04/E01Example_04.h"
#include "Classes/Example/Example_05/E01Example_05.h"
#include "Classes/Example/Example_06/E01Example_06.h"
#include "Classes/Example/Example_07/E01Example_07.h"
#include "Classes/Example/Example_08/E01Example_08.h"
#include "Classes/Example/Example_09/E01Example_09.h"
#include "Classes/Example/Example_10/E01Example_10.h"
#include "Classes/Example/Example_11/E01Example_11.h"
#include "Classes/Example/Example_12/E01Example_12.h"
#include "Classes/Example/Example_13/E01Example_13.h"
#include "Classes/Example/Example_14/E01Example_14.h"
#include "Classes/Example/Example_15/E01Example_15.h"
#include "Classes/Example/Example_16/E01Example_16.h"
#include "Classes/Example/Example_17/E01Example_17.h"
#include "Classes/Example/Example_18/E01Example_18.h"
#elif defined TRAINING
#include "Classes/Training/Training_01/T01Training_01.h"
#include "Classes/Training/Training_02/T01Training_02.h"
#include "Classes/Training/Training_03/T01Training_03.h"
#include "Classes/Training/Training_04/T01Training_04.h"
#include "Classes/Training/Training_05/T01Training_05.h"
#include "Classes/Training/Training_06/T01Training_06.h"
#include "Classes/Training/Training_07/T01Training_07.h"
#include "Classes/Training/Training_08/T01Training_08.h"
#include "Classes/Training/Training_09/T01Training_09.h"
#include "Classes/Training/Training_10/T01Training_10.h"
#include "Classes/Training/Training_11/T01Training_11.h"
#include "Classes/Training/Training_12/T01Training_12.h"
#include "Classes/Training/Training_13/T01Training_13.h"
#include "Classes/Training/Training_14/T01Training_14.h"
#include "Classes/Training/Training_15/T01Training_15.h"
#include "Classes/Training/Training_16/T01Training_16.h"
#endif // #if defined EXAMPLE

/*
* C 로 작성 된 파일 종류
* - 헤더 (Header) 파일			<- .h 확장자 사용
* - 소스 (Source) 파일			<- .c or .cpp 확장자 사용
*
* 헤더 (Header) 파일이란?
* - C 로 작성 된 명령문의 정보를 다른 파일에 공유하기 위한 목적으로 작성하는 파일을 의미한다.
* (+ 즉, #include 명령어를 통해 헤더 파일을 가져옴으로서 다른 파일에 존재하는 정보를 공유하는 것이
* 가능하다.)
*
* 소스 (Source) 파일이란?
* - C 명령문을 작성하는 파일을 의미한다. (+ 즉, 소스 파일에 작성 된 명령문은
* C 컴파일러에 의해서 기계어로 변환 된다는 것을 알 수 있다.)
*
* C 소스 파일 확장자는 .c or .cpp 를 사용하며 .c 확장자로 된 파일은 C 컴파일러에 의해서
* 기계어로 변환 되며 .cpp 확장자로 된 파일은 C++ 컴파일러에 의해서 기계어로 변환 된다. (+ 즉,
* .c 확장자로 된 파일에 C++ 명령문을 작성하면 컴파일 에러가 발생한다는 것을 알 수 있다.)
*
* 주석 (Comment) 이란?
* - 사용자 (프로그래머) 를 위한 기능으로 메모를 남길 수 있는 기능을 의미한다. (+ 즉,
* 주석을 활용하면 C 로 작성 된 명령문을 좀 더 쉽게 이해 할 수 있게 정보를 남기는 것이
* 가능하다.)
*
* C 주석 종류
* - 단일 행 주석 (//)
* - 다중 행 주석
*
* 위와 같이 주석은 2 종류가 존재하기 때문에 주석을 작성하는 상황에 따라 적절한 주석을 활용하면
* 된다. (+ 즉, 간단한 메모를 남길 때는 단일 행 주석이 편리하고 많은 정보를 기입 할 때는
* 다중 행 주석을 사용하는 것이 좀 더 편리하다는 것을 알 수 있다.)
*/

/*
* 메인 함수 (Main Function) 란?
* - C 로 제작 된 프로그램이 실행 될 때 가장 먼저 호출되는 함수를 의미한다. (+ 즉,
* 메인 함수가 호출 되었다는 것은 프로그램이 실행 되었다는 것을 의미한다.)
*
* 또한 메인 함수가 종료되면 프로그램이 종료되는 특징이 존재한다. (+ 즉, 메인 함수는
* C 로 제작 된 프로그램의 시작이자 끝이라는 것을 알 수 있다.)
*
* 메인 함수는 C 로 제작 된 프로그램의 시작이자 끝이기 때문에 반드시 작성해줘야한다. (+ 즉,
* 메인 함수를 작성하지 않으면 프로그램 제작이 불가능하다는 것을 알 수 있다.)
*
* 함수 (Function) 란?
* - C 로 작성 된 명령문을 담고 있는 기능을 의미한다. (+ 즉, 함수를 호출하면
* 함수 안에 작성 된 명령문이 실행 된다는 것을 알 수 있다.)
*/

/** 메인 함수 */
int main(int argc, char* args[])
{
	/*
	* srand 함수란?
	* - rand 함수를 통해 난수를 생성하기 위한 초기 (시드) 값을 설정하는 역할을 수행하는 함수를
	* 의미한다. (+ 즉, srand 함수를 활용하면 rand 함수를 통해 생성되는 난수의 패턴을 변경하는
	* 것이 가능하다.)
	* 
	* 컴퓨터가 생성하는 난수는 의사 난수로서 특정 공식에 의해서 계산 된 결과이다. (+ 즉, 
	* 공식에 사용 된 초기 값이 동일하다면 항상 똑같은 패턴으로 난수가 생성 된다는 것을 알 수 있다.)
	* 
	* 따라서 불규칙한 난수를 생성하기 위해서는 프로그램이 실행 될 때마다 매번 다른 초기 값을
	* 설정 할 필요가 있으며 이때 주로 활용되는 것이 시간을 사용하는 방법이다. (+ 즉, 시간은
	* 항상 변화하기 때문에 시간을 활용하면 프로그램을 실행 할 때마다 생성 되는 난수의 패턴을
	* 변경하는 것이 가능하다.)
	*/
	srand((unsigned int)time(NULL));

	/*
	* 아래와 같이 전처리기 조건문을 활용하면 C 명령문을 활성 or 비활성화 시키는 것이 가능하다.
	* (+ 즉, 아래와 같은 구조를 활용하면 특정 플랫폼 or 상황 에서만 동작하는 명령문을 작성하는 것이
	* 가능하다.)
	*/
#if defined EXAMPLE
	//E01Example_01(argc, args);
	//E01Example_02(argc, args);
	//E01Example_03(argc, args);
	//E01Example_04(argc, args);
	//E01Example_05(argc, args);
	//E01Example_06(argc, args);
	//E01Example_07(argc, args);
	//E01Example_08(argc, args);
	//E01Example_09(argc, args);
	//E01Example_10(argc, args);
	//E01Example_11(argc, args);
	//E01Example_12(argc, args);
	E01Example_13(argc, args);
	//E01Example_14(argc, args);
	//E01Example_15(argc, args);
	//E01Example_16(argc, args);
	//E01Example_17(argc, args);
	//E01Example_18(argc, args);
#elif defined TRAINING
	//T01Training_01(argc, args);
	//T01Training_02(argc, args);
	//T01Training_03(argc, args);
	//T01Training_04(argc, args);
	//T01Training_05(argc, args);
	//T01Training_06(argc, args);
	//T01Training_07(argc, args);
	//T01Training_08(argc, args);
	//T01Training_09(argc, args);
	//T01Training_10(argc, args);
	//T01Training_11(argc, args);
	T01Training_12(argc, args);
	//T01Training_13(argc, args);
	//T01Training_14(argc, args);
	//T01Training_15(argc, args);
	//T01Training_16(argc, args);
#endif // #if defined EXAMPLE

	return 0;
}
