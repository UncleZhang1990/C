#define _CRT_NONSTDC_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 2 == 1)
		{
			continue;
		}
		printf("%d\n", i);
	}
	return 0;
}