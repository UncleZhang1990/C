#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10
#include <stdio.h>
int main01(void)
{
	//数据类型 数组名[元素个数]={值1,值2,值3};
	int arr[10] = { 9,7,6,8,5,3,5,4,1,2 };
	int arr1[] = { 9,7,6,8,5,3,5,4,1,2 };
	int arr2[10];
	//数组下标 数组名[下标]   从0开始
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}

int main02(void)
{
	//数组元素参与计算
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	arr[3] = arr[5];
	arr[4] = arr[8] * arr[9];
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}

int main03(void)
{
	//数组在内存中存储方式和大小
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr);
	printf("数组所占内存大小%d\n", sizeof(arr));
	printf("数组单个元素所占内存大小%d\n", sizeof(arr[0]));
	printf("数组元素个数%d\n", sizeof(arr) / sizeof(arr[0]));
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}

int main04(void)
{
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}

int main(void)
{
	//下标越界
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };  //下标范围 0~9
	printf("%d\n", arr[-1]);
	printf("%d\n", arr[10]);
	for (int i = 0; i < 20; i++)
	{
		printf("%d\n", arr[i]);
	}
}