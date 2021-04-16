#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main01(void)
{
	int j = 5;
	for (int i = 0; i < 10, j < 10; i++, j += 5)
	{
		printf("%d\n", i);
	}
	return 0;
}
int main(void)
{
	int i = 0;
	for (; i < 10; i++)
	{
		if (i >= 10)
		{
			break;
		}
		printf("%d\n", i);
	}
	return 0;
}