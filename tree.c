#include <stdio.h>

#define true 1
#define false 0
#define MAX_GUESS 2


int main() {
	int rowCount = 21;
	int asteriksCount = 1;
	int spaceCount = rowCount / 2;

	for (int i = 0; i < rowCount / 2; ++i)
	{
		for (int k = 0; k < spaceCount; ++k)
		{
			printf(" ");
		}
		spaceCount--;
		for (int j = 0; j < asteriksCount; ++j)
		{
			printf("*");
		}
		asteriksCount += 2;
		printf("\n");
	}
	for (int i = rowCount / 2; i < rowCount; ++i)
	{
		for (int k = 0; k < spaceCount; ++k)
		{
			printf(" ");
		}
		spaceCount++;
		for (int j = 0; j < asteriksCount; ++j)
		{
			printf("*");
		}
		asteriksCount -= 2;
		printf("\n");

	}
	printf("\n");
	return 0;
}