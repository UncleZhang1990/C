#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10
int main(void)
{
	int pig_Arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		scanf("%d", &pig_Arr[i]);
	}
	int max = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (pig_Arr[i]>max)
		{
			max = pig_Arr[i];
		}
	}
	printf("%d\n", max);
	return 0;
}