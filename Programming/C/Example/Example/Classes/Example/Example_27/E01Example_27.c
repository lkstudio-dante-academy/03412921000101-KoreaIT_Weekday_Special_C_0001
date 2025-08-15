#include "E01Example_27.h"
#include "Queue_E27.h"

int E01Example_27(int argc, char* args[])
{
	STQueue_E27 stQueueValues;
	InitQueue_E27(&stQueueValues);

	printf("=====> 데이터 입력 순서 <=====\n");

	for(int i = 0; i < 10; ++i)
	{
		printf("%d, ", i + 1);
		Enqueue_Queue_E27(&stQueueValues, i + 1);
	}

	printf("\n\n=====> 큐 <=====\n");

	while(!IsEmpty_Queue_E27(&stQueueValues))
	{
		int nVal = Dequeue_Queue_E27(&stQueueValues);
		printf("%d, ", nVal);
	}

	printf("\n");
	DestroyQueue_E27(&stQueueValues);

	return 0;
}
