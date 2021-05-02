#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	//多维数组
	//三维数组
	//数据类型 数组名[层][行][列]
	int arr[2][3][4] =
	{
		{
			{1,2,3,4},
		    {2,3,4,5},
		    {3,4,5,6}
		},
		{
			{4,5,6,7},
		    {5,6,7,8},
		    {6,7,8,9}
		}
	};
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int x = 0; x < 4; x++)
			{
				printf("%d\n", arr[i][j][x]);
			}
		}
	}
	printf("三维数组大小：%d\n", sizeof(arr));
	printf("三维数组一层大小：%d\n", sizeof(arr[0]));
	printf("三维数组一行大小：%d\n", sizeof(arr[0][0]));
	printf("三维数组一个元素大小：%d\n", sizeof(arr[0][0][0]));
	printf("层：%d\n", sizeof(arr) / sizeof(arr[0]));
	printf("行：%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));
	printf("列：%d\n", sizeof(arr[0][0]) / sizeof(arr[0][0][0]));
	printf("元素：%d\n", sizeof(arr) / sizeof(arr[0][0][0]));
	return 0;
}