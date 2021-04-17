#define _CRT_NONSTDC_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d*%d=%d\t", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}