#include "E01Example_23.h"
#include "KDefine+Example_23.h"

/** 아이템 타입을 반환한다 */
EType_Item_E23 GetType_Item_E23(void);

/** 아이템 타입 -> 문자열 로 변환한다 */
const char* Convert_ToStr(EType_Item_E23 a_eType);

int E01Example_23(int argc, char* args[])
{
	EType_Item_E23 eType = GetType_Item_E23();
	printf("획득 아이템 : %s\n", Convert_ToStr(eType));

	return 0;
}

EType_Item_E23 GetType_Item_E23(void)
{
	return rand() % TYPE_ITEM_MAX_VAL_E23;
}

const char* Convert_ToStr(EType_Item_E23 a_eType)
{
	const char* apszStrings[] =
	{
		"GOLD", "POTION", "WEAPON"
	};

	return apszStrings[a_eType];
}
