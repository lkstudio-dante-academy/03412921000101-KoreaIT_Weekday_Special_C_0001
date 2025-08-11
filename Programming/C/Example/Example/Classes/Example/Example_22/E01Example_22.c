#include "E01Example_22.h"
#include "KDefine+Example_22.h"

/** 구조체를 출력한다 */
void PrintStruct_ByVal_E22(STWidget_E22 a_stWidget);

/** 구조체를 출력한다 */
void PrintStruct_ByRef_E22(STWidget_E22* a_pstWidget);

int E01Example_22(int argc, char* args[])
{
	STWidget_E22 stWidgetA;
	stWidgetA.m_nVal = 10;
	stWidgetA.m_fVal = 3.14f;

	STWidget_E22 stWidgetB =
	{
		20, 3.14f
	};

	STWidget_E22 stWidgetC =
	{
		.m_fVal = 3.14f, .m_nVal = 30
	};

	printf("=====> 구조체 - A <=====\n");
	PrintStruct_ByVal_E22(stWidgetA);

	printf("\n=====> 구조체 - B <=====\n");
	PrintStruct_ByRef_E22(&stWidgetB);

	printf("\n=====> 구조체 - C <=====\n");
	PrintStruct_ByRef_E22(&stWidgetC);

	UNData_E22 stData;
	memset(&stData, 0, sizeof(stData));

	stData.m_nVal = SHRT_MAX;

	printf("\n=====> 공용체 결과 - A <=====\n");
	printf("정수 : %d\n", stData.m_nVal);
	printf("실수 : %f\n", stData.m_fVal);

	stData.m_fVal = 3.14f;

	printf("\n=====> 공용체 결과 - B <=====\n");
	printf("정수 : %d\n", stData.m_nVal);
	printf("실수 : %f\n", stData.m_fVal);

	return 0;
}

void PrintStruct_ByVal_E22(STWidget_E22 a_stWidget)
{
	printf("정수 : %d\n", a_stWidget.m_nVal);
	printf("실수 : %f\n", a_stWidget.m_fVal);
}

void PrintStruct_ByRef_E22(STWidget_E22* a_pstWidget)
{
	printf("정수 : %d\n", a_pstWidget->m_nVal);
	printf("실수 : %f\n", (*a_pstWidget).m_fVal);
}
