#include "T01Training_12.h"

int T01Training_12(int argc, char* args[])
{
	int nNumLines = 0;

	printf("라인 수 입력 : ");
	scanf("%d", &nNumLines);

	for(int i = 0; i < nNumLines; ++i)
	{
		for(int j = 0; j < nNumLines; ++j)
		{
			int bIsStarA = i == j;
			int bIsStarB = j == nNumLines - 1 - i;

			printf("%c", (bIsStarA || bIsStarB) ? '*' : ' ');
		}

		printf("\n");
	}

	printf("\n");

	for(int i = 0; i < nNumLines; ++i)
	{
		for(int j = 0; j < nNumLines; ++j)
		{
			int bIsStarA = i == 0;
			int bIsStarB = i == nNumLines - 1;
			int bIsStarC = j == nNumLines - 1 - i;

			printf("%c", (bIsStarA || bIsStarB || bIsStarC) ? '*' : ' ');
		}

		printf("\n");
	}

	printf("\n");

	for(int i = 0; i < nNumLines; ++i)
	{
		for(int j = 0; j < nNumLines; ++j)
		{
			int bIsStarA = i == j;
			int bIsStarB = j == 0;
			int bIsStarC = j == nNumLines - 1;

			printf("%c", (bIsStarA || bIsStarB || bIsStarC) ? '*' : ' ');
		}

		printf("\n");
	}

	printf("\n");

	for(int i = 0; i < nNumLines; ++i)
	{
		for(int j = 0; j < nNumLines; ++j)
		{
			int bIsStar = j <= i;
			printf("%c", bIsStar ? '*' : ' ');
		}

		printf("\n");
	}

	printf("\n");

	for(int i = nNumLines - 1; i >= 0; --i)
	{
		for(int j = 0; j < nNumLines; ++j)
		{
			int bIsStar = j <= i;
			printf("%c", bIsStar ? '*' : ' ');
		}

		printf("\n");
	}

	printf("\n");

	for(int i = 0; i < nNumLines; ++i)
	{
		for(int j = nNumLines - 1; j >= 0; --j)
		{
			int bIsStar = j <= i;
			printf("%c", bIsStar ? '*' : ' ');
		}

		printf("\n");
	}

	printf("\n");

	for(int i = nNumLines - 1; i >= 0; --i)
	{
		for(int j = nNumLines - 1; j >= 0; --j)
		{
			int bIsStar = j <= i;
			printf("%c", bIsStar ? '*' : ' ');
		}

		printf("\n");
	}

	printf("\n");
	int nWidth_Max = (nNumLines * 2) - 1;

	for(int i = 0; i < nNumLines; ++i)
	{
		int nCenter = nWidth_Max / 2;

		for(int j = 0; j < nWidth_Max; ++j)
		{
			int bIsStar = j >= nCenter - i && j <= nCenter + i;
			printf("%c", bIsStar ? '*' : ' ');
		}

		printf("\n");
	}

	printf("\n");

	for(int i = nNumLines - 1; i >= 0; --i)
	{
		int nCenter = nWidth_Max / 2;

		for(int j = 0; j < nWidth_Max; ++j)
		{
			int bIsStar = j >= nCenter - i && j <= nCenter + i;
			printf("%c", bIsStar ? '*' : ' ');
		}

		printf("\n");
	}

	return 0;
}
