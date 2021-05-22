//函数的样式
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void fun01()
{
	rand() % 10;
}

void BubbleSort(int arr[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

			}
		}
	}
	return;
}

void Display(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d\n", arr[i]);
	}
	return;
}

int main01(void)
{
	srand((unsigned int)time(NULL));
	//fun01();
	int arr[10] = { 5,57,546,54687,154,548,78,3,99,79 };
	BubbleSort(arr, sizeof(arr) / sizeof(arr[0]));
	Display(arr, sizeof(arr) / sizeof(arr[0]));
	return 0;
}

void main(void)
{
	printf("你瞅啥");
	return;
}