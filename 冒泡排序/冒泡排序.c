#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 9
int main(void)
{
	int arr[SIZE] = { 1,65,4,5858,55,132,15,362,99 };
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE-1; j++)
		{
			if (arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d\n", arr[i]);
	}
}