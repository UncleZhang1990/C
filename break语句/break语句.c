#define _CRT_NONSTDC_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 5)
			{
				break;
			}
			printf("i=%d j=%d\n", i, j);
		}
	}
	return 0;
}