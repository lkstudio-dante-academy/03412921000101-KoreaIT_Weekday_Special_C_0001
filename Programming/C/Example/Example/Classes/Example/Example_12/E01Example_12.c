#include "E01Example_12.h"

int g_nVal = 0;
static int g_nVal_Static = 0;

/** 값을 증가 시킨다 */
void IncrVal_12(int a_nVal);

int E01Example_12(int argc, char* args[])
{
	int nVal = 0;

	{
		int nVal = 0;
		nVal = 10;
	}

	return 0;
}

void IncrVal_12(int a_nVal)
{
	int nVal = 0;
	static int nVal_Static = 0;

	nVal += a_nVal;
	nVal_Static += a_nVal;

	g_nVal += a_nVal;
	g_nVal_Static += a_nVal;
}
