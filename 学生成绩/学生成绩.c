#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	/*
	定义一个二维数组
	存储5名学生  3门成绩
	计算每个学生的总分、平均分
	计算每们学科的总分、平均分
	*/
	//获取学生成绩
	int arr[5][3];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	//打印学生成绩
	for (int i = 0; i < 5; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += arr[i][j];
			//printf("%d", arr[i][j]);
		}
		printf("第%d名学生的总成绩是%d\t，平均成绩是%d\n", i + 1, sum, sum / 3);
		printf("\n");
	}
	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 5; j++)
		{
			//求出一列的值
			sum += arr[j][i];
		}
		printf("第%d门功课的总成绩是%d\t，平均成绩是%d\n", i + 1, sum, sum / 5);
		printf("\n");
	}
	return 0;
}