#include "E01Example_29.h"
#include "HTable_Chaining_E29.h"
#include "HTable_OAddress_E29.h"

/** 값을 출력한다 */
void PrintVal_E29(int a_nIdx, int a_nVal);

int E01Example_29(int argc, char* args[])
{
	STHTable_Chaining_E29 stHTableValuesA;
	InitHTable_Chaining_E29(&stHTableValuesA);

	STHTable_OAddress_E29 stHTableValuesB;
	InitHTable_OAddress_E29(&stHTableValuesB);

	for(int i = 0; i < 10; ++i)
	{
		int nVal = rand() % 99 + 1;

		AddVal_CHTable_E29(&stHTableValuesA, nVal);
		AddVal_OAHTable_E29(&stHTableValuesB, nVal);
	}

	printf("=====> 해시 테이블 <=====\n");
	Enumerate_CHTable_E29(&stHTableValuesA, &PrintVal_E29);

	printf("\n");
	Enumerate_OAHTable_E29(&stHTableValuesB, &PrintVal_E29);

	int nVal_Remove = 0;

	printf("\n\n정수 입력 (제거) : ");
	scanf("%d", &nVal_Remove);

	RemoveVal_CHTable_E29(&stHTableValuesA, nVal_Remove);
	RemoveVal_OAHTable_E29(&stHTableValuesB, nVal_Remove);

	printf("\n=====> 해시 테이블 - 제거 후 <=====\n");
	Enumerate_CHTable_E29(&stHTableValuesA, &PrintVal_E29);

	printf("\n");
	Enumerate_OAHTable_E29(&stHTableValuesB, &PrintVal_E29);

	printf("\n");

	DestroyHTable_Chaining_E29(&stHTableValuesA);
	DestroyHTable_OAddress_E29(&stHTableValuesB);

	return 0;
}

void PrintVal_E29(int a_nIdx, int a_nVal)
{
	printf("[%d]:%d, ", a_nIdx, a_nVal);
}
