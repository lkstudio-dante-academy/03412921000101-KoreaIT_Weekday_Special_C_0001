#include "E01Example_07.h"

int E01Example_07(int argc, char* args[])
{
	for(int i = 2; i < 10; ++i)
	{
		printf("=====> %d 단 <=====\n", i);

		for(int j = 1; j < 10; ++j)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}

		printf("\n");
	}

	return 0;
}
