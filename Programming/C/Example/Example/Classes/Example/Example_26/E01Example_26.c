#include "E01Example_26.h"
#include "Stack_E26.h"

int E01Example_26(int argc, char* args[])
{
	STStack_E26 stStackValues;
	InitStack_E26(&stStackValues);

	printf("=====> 데이터 입력 순서 <=====\n");

	for(int i = 0; i < 10; ++i)
	{
		printf("%d, ", i + 1);
		Push_Stack_E26(&stStackValues, i + 1);
	}

	printf("\n\n=====> 스택 <=====\n");

	while(!IsEmpty_Stack_E26(&stStackValues))
	{
		int nVal = Pop_Stack_E26(&stStackValues);
		printf("%d, ", nVal);
	}

	printf("\n");
	DestroyStack_E26(&stStackValues);

	return 0;
}
