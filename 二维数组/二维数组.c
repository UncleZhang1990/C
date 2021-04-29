#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\n", arr[i][j]);
		}
	}
	printf("二维数组大小：%d\n", sizeof(arr));
	printf("二维数组单行大小：%d\n", sizeof(arr[0]));
	printf("二维数组元素大小：%d\n", sizeof(arr[0][0]));
	printf("二维数组行数：%d\n", sizeof(arr) / sizeof(arr[0]));
	printf("二维数组列数：%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));
	//二维数组首地址
	printf("%p\n", &arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[1]);
	printf("%p\n", &arr[0][0]);
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%p\n", &arr[i][j]);
		}
	}
	return 0;
}
